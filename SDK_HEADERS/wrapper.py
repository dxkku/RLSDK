import re
import os
from collections import defaultdict

def generate_offsets(input_path, output_path):
    """
    Parses a C++ SDK header file to generate a clean Offsets.hpp file.
    Handles invalid variable names, bitfields, and ignores FScriptDelegate members.
    """
    
    class_regex = re.compile(r"// Class TAGame\.([A-Za-z0-9_]+)")
    
    member_regex = re.compile(
        r"\s*                                  "
        r"(?:[\w\d\s:*<>&]+?)\s+                "
        r"([\w\d_]+)                           "
        r"\s*\[?[\w\d_]*\]?\s*;\s*//\s*         "
        r"(0x[0-9A-Fa-f]+)                      "
        , re.VERBOSE)

    class_data = defaultdict(lambda: defaultdict(list))
    current_class_name = None

    print(f"Reading from '{input_path}'...")

    try:
        with open(input_path, 'r', encoding='utf-8') as f:
            for line in f:
                # ==========================================================
                # NEW FIX: Ignore FScriptDelegate lines entirely.
                # ==========================================================
                if 'FScriptDelegate' in line:
                    continue
                # ==========================================================

                class_match = class_regex.search(line)
                if class_match:
                    current_class_name = class_match.group(1)
                    continue

                if current_class_name:
                    member_match = member_regex.search(line)
                    if member_match:
                        var_name = member_match.group(1)
                        offset = member_match.group(2)
                        
                        if var_name.isdigit():
                            print(f"    [!] Found invalid var name '{var_name}' in '{current_class_name}'. Renaming to 'UnnamedMember_{offset}'.")
                            var_name = f"UnnamedMember_{offset}"
                        
                        class_data[current_class_name][offset].append(var_name)

    except FileNotFoundError:
        print(f"Error: Input file not found at '{input_path}'")
        return

    print(f"\nParsing complete. Writing to '{output_path}'...")

    with open(output_path, 'w', encoding='utf-8') as f:
        f.write("#pragma once\n")
        f.write("#include <cstdint>\n\n")
        f.write("namespace Offsets {\n\n")

        for class_name in sorted(class_data.keys()):
            members = class_data[class_name]
            if not members:
                continue

            f.write(f"\tnamespace {class_name} {{\n")
            
            sorted_members = sorted(members.items(), key=lambda item: int(item[0], 16))

            for offset, names in sorted_members:
                final_var_name = ""
                if len(names) > 1:
                    final_var_name = f"Bitfields_{offset}"
                else:
                    final_var_name = names[0]
                
                f.write(f"\t\tconstexpr uintptr_t {final_var_name} = {offset};\n")
            
            f.write("\t}\n\n")
        
        f.write("} // namespace Offsets\n")

    print("Successfully generated Offsets.hpp!")


if __name__ == "__main__":
    sdk_header_file = "TAGame_classes.hpp"
    output_header_file = "Offsets.hpp"
    
    if not os.path.exists(sdk_header_file):
        print(f"Error: '{sdk_header_file}' not found in the current directory.")
    else:
        generate_offsets(sdk_header_file, output_header_file)