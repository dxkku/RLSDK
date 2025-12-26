#pragma once
#include <cstdint>

namespace Offsets {

	namespace AIController_Breakout_TA {
		constexpr uintptr_t FVector = 0x07C0;
		constexpr uintptr_t DefaultSoccarSize = 0x07CC;
	}

	namespace AIController_Soccar_TA {
		constexpr uintptr_t BallProxyType = 0x0708;
		constexpr uintptr_t BallLandingProxyType = 0x0710;
		constexpr uintptr_t BallTeamGoalLineProxyType = 0x0718;
		constexpr uintptr_t BallEnemyGoalLineProxyType = 0x0720;
		constexpr uintptr_t BallProjectedProxyType = 0x0728;
		constexpr uintptr_t TeamGoalProxyType = 0x0730;
		constexpr uintptr_t EnemyGoalProxyType = 0x0738;
		constexpr uintptr_t MidFieldProxyType = 0x0740;
		constexpr uintptr_t BallTarget = 0x0748;
		constexpr uintptr_t TeamGoalTarget = 0x0750;
		constexpr uintptr_t EnemyGoalTarget = 0x0758;
		constexpr uintptr_t SoccarGame = 0x0760;
		constexpr uintptr_t Ball = 0x0768;
		constexpr uintptr_t FAICachedGoalInfo = 0x0770;
		constexpr uintptr_t FAICachedGoalInfo = 0x0788;
		constexpr uintptr_t LastBallHitTime = 0x07A0;
	}

	namespace AIController_TA {
		constexpr uintptr_t Car = 0x04A0;
		constexpr uintptr_t Vehicle = 0x04A8;
		constexpr uintptr_t BT = 0x04B0;
		constexpr uintptr_t SelfProxyType = 0x04B8;
		constexpr uintptr_t NoneProxyType = 0x04C0;
		constexpr uintptr_t DebugProxyType = 0x04C8;
		constexpr uintptr_t TeamCarsProxyType = 0x04D0;
		constexpr uintptr_t EnemyCarsProxyType = 0x04D8;
		constexpr uintptr_t PlayerControlledCarsProxyType = 0x04E0;
		constexpr uintptr_t OtherCarsProxyType = 0x04E8;
		constexpr uintptr_t BoostPillsProxyType = 0x04F0;
		constexpr uintptr_t SelectedProxyType = 0x04F8;
		constexpr uintptr_t SelfTarget = 0x0500;
		constexpr uintptr_t NoneTarget = 0x0508;
		constexpr uintptr_t IteratorTarget = 0x0510;
		constexpr uintptr_t TeamCarsTarget = 0x0518;
		constexpr uintptr_t SelectedTarget = 0x0520;
		constexpr uintptr_t ContextTarget = 0x0528;
		constexpr uintptr_t DebugBTNode = 0x0530;
		constexpr uintptr_t Locks = 0x0538;
		constexpr uintptr_t FSkillRange = 0x0540;
		constexpr uintptr_t FSkillRange = 0x054C;
		constexpr uintptr_t FSkillRange = 0x0558;
		constexpr uintptr_t GameEvent = 0x0568;
		constexpr uintptr_t AIManager = 0x0570;
		constexpr uintptr_t FVehicleInputs = 0x0578;
		constexpr uintptr_t FVector = 0x0598;
		constexpr uintptr_t FRotator = 0x05A4;
		constexpr uintptr_t FVector = 0x05B0;
		constexpr uintptr_t CachedProxyDatas = 0x05C0;
		constexpr uintptr_t CachedTargetDatas = 0x05D0;
		constexpr uintptr_t FMap_Mirror = 0x05E0;
		constexpr uintptr_t CachedTargetFilters = 0x0630;
		constexpr uintptr_t FVector = 0x0640;
		constexpr uintptr_t FCachedObstaclesData = 0x0650;
		constexpr uintptr_t TeamCars = 0x0678;
		constexpr uintptr_t EnemyCars = 0x0688;
		constexpr uintptr_t PlayerControlledCars = 0x0698;
		constexpr uintptr_t OtherCars = 0x06A8;
		constexpr uintptr_t Bitfields_0x06B8 = 0x06B8;
		constexpr uintptr_t GameShare = 0x06C0;
		constexpr uintptr_t SelectedActor = 0x06C8;
		constexpr uintptr_t FieldScalar = 0x06D0;
		constexpr uintptr_t ForcedTeam = 0x06D4;
	}

	namespace AIManager_TA {
		constexpr uintptr_t Bitfields_0x0268 = 0x0268;
		constexpr uintptr_t Locks = 0x0270;
		constexpr uintptr_t GameEvent = 0x0278;
		constexpr uintptr_t Bots = 0x0280;
		constexpr uintptr_t CachedNavMeshLocations = 0x0290;
		constexpr uintptr_t AILogFile = 0x02A0;
	}

	namespace AIProxy_TA {
		constexpr uintptr_t Actor = 0x0060;
		constexpr uintptr_t FVector = 0x0068;
		constexpr uintptr_t FVector = 0x0074;
		constexpr uintptr_t FRotator = 0x0080;
		constexpr uintptr_t FVector = 0x008C;
		constexpr uintptr_t FVector = 0x0098;
		constexpr uintptr_t FVector = 0x00A4;
		constexpr uintptr_t Speed = 0x00B0;
		constexpr uintptr_t Speed2D = 0x00B4;
		constexpr uintptr_t ForwardSpeed = 0x00B8;
	}

	namespace AccountSettingsComponent_TA {
		constexpr uintptr_t Bitfields_0x0070 = 0x0070;
		constexpr uintptr_t CrossPlatformChatState = 0x0074;
		constexpr uintptr_t NetworkSave = 0x0078;
		constexpr uintptr_t PlatformSettings = 0x0080;
	}

	namespace AchievementClassCollection_TA {
		constexpr uintptr_t Classes = 0x0060;
	}

	namespace AchievementManager_TA {
		constexpr uintptr_t PC = 0x0090;
		constexpr uintptr_t UnlockedAchievements = 0x0098;
		constexpr uintptr_t DLC1Cars = 0x00A8;
		constexpr uintptr_t DLC2Cars = 0x00B8;
		constexpr uintptr_t ClassicCars = 0x00C8;
		constexpr uintptr_t RequiredDontLookBackProducts = 0x00D8;
		constexpr uintptr_t RequiredAnInchAnd62MilesProducts = 0x00E8;
		constexpr uintptr_t SARPBCArenas = 0x00F8;
		constexpr uintptr_t RequiredLevelsToPlay = 0x0108;
		constexpr uintptr_t RequiredRocketLabsArenas = 0x0118;
		constexpr uintptr_t RocketLabsArenaNames = 0x0120;
		constexpr uintptr_t BraveTheElementsBaseLevels = 0x0130;
		constexpr uintptr_t RequiredRumbleActivation = 0x0140;
		constexpr uintptr_t MaxBoostTime = 0x0150;
		constexpr uintptr_t MaxTimeOnWall = 0x0154;
		constexpr uintptr_t MaxDriveDistanceKM = 0x0158;
		constexpr uintptr_t MaxHandbrakeRadius = 0x015C;
		constexpr uintptr_t MinHandbrakeDotAngleForComplete = 0x0160;
		constexpr uintptr_t DunksScored = 0x0164;
		constexpr uintptr_t RocketBoostFills = 0x0168;
		constexpr uintptr_t TotalDLC0BoostTime = 0x016C;
		constexpr uintptr_t GoalsScoredInCurrentGame = 0x0170;
		constexpr uintptr_t SavesInCurrentGame = 0x0174;
		constexpr uintptr_t AssistsInCurrentGame = 0x0178;
		constexpr uintptr_t DLC2PsychoMasterExplodeCount = 0x017C;
		constexpr uintptr_t TotalBreakoutGoals = 0x0180;
		constexpr uintptr_t MaxRocketBoostFills = 0x0184;
		constexpr uintptr_t TotalBreakoutPlatformsToDamage = 0x0188;
		constexpr uintptr_t TotalDLC0WheelDriveDistanceKM = 0x018C;
		constexpr uintptr_t Winner_GameEventsWon = 0x0190;
		constexpr uintptr_t SuperVictorious_GameEventsWon = 0x0194;
		constexpr uintptr_t PitchVeteran_GameEventsPlayed = 0x0198;
		constexpr uintptr_t PickMeUp_RandomItemDrops = 0x019C;
		constexpr uintptr_t DropsInTheBucket_RandomItemDrops = 0x01A0;
		constexpr uintptr_t RidersBlock_GoalSaves = 0x01A4;
		constexpr uintptr_t Savage_Goals = 0x01A8;
		constexpr uintptr_t Spectacular_Goals = 0x01AC;
		constexpr uintptr_t Ruthless_Goals = 0x01B0;
		constexpr uintptr_t RocketGenocider_Goals = 0x01B4;
		constexpr uintptr_t MadScientist_Maps = 0x01B8;
		constexpr uintptr_t ComingOnStrong_GoalsOrAssists = 0x01BC;
		constexpr uintptr_t PeoplePerson_CompletedMatches = 0x01C0;
		constexpr uintptr_t MetaAchievementPointMax = 0x01C4;
		constexpr uintptr_t BattleCarCollector_CarsCollected = 0x01C8;
		constexpr uintptr_t Traveler_Maps = 0x01CC;
		constexpr uintptr_t Bitfields_0x01D0 = 0x01D0;
		constexpr uintptr_t FVector = 0x01D4;
		constexpr uintptr_t FVector = 0x01E0;
		constexpr uintptr_t FString = 0x01F0;
		constexpr uintptr_t FString = 0x0200;
		constexpr uintptr_t FString = 0x0210;
		constexpr uintptr_t FString = 0x0220;
		constexpr uintptr_t FString = 0x0230;
		constexpr uintptr_t ProductNames_Body_MuscleCar = 0x0240;
		constexpr uintptr_t ProductNames_Body_SSFury = 0x0250;
		constexpr uintptr_t FName = 0x0260;
		constexpr uintptr_t FName = 0x0268;
		constexpr uintptr_t FName = 0x0270;
		constexpr uintptr_t FName = 0x0278;
		constexpr uintptr_t FName = 0x0280;
		constexpr uintptr_t FName = 0x0288;
		constexpr uintptr_t FName = 0x0290;
		constexpr uintptr_t FName = 0x0298;
		constexpr uintptr_t FName = 0x02A0;
		constexpr uintptr_t FName = 0x02A8;
		constexpr uintptr_t FName = 0x02B0;
		constexpr uintptr_t FName = 0x02B8;
		constexpr uintptr_t ProductNames_Body_Savage = 0x02C0;
		constexpr uintptr_t ProductNames_Body_Spectacular = 0x02D0;
		constexpr uintptr_t ProductNames_Body_Ruthless = 0x02E0;
		constexpr uintptr_t FName = 0x02F0;
		constexpr uintptr_t FName = 0x02F8;
		constexpr uintptr_t FName = 0x0300;
		constexpr uintptr_t FName = 0x0308;
		constexpr uintptr_t FName = 0x0310;
		constexpr uintptr_t FName = 0x0318;
		constexpr uintptr_t FName = 0x0320;
		constexpr uintptr_t FName = 0x0328;
		constexpr uintptr_t FName = 0x0330;
		constexpr uintptr_t FName = 0x0338;
		constexpr uintptr_t FName = 0x0340;
		constexpr uintptr_t FName = 0x0348;
		constexpr uintptr_t FName = 0x0350;
		constexpr uintptr_t FName = 0x0358;
		constexpr uintptr_t FName = 0x0360;
		constexpr uintptr_t FName = 0x0368;
		constexpr uintptr_t FName = 0x0370;
		constexpr uintptr_t FName = 0x0378;
		constexpr uintptr_t FName = 0x0380;
		constexpr uintptr_t BaseSaveData = 0x0388;
		constexpr uintptr_t SaveData = 0x0390;
		constexpr uintptr_t LastPRI = 0x0398;
		constexpr uintptr_t LastGame = 0x03A0;
		constexpr uintptr_t LastGameEvent = 0x03A8;
		constexpr uintptr_t LastCar = 0x03B0;
		constexpr uintptr_t FGuid = 0x03B8;
		constexpr uintptr_t LoadoutSave = 0x03C8;
		constexpr uintptr_t PlayerBannerSave = 0x03D0;
		constexpr uintptr_t PlayerAvatarBorderSave = 0x03D8;
	}

	namespace AchievementSave_TA {
		constexpr uintptr_t BotTeamsPlayed = 0x00C8;
		constexpr uintptr_t TrainingModesPlayed = 0x00D8;
		constexpr uintptr_t LevelsPlayed = 0x00E8;
		constexpr uintptr_t LabsMapsPlayed = 0x00F8;
		constexpr uintptr_t CarsPlayed = 0x0108;
		constexpr uintptr_t RumbleItemsActivated = 0x0118;
		constexpr uintptr_t BraveTheElementsLevelsPlayed = 0x0128;
		constexpr uintptr_t TotalBoostTime = 0x0138;
		constexpr uintptr_t TotalTimeOnWall = 0x013C;
		constexpr uintptr_t TotalDriveDistanceKM = 0x0140;
		constexpr uintptr_t GoalShotsAny = 0x0144;
		constexpr uintptr_t GoalShots = 0x0148;
		constexpr uintptr_t GoalSaves = 0x014C;
		constexpr uintptr_t SavageGoals = 0x0150;
		constexpr uintptr_t GameEventsWon = 0x0154;
		constexpr uintptr_t GamesWonInARow = 0x0158;
		constexpr uintptr_t GameEventsPlayed = 0x015C;
		constexpr uintptr_t SpectacularGoals = 0x0160;
		constexpr uintptr_t TotalScoredGoals = 0x0164;
		constexpr uintptr_t TotalShotsBlocked = 0x0168;
		constexpr uintptr_t RandomItemsDropped = 0x016C;
		constexpr uintptr_t HighestMVPScore = 0x0170;
		constexpr uintptr_t ChampionshipsWon = 0x0174;
		constexpr uintptr_t RegularSeasonsCompleted = 0x0178;
		constexpr uintptr_t HighestRecordedCertifiedRank = 0x017C;
		constexpr uintptr_t BreakoutGoals = 0x0180;
		constexpr uintptr_t BreakoutPlatformsDamaged = 0x0184;
		constexpr uintptr_t UnnamedMember_0x0188 = 0x0188;
		constexpr uintptr_t CustomizedSlotNames = 0x0190;
		constexpr uintptr_t CheckDistancesDrivenKM = 0x01A0;
		constexpr uintptr_t CheckScoredGoals = 0x01B0;
		constexpr uintptr_t CheckShotsBlocked = 0x01C0;
		constexpr uintptr_t CheckGameEventsWon = 0x01D0;
		constexpr uintptr_t CheckRandomItemsDropped = 0x01E0;
		constexpr uintptr_t LeftWingRightWingTeamsPlayed = 0x01F0;
		constexpr uintptr_t WinningIsWinningPlayedWithDLC0Cars = 0x0200;
		constexpr uintptr_t CarsCollected = 0x0210;
		constexpr uintptr_t ExhibitionMatchesPlayed = 0x0220;
		constexpr uintptr_t RankedMatchesPlayed = 0x0224;
		constexpr uintptr_t UnrankedMatchesPlayed = 0x0228;
		constexpr uintptr_t PrivateMatchesPlayed = 0x022C;
		constexpr uintptr_t ReplayEditorOpened = 0x0230;
		constexpr uintptr_t CreditsViewed = 0x0234;
		constexpr uintptr_t GoalsOrAssists = 0x0238;
		constexpr uintptr_t CompletedMatchesWithClubmates = 0x023C;
		constexpr uintptr_t NewOfflineProductsUnlocked = 0x0240;
	}

	namespace AchievementUnlockedEvent_TA {
		constexpr uintptr_t Type = 0x0060;
		constexpr uintptr_t LocalId = 0x0064;
	}

	namespace Achievement_TA {
		constexpr uintptr_t Type = 0x0060;
		constexpr uintptr_t LocalId = 0x0064;
	}

	namespace ActorChannelMonitor_TA {
		constexpr uintptr_t OverflowEvents = 0x0060;
		constexpr uintptr_t Metrics = 0x0070;
		constexpr uintptr_t GRI = 0x0078;
		constexpr uintptr_t NetworkConfig = 0x0080;
	}

	namespace ActorTarget_TA {
		constexpr uintptr_t TargetClass = 0x0268;
	}

	namespace AdManagerConfig_TA {
		constexpr uintptr_t Ads = 0x0078;
	}

	namespace AdManager_TA {
		constexpr uintptr_t CacheDuration = 0x0060;
		constexpr uintptr_t CachedAdImages = 0x0068;
		constexpr uintptr_t BillboardZoneMapping = 0x0078;
		constexpr uintptr_t BillboardMeshUpdateRequests = 0x0088;
		constexpr uintptr_t ImageDownloader = 0x0098;
		constexpr uintptr_t CurrentAdIndex = 0x00A0;
		constexpr uintptr_t AdConfig = 0x00A8;
		constexpr uintptr_t Ads = 0x00B0;
	}

	namespace AnimNodeBlendBoost_TA {
		constexpr uintptr_t BlendTime = 0x0158;
	}

	namespace AnimNodeBlendSpeed_TA {
		constexpr uintptr_t BlendRate = 0x01A8;
		constexpr uintptr_t MaxSpeed = 0x01AC;
	}

	namespace AnimNodeBlend_TA {
		constexpr uintptr_t BlendSpeed = 0x0148;
		constexpr uintptr_t Position = 0x014C;
		constexpr uintptr_t DesiredPosition = 0x0150;
	}

	namespace AnimNotify_PlayAKSound_TA {
		constexpr uintptr_t SFX_SoundCue = 0x0068;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
	}

	namespace AnimNotify_SetBoneVisibility_TA {
		constexpr uintptr_t FName = 0x0068;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t SetVisibilityType = 0x0074;
		constexpr uintptr_t SKMComp = 0x0078;
	}

	namespace AnimNotify_SetFXState_TA {
		constexpr uintptr_t FXEvent = 0x0068;
	}

	namespace AnimNotify_TriggerTurntableEvent_TA {
		constexpr uintptr_t FName = 0x0068;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
	}

	namespace AnimStateComponent_TA {
		constexpr uintptr_t OwnerSkeletalMeshComponent = 0x00A8;
		constexpr uintptr_t BlendNode = 0x00B0;
	}

	namespace AntennaComponent_TA {
		constexpr uintptr_t FName = 0x00E8;
		constexpr uintptr_t AntennaMesh = 0x00F0;
		constexpr uintptr_t AntennaSegmentExtension = 0x00F8;
		constexpr uintptr_t AntennaMaterial = 0x0100;
		constexpr uintptr_t AnimTreeTemplate = 0x0108;
		constexpr uintptr_t BendyBoneControllers = 0x0110;
		constexpr uintptr_t BendScale = 0x0120;
		constexpr uintptr_t PitchScale = 0x0124;
		constexpr uintptr_t RollScale = 0x0128;
		constexpr uintptr_t PitchZScale = 0x012C;
		constexpr uintptr_t RollZScale = 0x0130;
		constexpr uintptr_t TopperMaterial = 0x0138;
		constexpr uintptr_t LastTopperWindSpeedParamValue = 0x0140;
		constexpr uintptr_t AntennaSK = 0x0148;
		constexpr uintptr_t BendyControls = 0x0150;
	}

	namespace AntiAddiction_TA {
		constexpr uintptr_t Hours = 0x0060;
	}

	namespace ApplyVelocityHitHandler_TA {
		constexpr uintptr_t FVector = 0x0150;
	}

	namespace ArenaReflectionsManager_TA {
		constexpr uintptr_t SoccarGame = 0x0060;
		constexpr uintptr_t SlapbackSetups = 0x0068;
		constexpr uintptr_t ArenaReverbSetups = 0x0078;
		constexpr uintptr_t SlapBackActors = 0x0088;
		constexpr uintptr_t ArenaReverbEmitters = 0x0098;
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t BallListenerOffset = 0x00C0;
	}

	namespace ArenaSoundConfig_TA {
		constexpr uintptr_t Events = 0x0078;
	}

	namespace ArenaSoundEvent_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t InGameMusicCue = 0x0068;
		constexpr uintptr_t StartTime = 0x0070;
		constexpr uintptr_t EndTime = 0x0078;
	}

	namespace ArenaSoundManager_TA {
		constexpr uintptr_t DefaultInGameMusicCue = 0x00A8;
		constexpr uintptr_t TrainingRoundEndCue = 0x00B0;
		constexpr uintptr_t ArenaMusicReplayStopCue = 0x00B8;
		constexpr uintptr_t Settings = 0x00C0;
		constexpr uintptr_t SoundPlayer = 0x00C8;
		constexpr uintptr_t UnnamedMember_0x00D0 = 0x00D0;
		constexpr uintptr_t SoccarGame = 0x00D8;
		constexpr uintptr_t ReflectionsManager = 0x00E0;
		constexpr uintptr_t GoalScoreStinger = 0x00E8;
		constexpr uintptr_t ActiveStinger = 0x00F0;
		constexpr uintptr_t Config = 0x00F8;
		constexpr uintptr_t StreamerSafeConfig = 0x0100;
		constexpr uintptr_t NextTimedEvent = 0x0108;
		constexpr uintptr_t TimedEventPlayingID = 0x0110;
	}

	namespace ArenaSoundPlayer_TA {
		constexpr uintptr_t SoundSource = 0x0268;
	}

	namespace ArenaSoundSettings_TA {
		constexpr uintptr_t InGameMusicCue = 0x0060;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t GoalScoreSound = 0x0070;
		constexpr uintptr_t GameStartStinger = 0x0078;
		constexpr uintptr_t GoalScoreStinger = 0x0080;
		constexpr uintptr_t EpicSaveStinger = 0x0088;
		constexpr uintptr_t OvertimeStinger = 0x0090;
		constexpr uintptr_t WinStinger = 0x0098;
		constexpr uintptr_t LoseStinger = 0x00A0;
		constexpr uintptr_t ForfeitStinger = 0x00A8;
		constexpr uintptr_t GoalScoreStingerDelay = 0x00B0;
		constexpr uintptr_t Win = 0x00B8;
		constexpr uintptr_t Lose = 0x00C0;
		constexpr uintptr_t CountdownStart = 0x00C8;
		constexpr uintptr_t CountdownEnd = 0x00D0;
		constexpr uintptr_t OneMinRemaining = 0x00D8;
		constexpr uintptr_t ThirtySecondsRemaining = 0x00E0;
		constexpr uintptr_t OvertimeStart = 0x00E8;
		constexpr uintptr_t StatSounds = 0x00F0;
		constexpr uintptr_t CountDownSoundList = 0x0100;
		constexpr uintptr_t RoundCountDownSoundList = 0x0110;
		constexpr uintptr_t FAkEnvironment = 0x0120;
		constexpr uintptr_t FAkEnvironment = 0x0140;
		constexpr uintptr_t FName = 0x0160;
	}

	namespace AssetAttribute_ChangeProductDrawScale_TA {
		constexpr uintptr_t NewProductDrawScales = 0x0060;
	}

	namespace AssetAttribute_ForceWheelAxle_TA {
		constexpr uintptr_t AxleToForce = 0x0060;
		constexpr uintptr_t ForcedWheel = 0x0068;
	}

	namespace AssetAttribute_GoalCountChanging_TA {
		constexpr uintptr_t Assets = 0x0060;
		constexpr uintptr_t CurrentGoalCount = 0x0070;
		constexpr uintptr_t LastIndexUsed = 0x0074;
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t CurrentObjectToUse = 0x0080;
		constexpr uintptr_t AssetBeingUsed = 0x0088;
	}

	namespace AssetAttribute_PostMatchCelebration_TA {
		constexpr uintptr_t PostMatchCelebrationMesh = 0x0060;
		constexpr uintptr_t FName = 0x0068;
		constexpr uintptr_t RegularPostMatchCelebrationAnims = 0x0070;
		constexpr uintptr_t SplitMeshComp = 0x0080;
		constexpr uintptr_t InstancedSplitMeshComp = 0x0088;
	}

	namespace AssetAttribute_SoundOverrides_TA {
		constexpr uintptr_t SoundOverrides = 0x0060;
	}

	namespace AssetAttribute_TeamEdition_TA {
		constexpr uintptr_t Template = 0x0060;
		constexpr uintptr_t TeamEditions = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace AssetAttribute_TeamOverride_TA {
		constexpr uintptr_t Team = 0x0060;
		constexpr uintptr_t Materials = 0x0068;
		constexpr uintptr_t FName = 0x0078;
		constexpr uintptr_t Thumbnail = 0x0080;
	}

	namespace AssetAttribute_TeamParameterOverride_TA {
		constexpr uintptr_t Team = 0x0060;
		constexpr uintptr_t FMaterialParams = 0x0068;
	}

	namespace AttachmentAnim_TA {
		constexpr uintptr_t AnimSet = 0x0078;
		constexpr uintptr_t FName = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
	}

	namespace AttachmentBehavior_Steering_TA {
		constexpr uintptr_t FName = 0x0078;
		constexpr uintptr_t AnimTree = 0x0080;
		constexpr uintptr_t FInterpCurveFloat = 0x0088;
		constexpr uintptr_t SkelMeshComponent = 0x00A0;
		constexpr uintptr_t BoneController = 0x00A8;
		constexpr uintptr_t Vehicle = 0x00B0;
	}

	namespace AttachmentBehavior_TA {
		constexpr uintptr_t Asset = 0x0060;
		constexpr uintptr_t Component = 0x0068;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
	}

	namespace AudioFieldSideComponent_TA {
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t OneOverFieldLength = 0x00B0;
		constexpr uintptr_t GameEvent = 0x00B8;
		constexpr uintptr_t ArenaReflectionsManager = 0x00C0;
	}

	namespace AudioMixStateComponent_TA {
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t FName = 0x00C0;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t FName = 0x00D0;
		constexpr uintptr_t FName = 0x00D8;
		constexpr uintptr_t FName = 0x00E0;
		constexpr uintptr_t FName = 0x00E8;
		constexpr uintptr_t FName = 0x00F0;
		constexpr uintptr_t FName = 0x00F8;
		constexpr uintptr_t FName = 0x0100;
		constexpr uintptr_t FName = 0x0108;
		constexpr uintptr_t FName = 0x0110;
		constexpr uintptr_t FName = 0x0118;
		constexpr uintptr_t FName = 0x0120;
		constexpr uintptr_t FName = 0x0128;
		constexpr uintptr_t NumLocalPlayers = 0x0130;
		constexpr uintptr_t Bitfields_0x0134 = 0x0134;
		constexpr uintptr_t MajorityFarMinDistanceSq = 0x0138;
		constexpr uintptr_t BallListenerOffset = 0x013C;
	}

	namespace AudioParamsSuperSonicComponent_TA {
		constexpr uintptr_t UnknownData00 = 0x00A4;
	}

	namespace AudioParamsSuperSonicReplayComponent_TA {
		constexpr uintptr_t ReplayFocus = 0x00A8;
	}

	namespace AudioPriorityComponent_TA {
		constexpr uintptr_t FInterpCurveFloat = 0x00A8;
		constexpr uintptr_t FInterpCurveFloat = 0x00C0;
		constexpr uintptr_t DrivingAtListenerDotThreshold = 0x00D8;
		constexpr uintptr_t DrivingAtPlayerBonus = 0x00DC;
		constexpr uintptr_t BoostingAtPlayerBonus = 0x00E0;
		constexpr uintptr_t DebugColors = 0x00E8;
		constexpr uintptr_t PriorityArray = 0x00F8;
		constexpr uintptr_t Ball = 0x0108;
	}

	namespace AudioSlomoReplayComponent_TA {
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t FName = 0x00C0;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t FName = 0x00D0;
		constexpr uintptr_t FName = 0x00D8;
	}

	namespace AudioSpectatorMixComponent_TA {
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t FName = 0x00C0;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t FName = 0x00D0;
		constexpr uintptr_t FName = 0x00D8;
		constexpr uintptr_t FName = 0x00E0;
		constexpr uintptr_t FName = 0x00E8;
		constexpr uintptr_t FName = 0x00F0;
		constexpr uintptr_t FName = 0x00F8;
		constexpr uintptr_t FName = 0x0100;
		constexpr uintptr_t TargetCar = 0x0108;
		constexpr uintptr_t Bitfields_0x0110 = 0x0110;
		constexpr uintptr_t ReplayCamera = 0x0118;
		constexpr uintptr_t GameEvent = 0x0120;
	}

	namespace AudioStateComponent_TA {
		constexpr uintptr_t FString = 0x0258;
		constexpr uintptr_t FString = 0x0268;
	}

	namespace AutoTourConfig_TA {
		constexpr uintptr_t MaxTournamentsPerWeek = 0x0078;
		constexpr uintptr_t TourResultsTimeoutSeconds = 0x007C;
		constexpr uintptr_t MaxNumPlayers = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0084 = 0x0084;
		constexpr uintptr_t ScheduleRegions = 0x0088;
	}

	namespace AutoTour_TA {
		constexpr uintptr_t Schedules = 0x0060;
		constexpr uintptr_t CycleResults = 0x0070;
		constexpr uintptr_t IneligibleScheduleID = 0x0080;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t CycleID = 0x0098;
		constexpr uintptr_t CycleEndTime = 0x00A0;
		constexpr uintptr_t WeekID = 0x00A8;
		constexpr uintptr_t WeekEndTime = 0x00B0;
		constexpr uintptr_t WeeklyCurrencies = 0x00B8;
		constexpr uintptr_t MaxTierScores = 0x00C8;
		constexpr uintptr_t DataRefreshTime = 0x00D8;
		constexpr uintptr_t LastSyncTime = 0x00DC;
		constexpr uintptr_t SeasonCurrencyID = 0x00E0;
		constexpr uintptr_t Config = 0x00E8;
		constexpr uintptr_t OnlineGame = 0x00F0;
		constexpr uintptr_t Tournaments = 0x00F8;
		constexpr uintptr_t TourList = 0x0100;
		constexpr uintptr_t SyncCycleDataTask = 0x0108;
		constexpr uintptr_t SyncScheduleTask = 0x0110;
	}

	namespace BTAction {
		constexpr uintptr_t FinishTime = 0x00B0;
		constexpr uintptr_t AbortTime = 0x00B4;
		constexpr uintptr_t StartTime = 0x00B8;
	}

	namespace BTAction_BlockGoal {
		constexpr uintptr_t GoalRadius = 0x01C8;
	}

	namespace BTAction_CatchBall {
		constexpr uintptr_t FallTime = 0x01E8;
	}

	namespace BTAction_DodgeHit {
		constexpr uintptr_t FlipAmount = 0x0170;
		constexpr uintptr_t AimTarget = 0x0178;
		constexpr uintptr_t FVector = 0x0180;
		constexpr uintptr_t DodgeTime = 0x018C;
	}

	namespace BTAction_Face {
		constexpr uintptr_t ReachAngle = 0x0160;
		constexpr uintptr_t MaxSpeed = 0x0164;
		constexpr uintptr_t MaxTravel = 0x0168;
		constexpr uintptr_t UnnamedMember_0x016C = 0x016C;
		constexpr uintptr_t FVector = 0x0170;
	}

	namespace BTAction_HitBall {
		constexpr uintptr_t RandomTargetOffset = 0x01C8;
		constexpr uintptr_t AimOffsetScale = 0x01CC;
		constexpr uintptr_t FVector = 0x01D0;
		constexpr uintptr_t SoccarAI = 0x01E0;
	}

	namespace BTAction_Input {
		constexpr uintptr_t FVehicleInputs = 0x00C0;
	}

	namespace BTAction_Jump {
		constexpr uintptr_t MinJumpTime = 0x0160;
		constexpr uintptr_t TargetRadiusHeightScale = 0x0164;
		constexpr uintptr_t StateStartTime = 0x0168;
	}

	namespace BTAction_MoveTo {
		constexpr uintptr_t Bitfields_0x0160 = 0x0160;
		constexpr uintptr_t MinSpeed = 0x0164;
		constexpr uintptr_t MaxSpeed = 0x0168;
		constexpr uintptr_t RandomMaxSpeedModifier = 0x016C;
		constexpr uintptr_t MinBoostDistance = 0x0170;
		constexpr uintptr_t TeamSeparationDistance = 0x0174;
		constexpr uintptr_t ReachDistance = 0x0178;
		constexpr uintptr_t FaceLocation = 0x0180;
		constexpr uintptr_t FaceRotation = 0x0188;
		constexpr uintptr_t MaxTurnRadius = 0x0190;
		constexpr uintptr_t Modifiers = 0x0198;
		constexpr uintptr_t FVector = 0x01A8;
		constexpr uintptr_t FVector = 0x01B4;
		constexpr uintptr_t CachedMaxGravitySlope = 0x01C0;
		constexpr uintptr_t CurrentRandomMaxSpeedModifier = 0x01C4;
	}

	namespace BTAction_PowerSlide {
		constexpr uintptr_t UnnamedMember_0x0160 = 0x0160;
		constexpr uintptr_t Delay = 0x0164;
		constexpr uintptr_t TurnTarget = 0x0168;
		constexpr uintptr_t Steer = 0x0170;
		constexpr uintptr_t startYaw = 0x0174;
	}

	namespace BTAction_Stop {
		constexpr uintptr_t UnnamedMember_0x00C0 = 0x00C0;
	}

	namespace BTAction_Target {
		constexpr uintptr_t Target = 0x00C0;
		constexpr uintptr_t TargetPredictionTime = 0x00C8;
		constexpr uintptr_t FAIProxyData = 0x00D0;
		constexpr uintptr_t FAIProxyData = 0x0118;
	}

	namespace BTAction_Test {
		constexpr uintptr_t FVector = 0x01C8;
		constexpr uintptr_t FVector = 0x01D4;
	}

	namespace BTAction_WallBounce {
		constexpr uintptr_t UnknownData00 = 0x00BC;
	}

	namespace BTAction_WiggleTires {
		constexpr uintptr_t UnknownData00 = 0x00BC;
	}

	namespace BTC_AIPlayerIndex {
		constexpr uintptr_t IndexGreaterThan = 0x0090;
		constexpr uintptr_t IndexLessThan = 0x0094;
		constexpr uintptr_t IndexEqualTo = 0x0098;
	}

	namespace BTC_Any {
		constexpr uintptr_t Targets = 0x0090;
	}

	namespace BTC_AreaClear {
		constexpr uintptr_t Source = 0x01D0;
		constexpr uintptr_t SourcePredictionTime = 0x01D8;
		constexpr uintptr_t Radius = 0x01DC;
	}

	namespace BTC_BallWelded {
		constexpr uintptr_t UnknownData00 = 0x008C;
	}

	namespace BTC_Between {
		constexpr uintptr_t Start = 0x00E8;
		constexpr uintptr_t End = 0x00F0;
		constexpr uintptr_t AngleLessThan = 0x00F8;
		constexpr uintptr_t AngleGreaterThan = 0x00FC;
	}

	namespace BTC_Boost {
		constexpr uintptr_t BoostAmountLessThan = 0x00E8;
		constexpr uintptr_t BoostAmountGreaterThan = 0x00EC;
		constexpr uintptr_t Bitfields_0x00F0 = 0x00F0;
	}

	namespace BTC_BounceHeight {
		constexpr uintptr_t HeightLessThan = 0x01D0;
		constexpr uintptr_t HeightGreaterThan = 0x01D4;
	}

	namespace BTC_ClosestTime {
		constexpr uintptr_t TimeGreaterThan = 0x0218;
		constexpr uintptr_t TimeLessThan = 0x021C;
	}

	namespace BTC_ClosestTo {
		constexpr uintptr_t Targets = 0x01D0;
		constexpr uintptr_t ExtraDistance = 0x01D8;
	}

	namespace BTC_DodgeHit {
		constexpr uintptr_t FlipAmount = 0x01D8;
		constexpr uintptr_t JumpTime = 0x01DC;
	}

	namespace BTC_FieldDistance {
		constexpr uintptr_t Goal = 0x01D0;
		constexpr uintptr_t OtherGoal = 0x01D8;
		constexpr uintptr_t ForwardGreaterThan = 0x01E0;
		constexpr uintptr_t ForwardLessThan = 0x01E4;
		constexpr uintptr_t SideGreaterThan = 0x01E8;
		constexpr uintptr_t SideLessThan = 0x01EC;
		constexpr uintptr_t AbsSideGreaterThan = 0x01F0;
		constexpr uintptr_t AbsSideLessThan = 0x01F4;
		constexpr uintptr_t UnnamedMember_0x01F8 = 0x01F8;
		constexpr uintptr_t FAIProxyData = 0x0200;
		constexpr uintptr_t FAIProxyData = 0x0248;
		constexpr uintptr_t FAIProxyData = 0x0290;
	}

	namespace BTC_GameInfoType {
		constexpr uintptr_t ValidGameInfoClasses = 0x0090;
		constexpr uintptr_t CurrentGameInfo = 0x00A0;
	}

	namespace BTC_GameScore {
		constexpr uintptr_t ScoreDeltaGreaterThan = 0x0090;
		constexpr uintptr_t ScoreDeltaLessThan = 0x0094;
		constexpr uintptr_t ScoreDelta = 0x0098;
	}

	namespace BTC_GameState {
		constexpr uintptr_t FName = 0x0090;
	}

	namespace BTC_HumanPlayerOnOpposingTeam {
		constexpr uintptr_t UnknownData00 = 0x008C;
	}

	namespace BTC_HumanPlayerOnTeam {
		constexpr uintptr_t UnknownData00 = 0x008C;
	}

	namespace BTC_Impact {
		constexpr uintptr_t TimeGreaterThan = 0x0218;
		constexpr uintptr_t TimeLessThan = 0x021C;
	}

	namespace BTC_InCone {
		constexpr uintptr_t Source = 0x00E8;
		constexpr uintptr_t Destination = 0x00F0;
		constexpr uintptr_t AngleLessThan = 0x00F8;
		constexpr uintptr_t AngleGreaterThan = 0x00FC;
	}

	namespace BTC_JumpHit {
		constexpr uintptr_t MinImpactTime = 0x01D0;
	}

	namespace BTC_Landing {
		constexpr uintptr_t LandTimeLessThan = 0x0218;
		constexpr uintptr_t LandTimeGreaterThan = 0x021C;
	}

	namespace BTC_Lock {
		constexpr uintptr_t FName = 0x0090;
		constexpr uintptr_t NumLocks = 0x0098;
	}

	namespace BTC_NotAny {
		constexpr uintptr_t Targets = 0x0090;
	}

	namespace BTC_ProxyBase {
		constexpr uintptr_t Self = 0x0090;
		constexpr uintptr_t SelfPredictionTime = 0x0098;
		constexpr uintptr_t FAIProxyData = 0x00A0;
	}

	namespace BTC_SegmentDistance {
		constexpr uintptr_t Start = 0x00E8;
		constexpr uintptr_t End = 0x00F0;
		constexpr uintptr_t StartGreaterThan = 0x00F8;
		constexpr uintptr_t StartLessThan = 0x00FC;
		constexpr uintptr_t EndGreaterThan = 0x0100;
		constexpr uintptr_t EndLessThan = 0x0104;
		constexpr uintptr_t AbsSideGreaterThan = 0x0108;
		constexpr uintptr_t AbsSideLessThan = 0x010C;
	}

	namespace BTC_SelectActor {
		constexpr uintptr_t Targets = 0x0090;
	}

	namespace BTC_Skill {
		constexpr uintptr_t SkillGreaterThan = 0x0090;
		constexpr uintptr_t SkillLessThan = 0x0094;
	}

	namespace BTC_SoccarState {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t SoccarGame = 0x00A0;
	}

	namespace BTC_Stuck {
		constexpr uintptr_t UnknownData00 = 0x008C;
	}

	namespace BTC_Target {
		constexpr uintptr_t DistanceGreaterThan = 0x01D0;
		constexpr uintptr_t DistanceLessThan = 0x01D4;
		constexpr uintptr_t HeightGreaterThan = 0x01D8;
		constexpr uintptr_t HeightLessThan = 0x01DC;
		constexpr uintptr_t SpeedGreaterThan = 0x01E0;
		constexpr uintptr_t SpeedLessThan = 0x01E4;
		constexpr uintptr_t SpeedTowardsGreaterThan = 0x01E8;
		constexpr uintptr_t SpeedTowardsLessThan = 0x01EC;
		constexpr uintptr_t SideSpeedGreaterThan = 0x01F0;
		constexpr uintptr_t SideSpeedLessThan = 0x01F4;
		constexpr uintptr_t RelativeSpeedGreaterThan = 0x01F8;
		constexpr uintptr_t RelativeSpeedLessThan = 0x01FC;
		constexpr uintptr_t RelativeSpeedTowardsGreaterThan = 0x0200;
		constexpr uintptr_t RelativeSpeedTowardsLessThan = 0x0204;
		constexpr uintptr_t RelativeSideSpeedGreaterThan = 0x0208;
		constexpr uintptr_t RelativeSideSpeedLessThan = 0x020C;
		constexpr uintptr_t AngleGreaterThan = 0x0210;
		constexpr uintptr_t AngleLessThan = 0x0214;
	}

	namespace BTC_TargetBase {
		constexpr uintptr_t Target = 0x00E8;
		constexpr uintptr_t TargetPredictionTime = 0x00F0;
		constexpr uintptr_t UnnamedMember_0x00F4 = 0x00F4;
		constexpr uintptr_t FAIProxyData = 0x00F8;
		constexpr uintptr_t FAIProxyData = 0x0140;
		constexpr uintptr_t FAIProxyData = 0x0188;
	}

	namespace BTC_TargetNumberSatisfying {
		constexpr uintptr_t Targets = 0x0090;
		constexpr uintptr_t TargetsGreaterThan = 0x0098;
		constexpr uintptr_t TargetsLessThan = 0x009C;
	}

	namespace BTC_TeamSize {
		constexpr uintptr_t MinTeamSize = 0x0090;
		constexpr uintptr_t MaxTeamSize = 0x0094;
	}

	namespace BTC_TimeSinceBallHit {
		constexpr uintptr_t CheckTeam = 0x0090;
		constexpr uintptr_t TimeGreaterThan = 0x0094;
		constexpr uintptr_t TimeLessThan = 0x0098;
		constexpr uintptr_t Ball = 0x00A0;
		constexpr uintptr_t LastHitTime = 0x00A8;
	}

	namespace BTC_Traits {
		constexpr uintptr_t UnknownData00 = 0x008C;
	}

	namespace BTC_Vehicle {
		constexpr uintptr_t Bitfields_0x00E8 = 0x00E8;
		constexpr uintptr_t GroundNormalGreaterThan = 0x00EC;
		constexpr uintptr_t GroundNormalLessThan = 0x00F0;
		constexpr uintptr_t ForwardSpeedGreaterThan = 0x00F4;
		constexpr uintptr_t ForwardSpeedLessThan = 0x00F8;
	}

	namespace BTComponent {
		constexpr uintptr_t Root = 0x0070;
		constexpr uintptr_t RootStatus = 0x0078;
		constexpr uintptr_t AI = 0x0080;
		constexpr uintptr_t Bitfields_0x0088 = 0x0088;
		constexpr uintptr_t StatusLogs = 0x0090;
		constexpr uintptr_t StatusLogsIndex = 0x00A0;
		constexpr uintptr_t StatusLogsStack = 0x00A8;
		constexpr uintptr_t CanvasDrawer = 0x00B8;
		constexpr uintptr_t DynamicLinks = 0x00C0;
	}

	namespace BTCondition {
		constexpr uintptr_t UpdateDelay = 0x0080;
		constexpr uintptr_t Bitfields_0x0084 = 0x0084;
		constexpr uintptr_t NextUpdateTime = 0x0088;
	}

	namespace BTConditionalNode {
		constexpr uintptr_t PreConditions = 0x0080;
		constexpr uintptr_t Conditions = 0x0090;
		constexpr uintptr_t SuccessConditions = 0x00A0;
	}

	namespace BTDeco_RandomSteer {
		constexpr uintptr_t MinDuration = 0x0088;
		constexpr uintptr_t MaxDuration = 0x008C;
		constexpr uintptr_t TimeRemaining = 0x0090;
		constexpr uintptr_t ExtraSteer = 0x0094;
	}

	namespace BTDecorator {
		constexpr uintptr_t Child = 0x0080;
	}

	namespace BTDynamicLink {
		constexpr uintptr_t FName = 0x0088;
		constexpr uintptr_t UnnamedMember_0x0090 = 0x0090;
		constexpr uintptr_t ChildArchetype = 0x0098;
	}

	namespace BTExecutor {
		constexpr uintptr_t UnknownData00 = 0x00C4;
	}

	namespace BTLock {
		constexpr uintptr_t LockScope = 0x0088;
		constexpr uintptr_t FName = 0x008C;
		constexpr uintptr_t Time = 0x0094;
		constexpr uintptr_t RandomTime = 0x0098;
		constexpr uintptr_t Locks = 0x00A0;
		constexpr uintptr_t LockTime = 0x00A8;
	}

	namespace BTLockCollection {
		constexpr uintptr_t Locks = 0x0070;
	}

	namespace BTMoveModifier {
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
	}

	namespace BTMoveModifier_Boost {
		constexpr uintptr_t MinDistanceFromDestination = 0x0078;
		constexpr uintptr_t MaxAngleFromCar = 0x007C;
		constexpr uintptr_t MaxAngleFromDestination = 0x0080;
		constexpr uintptr_t BoostPickup = 0x0088;
		constexpr uintptr_t LastCheckTime = 0x0090;
	}

	namespace BTNode {
		constexpr uintptr_t Decorators = 0x0060;
		constexpr uintptr_t Bitfields_0x0070 = 0x0070;
		constexpr uintptr_t AI = 0x0078;
	}

	namespace BTNodeParent {
		constexpr uintptr_t Children = 0x00B0;
		constexpr uintptr_t RunningChild = 0x00C0;
	}

	namespace BTProxyType {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace BTRandomSelector {
		constexpr uintptr_t ChildWeights = 0x00C8;
		constexpr uintptr_t RemainingChildren = 0x00D8;
	}

	namespace BTSelector {
		constexpr uintptr_t UnknownData00 = 0x00C4;
	}

	namespace BTSequence {
		constexpr uintptr_t UnknownData00 = 0x00C4;
	}

	namespace BTTarget {
		constexpr uintptr_t Type = 0x0060;
		constexpr uintptr_t FVector = 0x0068;
		constexpr uintptr_t FVector = 0x0074;
		constexpr uintptr_t Filters = 0x0080;
	}

	namespace BTWeight {
		constexpr uintptr_t Weight = 0x0088;
	}

	namespace BackFillPolicy_TA {
		constexpr uintptr_t PolicyType = 0x0060;
		constexpr uintptr_t MinSecRemaining = 0x0064;
		constexpr uintptr_t MaxScoreDiff = 0x0068;
	}

	namespace BallCamTarget_TA {
		constexpr uintptr_t UnknownData00 = 0x00C4;
	}

	namespace BallLocationComponent_TA {
		constexpr uintptr_t MaterialToApplyBallLocationTo = 0x00A0;
	}

	namespace BallPossessionComponent_TA {
		constexpr uintptr_t BroadcastInterval = 0x00A8;
		constexpr uintptr_t Score = 0x00AC;
		constexpr uintptr_t TeamNum = 0x00B0;
		constexpr uintptr_t GameEvent = 0x00B8;
		constexpr uintptr_t CurrentPossessionSeconds = 0x00C0;
		constexpr uintptr_t PossessionStreak = 0x00C4;
		constexpr uintptr_t DistanceFromOtherTeamSq = 0x00C8;
		constexpr uintptr_t UnnamedMember_0x00CC = 0x00CC;
		constexpr uintptr_t ClearDistance = 0x00D0;
		constexpr uintptr_t ClearResetDistance = 0x00D4;
		constexpr uintptr_t LastSecondsForDenial = 0x00D8;
	}

	namespace BallRadiusVolume_TA {
		constexpr uintptr_t Radius = 0x0268;
		constexpr uintptr_t PreviewRadius = 0x0270;
		constexpr uintptr_t InRadius = 0x0278;
	}

	namespace BallSlomoComponent_TA {
		constexpr uintptr_t BallSloMoRadius = 0x00A8;
		constexpr uintptr_t BallSloMoDuration = 0x00AC;
		constexpr uintptr_t BallSloMoDilation = 0x00B0;
		constexpr uintptr_t BallSloMoCooldown = 0x00B4;
		constexpr uintptr_t BallSloMoNext = 0x00B8;
		constexpr uintptr_t BallSloMoDiffSpeed = 0x00BC;
	}

	namespace BallStaleTimerComponent_TA {
		constexpr uintptr_t MaxTime = 0x00A8;
		constexpr uintptr_t NoTeamMaxTime = 0x00AC;
		constexpr uintptr_t CountdownThreshold = 0x00B0;
		constexpr uintptr_t NoTeamCountdownThreshold = 0x00B4;
		constexpr uintptr_t CurrentStaleTime = 0x00B8;
		constexpr uintptr_t Bitfields_0x00BC = 0x00BC;
		constexpr uintptr_t Tolerance = 0x00C0;
		constexpr uintptr_t StaleBallYRespawnOffset = 0x00C4;
		constexpr uintptr_t HeatseekerResetForce = 0x00C8;
		constexpr uintptr_t SoccarGameEvent = 0x00D0;
	}

	namespace BallTrajectoryComponent_Beam_TA {
		constexpr uintptr_t TrajectoryFXs = 0x0118;
		constexpr uintptr_t ParticleBeamArchetype = 0x0128;
	}

	namespace BallTrajectoryComponent_Line_TA {
		constexpr uintptr_t UnnamedMember_0x0110 = 0x0110;
		constexpr uintptr_t FColor = 0x0114;
	}

	namespace BallTrajectoryComponent_Mesh_TA {
		constexpr uintptr_t InterpMeshes = 0x0110;
		constexpr uintptr_t MIC = 0x0120;
		constexpr uintptr_t StaticMesh = 0x0128;
		constexpr uintptr_t FColor = 0x0130;
		constexpr uintptr_t FColor = 0x0134;
		constexpr uintptr_t FColor = 0x0138;
		constexpr uintptr_t MinInterpSpeed = 0x013C;
		constexpr uintptr_t MeshScale = 0x0140;
		constexpr uintptr_t MeshMoveSpeed = 0x0144;
		constexpr uintptr_t MeshRotateSpeed = 0x0148;
		constexpr uintptr_t TrajectoryPlayTestScale = 0x014C;
	}

	namespace BallTrajectoryComponent_Spline_TA {
		constexpr uintptr_t TrajectoryFXs = 0x0118;
		constexpr uintptr_t SplineArchetype = 0x0128;
		constexpr uintptr_t TangentMultiplier = 0x0130;
		constexpr uintptr_t PulseMultiplier = 0x0134;
		constexpr uintptr_t MinInterpSpeed = 0x0138;
	}

	namespace BallTrajectoryComponent_TA {
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t TrajectoryPoints = 0x00B0;
		constexpr uintptr_t FTrajectorySetup = 0x00C0;
		constexpr uintptr_t TotalPathDistance = 0x00D4;
		constexpr uintptr_t FVector = 0x00D8;
		constexpr uintptr_t FVector = 0x00E4;
		constexpr uintptr_t TrajectoryUpdateTime = 0x00F0;
	}

	namespace Ball_Breakout_TA {
		constexpr uintptr_t DamageAtTime = 0x0AF0;
		constexpr uintptr_t DamageForceLevels = 0x0B00;
		constexpr uintptr_t Bitfields_0x0B10 = 0x0B10;
		constexpr uintptr_t MinDamageVelocity = 0x0B14;
		constexpr uintptr_t MinDamageTime = 0x0B18;
		constexpr uintptr_t MinImpactSpeedForCharge = 0x0B1C;
		constexpr uintptr_t DoubleTapTime = 0x0B20;
		constexpr uintptr_t ForceAccumDecayPerSecond = 0x0B24;
		constexpr uintptr_t ForceAccumMax = 0x0B28;
		constexpr uintptr_t ForceAccumRecent = 0x0B2C;
		constexpr uintptr_t LastTeamTouch = 0x0B30;
		constexpr uintptr_t LastCarTouch = 0x0B38;
		constexpr uintptr_t LastDamage = 0x0B40;
		constexpr uintptr_t LastDamageTime = 0x0B44;
		constexpr uintptr_t DamageIndex = 0x0B48;
		constexpr uintptr_t LockedDamageIndex = 0x0B4C;
		constexpr uintptr_t DamageIndexPointsToAward = 0x0B50;
		constexpr uintptr_t AbsorbedForce = 0x0B60;
		constexpr uintptr_t FAppliedBreakoutDamage = 0x0B64;
		constexpr uintptr_t FAccumulatedRigidBodyCollision = 0x0B80;
		constexpr uintptr_t WorldCollisions = 0x0C00;
	}

	namespace Ball_Fire_TA {
		constexpr uintptr_t SecondsToRampUp = 0x0B80;
		constexpr uintptr_t MinSpeedScalar = 0x0B84;
		constexpr uintptr_t MinRedirectScalar = 0x0B88;
		constexpr uintptr_t TeamNumChangeTimestamp = 0x0B8C;
		constexpr uintptr_t UnnamedMember_0x0B90 = 0x0B90;
		constexpr uintptr_t MaxDistanceForSave = 0x0B94;
		constexpr uintptr_t DotProductSaveThreshold = 0x0B98;
		constexpr uintptr_t TargetLowSpeedDistanceThreshold = 0x0B9C;
		constexpr uintptr_t TargetLowSpeedThreshold = 0x0BA0;
		constexpr uintptr_t TargetLowSpeedScalar = 0x0BA4;
	}

	namespace Ball_GameEditor_TA {
		constexpr uintptr_t FVector = 0x0AF0;
		constexpr uintptr_t FRotator = 0x0AFC;
		constexpr uintptr_t VelocityStartSpeed = 0x0B08;
		constexpr uintptr_t FRotator = 0x0B0C;
		constexpr uintptr_t BallResetTime = 0x0B18;
		constexpr uintptr_t FirstHitTime = 0x0B1C;
		constexpr uintptr_t FVector = 0x0B20;
		constexpr uintptr_t EditingFXActorArchetype = 0x0B30;
		constexpr uintptr_t EditingFXActor = 0x0B38;
		constexpr uintptr_t UnnamedMember_0x0B40 = 0x0B40;
		constexpr uintptr_t FVector = 0x0B44;
	}

	namespace Ball_God_TA {
		constexpr uintptr_t WallBounceSpeed = 0x0AF0;
		constexpr uintptr_t WallBounceBlend = 0x0AF4;
		constexpr uintptr_t WallBounceBackDistance = 0x0AF8;
		constexpr uintptr_t TargetBlendScaleXY = 0x0AFC;
		constexpr uintptr_t TargetBlendScaleZ = 0x0B00;
		constexpr uintptr_t TargetSpeed = 0x0B04;
		constexpr uintptr_t TargetSpeedIncrement = 0x0B08;
		constexpr uintptr_t TargetSpeedBlend = 0x0B0C;
		constexpr uintptr_t MaxVelocityPitch = 0x0B10;
		constexpr uintptr_t LastSpeedIncrementTime = 0x0B14;
		constexpr uintptr_t TargetSpeedIncrementTime = 0x0B18;
		constexpr uintptr_t MinGlowBrightness = 0x0B1C;
		constexpr uintptr_t MaxGlowBrightness = 0x0B20;
		constexpr uintptr_t PulseSpeedScale = 0x0B24;
		constexpr uintptr_t PulseBrightnessScale = 0x0B28;
		constexpr uintptr_t PulseMinBrightness = 0x0B2C;
		constexpr uintptr_t PulseLifetime = 0x0B30;
		constexpr uintptr_t FLinearColor = 0x0B34;
		constexpr uintptr_t FLinearColor = 0x0B44;
		constexpr uintptr_t FName = 0x0B54;
		constexpr uintptr_t FName = 0x0B5C;
		constexpr uintptr_t FXEvent_TeamChanged = 0x0B68;
		constexpr uintptr_t FXEvent_IntensityChanged = 0x0B70;
		constexpr uintptr_t Bitfields_0x0B78 = 0x0B78;
	}

	namespace Ball_Haunted_TA {
		constexpr uintptr_t FVector2D = 0x0AF0;
		constexpr uintptr_t FVector2D = 0x0AF8;
		constexpr uintptr_t FVector2D = 0x0B00;
		constexpr uintptr_t FVector2D = 0x0B08;
		constexpr uintptr_t TrappedHoverHeight = 0x0B10;
		constexpr uintptr_t HorizontalSpeed = 0x0B14;
		constexpr uintptr_t VerticalSpeed = 0x0B18;
		constexpr uintptr_t ArrivalDistance = 0x0B1C;
		constexpr uintptr_t TrappedHorizontalSpeed = 0x0B20;
		constexpr uintptr_t TrappedVerticalSpeed = 0x0B24;
		constexpr uintptr_t TrappedCaptureTime = 0x0B28;
		constexpr uintptr_t HitPhysicsDuration = 0x0B2C;
		constexpr uintptr_t ReplicatedBeamBrokenValue = 0x0B30;
		constexpr uintptr_t LastTeamTouch = 0x0B31;
		constexpr uintptr_t DeactivatedGoalIndex = 0x0B32;
		constexpr uintptr_t TotalActiveBeams = 0x0B33;
		constexpr uintptr_t FVector = 0x0B34;
		constexpr uintptr_t NextNeutralTime = 0x0B40;
		constexpr uintptr_t Bitfields_0x0B44 = 0x0B44;
		constexpr uintptr_t CurrentCaptureTime = 0x0B48;
		constexpr uintptr_t CaptureTimePercentage = 0x0B4C;
		constexpr uintptr_t CaptureTimeAtExit = 0x0B50;
		constexpr uintptr_t ActiveGoal = 0x0B58;
		constexpr uintptr_t NumActiveBeamsByTeam = 0x0B60;
	}

	namespace Ball_TA {
		constexpr uintptr_t StaticMesh = 0x07A8;
		constexpr uintptr_t TranslucentStaticMesh = 0x07B0;
		constexpr uintptr_t MeshTranslucency = 0x07B8;
		constexpr uintptr_t TranslucentMaterials = 0x07C0;
		constexpr uintptr_t FCarBallInteractionSettings = 0x07D0;
		constexpr uintptr_t EndOfGameFXArchetype = 0x0808;
		constexpr uintptr_t WarnFXActorArchetype = 0x0810;
		constexpr uintptr_t WarnFXActor = 0x0818;
		constexpr uintptr_t ExplosionArchetype = 0x0820;
		constexpr uintptr_t NoGoalExplosionArchetype = 0x0828;
		constexpr uintptr_t Bitfields_0x0830 = 0x0830;
		constexpr uintptr_t FVector = 0x0834;
		constexpr uintptr_t MagnusMinSpeed = 0x0840;
		constexpr uintptr_t AngularVelocityDamping = 0x0844;
		constexpr uintptr_t BallHitSpinScale = 0x0848;
		constexpr uintptr_t BallCamTarget = 0x0850;
		constexpr uintptr_t Radius = 0x0858;
		constexpr uintptr_t SpawnWidth = 0x085C;
		constexpr uintptr_t VisualRadius = 0x0860;
		constexpr uintptr_t Touches = 0x0868;
		constexpr uintptr_t VehicleDemolishMode = 0x0878;
		constexpr uintptr_t HitTeamNum = 0x0879;
		constexpr uintptr_t LastCalculateCarHit = 0x087C;
		constexpr uintptr_t FVector = 0x0880;
		constexpr uintptr_t FRotator = 0x088C;
		constexpr uintptr_t LastHitWorldTime = 0x0898;
		constexpr uintptr_t ReplicatedBallScale = 0x089C;
		constexpr uintptr_t ReplicatedBallMesh = 0x08A0;
		constexpr uintptr_t ReplicatedWorldBounceScale = 0x08A8;
		constexpr uintptr_t ReplicatedBallGravityScale = 0x08AC;
		constexpr uintptr_t ReplicatedBallMaxLinearSpeedScale = 0x08B0;
		constexpr uintptr_t ReplicatedAddedCarBounceScale = 0x08B4;
		constexpr uintptr_t AdditionalCarGroundBounceScaleZ = 0x08B8;
		constexpr uintptr_t AdditionalCarGroundBounceScaleXY = 0x08BC;
		constexpr uintptr_t ReplicatedPhysMatOverride = 0x08C0;
		constexpr uintptr_t GameBallIndex = 0x08C8;
		constexpr uintptr_t GameEvent = 0x08D0;
		constexpr uintptr_t FExplosionData = 0x08D8;
		constexpr uintptr_t FExplosionDataExtended = 0x08F0;
		constexpr uintptr_t Explosion = 0x0910;
		constexpr uintptr_t ExplosionTime = 0x0918;
		constexpr uintptr_t FVector = 0x091C;
		constexpr uintptr_t FadeMaterials = 0x0928;
		constexpr uintptr_t PredictionTimestep = 0x0938;
		constexpr uintptr_t PredictedPositions = 0x0940;
		constexpr uintptr_t LastPredictionTime = 0x0950;
		constexpr uintptr_t FGoalPenetrationData = 0x0958;
		constexpr uintptr_t GroundForce = 0x0980;
		constexpr uintptr_t CurrentAffector = 0x0988;
		constexpr uintptr_t TrajectoryComponent = 0x0990;
		constexpr uintptr_t PitchTekComponent = 0x0998;
		constexpr uintptr_t GoalExplosionOrientation = 0x09A0;
		constexpr uintptr_t PossessionFXActorArchetype = 0x09A8;
		constexpr uintptr_t PossessionFXActor = 0x09B0;
	}

	namespace Ball_Trajectory_TA {
		constexpr uintptr_t AccurateTrajectoryPoints = 0x0AF0;
		constexpr uintptr_t AllPoints = 0x0B00;
		constexpr uintptr_t LastCalculateTime = 0x0B10;
		constexpr uintptr_t FixedDeltaTime = 0x0B14;
		constexpr uintptr_t TotalPathDistance = 0x0B18;
		constexpr uintptr_t FrameCount = 0x0B1C;
		constexpr uintptr_t TotalStepCount = 0x0B20;
		constexpr uintptr_t TotalFrameCount = 0x0B24;
		constexpr uintptr_t CurrentStepCount = 0x0B28;
		constexpr uintptr_t StepToPutAPointAt = 0x0B2C;
		constexpr uintptr_t FVector = 0x0B30;
		constexpr uintptr_t FVector = 0x0B3C;
		constexpr uintptr_t FVector = 0x0B48;
		constexpr uintptr_t FRotator = 0x0B54;
		constexpr uintptr_t FTrajectorySetup = 0x0B60;
		constexpr uintptr_t TrajectoryComponentToUpdate = 0x0B78;
	}

	namespace BanSave_TA {
		constexpr uintptr_t UnnamedMember_0x00C8 = 0x00C8;
	}

	namespace BanSync_TA {
		constexpr uintptr_t BanMessages = 0x0060;
	}

	namespace BeamTraceComponent_TA {
		constexpr uintptr_t BeamSystems = 0x00A8;
		constexpr uintptr_t TraceDistance = 0x00B8;
		constexpr uintptr_t MinRetraceRate = 0x00BC;
		constexpr uintptr_t MaxRetraceRate = 0x00C0;
		constexpr uintptr_t Beams = 0x00C8;
		constexpr uintptr_t FXOwner = 0x00D8;
	}

	namespace BinaryUploader_TA {
		constexpr uintptr_t Data = 0x0060;
		constexpr uintptr_t Headers = 0x0070;
	}

	namespace BlogTileCache_TA {
		constexpr uintptr_t UnreadTileIDs = 0x00C8;
		constexpr uintptr_t PreviouslyDisplayedTileIDs = 0x00D8;
	}

	namespace BlogTileConfig_X {
		constexpr uintptr_t LocalImage = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t FString = 0x0088;
	}

	namespace BlueprintErrors_TA {
		constexpr uintptr_t BlueprintNotEnoughCurrency = 0x0080;
		constexpr uintptr_t BlueprintPriceMismatch = 0x0088;
	}

	namespace BlueprintThumbnailLoadResult {
		constexpr uintptr_t ProductThumbnail = 0x0060;
		constexpr uintptr_t BlueprintThumbnail = 0x0068;
	}

	namespace BoostMesh_TA {
		constexpr uintptr_t FRandomRange = 0x0060;
		constexpr uintptr_t FRandomRange = 0x0068;
		constexpr uintptr_t MaterialParams = 0x0070;
		constexpr uintptr_t MaxMaterialTime = 0x0080;
	}

	namespace BotConfig_TA {
		constexpr uintptr_t FInterpCurveFloat = 0x0078;
		constexpr uintptr_t FInterpCurveFloat = 0x0090;
		constexpr uintptr_t BotBoostThreshold_vsAI = 0x00A8;
		constexpr uintptr_t Skills = 0x00AC;
		constexpr uintptr_t AvatarIDs = 0x00C0;
		constexpr uintptr_t BannerIDs = 0x00D0;
		constexpr uintptr_t UnselectedAvatarIDs = 0x00E0;
		constexpr uintptr_t UnselectedBannerIDs = 0x00F0;
		constexpr uintptr_t AllowedAvatarIDs = 0x0100;
		constexpr uintptr_t AllowedBannerIDs = 0x0110;
		constexpr uintptr_t IgnoredAvatarIDs = 0x0120;
		constexpr uintptr_t IgnoredBannerIDs = 0x0130;
	}

	namespace BotReplacement_TA {
		constexpr uintptr_t ReplacingBotPRI = 0x0060;
	}

	namespace BreakOutActor_Platform_TA {
		constexpr uintptr_t Bitfields_0x0268 = 0x0268;
		constexpr uintptr_t TeamIndex = 0x026C;
		constexpr uintptr_t MaxDamage = 0x0270;
		constexpr uintptr_t StaticMeshComponent = 0x0278;
		constexpr uintptr_t LightEnvironment = 0x0280;
		constexpr uintptr_t FXArchetype = 0x0288;
		constexpr uintptr_t NeighborRadius = 0x0290;
		constexpr uintptr_t Neighbors = 0x0298;
		constexpr uintptr_t ConnectedCollisionMesh = 0x02A8;
		constexpr uintptr_t ConnectedCollisionMesh_HalfSize = 0x02B0;
		constexpr uintptr_t DisconnectedCollisionMesh = 0x02B8;
		constexpr uintptr_t DisconnectedCollisionMesh_HalfSize = 0x02C0;
		constexpr uintptr_t CollisionComponents = 0x02C8;
		constexpr uintptr_t LastHitTime = 0x02D8;
		constexpr uintptr_t FBreakoutDamageState = 0x02E0;
		constexpr uintptr_t DefaultDamageState = 0x0300;
		constexpr uintptr_t FXActor = 0x0308;
		constexpr uintptr_t FBreakoutDamageState = 0x0310;
		constexpr uintptr_t FVector = 0x0330;
	}

	namespace BuildInfo_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t Changelist = 0x0070;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t FString = 0x0088;
	}

	namespace CachedUnlockedProducts_TA {
		constexpr uintptr_t Products = 0x0060;
	}

	namespace CameraConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
	}

	namespace CameraSettingsActor_TA {
		constexpr uintptr_t UploadCameraDelay = 0x0268;
		constexpr uintptr_t PRI = 0x0270;
		constexpr uintptr_t FProfileCameraSettings = 0x0278;
		constexpr uintptr_t Bitfields_0x0294 = 0x0294;
		constexpr uintptr_t CameraPitch = 0x0298;
		constexpr uintptr_t CameraYaw = 0x0299;
		constexpr uintptr_t MaxProximityDistance = 0x029C;
		constexpr uintptr_t LastRotationChangeTime = 0x02A0;
		constexpr uintptr_t LastReplicateRotationTime = 0x02A4;
	}

	namespace CameraStateSelector_Priority_TA {
		constexpr uintptr_t PriorityStates = 0x0088;
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
	}

	namespace CameraStateSelector_RandomSequence_TA {
		constexpr uintptr_t UnnamedMember_0x0090 = 0x0090;
	}

	namespace CameraStateSelector_Sequence_TA {
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
		constexpr uintptr_t StateIdx = 0x008C;
	}

	namespace CameraStateSelector_TA {
		constexpr uintptr_t States = 0x0070;
		constexpr uintptr_t Camera = 0x0080;
	}

	namespace CameraState_BallCamInverted_TA {
		constexpr uintptr_t FViewTargetTransitionParams = 0x0278;
		constexpr uintptr_t UnnamedMember_0x0288 = 0x0288;
		constexpr uintptr_t DelayFromSpawn = 0x028C;
	}

	namespace CameraState_BallCam_TA {
		constexpr uintptr_t RotationRate = 0x01D8;
		constexpr uintptr_t PitchScale = 0x01DC;
		constexpr uintptr_t PitchFocusZFactor = 0x01E0;
		constexpr uintptr_t PitchExtentMin = 0x01E4;
		constexpr uintptr_t PitchExtentMax = 0x01E8;
		constexpr uintptr_t Target = 0x01F0;
		constexpr uintptr_t FCameraOrientation = 0x01F8;
		constexpr uintptr_t FVector = 0x0224;
		constexpr uintptr_t Bitfields_0x0230 = 0x0230;
		constexpr uintptr_t TargetClasses = 0x0238;
		constexpr uintptr_t PlaneSelectSettings = 0x0248;
		constexpr uintptr_t AngleSelectSettings = 0x0258;
		constexpr uintptr_t AvailableTargets = 0x0268;
	}

	namespace CameraState_BasketballLiveReplay_TA {
		constexpr uintptr_t UnknownData00 = 0x012C;
	}

	namespace CameraState_BreakoutLiveReplay_TA {
		constexpr uintptr_t GoalVerticalOffset = 0x0130;
	}

	namespace CameraState_CameraTrack_TA {
		constexpr uintptr_t Replay = 0x00B8;
		constexpr uintptr_t FlyType = 0x00C0;
		constexpr uintptr_t UnnamedMember_0x00C4 = 0x00C4;
		constexpr uintptr_t LastReplayTime = 0x00C8;
		constexpr uintptr_t FRotator = 0x00CC;
		constexpr uintptr_t FVector = 0x00D8;
		constexpr uintptr_t LastFOV = 0x00E4;
	}

	namespace CameraState_CarInverted_TA {
		constexpr uintptr_t FViewTargetTransitionParams = 0x01D8;
		constexpr uintptr_t UnnamedMember_0x01E8 = 0x01E8;
		constexpr uintptr_t DelayFromSpawn = 0x01EC;
	}

	namespace CameraState_CarPreview_TA {
		constexpr uintptr_t SideOffsets = 0x0090;
		constexpr uintptr_t ViewOffsets = 0x00A0;
		constexpr uintptr_t BlendRate = 0x00B0;
		constexpr uintptr_t MinPitch = 0x00B4;
		constexpr uintptr_t MaxPitch = 0x00B8;
		constexpr uintptr_t FCameraOrientation = 0x00BC;
		constexpr uintptr_t CurrentSideOffset = 0x00E8;
		constexpr uintptr_t FRotator = 0x00EC;
		constexpr uintptr_t PrevPremiumGarageState = 0x00F8;
		constexpr uintptr_t TargetsCache = 0x0100;
	}

	namespace CameraState_CarRef_TA {
		constexpr uintptr_t Car = 0x0098;
		constexpr uintptr_t CameraSettings = 0x00A0;
	}

	namespace CameraState_Car_KnockOut_TA {
		constexpr uintptr_t PotentialTarget = 0x0278;
	}

	namespace CameraState_Car_TA {
		constexpr uintptr_t InterpToAirRate = 0x00A8;
		constexpr uintptr_t InterpToGroundRate = 0x00AC;
		constexpr uintptr_t FInterpVector = 0x00B0;
		constexpr uintptr_t FInterpVector = 0x00D8;
		constexpr uintptr_t FInterpVector = 0x0100;
		constexpr uintptr_t GroundRotationInterpRate = 0x0128;
		constexpr uintptr_t GroundRotationInterpRateWall = 0x012C;
		constexpr uintptr_t AirVelocityInfluence = 0x0130;
		constexpr uintptr_t AirVelocityInfluenceMaxSpeed = 0x0134;
		constexpr uintptr_t DistanceSpeedScale = 0x0138;
		constexpr uintptr_t DistanceOffsetMin = 0x013C;
		constexpr uintptr_t MaxSpeedFOV = 0x0140;
		constexpr uintptr_t FOVInterpSpeed = 0x0144;
		constexpr uintptr_t SupersonicFOV = 0x0148;
		constexpr uintptr_t SupersonicFOVInterpSpeed = 0x014C;
		constexpr uintptr_t BouncyChassisScale = 0x0150;
		constexpr uintptr_t RollScale = 0x0154;
		constexpr uintptr_t GroundNormalInterpRate = 0x0158;
		constexpr uintptr_t AirGroundBlend = 0x015C;
		constexpr uintptr_t FCameraOrientation = 0x0160;
		constexpr uintptr_t Bitfields_0x018C = 0x018C;
		constexpr uintptr_t FVector = 0x0190;
		constexpr uintptr_t CameraStartDistance = 0x019C;
		constexpr uintptr_t Config = 0x01A0;
		constexpr uintptr_t ProximityDistance = 0x01A8;
		constexpr uintptr_t ProximityDetectionSpeedCap = 0x01AC;
		constexpr uintptr_t ProximityDistanceMultiplier = 0x01B0;
		constexpr uintptr_t ProximityDetectionMultiplier = 0x01B4;
		constexpr uintptr_t ProximityDistanceBlendInSpeed = 0x01B8;
		constexpr uintptr_t ProximityDistanceBlendOutSpeed = 0x01BC;
		constexpr uintptr_t ProximityTargetClass = 0x01C0;
		constexpr uintptr_t FProfileSliderLimits = 0x01C8;
	}

	namespace CameraState_Countdown_TA {
		constexpr uintptr_t MaxCarsShown = 0x0180;
		constexpr uintptr_t TimePerCar = 0x0184;
		constexpr uintptr_t UnnamedMember_0x0188 = 0x0188;
		constexpr uintptr_t ShownCars = 0x0190;
		constexpr uintptr_t CurrentCar = 0x01A0;
		constexpr uintptr_t NextCar = 0x01A8;
		constexpr uintptr_t LastTeam = 0x01B0;
		constexpr uintptr_t LastChangeCarTime = 0x01B4;
	}

	namespace CameraState_CustomFocus_TA {
		constexpr uintptr_t RotationRate = 0x01D8;
		constexpr uintptr_t PitchScale = 0x01DC;
		constexpr uintptr_t PitchFocusZFactor = 0x01E0;
		constexpr uintptr_t PitchExtentMin = 0x01E4;
		constexpr uintptr_t PitchExtentMax = 0x01E8;
		constexpr uintptr_t FocusTarget = 0x01F0;
	}

	namespace CameraState_Demolished_TA {
		constexpr uintptr_t RotationInterpRate = 0x0098;
		constexpr uintptr_t DemolishedPawn = 0x00A0;
		constexpr uintptr_t StateTime = 0x00A8;
		constexpr uintptr_t InitialFOV = 0x00AC;
		constexpr uintptr_t FOVBlendTime = 0x00B0;
		constexpr uintptr_t Bitfields_0x00B4 = 0x00B4;
		constexpr uintptr_t MaxZoomInFOV = 0x00B8;
		constexpr uintptr_t MaxFOVBlendDistance = 0x00BC;
		constexpr uintptr_t Distance = 0x00C0;
	}

	namespace CameraState_DirectorBallCam_TA {
		constexpr uintptr_t FProfileCameraSettings = 0x0278;
	}

	namespace CameraState_DirectorCountdownRotate_TA {
		constexpr uintptr_t FOV = 0x01B8;
		constexpr uintptr_t Distance = 0x01BC;
		constexpr uintptr_t FRotator = 0x01C0;
		constexpr uintptr_t FRotator = 0x01CC;
	}

	namespace CameraState_DirectorCountdownTailPass_TA {
		constexpr uintptr_t DistanceFromCar = 0x01B8;
		constexpr uintptr_t FRotator = 0x01BC;
		constexpr uintptr_t FRotator = 0x01C8;
		constexpr uintptr_t FOV = 0x01D4;
	}

	namespace CameraState_DirectorGoalScorer_TA {
		constexpr uintptr_t Distance = 0x0180;
		constexpr uintptr_t FOV = 0x0184;
		constexpr uintptr_t FocusCar = 0x0188;
	}

	namespace CameraState_DirectorKickoff_TA {
		constexpr uintptr_t Distance = 0x0180;
		constexpr uintptr_t FRotator = 0x0184;
		constexpr uintptr_t FOV = 0x0190;
		constexpr uintptr_t FViewTargetTransitionParams = 0x0194;
	}

	namespace CameraState_DirectorMoving_TA {
		constexpr uintptr_t FVector = 0x0180;
		constexpr uintptr_t FVector = 0x018C;
		constexpr uintptr_t FRotator = 0x0198;
		constexpr uintptr_t FRotator = 0x01A4;
		constexpr uintptr_t FViewTargetTransitionParams = 0x01B0;
		constexpr uintptr_t StartFOV = 0x01C0;
		constexpr uintptr_t EndFOV = 0x01C4;
		constexpr uintptr_t LoopType = 0x01C8;
		constexpr uintptr_t FVector = 0x01CC;
		constexpr uintptr_t FVector = 0x01D8;
	}

	namespace CameraState_DirectorPlayerView_TA {
		constexpr uintptr_t BallCameraState = 0x0180;
		constexpr uintptr_t MinimumHit = 0x0188;
		constexpr uintptr_t MinimumHitSeparation = 0x018C;
		constexpr uintptr_t StaleDistance = 0x0190;
		constexpr uintptr_t MinimumTimeToBall = 0x0194;
		constexpr uintptr_t CarChangeTimePadding = 0x0198;
		constexpr uintptr_t FViewTargetTransitionParams = 0x019C;
		constexpr uintptr_t FInterpCurveFloat = 0x01B0;
		constexpr uintptr_t MinBlendContinuity = 0x01C8;
		constexpr uintptr_t MaxBlendDistance = 0x01CC;
		constexpr uintptr_t MaintainCurrentDistance = 0x01D0;
		constexpr uintptr_t MaintainCurrentHitBias = 0x01D4;
		constexpr uintptr_t MaintainBallScorability = 0x01D8;
		constexpr uintptr_t MaintainBallScorabilityViewRating = 0x01DC;
		constexpr uintptr_t FInterpCurveFloat = 0x01E0;
		constexpr uintptr_t MinimumViewRating = 0x01F8;
		constexpr uintptr_t AttackerBias = 0x01FC;
		constexpr uintptr_t AttackingGoalDistance = 0x0200;
		constexpr uintptr_t BadFocusDistance = 0x0204;
		constexpr uintptr_t BadFocusViewRating = 0x0208;
		constexpr uintptr_t BadFocusViewRatingDuration = 0x020C;
		constexpr uintptr_t FocusCar = 0x0210;
		constexpr uintptr_t LastCarChangeTime = 0x0218;
		constexpr uintptr_t Bitfields_0x021C = 0x021C;
		constexpr uintptr_t BlendTime = 0x0220;
		constexpr uintptr_t FCameraOrientation = 0x0224;
		constexpr uintptr_t BadViewRatingStart = 0x0250;
	}

	namespace CameraState_DirectorProxy_TA {
		constexpr uintptr_t GameEvent = 0x00B8;
		constexpr uintptr_t GameObserver = 0x00C0;
		constexpr uintptr_t MinimumStateTime = 0x00C8;
		constexpr uintptr_t FInterpCurveFloat = 0x00D0;
		constexpr uintptr_t FInterpCurveFloat = 0x00E8;
		constexpr uintptr_t FInterpCurveFloat = 0x0100;
		constexpr uintptr_t GoalInViewWeight = 0x0118;
		constexpr uintptr_t CanSeeNewViewContinuity = 0x011C;
		constexpr uintptr_t FInterpCurveFloat = 0x0120;
		constexpr uintptr_t FInterpCurveFloat = 0x0138;
		constexpr uintptr_t FVector = 0x0150;
		constexpr uintptr_t FVector = 0x015C;
		constexpr uintptr_t UnnamedMember_0x0168 = 0x0168;
		constexpr uintptr_t Director = 0x0170;
		constexpr uintptr_t CameraSave = 0x0178;
	}

	namespace CameraState_Director_TA {
		constexpr uintptr_t GameEvent = 0x00B8;
		constexpr uintptr_t IdleSelector = 0x00C0;
		constexpr uintptr_t CountdownSelector = 0x00C8;
		constexpr uintptr_t KickoffSelector = 0x00D0;
		constexpr uintptr_t DefaultSelector = 0x00D8;
		constexpr uintptr_t FProfileSliderLimits = 0x00E0;
		constexpr uintptr_t CurrentSelector = 0x00F0;
		constexpr uintptr_t CurrentState = 0x00F8;
		constexpr uintptr_t UnnamedMember_0x0100 = 0x0100;
	}

	namespace CameraState_Edit_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
	}

	namespace CameraState_Freecam_TA {
		constexpr uintptr_t FCameraOrientation = 0x00A8;
		constexpr uintptr_t FCameraOrientation = 0x00D4;
		constexpr uintptr_t FCameraOrientation = 0x0100;
	}

	namespace CameraState_IntroMenu_TA {
		constexpr uintptr_t FOV = 0x0090;
		constexpr uintptr_t FVector = 0x0094;
		constexpr uintptr_t BlendRate = 0x00A0;
		constexpr uintptr_t Focus = 0x00A8;
		constexpr uintptr_t FocusActors = 0x00B0;
	}

	namespace CameraState_LiveReplay_TA {
		constexpr uintptr_t FVector = 0x0090;
		constexpr uintptr_t FInterpCurveFloat = 0x00A0;
		constexpr uintptr_t CarBallFocusBlendDistance = 0x00B8;
		constexpr uintptr_t Distance = 0x00BC;
		constexpr uintptr_t FOV = 0x00C0;
		constexpr uintptr_t SlomoInterpTime = 0x00C4;
		constexpr uintptr_t SlomoDistance = 0x00C8;
		constexpr uintptr_t SlomoFOV = 0x00CC;
		constexpr uintptr_t FVector = 0x00D0;
		constexpr uintptr_t InterpToFieldCenterRate = 0x00DC;
		constexpr uintptr_t InterpToFieldCenterOffset = 0x00E0;
		constexpr uintptr_t ExplosionFocusDelay = 0x00E4;
		constexpr uintptr_t ScorerOffsetInterpSpeed = 0x00E8;
		constexpr uintptr_t SoccarGame = 0x00F0;
		constexpr uintptr_t FocusCar = 0x00F8;
		constexpr uintptr_t FocusBall = 0x0100;
		constexpr uintptr_t Bitfields_0x0108 = 0x0108;
		constexpr uintptr_t LastFocusChangeTime = 0x010C;
		constexpr uintptr_t SlomoTime = 0x0110;
		constexpr uintptr_t Goal = 0x0118;
		constexpr uintptr_t FVector = 0x0120;
	}

	namespace CameraState_LobbyFocus_TA {
		constexpr uintptr_t XOffsetDistance = 0x0090;
		constexpr uintptr_t CameraOffsetPitch = 0x0094;
		constexpr uintptr_t AngleOffsets = 0x0098;
		constexpr uintptr_t TargetCar = 0x00A8;
		constexpr uintptr_t FCameraOrientation = 0x00B0;
	}

	namespace CameraState_Lobby_TA {
		constexpr uintptr_t UnnamedMember_0x0090 = 0x0090;
		constexpr uintptr_t TeamSettings = 0x0098;
		constexpr uintptr_t FadeInDuration = 0x00A8;
		constexpr uintptr_t FCameraOrientation = 0x00AC;
	}

	namespace CameraState_MenuCamActor_TA {
		constexpr uintptr_t FName = 0x0210;
	}

	namespace CameraState_PodiumSpotlight_TA {
		constexpr uintptr_t CameraDistance = 0x0090;
		constexpr uintptr_t CameraOffsetYawDeg = 0x0094;
		constexpr uintptr_t CameraOffsetPitchDeg = 0x0098;
		constexpr uintptr_t XOffsetDistanceStart = 0x009C;
		constexpr uintptr_t XOffsetDistanceEnd = 0x00A0;
		constexpr uintptr_t XOffsetDollySpeed = 0x00A4;
		constexpr uintptr_t DefaultFOV = 0x00A8;
		constexpr uintptr_t FadeInDuration = 0x00AC;
		constexpr uintptr_t CameraZOffset = 0x00B0;
		constexpr uintptr_t AnimDistanceOffset = 0x00B4;
		constexpr uintptr_t AnimPitchOffset = 0x00B8;
		constexpr uintptr_t AnimZOffset = 0x00BC;
		constexpr uintptr_t CachedCars = 0x00C0;
	}

	namespace CameraState_PrePodiumSpotlight_TA {
		constexpr uintptr_t ElapsedTime = 0x0090;
		constexpr uintptr_t UnnamedMember_0x0094 = 0x0094;
		constexpr uintptr_t FadeOutDelay = 0x0098;
		constexpr uintptr_t FadeOutDuration = 0x009C;
	}

	namespace CameraState_PremiumGarage_TA {
		constexpr uintptr_t FViewTargetTransitionParams = 0x0110;
		constexpr uintptr_t FadeInFromBlackTime = 0x0120;
		constexpr uintptr_t FadeToBlackTime = 0x0124;
		constexpr uintptr_t PitchDeadzone = 0x0128;
		constexpr uintptr_t PitchSensitivity = 0x012C;
		constexpr uintptr_t FInterpCurveFloat = 0x0130;
		constexpr uintptr_t PitchMaxSpeed = 0x0148;
		constexpr uintptr_t PitchBlendbackModifier = 0x014C;
		constexpr uintptr_t PitchBlendbackMin = 0x0150;
		constexpr uintptr_t FInterpCurveFloat = 0x0158;
		constexpr uintptr_t LastAdjustTime = 0x0170;
		constexpr uintptr_t TurntableActor = 0x0178;
		constexpr uintptr_t Shell = 0x0180;
	}

	namespace CameraState_Prespawn_TA {
		constexpr uintptr_t CameraConfig = 0x0098;
		constexpr uintptr_t CameraSave = 0x00A0;
	}

	namespace CameraState_ReplayAutoCam_TA {
		constexpr uintptr_t FOVInterpSpeed = 0x00B8;
		constexpr uintptr_t StartViewFocusTime = 0x00BC;
		constexpr uintptr_t FocusPitchInterpSpeed = 0x00C0;
		constexpr uintptr_t FocusYawInterpSpeed = 0x00C4;
		constexpr uintptr_t AerialFOV = 0x00C8;
		constexpr uintptr_t CountDownFOV = 0x00CC;
		constexpr uintptr_t CountDownPanSpeed = 0x00D0;
		constexpr uintptr_t CountDownRotateSpeed = 0x00D4;
		constexpr uintptr_t CountDownPanBlendAmount = 0x00D8;
		constexpr uintptr_t CountDownFocusActorStartTime = 0x00DC;
		constexpr uintptr_t LocationBlendSpeed = 0x00E0;
		constexpr uintptr_t BallAerialZStartTime = 0x00E4;
		constexpr uintptr_t MinBallAerialZHeight = 0x00E8;
		constexpr uintptr_t MinPlayerAerialZHeight = 0x00EC;
		constexpr uintptr_t MinFocusActorViewTime = 0x00F0;
		constexpr uintptr_t BallFloorFocusPercent = 0x00F4;
		constexpr uintptr_t LocationAngleInterpSpeed = 0x00F8;
		constexpr uintptr_t LastLocationAngleUpdateTime = 0x00FC;
		constexpr uintptr_t MinStartRadiusForPlayerAerial = 0x0100;
		constexpr uintptr_t MaxStartRadiusForPlayerAerial = 0x0104;
		constexpr uintptr_t DesiredCameraDistance = 0x0108;
		constexpr uintptr_t ResetToMapDefaultTime = 0x010C;
		constexpr uintptr_t MaxWaitTimeTillBallHit = 0x0110;
		constexpr uintptr_t FocusActorZViewOffset = 0x0114;
		constexpr uintptr_t FloorTraceDistance = 0x0118;
		constexpr uintptr_t BackAwayFromWallDistance = 0x011C;
		constexpr uintptr_t NoCarsNearBallDistance = 0x0120;
		constexpr uintptr_t MinPlayerCameraFloorHeight = 0x0124;
		constexpr uintptr_t FocusPointInterpSpeed = 0x0128;
		constexpr uintptr_t MinMaxPitch = 0x012C;
		constexpr uintptr_t LastDesiredLocationBlendSpeed = 0x0130;
		constexpr uintptr_t AdditionalFocusZ = 0x0134;
		constexpr uintptr_t TimeSinceIgnoredGoalFocusExtent = 0x0138;
		constexpr uintptr_t LastTimeAPlayerWasNearBall = 0x013C;
		constexpr uintptr_t AdditionalBackAwayFromBallSpeed = 0x0140;
		constexpr uintptr_t GoalScorerFocusDistance = 0x0144;
		constexpr uintptr_t MapResetStartDistance = 0x0148;
		constexpr uintptr_t MapResetStartHeight = 0x014C;
		constexpr uintptr_t GoalScoredDistance = 0x0150;
		constexpr uintptr_t MaxGoalYZoomOutDistance = 0x0154;
		constexpr uintptr_t MaxGoalXZoomOutDistance = 0x0158;
		constexpr uintptr_t MinCameraDistanceToBall = 0x015C;
		constexpr uintptr_t Bitfields_0x0160 = 0x0160;
		constexpr uintptr_t FVector = 0x0164;
		constexpr uintptr_t FVector = 0x0170;
		constexpr uintptr_t FVector = 0x017C;
		constexpr uintptr_t FVector = 0x0188;
		constexpr uintptr_t FVector = 0x0194;
		constexpr uintptr_t FVector = 0x01A0;
		constexpr uintptr_t FVector = 0x01AC;
		constexpr uintptr_t FVector = 0x01B8;
		constexpr uintptr_t FVector = 0x01C4;
		constexpr uintptr_t FRotator = 0x01D0;
		constexpr uintptr_t FRotator = 0x01DC;
		constexpr uintptr_t FRotator = 0x01E8;
		constexpr uintptr_t FRotator = 0x01F4;
		constexpr uintptr_t FocusActor = 0x0200;
		constexpr uintptr_t LastScorer = 0x0208;
		constexpr uintptr_t AerialPRIs = 0x0210;
		constexpr uintptr_t CountDownPRIs = 0x0220;
		constexpr uintptr_t GoalFocus = 0x0230;
		constexpr uintptr_t CountDownFocusType = 0x0238;
		constexpr uintptr_t Ball = 0x0240;
		constexpr uintptr_t SoccarGame = 0x0248;
		constexpr uintptr_t ReplayCameraState = 0x0250;
		constexpr uintptr_t FProfileSliderLimits = 0x0258;
		constexpr uintptr_t FProfileSliderLimits = 0x0264;
		constexpr uintptr_t FProfileSliderLimits = 0x0270;
		constexpr uintptr_t FProfileSliderLimits = 0x027C;
		constexpr uintptr_t FProfileSliderLimits = 0x0288;
		constexpr uintptr_t FProfileSliderLimits = 0x0294;
		constexpr uintptr_t FProfileSliderLimits = 0x02A0;
		constexpr uintptr_t FProfileSliderLimits = 0x02AC;
		constexpr uintptr_t CameraSave = 0x02B8;
	}

	namespace CameraState_ReplayFly_TA {
		constexpr uintptr_t UnknownData00 = 0x00B4;
	}

	namespace CameraState_ReplayFollow_TA {
		constexpr uintptr_t FollowDistance = 0x00B8;
		constexpr uintptr_t MinFollowDistance = 0x00BC;
		constexpr uintptr_t MaxFollowDistance = 0x00C0;
		constexpr uintptr_t FInterpCurveFloat = 0x00C8;
		constexpr uintptr_t UnnamedMember_0x00E0 = 0x00E0;
	}

	namespace CameraState_ReplayHardAttach_TA {
		constexpr uintptr_t UnknownData00 = 0x00D4;
	}

	namespace CameraState_ReplayPlayerView_TA {
		constexpr uintptr_t CarCameraState = 0x00B8;
		constexpr uintptr_t BallCameraState = 0x00C0;
		constexpr uintptr_t CurrentCameraState = 0x00C8;
		constexpr uintptr_t CameraSave = 0x00D0;
	}

	namespace CameraState_ReplaySoftAttach_TA {
		constexpr uintptr_t FRotator = 0x00B8;
		constexpr uintptr_t FVector = 0x00C4;
		constexpr uintptr_t MaxDistance = 0x00D0;
	}

	namespace CameraState_Replay_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t OldFocusActor = 0x00A0;
		constexpr uintptr_t FVector = 0x00A8;
	}

	namespace CameraState_SeasonIntro_TA {
		constexpr uintptr_t RotateSpeed = 0x0090;
		constexpr uintptr_t ZHeightPercent = 0x0094;
		constexpr uintptr_t XOffsetDistance = 0x0098;
		constexpr uintptr_t DefaultFOV = 0x009C;
	}

	namespace CameraState_StadiumSide_TA {
		constexpr uintptr_t FVector = 0x0180;
		constexpr uintptr_t FVector = 0x018C;
		constexpr uintptr_t FInterpCurveFloat = 0x0198;
		constexpr uintptr_t TrackProximityOffsetLerp = 0x01B0;
		constexpr uintptr_t FInterpCurveFloat = 0x01B8;
		constexpr uintptr_t FInterpCurveFloat = 0x01D0;
		constexpr uintptr_t FInterpCurveFloat = 0x01E8;
		constexpr uintptr_t FInterpCurveFloat = 0x0200;
		constexpr uintptr_t FInterpCurveFloat = 0x0218;
		constexpr uintptr_t BallPredictionTime = 0x0230;
		constexpr uintptr_t MinFOV = 0x0234;
		constexpr uintptr_t MaxFOV = 0x0238;
		constexpr uintptr_t SmoothFOVLerp = 0x023C;
		constexpr uintptr_t FVector = 0x0240;
		constexpr uintptr_t FVector = 0x024C;
		constexpr uintptr_t FVector = 0x0258;
		constexpr uintptr_t FVector = 0x0264;
		constexpr uintptr_t FVector = 0x0270;
		constexpr uintptr_t FVector = 0x027C;
		constexpr uintptr_t FVector = 0x0288;
		constexpr uintptr_t FVector = 0x0294;
		constexpr uintptr_t FVector = 0x02A0;
		constexpr uintptr_t SmoothedFOV = 0x02AC;
		constexpr uintptr_t SmoothedProximityOffsetSide = 0x02B0;
		constexpr uintptr_t UnnamedMember_0x02B4 = 0x02B4;
	}

	namespace CameraState_TA {
		constexpr uintptr_t Bitfields_0x0090 = 0x0090;
		constexpr uintptr_t StateStartTime = 0x0094;
	}

	namespace CameraState_Waiting_TA {
		constexpr uintptr_t MinExecutionTime = 0x0210;
		constexpr uintptr_t ExecutionTime = 0x0214;
	}

	namespace CameraTrackPoint_TA {
		constexpr uintptr_t frame = 0x0060;
		constexpr uintptr_t Time = 0x0064;
		constexpr uintptr_t FVector = 0x0068;
		constexpr uintptr_t FRotator = 0x0074;
		constexpr uintptr_t FOV = 0x0080;
	}

	namespace CameraTrack_TA {
		constexpr uintptr_t Points = 0x0060;
		constexpr uintptr_t FInterpCurveVector = 0x0070;
		constexpr uintptr_t FInterpCurveVector = 0x0088;
		constexpr uintptr_t FInterpCurveFloat = 0x00A0;
	}

	namespace CameraVolume_KnockOut_TA {
		constexpr uintptr_t UnknownData00 = 0x02A4;
	}

	namespace Camera_Edit_TA {
		constexpr uintptr_t FName = 0x07C0;
		constexpr uintptr_t CurrentCameraState = 0x07C8;
	}

	namespace Camera_GameEditor_TA {
		constexpr uintptr_t FName = 0x07C0;
		constexpr uintptr_t CurrentCameraState = 0x07C8;
	}

	namespace Camera_MainMenu_TA {
		constexpr uintptr_t FVector = 0x06C8;
		constexpr uintptr_t FVector = 0x06D4;
		constexpr uintptr_t CurrentState = 0x06E0;
	}

	namespace Camera_Replay_TA {
		constexpr uintptr_t OverrideStates = 0x07C0;
		constexpr uintptr_t FString = 0x07D0;
		constexpr uintptr_t FName = 0x07E0;
		constexpr uintptr_t FName = 0x07E8;
		constexpr uintptr_t FProfileSliderLimits = 0x07F0;
		constexpr uintptr_t FProfileSliderLimits = 0x07FC;
		constexpr uintptr_t FProfileSliderLimits = 0x0808;
		constexpr uintptr_t FProfileSliderLimits = 0x0814;
		constexpr uintptr_t FProfileSliderLimits = 0x0820;
		constexpr uintptr_t FProfileSliderLimits = 0x082C;
		constexpr uintptr_t Bitfields_0x0838 = 0x0838;
		constexpr uintptr_t GreenScreenColorIndex = 0x083C;
		constexpr uintptr_t CurrentCameraState = 0x0840;
		constexpr uintptr_t PreviousCameraProxyState = 0x0848;
	}

	namespace Camera_TA {
		constexpr uintptr_t FSwivelExtent = 0x06C8;
		constexpr uintptr_t FSwivelExtent = 0x06D4;
		constexpr uintptr_t SwivelFastSpeed = 0x06E0;
		constexpr uintptr_t SwivelDieRate = 0x06E4;
		constexpr uintptr_t FProfileSliderLimits = 0x06E8;
		constexpr uintptr_t FProfileSliderLimits = 0x06F4;
		constexpr uintptr_t FProfileSliderLimits = 0x0700;
		constexpr uintptr_t FProfileSliderLimits = 0x070C;
		constexpr uintptr_t FProfileSliderLimits = 0x0718;
		constexpr uintptr_t FProfileSliderLimits = 0x0724;
		constexpr uintptr_t FProfileSliderLimits = 0x0730;
		constexpr uintptr_t FProfileSliderLimits = 0x073C;
		constexpr uintptr_t CameraPresetSettings = 0x0748;
		constexpr uintptr_t HorizontalSplitscreenHeightOffset = 0x0758;
		constexpr uintptr_t HorizontalSplitscreenFOVOffset = 0x075C;
		constexpr uintptr_t VerticalSplitscreenFOVOffset = 0x0760;
		constexpr uintptr_t ClipRate = 0x0764;
		constexpr uintptr_t FRotator = 0x0768;
		constexpr uintptr_t Demolisher = 0x0778;
		constexpr uintptr_t Bitfields_0x0780 = 0x0780;
		constexpr uintptr_t DemolishedPawn = 0x0788;
		constexpr uintptr_t CameraSettings = 0x0790;
		constexpr uintptr_t GroundClampZOffset = 0x0798;
		constexpr uintptr_t CameraConfig = 0x07A0;
	}

	namespace Cannon_TA {
		constexpr uintptr_t Mesh = 0x0268;
		constexpr uintptr_t CannonAnimTree = 0x0270;
		constexpr uintptr_t CannonAnimSet = 0x0278;
		constexpr uintptr_t FullBodyAnimSlot = 0x0280;
		constexpr uintptr_t PitchControl = 0x0288;
		constexpr uintptr_t Pitch = 0x0290;
		constexpr uintptr_t EngineThrusterParticle = 0x0298;
		constexpr uintptr_t CannonFireSound = 0x02A0;
		constexpr uintptr_t FireCount = 0x02A8;
	}

	namespace CarColorSet_TA {
		constexpr uintptr_t Grayscales = 0x0080;
		constexpr uintptr_t H = 0x0090;
		constexpr uintptr_t SV = 0x00A0;
		constexpr uintptr_t FLinearColor = 0x00B0;
		constexpr uintptr_t DebugColors = 0x00C0;
		constexpr uintptr_t MinStadiumBrightness = 0x00D0;
	}

	namespace CarComponent_AirActivate_TA {
		constexpr uintptr_t AirActivateCount = 0x02E0;
		constexpr uintptr_t MaxAirActivateCount = 0x02E4;
		constexpr uintptr_t LocalAirActivateCount = 0x02E8;
	}

	namespace CarComponent_AirControl_Robin_TA {
		constexpr uintptr_t FWaveParams = 0x0308;
		constexpr uintptr_t FWaveParams = 0x0310;
		constexpr uintptr_t FWaveParams = 0x0318;
	}

	namespace CarComponent_AirControl_TA {
		constexpr uintptr_t FRotator = 0x02E0;
		constexpr uintptr_t FRotator = 0x02EC;
		constexpr uintptr_t AirTorqueScalar = 0x02F8;
		constexpr uintptr_t AirDampingScalar = 0x02FC;
		constexpr uintptr_t ThrottleForce = 0x0300;
		constexpr uintptr_t AirControlSensitivity = 0x0304;
	}

	namespace CarComponent_Boost_KO_TA {
		constexpr uintptr_t LimitVelocityXYToForceScale = 0x0390;
		constexpr uintptr_t LimitVelocityZToForceScale = 0x0394;
	}

	namespace CarComponent_Boost_TA {
		constexpr uintptr_t BoostConsumptionRate = 0x0320;
		constexpr uintptr_t MaxBoostAmount = 0x0324;
		constexpr uintptr_t StartBoostAmount = 0x0328;
		constexpr uintptr_t BoostUsed = 0x032C;
		constexpr uintptr_t CurrentBoostAmount = 0x0330;
		constexpr uintptr_t BoostModifier = 0x0334;
		constexpr uintptr_t LastBoostAmountRequestTime = 0x0338;
		constexpr uintptr_t LastBoostAmount = 0x033C;
		constexpr uintptr_t Bitfields_0x0340 = 0x0340;
		constexpr uintptr_t BoostForce = 0x0344;
		constexpr uintptr_t MinBoostTime = 0x0348;
		constexpr uintptr_t RechargeRate = 0x034C;
		constexpr uintptr_t RechargeDelay = 0x0350;
		constexpr uintptr_t UnlimitedBoostRefCount = 0x0354;
		constexpr uintptr_t BoostRestriction = 0x0358;
		constexpr uintptr_t ReplicatedBoostAmount = 0x0359;
		constexpr uintptr_t FReplicatedBoostData = 0x035C;
		constexpr uintptr_t BoostAsset = 0x0360;
		constexpr uintptr_t BoostShakeState = 0x0368;
		constexpr uintptr_t ControlsSave = 0x0370;
	}

	namespace CarComponent_Dodge_KO_TA {
		constexpr uintptr_t MaxForceToVelocityDegrees = 0x03C0;
		constexpr uintptr_t MaxForceToRotationDegrees = 0x03C4;
		constexpr uintptr_t MinVelocityTransferAlpha = 0x03C8;
		constexpr uintptr_t MaxVelocityTransferAlpha = 0x03CC;
		constexpr uintptr_t VelocityTransferBlend = 0x03D0;
		constexpr uintptr_t FRotator = 0x03D4;
		constexpr uintptr_t DodgeRotationCompressed = 0x03E0;
	}

	namespace CarComponent_Dodge_TA {
		constexpr uintptr_t DodgeInputThreshold = 0x0320;
		constexpr uintptr_t SideDodgeImpulse = 0x0324;
		constexpr uintptr_t SideDodgeImpulseMaxSpeedScale = 0x0328;
		constexpr uintptr_t ForwardDodgeImpulse = 0x032C;
		constexpr uintptr_t ForwardDodgeImpulseMaxSpeedScale = 0x0330;
		constexpr uintptr_t BackwardDodgeImpulse = 0x0334;
		constexpr uintptr_t BackwardDodgeImpulseMaxSpeedScale = 0x0338;
		constexpr uintptr_t SideDodgeTorque = 0x033C;
		constexpr uintptr_t ForwardDodgeTorque = 0x0340;
		constexpr uintptr_t DodgeTorqueTime = 0x0344;
		constexpr uintptr_t MinDodgeTorqueTime = 0x0348;
		constexpr uintptr_t DodgeZDamping = 0x034C;
		constexpr uintptr_t DodgeZDampingDelay = 0x0350;
		constexpr uintptr_t DodgeZDampingUpTime = 0x0354;
		constexpr uintptr_t DodgeImpulseScale = 0x0358;
		constexpr uintptr_t DodgeTorqueScale = 0x035C;
		constexpr uintptr_t JumpEvent = 0x0360;
		constexpr uintptr_t DoubleJumpEvent = 0x0368;
		constexpr uintptr_t DodgeEvent = 0x0370;
		constexpr uintptr_t FVector = 0x0378;
		constexpr uintptr_t FVector = 0x0384;
		constexpr uintptr_t FVector = 0x0390;
		constexpr uintptr_t DodgesCount = 0x039C;
		constexpr uintptr_t MaxDodgeStreak = 0x03A0;
	}

	namespace CarComponent_DoubleJump_KO_TA {
		constexpr uintptr_t LimitVelocityToForceScale = 0x0338;
	}

	namespace CarComponent_DoubleJump_Robin_TA {
		constexpr uintptr_t FWaveParams = 0x0338;
		constexpr uintptr_t FWaveParams = 0x0340;
		constexpr uintptr_t FWaveParams = 0x0348;
	}

	namespace CarComponent_DoubleJump_TA {
		constexpr uintptr_t JumpImpulse = 0x0320;
		constexpr uintptr_t ImpulseScale = 0x0324;
		constexpr uintptr_t FVector = 0x0328;
	}

	namespace CarComponent_FlipCar_TA {
		constexpr uintptr_t FlipCarImpulse = 0x02E0;
		constexpr uintptr_t FlipCarTorque = 0x02E4;
		constexpr uintptr_t FlipCarTime = 0x02E8;
		constexpr uintptr_t UnnamedMember_0x02EC = 0x02EC;
	}

	namespace CarComponent_Jump_Robin_TA {
		constexpr uintptr_t FWaveParams = 0x0308;
		constexpr uintptr_t FWaveParams = 0x0310;
		constexpr uintptr_t FWaveParams = 0x0318;
	}

	namespace CarComponent_Jump_TA {
		constexpr uintptr_t MinJumpTime = 0x02E0;
		constexpr uintptr_t JumpImpulse = 0x02E4;
		constexpr uintptr_t JumpForce = 0x02E8;
		constexpr uintptr_t JumpForceTime = 0x02EC;
		constexpr uintptr_t PodiumJumpForceTime = 0x02F0;
		constexpr uintptr_t JumpImpulseSpeed = 0x02F4;
		constexpr uintptr_t JumpAccel = 0x02F8;
		constexpr uintptr_t MaxJumpHeight = 0x02FC;
		constexpr uintptr_t MaxJumpHeightTime = 0x0300;
		constexpr uintptr_t UnnamedMember_0x0304 = 0x0304;
	}

	namespace CarComponent_TA {
		constexpr uintptr_t FXActorArchetype = 0x0268;
		constexpr uintptr_t FXEvent = 0x0270;
		constexpr uintptr_t Bitfields_0x0278 = 0x0278;
		constexpr uintptr_t ComponentData = 0x027C;
		constexpr uintptr_t ReplicatedActive = 0x027D;
		constexpr uintptr_t Activator = 0x0280;
		constexpr uintptr_t Vehicle = 0x0288;
		constexpr uintptr_t Car = 0x0290;
		constexpr uintptr_t ActivityTime = 0x0298;
		constexpr uintptr_t MinInactiveTime = 0x029C;
		constexpr uintptr_t ReplicatedActivityTime = 0x02A0;
		constexpr uintptr_t FXActor = 0x02A8;
	}

	namespace CarComponent_TerritoryDemolish_TA {
		constexpr uintptr_t Bitfields_0x02E0 = 0x02E0;
		constexpr uintptr_t FName = 0x02E4;
		constexpr uintptr_t EnterWallSFX = 0x02F0;
		constexpr uintptr_t ExitWallSFX = 0x02F8;
		constexpr uintptr_t DemoOverrideFXArchetype = 0x0300;
	}

	namespace CarComponent_Torque_TA {
		constexpr uintptr_t TorqueScale = 0x02E0;
		constexpr uintptr_t FVector = 0x02E4;
		constexpr uintptr_t ReplicatedTorqueInput = 0x02F0;
		constexpr uintptr_t TorqueTimeScale = 0x02F4;
	}

	namespace CarDemoActor_TA {
		constexpr uintptr_t StaticMeshComponent = 0x0268;
	}

	namespace CarDistanceTracker_TA {
		constexpr uintptr_t FVector = 0x0090;
		constexpr uintptr_t TotalDriveDistanceKM = 0x009C;
		constexpr uintptr_t CurrentDriveDistanceKM = 0x00A0;
		constexpr uintptr_t FVector = 0x00A4;
		constexpr uintptr_t TotalFlownDistanceM = 0x00B0;
	}

	namespace CarGrappleTracker_TA {
		constexpr uintptr_t Bitfields_0x0090 = 0x0090;
		constexpr uintptr_t DoubleGrappleCount = 0x0094;
		constexpr uintptr_t CachedBall = 0x0098;
	}

	namespace CarJointSpinner_TA {
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t IdleSpeed = 0x00B0;
		constexpr uintptr_t DrivingSpeed = 0x00B4;
		constexpr uintptr_t BoostSpeed = 0x00B8;
		constexpr uintptr_t FVector = 0x00BC;
		constexpr uintptr_t Car = 0x00C8;
		constexpr uintptr_t Control = 0x00D0;
		constexpr uintptr_t Speed = 0x00D8;
	}

	namespace CarMeshComponentBase_TA {
		constexpr uintptr_t BodyAsset = 0x07B8;
		constexpr uintptr_t SkinAsset = 0x07C0;
		constexpr uintptr_t WheelAsset = 0x07C8;
		constexpr uintptr_t FLinearColor = 0x07D0;
		constexpr uintptr_t FLinearColor = 0x07E0;
		constexpr uintptr_t Team = 0x07F0;
		constexpr uintptr_t TeamColorID = 0x07F4;
		constexpr uintptr_t CustomColorID = 0x07F8;
		constexpr uintptr_t Logo = 0x0800;
		constexpr uintptr_t Bitfields_0x0808 = 0x0808;
		constexpr uintptr_t TeamFinish = 0x0810;
		constexpr uintptr_t CustomFinish = 0x0818;
		constexpr uintptr_t FClubColorSet = 0x0820;
		constexpr uintptr_t Antennas = 0x0828;
		constexpr uintptr_t WheelMeshes = 0x0838;
		constexpr uintptr_t BodyFX = 0x0848;
		constexpr uintptr_t FXActors = 0x0850;
		constexpr uintptr_t Behaviors = 0x0860;
		constexpr uintptr_t BodyFXActor = 0x0870;
		constexpr uintptr_t FClientLoadoutOnlineData = 0x0878;
		constexpr uintptr_t ProductAttachmentSockets = 0x0888;
		constexpr uintptr_t QueuedTeamFinishID = 0x0898;
		constexpr uintptr_t QueuedCustomFinishID = 0x089C;
		constexpr uintptr_t PMCSplitBodyMesh = 0x08A0;
		constexpr uintptr_t ObjectsWithInheritedSettings = 0x08A8;
	}

	namespace CarMeshComponent_TA {
		constexpr uintptr_t BoostBlendInTime = 0x08D0;
		constexpr uintptr_t BoostBlendOutTime = 0x08D4;
		constexpr uintptr_t BoostDriveFlapScale = 0x08D8;
		constexpr uintptr_t WheelSuspensionBlendRate = 0x08DC;
		constexpr uintptr_t WheelSteerBlendRate = 0x08E0;
		constexpr uintptr_t WheelControls = 0x08E8;
		constexpr uintptr_t BoostFlyHeight = 0x08F8;
		constexpr uintptr_t BoostFlyControls = 0x0900;
		constexpr uintptr_t ChassisSpringComponent = 0x0910;
		constexpr uintptr_t ChassisSpringControl = 0x0918;
		constexpr uintptr_t BoostControls = 0x0920;
		constexpr uintptr_t Bitfields_0x0930 = 0x0930;
		constexpr uintptr_t Throttle = 0x0934;
	}

	namespace CarPreviewActor_TA {
		constexpr uintptr_t ControllerId = 0x0268;
		constexpr uintptr_t ProductLoader = 0x0270;
		constexpr uintptr_t CarMesh = 0x0278;
		constexpr uintptr_t LightEnvironment = 0x0280;
		constexpr uintptr_t AttachmentPreviewAnims = 0x0288;
		constexpr uintptr_t WheelAnims = 0x0298;
		constexpr uintptr_t BodyAnim = 0x02A8;
		constexpr uintptr_t EngineAudioAnim = 0x02B0;
		constexpr uintptr_t EngineAudioAnimInstance = 0x02B8;
		constexpr uintptr_t SupersonicFakeSpeed = 0x02C0;
		constexpr uintptr_t TurntableActor = 0x02C8;
		constexpr uintptr_t FLoadoutData = 0x02D0;
		constexpr uintptr_t FLoadoutData = 0x0310;
		constexpr uintptr_t PreviewProducts = 0x0350;
		constexpr uintptr_t BoostFX = 0x0360;
		constexpr uintptr_t PreviewSlot = 0x0368;
		constexpr uintptr_t TeamArchetype = 0x0370;
		constexpr uintptr_t FString = 0x0378;
		constexpr uintptr_t BodyFX = 0x0388;
		constexpr uintptr_t BoostAsset = 0x0390;
		constexpr uintptr_t SupersonicAsset = 0x0398;
		constexpr uintptr_t Bitfields_0x03A0 = 0x03A0;
		constexpr uintptr_t SupersonicFX = 0x03A8;
		constexpr uintptr_t EngineAudioAsset = 0x03B8;
		constexpr uintptr_t EngineAudioPreview = 0x03C0;
		constexpr uintptr_t WheelSpinAttribute = 0x03C8;
		constexpr uintptr_t GameShaderParamAttribute = 0x03D0;
		constexpr uintptr_t PreviewTeam = 0x03D8;
		constexpr uintptr_t LinkedControllerId = 0x03DC;
		constexpr uintptr_t RootFXActor = 0x03E0;
		constexpr uintptr_t Ak = 0x03E8;
	}

	namespace CarPreviewAnim_TA {
		constexpr uintptr_t Slot = 0x00A8;
		constexpr uintptr_t KeyFrames = 0x00B0;
		constexpr uintptr_t Delay = 0x00C0;
		constexpr uintptr_t Bitfields_0x00C4 = 0x00C4;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t PreviewActor = 0x00D0;
		constexpr uintptr_t Component = 0x00D8;
		constexpr uintptr_t FPreviewAnimKeyframe = 0x00E0;
		constexpr uintptr_t KeyframeTime = 0x0118;
		constexpr uintptr_t KeyframeIndex = 0x011C;
		constexpr uintptr_t SkelControl = 0x0120;
	}

	namespace CarPreviewMeshComponent_TA {
		constexpr uintptr_t BoostAsset = 0x08D0;
		constexpr uintptr_t BoostFX = 0x08D8;
		constexpr uintptr_t AntennaAsset = 0x08E0;
		constexpr uintptr_t HatAsset = 0x08E8;
	}

	namespace CarPreviewSet_TA {
		constexpr uintptr_t CarPreviewActors = 0x0060;
		constexpr uintptr_t OnlineParty = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t MaxCars = 0x007C;
	}

	namespace CarThumbnailActor_TA {
		constexpr uintptr_t Mesh = 0x0268;
	}

	namespace CarTrajectoryComponent_TA {
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
		constexpr uintptr_t Points = 0x00B0;
		constexpr uintptr_t TotalDrawPoints = 0x00C0;
		constexpr uintptr_t FramesBetweenPoints = 0x00C4;
		constexpr uintptr_t LastAngle = 0x00C8;
		constexpr uintptr_t FRotator = 0x00CC;
		constexpr uintptr_t FVector = 0x00D8;
		constexpr uintptr_t FVector = 0x00E4;
		constexpr uintptr_t FVector = 0x00F0;
	}

	namespace Car_Freeplay_TA {
		constexpr uintptr_t CarColors = 0x0BF0;
	}

	namespace Car_KnockOut_TA {
		constexpr uintptr_t PRI_KO = 0x0BF0;
		constexpr uintptr_t FName = 0x0BF8;
		constexpr uintptr_t ReplicatedStateChanged = 0x0C00;
		constexpr uintptr_t FImpulseData = 0x0C04;
		constexpr uintptr_t FVector = 0x0C0C;
		constexpr uintptr_t RespawnImmunityTime = 0x0C18;
		constexpr uintptr_t StunTimeHitScale = 0x0C1C;
		constexpr uintptr_t AttackRadius = 0x0C20;
		constexpr uintptr_t AttackYExtent = 0x0C24;
		constexpr uintptr_t AttackZExtent = 0x0C28;
		constexpr uintptr_t MaxAttackDegrees = 0x0C2C;
		constexpr uintptr_t DefaultAttackDamage = 0x0C30;
		constexpr uintptr_t AttackLingerTime = 0x0C34;
		constexpr uintptr_t GrabbingLingerTime = 0x0C38;
		constexpr uintptr_t MinGrabTimeBeforeThrow = 0x0C3C;
		constexpr uintptr_t BlockTime = 0x0C40;
		constexpr uintptr_t GrabThrowTime = 0x0C44;
		constexpr uintptr_t GrabStunTime = 0x0C48;
		constexpr uintptr_t DodgeThrowImpulse = 0x0C4C;
		constexpr uintptr_t DoubleJumpThrowImpulse = 0x0C50;
		constexpr uintptr_t LightGrabTime = 0x0C54;
		constexpr uintptr_t HeavyGrabTime = 0x0C58;
		constexpr uintptr_t AttackHitKnockbackScale = 0x0C5C;
		constexpr uintptr_t MinHitImpulseSpeed = 0x0C60;
		constexpr uintptr_t LightHitImpulseScale = 0x0C64;
		constexpr uintptr_t HeavyHitImpulseScale = 0x0C68;
		constexpr uintptr_t SuddenKOImpulse = 0x0C6C;
		constexpr uintptr_t SuddenKOThrowTime = 0x0C70;
		constexpr uintptr_t LightHitPitchDegrees = 0x0C74;
		constexpr uintptr_t HeavyHitPitchDegrees = 0x0C78;
		constexpr uintptr_t SuddenKOHitPitchDegrees = 0x0C7C;
		constexpr uintptr_t AttackBeginDelay = 0x0C80;
		constexpr uintptr_t HitTime = 0x0C84;
		constexpr uintptr_t AttackStunTorqueScale = 0x0C88;
		constexpr uintptr_t TradeStunTorqueScale = 0x0C8C;
		constexpr uintptr_t TradeStunTime = 0x0C90;
		constexpr uintptr_t TradeStunImpulseScale = 0x0C94;
		constexpr uintptr_t TradeStunPitchDegrees = 0x0C98;
		constexpr uintptr_t ThrowPitchOffset = 0x0C9C;
		constexpr uintptr_t FVector = 0x0CA0;
		constexpr uintptr_t ThrowBackwardVelocityScale = 0x0CAC;
		constexpr uintptr_t TradeImpulseSpeed = 0x0CB0;
		constexpr uintptr_t TorqueStunBeginDelay = 0x0CB4;
		constexpr uintptr_t DamagePointsPerImpulseSpeed = 0x0CB8;
		constexpr uintptr_t ThrowVelocityTransferScale = 0x0CBC;
		constexpr uintptr_t GrabFixJumpVelocity = 0x0CC0;
		constexpr uintptr_t AttachedTarget = 0x0CC8;
		constexpr uintptr_t AttackComponents = 0x0CD0;
		constexpr uintptr_t TorqueComponent = 0x0CE0;
		constexpr uintptr_t TakenHits = 0x0CE8;
		constexpr uintptr_t PendingGrabber = 0x0CF8;
		constexpr uintptr_t UsedAttackComponent = 0x0D00;
		constexpr uintptr_t SuperSonicStartTime = 0x0D08;
		constexpr uintptr_t SuperSonicTimeForHeavyAttack = 0x0D0C;
		constexpr uintptr_t ReturnToSafezoneTime = 0x0D10;
		constexpr uintptr_t ThrowMashAlpha = 0x0D14;
		constexpr uintptr_t AttackerPRIs = 0x0D18;
		constexpr uintptr_t ResetAttackPRIDelay = 0x0D28;
		constexpr uintptr_t FX_AttackArchetype = 0x0D30;
		constexpr uintptr_t FX_GrabAttackArchetype = 0x0D38;
		constexpr uintptr_t FX_HitAttackLightArchetype = 0x0D40;
		constexpr uintptr_t FX_HitAttackHeavyArchetype = 0x0D48;
		constexpr uintptr_t FX_HitBlockArchetype = 0x0D50;
		constexpr uintptr_t FX_GrabHitArchetype = 0x0D58;
		constexpr uintptr_t FName = 0x0D60;
		constexpr uintptr_t DemoSoundOverride = 0x0D68;
		constexpr uintptr_t StunlockArchetype = 0x0D70;
		constexpr uintptr_t Stunlock = 0x0D78;
		constexpr uintptr_t UnnamedMember_0x0D80 = 0x0D80;
		constexpr uintptr_t FX_Attack = 0x0D88;
		constexpr uintptr_t PendingCarToGrab = 0x0D90;
		constexpr uintptr_t CarPendingThrow = 0x0D98;
	}

	namespace Car_TA {
		constexpr uintptr_t DefaultCarComponents = 0x08A8;
		constexpr uintptr_t EngineAudio = 0x08B8;
		constexpr uintptr_t EngineAudioRev = 0x08C0;
		constexpr uintptr_t ThrottleShake = 0x08C8;
		constexpr uintptr_t FlipComponent = 0x08D0;
		constexpr uintptr_t DemolishTarget = 0x08D8;
		constexpr uintptr_t DemolishSpeed = 0x08D9;
		constexpr uintptr_t DemolishSource = 0x08DA;
		constexpr uintptr_t Loadout = 0x08E0;
		constexpr uintptr_t Bitfields_0x08E8 = 0x08E8;
		constexpr uintptr_t ExitFXArchetype = 0x08F0;
		constexpr uintptr_t DemolishExplosionArchetype = 0x08F8;
		constexpr uintptr_t DemolishExplosion = 0x0900;
		constexpr uintptr_t TargetClass = 0x0908;
		constexpr uintptr_t TargetIndicatorArchetype = 0x0910;
		constexpr uintptr_t TargetIndicators = 0x0918;
		constexpr uintptr_t MaxTimeForDodge = 0x0928;
		constexpr uintptr_t MaxNumJumps = 0x092C;
		constexpr uintptr_t GroundedJumpFailedSFX = 0x0930;
		constexpr uintptr_t LastWheelsHitBallTime = 0x0938;
		constexpr uintptr_t FLoadoutTeamPaint = 0x093C;
		constexpr uintptr_t FClubColorSet = 0x094C;
		constexpr uintptr_t ReplicatedCarScale = 0x0954;
		constexpr uintptr_t FDemolishDataExtended = 0x0958;
		constexpr uintptr_t FDemolishData = 0x09A0;
		constexpr uintptr_t FDemolishData2 = 0x09C8;
		constexpr uintptr_t FDemolishDataGoalExplosion = 0x09F8;
		constexpr uintptr_t BodyFXActor = 0x0A28;
		constexpr uintptr_t AttackerPRI = 0x0A30;
		constexpr uintptr_t FVector = 0x0A38;
		constexpr uintptr_t FVector = 0x0A44;
		constexpr uintptr_t AttachedPickup = 0x0A50;
		constexpr uintptr_t RumblePickups = 0x0A58;
		constexpr uintptr_t FVector = 0x0A60;
		constexpr uintptr_t AddedBallForceMultiplier = 0x0A6C;
		constexpr uintptr_t AddedCarForceMultiplier = 0x0A70;
		constexpr uintptr_t CarTrajectoryComponent = 0x0A78;
		constexpr uintptr_t GameEvent = 0x0A80;
		constexpr uintptr_t NameplateComponentCar = 0x0A88;
		constexpr uintptr_t ExplosionHitHandler = 0x0A90;
		constexpr uintptr_t ReplicatedCarMaxLinearSpeedScale = 0x0A98;
		constexpr uintptr_t FName = 0x0A9C;
		constexpr uintptr_t DoubleJumps = 0x0AA4;
		constexpr uintptr_t FName = 0x0AA8;
		constexpr uintptr_t ViralItemFXComponent = 0x0AB0;
	}

	namespace CertifiedStatDatabase_TA {
		constexpr uintptr_t Stats = 0x0060;
		constexpr uintptr_t FMap_Mirror = 0x0070;
		constexpr uintptr_t UnnamedMember_0x00C0 = 0x00C0;
	}

	namespace CertifiedStat_TA {
		constexpr uintptr_t StatClass = 0x0060;
		constexpr uintptr_t RankThresholds = 0x0068;
	}

	namespace ChallengeAvailableNotification_TA {
		constexpr uintptr_t UnknownData00 = 0x0184;
	}

	namespace ChallengeCompleteNotification_TA {
		constexpr uintptr_t UnknownData00 = 0x0184;
	}

	namespace ChallengeConfig_TA {
		constexpr uintptr_t MinSecondsDelayNewNotification = 0x0078;
		constexpr uintptr_t MaxSecondsDelayNewNotification = 0x007C;
		constexpr uintptr_t SecondsDelayNewNotification = 0x0080;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00B8 = 0x00B8;
	}

	namespace ChallengeCurrency_TA {
		constexpr uintptr_t CurrencyID = 0x0080;
		constexpr uintptr_t Amount = 0x0084;
	}

	namespace ChallengeDefaultManager_TA {
		constexpr uintptr_t DefaultChallenges = 0x0060;
		constexpr uintptr_t Folders = 0x0070;
		constexpr uintptr_t ChallengeConfig = 0x0080;
		constexpr uintptr_t NewChallengesNotifications = 0x0088;
	}

	namespace ChallengeDefault_TA {
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t GroupId = 0x00A0;
		constexpr uintptr_t Points = 0x00A4;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t XPUnlockLevel = 0x00AC;
		constexpr uintptr_t RepeatLimit = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t Rewards = 0x00D8;
		constexpr uintptr_t Requirements = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FString = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t Icon = 0x0150;
		constexpr uintptr_t Background = 0x0158;
		constexpr uintptr_t NotifyAvailableImage = 0x0160;
		constexpr uintptr_t NotifyCompleteImage = 0x0168;
		constexpr uintptr_t BackgroundColor = 0x0170;
		constexpr uintptr_t UnlockChallengeIDs = 0x0178;
	}

	namespace ChallengeDropGroup_TA {
		constexpr uintptr_t UnnamedMember_0x00E0 = 0x00E0;
	}

	namespace ChallengeFolder_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t ChallengeID = 0x0080;
		constexpr uintptr_t DefaultActiveIndex = 0x0084;
		constexpr uintptr_t StartTime = 0x0088;
		constexpr uintptr_t EndTime = 0x0090;
		constexpr uintptr_t ChallengeFolderSort = 0x0098;
		constexpr uintptr_t ChallengeIDs = 0x00A0;
		constexpr uintptr_t SubFolders = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t ActiveSubFolderStartTime = 0x00E0;
		constexpr uintptr_t ActiveSubFolderEndTime = 0x00E8;
		constexpr uintptr_t FMap_Mirror = 0x00F0;
	}

	namespace ChallengeManager_TA {
		constexpr uintptr_t Challenges = 0x0060;
		constexpr uintptr_t ChallengeProgressSyncIDs = 0x0070;
		constexpr uintptr_t ClearNewInfoChallengeIDQueue = 0x0080;
		constexpr uintptr_t RemovedChallenges = 0x0090;
		constexpr uintptr_t PendingNewChallengeIDs = 0x00A0;
		constexpr uintptr_t PendingRemovedChallengeIDs = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
	}

	namespace ChallengeNotification_TA {
		constexpr uintptr_t Icon = 0x0170;
		constexpr uintptr_t NotifyImage = 0x0178;
		constexpr uintptr_t ChallengeID = 0x0180;
	}

	namespace ChallengeRequirement_TA {
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t RequiredCount = 0x0090;
		constexpr uintptr_t ProgressCount = 0x0094;
		constexpr uintptr_t ProgressChange = 0x0098;
	}

	namespace ChallengeReward_TA {
		constexpr uintptr_t XP = 0x0080;
		constexpr uintptr_t Currency = 0x0088;
		constexpr uintptr_t Products = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t OnlineProductStoreSet = 0x00B8;
	}

	namespace Challenge_TA {
		constexpr uintptr_t Bitfields_0x01E8 = 0x01E8;
		constexpr uintptr_t CompleteCount = 0x01EC;
		constexpr uintptr_t ProgressResetTimeUTC = 0x01F0;
		constexpr uintptr_t RequirementProgress = 0x01F8;
		constexpr uintptr_t UnlockChallengeRewards = 0x0208;
	}

	namespace ChampionshipTrophy_TA {
		constexpr uintptr_t ChampionshipTrophyArchetype = 0x0060;
		constexpr uintptr_t ChampionshipTrophySound = 0x0068;
	}

	namespace ChatConfig_TA {
		constexpr uintptr_t MaxMessagesPerChannel = 0x0078;
	}

	namespace ChatFilterManager_TA {
		constexpr uintptr_t MatchChatFilter = 0x0060;
		constexpr uintptr_t PartyChatFilter = 0x0061;
		constexpr uintptr_t VoiceChatFilter = 0x0062;
	}

	namespace ChatHistory_TA {
		constexpr uintptr_t StoredChat = 0x0060;
		constexpr uintptr_t MaxNumHistories = 0x0070;
	}

	namespace CheatManagerBase_TA {
		constexpr uintptr_t LastEquippedProductID = 0x0098;
		constexpr uintptr_t FProductInstanceID = 0x00A0;
	}

	namespace CheatManager_TA {
		constexpr uintptr_t InputRecorder = 0x00B0;
		constexpr uintptr_t FColor = 0x00B8;
		constexpr uintptr_t TestClubColor = 0x00BC;
		constexpr uintptr_t BodyHandlingTestTime = 0x00C0;
		constexpr uintptr_t BodyHandlingTestIndex = 0x00C4;
		constexpr uintptr_t TickNotifier = 0x00C8;
	}

	namespace CheckoutErrors_TA {
		constexpr uintptr_t MtxConfigDisabled = 0x0080;
		constexpr uintptr_t SystemOverlayDisabled = 0x0088;
		constexpr uintptr_t TransactionInProgress = 0x0090;
		constexpr uintptr_t InvalidNumberOfItemsInCart = 0x0098;
		constexpr uintptr_t InvalidItemsInCart = 0x00A0;
	}

	namespace CinematicIntroSequence_TA {
		constexpr uintptr_t SequenceIndex = 0x0060;
		constexpr uintptr_t MessageModal = 0x0068;
		constexpr uintptr_t ActionNames = 0x0070;
		constexpr uintptr_t PressedKeys = 0x0080;
		constexpr uintptr_t PressedAxes = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t AxisDeadzone = 0x00D0;
		constexpr uintptr_t AxisPressTime = 0x00D4;
		constexpr uintptr_t AutoFinishTime = 0x00D8;
		constexpr uintptr_t TrackedBindingsPC = 0x00E0;
		constexpr uintptr_t TrackedBindingsGamepad = 0x00F0;
		constexpr uintptr_t InputInteraction = 0x0100;
	}

	namespace ClientConnectionTracker_TA {
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t LatencyStatus = 0x00AC;
		constexpr uintptr_t JitterStatus = 0x00AD;
		constexpr uintptr_t PacketStatus = 0x00AE;
		constexpr uintptr_t LatencyLastUpdateTime = 0x00B0;
		constexpr uintptr_t JitterRollingAverage = 0x00B4;
		constexpr uintptr_t JitterLastUpdateTime = 0x00B8;
		constexpr uintptr_t PacketLastUpdateTime = 0x00BC;
		constexpr uintptr_t NewPacketsRollingAverage = 0x00C0;
		constexpr uintptr_t PacketsLostRollingAverage = 0x00C4;
		constexpr uintptr_t RollingPercentLost = 0x00C8;
		constexpr uintptr_t PriorTotalPacketsInOut = 0x00CC;
		constexpr uintptr_t PriorTotalPacketsLost = 0x00D0;
		constexpr uintptr_t RollingBadPingTime = 0x00D4;
		constexpr uintptr_t RollingBadJitterTime = 0x00D8;
		constexpr uintptr_t RollingBadPacketLossTime = 0x00DC;
		constexpr uintptr_t ConnectionQualityConfig = 0x00E0;
		constexpr uintptr_t TrackedPRI = 0x00E8;
		constexpr uintptr_t ConnectionQualitySave = 0x00F0;
	}

	namespace ClientInputData_TA {
		constexpr uintptr_t PC = 0x0060;
		constexpr uintptr_t InputFrames = 0x0068;
		constexpr uintptr_t LastPacketTimestamp = 0x0078;
		constexpr uintptr_t LastProcessedFrame = 0x007C;
		constexpr uintptr_t LastProcessedReceivedFrame = 0x0080;
	}

	namespace ClientJitterBuffer_STS_TA {
		constexpr uintptr_t PrevBufferTime = 0x0080;
	}

	namespace ClientJitterBuffer_TA {
		constexpr uintptr_t JitterSettings = 0x0060;
		constexpr uintptr_t LastPacketTime = 0x0068;
		constexpr uintptr_t PacketTimeMu = 0x006C;
		constexpr uintptr_t PacketTimeVariance = 0x0070;
		constexpr uintptr_t BufferTime = 0x0074;
		constexpr uintptr_t BufferSize = 0x0078;
	}

	namespace ClientXPSave_TA {
		constexpr uintptr_t TotalXP = 0x00C8;
		constexpr uintptr_t Level = 0x00CC;
		constexpr uintptr_t CurrentLevelXPThreshold = 0x00D0;
		constexpr uintptr_t NextLevelXPThreshold = 0x00D4;
	}

	namespace ClubBadgeDropGroup_TA {
		constexpr uintptr_t SeasonBadgeTier = 0x00C8;
		constexpr uintptr_t FName = 0x00CC;
	}

	namespace ClubDropGroup_TA {
		constexpr uintptr_t ClubID = 0x00C0;
	}

	namespace ClubInviteNotification_TA {
		constexpr uintptr_t FUniqueNetId = 0x0170;
		constexpr uintptr_t ClubID = 0x01B8;
		constexpr uintptr_t FString = 0x01C0;
		constexpr uintptr_t FString = 0x01D0;
	}

	namespace ClubPersonas_TA {
		constexpr uintptr_t ClubCache = 0x0060;
		constexpr uintptr_t WordFilter = 0x0068;
		constexpr uintptr_t PersonaClubs = 0x0070;
		constexpr uintptr_t ActionQueue = 0x0080;
	}

	namespace ClubSave_TA {
		constexpr uintptr_t ClubID = 0x00C8;
		constexpr uintptr_t Role = 0x00D0;
		constexpr uintptr_t ClubTitleIDs = 0x00D8;
		constexpr uintptr_t UnnamedMember_0x00E8 = 0x00E8;
	}

	namespace ClubTitleDropGroup_TA {
		constexpr uintptr_t FName = 0x00C8;
	}

	namespace ClubsConfig_TA {
		constexpr uintptr_t TagLengthMin = 0x0078;
		constexpr uintptr_t TagLengthMax = 0x007C;
		constexpr uintptr_t NameLengthMin = 0x0080;
		constexpr uintptr_t NameLengthMax = 0x0084;
		constexpr uintptr_t MilestoneDataCacheDurationSeconds = 0x0088;
		constexpr uintptr_t Bitfields_0x008C = 0x008C;
		constexpr uintptr_t MilestoneStatNames = 0x0090;
	}

	namespace CollisionTestComponent_TA {
		constexpr uintptr_t LineStart = 0x00A0;
		constexpr uintptr_t LineEnd = 0x00A8;
		constexpr uintptr_t ArchetypeToSpawn = 0x00B0;
		constexpr uintptr_t FVector = 0x00B8;
		constexpr uintptr_t FVector = 0x00C4;
		constexpr uintptr_t FVector = 0x00D0;
		constexpr uintptr_t Speed = 0x00DC;
		constexpr uintptr_t Step = 0x00E0;
		constexpr uintptr_t Time = 0x00E4;
		constexpr uintptr_t UnnamedMember_0x00E8 = 0x00E8;
	}

	namespace CollisionTestTrack_TA {
		constexpr uintptr_t CollisionTestComponent = 0x0268;
	}

	namespace CompleteTaskDropGroup_TA {
		constexpr uintptr_t Icon = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t Points = 0x00D8;
	}

	namespace ConnectionQualityConfig_TA {
		constexpr uintptr_t ClientPollRate = 0x0078;
		constexpr uintptr_t ClientDelayBeforePolling = 0x007C;
		constexpr uintptr_t ClientUpdateDelay = 0x0080;
		constexpr uintptr_t MediocrePing = 0x0084;
		constexpr uintptr_t BadPing = 0x0088;
		constexpr uintptr_t RecentBadPingFlagPercent = 0x008C;
		constexpr uintptr_t BadAckTime = 0x0090;
		constexpr uintptr_t BadReceiveTime = 0x0094;
		constexpr uintptr_t MediocreJitter = 0x0098;
		constexpr uintptr_t BadJitter = 0x009C;
		constexpr uintptr_t JitterRollingAverageTimespan = 0x00A0;
		constexpr uintptr_t RecentBadJitterFlagPercent = 0x00A4;
		constexpr uintptr_t MediocrePacketLossPercent = 0x00A8;
		constexpr uintptr_t BadPacketLossPercent = 0x00AC;
		constexpr uintptr_t PacketLossRollingAverageTimespan = 0x00B0;
		constexpr uintptr_t RecentBadPacketLossFlagPercent = 0x00B4;
		constexpr uintptr_t RecentPoorConnectionRollingTimespan = 0x00B8;
		constexpr uintptr_t NotificationDelayInDays = 0x00BC;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
		constexpr uintptr_t BadPRIReadyTime = 0x00C4;
		constexpr uintptr_t FString = 0x00C8;
	}

	namespace ConnectionQualitySave_TA {
		constexpr uintptr_t RollingBadPingTime = 0x00C8;
		constexpr uintptr_t RollingBadJitterTime = 0x00CC;
		constexpr uintptr_t RollingBadPacketLossTime = 0x00D0;
		constexpr uintptr_t LastNotificationEpochSeconds = 0x00D8;
		constexpr uintptr_t UnnamedMember_0x00E0 = 0x00E0;
	}

	namespace ConsecutiveMatchTracker_TA {
		constexpr uintptr_t PlayerMatchData = 0x0060;
	}

	namespace ContentSave_TA {
		constexpr uintptr_t Config = 0x00C8;
		constexpr uintptr_t ContentMap2 = 0x00D0;
	}

	namespace CountdownObject_TA {
		constexpr uintptr_t CountTime = 0x0090;
	}

	namespace CreateAccountResponse {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace CrewDropGroup_TA {
		constexpr uintptr_t Icon = 0x00C0;
	}

	namespace CrossEntitlementManager_TA {
		constexpr uintptr_t CrossEntitiedProducts = 0x0060;
		constexpr uintptr_t LockedProducts = 0x0070;
		constexpr uintptr_t ContentConfig = 0x0080;
	}

	namespace CrowdActorManager_TA {
		constexpr uintptr_t CrowdActors = 0x0268;
		constexpr uintptr_t Sounds = 0x0278;
	}

	namespace CrowdActorSettings_TA {
		constexpr uintptr_t NoiseRiseRate = 0x0060;
		constexpr uintptr_t NoiseFallRate = 0x0064;
		constexpr uintptr_t FRandomRange = 0x0068;
		constexpr uintptr_t FRandomRange = 0x0070;
		constexpr uintptr_t CountdownStartNoise = 0x0078;
		constexpr uintptr_t CountdownEndNoise = 0x0080;
		constexpr uintptr_t OvertimeStartNoise = 0x0088;
		constexpr uintptr_t TimeAlmostOutNoise = 0x0090;
		constexpr uintptr_t StatNoises = 0x0098;
		constexpr uintptr_t RandomChantsSound = 0x00A8;
		constexpr uintptr_t FRandomRange = 0x00B0;
		constexpr uintptr_t UnnamedMember_0x00B8 = 0x00B8;
		constexpr uintptr_t FInterpCurveFloat = 0x00C0;
		constexpr uintptr_t FVector = 0x00D8;
		constexpr uintptr_t MinGoalDotAngle = 0x00E4;
		constexpr uintptr_t BallHitNoises = 0x00E8;
		constexpr uintptr_t BallHitNoiseDelay = 0x00F8;
		constexpr uintptr_t CountDownSoundList = 0x0100;
		constexpr uintptr_t RoundCountDownSoundList = 0x0110;
		constexpr uintptr_t OneMinRemaining = 0x0120;
		constexpr uintptr_t ThirtySecondsRemaining = 0x0128;
		constexpr uintptr_t CrowdStingerWin = 0x0130;
		constexpr uintptr_t CrowdStingerLose = 0x0138;
		constexpr uintptr_t CrowdStingerForfeit = 0x0140;
		constexpr uintptr_t CrowdStartOverTimeSound = 0x0148;
		constexpr uintptr_t MatchEndedEncore = 0x0150;
		constexpr uintptr_t MatchEndedEncoreDelay = 0x0158;
		constexpr uintptr_t FCrowdDefenseSettings = 0x0160;
	}

	namespace CrowdActor_TA {
		constexpr uintptr_t CrowdSound = 0x0268;
		constexpr uintptr_t Settings = 0x0270;
		constexpr uintptr_t GameEvent = 0x0278;
		constexpr uintptr_t TargetIdleNoise = 0x0280;
		constexpr uintptr_t TargetIdleNoiseRate = 0x0284;
		constexpr uintptr_t CurrentIdleNoise = 0x0288;
		constexpr uintptr_t ModifiedNoise = 0x028C;
		constexpr uintptr_t CurrentNoise = 0x0290;
		constexpr uintptr_t NoiseModifiers = 0x0298;
		constexpr uintptr_t FCrowdNoiseModifierInstance = 0x02A8;
		constexpr uintptr_t CurrentBallGoalDistanceNoise = 0x02B0;
		constexpr uintptr_t ReplicatedOneShotSound = 0x02B8;
		constexpr uintptr_t ReplicatedCountDownNumber = 0x02C0;
		constexpr uintptr_t ReplicatedRoundCountDownNumber = 0x02C4;
		constexpr uintptr_t LastBallHitNoiseTime = 0x02C8;
		constexpr uintptr_t LastBallHitNoiseLevel = 0x02CC;
		constexpr uintptr_t Sounds = 0x02D0;
	}

	namespace CrowdManager_TA {
		constexpr uintptr_t CrowdActors = 0x0268;
		constexpr uintptr_t Settings = 0x0278;
		constexpr uintptr_t UnnamedMember_0x0280 = 0x0280;
		constexpr uintptr_t RandomChantCrowdActors = 0x0288;
		constexpr uintptr_t ReplicatedGlobalOneShotSound = 0x0298;
		constexpr uintptr_t DefenseZoneTime = 0x02A0;
		constexpr uintptr_t GameEvent = 0x02A8;
	}

	namespace CrowdNoiseModifier_TA {
		constexpr uintptr_t ValueMin = 0x0060;
		constexpr uintptr_t ValueMax = 0x0064;
		constexpr uintptr_t DurationMin = 0x0068;
		constexpr uintptr_t DurationMax = 0x006C;
		constexpr uintptr_t OneShotSound = 0x0070;
	}

	namespace CrowdSoundManagerBase_TA {
		constexpr uintptr_t BaseSettings = 0x00A8;
		constexpr uintptr_t CrowdActorManager = 0x00B0;
		constexpr uintptr_t Sounds = 0x00B8;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t DebugLastExcitementSoundTime = 0x00D8;
		constexpr uintptr_t TimeSince0Seconds = 0x00DC;
		constexpr uintptr_t Mod0Seconds = 0x00E0;
		constexpr uintptr_t CurrentLowEnergyDuration = 0x00E8;
		constexpr uintptr_t ChantLowEnergyDuration = 0x00EC;
		constexpr uintptr_t FName = 0x00F0;
		constexpr uintptr_t FName = 0x00F8;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FVector = 0x0110;
	}

	namespace CrowdSoundManager_Knockout_TA {
		constexpr uintptr_t Settings = 0x0138;
	}

	namespace CrowdSoundManager_TA {
		constexpr uintptr_t Settings = 0x0138;
		constexpr uintptr_t DefenseZoneTime = 0x0140;
		constexpr uintptr_t LastBallHitNoiseTime = 0x0144;
		constexpr uintptr_t LastBallHitNoiseLevel = 0x0148;
		constexpr uintptr_t TimeSinceLastGoal = 0x014C;
		constexpr uintptr_t LeadChanges = 0x0150;
		constexpr uintptr_t OpenGoalTime = 0x0154;
		constexpr uintptr_t NearGoalTime = 0x0158;
		constexpr uintptr_t FastBreakTime = 0x015C;
		constexpr uintptr_t Bitfields_0x0160 = 0x0160;
		constexpr uintptr_t ShotGoal = 0x0168;
		constexpr uintptr_t ShotMaxScorability = 0x0170;
		constexpr uintptr_t LastShotTime = 0x0174;
		constexpr uintptr_t AerialDuration = 0x0178;
		constexpr uintptr_t LastAerialTime = 0x017C;
		constexpr uintptr_t TenseNearGoalTime = 0x0180;
		constexpr uintptr_t LastScoreSeparation = 0x0184;
		constexpr uintptr_t ScoreSeparationTrend = 0x0188;
		constexpr uintptr_t FName = 0x018C;
	}

	namespace CrowdSoundSettingsBase_TA {
		constexpr uintptr_t Tension = 0x0060;
		constexpr uintptr_t Excitement = 0x0068;
		constexpr uintptr_t Upset = 0x0070;
		constexpr uintptr_t Anticipation = 0x0078;
		constexpr uintptr_t ExcitementGameStart = 0x0080;
		constexpr uintptr_t ExcitementRoundStart = 0x0088;
		constexpr uintptr_t ExcitementOvertimeStart = 0x0090;
		constexpr uintptr_t ExcitementTimeRemaining = 0x0098;
		constexpr uintptr_t Excitement0Seconds = 0x00A0;
		constexpr uintptr_t Anticipation0Seconds = 0x00A8;
		constexpr uintptr_t AnticipationExcitementMultiplier = 0x00B0;
		constexpr uintptr_t FCrowdDefense = 0x00B8;
		constexpr uintptr_t LowEnergyMaxExcitement = 0x00C4;
		constexpr uintptr_t LowEnergyMaxTension = 0x00C8;
		constexpr uintptr_t ChantLowEnergyDuration = 0x00CC;
		constexpr uintptr_t ChantLowEnergyRandomDuration = 0x00D0;
		constexpr uintptr_t KickoffTimeRemaining = 0x00D4;
		constexpr uintptr_t PostGameExcitement = 0x00D8;
		constexpr uintptr_t ExcitementStates = 0x00E0;
		constexpr uintptr_t TensionStates = 0x00F0;
	}

	namespace CrowdSoundSettings_Knockout_TA {
		constexpr uintptr_t ExcitementHeavyHit = 0x0100;
		constexpr uintptr_t ExcitementLightHit = 0x0108;
		constexpr uintptr_t ExcitementAerialHeavyHit = 0x0110;
		constexpr uintptr_t ExcitementAerialLightHit = 0x0118;
		constexpr uintptr_t ExcitementHeavyBlock = 0x0120;
		constexpr uintptr_t ExcitementLightBlock = 0x0128;
		constexpr uintptr_t ExcitementKnockout = 0x0130;
		constexpr uintptr_t ExcitementDeath = 0x0138;
		constexpr uintptr_t ExcitementThrow = 0x0140;
		constexpr uintptr_t ExcitementGrab = 0x0148;
	}

	namespace CrowdSoundSettings_TA {
		constexpr uintptr_t TensionScorability = 0x0100;
		constexpr uintptr_t TensionOpenGoal = 0x0108;
		constexpr uintptr_t TensionSpeedTowardsGoal = 0x0110;
		constexpr uintptr_t TensionCloseToGoal = 0x0118;
		constexpr uintptr_t TensionDistanceFromGoal = 0x0120;
		constexpr uintptr_t TensionAerial = 0x0128;
		constexpr uintptr_t TensionFastBreak = 0x0130;
		constexpr uintptr_t TensionTimeSinceLastGoal = 0x0138;
		constexpr uintptr_t TensionScoreSeparation = 0x0140;
		constexpr uintptr_t TensionTimeNearGoal = 0x0148;
		constexpr uintptr_t TensionLeadChanges = 0x0150;
		constexpr uintptr_t TensionGoalScored = 0x0158;
		constexpr uintptr_t ExcitementKickoffTouch = 0x0160;
		constexpr uintptr_t ExcitementScorability = 0x0168;
		constexpr uintptr_t ExcitementFastBreak = 0x0170;
		constexpr uintptr_t ExcitementGoal = 0x0178;
		constexpr uintptr_t ExcitementAerial = 0x0180;
		constexpr uintptr_t ExcitementTenseClear = 0x0188;
		constexpr uintptr_t ExcitementLeadChanges = 0x0190;
		constexpr uintptr_t ExcitementScoreSeparation = 0x0198;
		constexpr uintptr_t ExcitementTimeSinceLastGoal = 0x01A0;
		constexpr uintptr_t UpsetAnyDemo = 0x01A8;
		constexpr uintptr_t UpsetRelevantDemo = 0x01B0;
		constexpr uintptr_t UpsetGoal = 0x01B8;
		constexpr uintptr_t AnticipationScorability = 0x01C0;
		constexpr uintptr_t AnticipationFastBreak = 0x01C8;
		constexpr uintptr_t AnticipationOpenGoal = 0x01D0;
		constexpr uintptr_t OpenGoalMinDuration = 0x01D8;
		constexpr uintptr_t OpenGoalMaxDistance = 0x01DC;
		constexpr uintptr_t OpenGoalMaxDefense = 0x01E0;
		constexpr uintptr_t LongTimeNearGoalDuration = 0x01E4;
		constexpr uintptr_t LongTimeNearGoalMaxDistance = 0x01E8;
		constexpr uintptr_t ShotMaxDistanceToGoal = 0x01EC;
		constexpr uintptr_t ShotScorability = 0x01F0;
		constexpr uintptr_t ShotSpeedTowardsGoal = 0x01F4;
		constexpr uintptr_t SaveScorability = 0x01F8;
		constexpr uintptr_t SaveDistanceToGoal = 0x01FC;
		constexpr uintptr_t SaveHitMaxTime = 0x0200;
		constexpr uintptr_t SaveShotMaxTime = 0x0204;
		constexpr uintptr_t FastBreakMinDistanceToGoal = 0x0208;
		constexpr uintptr_t FastBreakMaxDistanceToGoal = 0x020C;
		constexpr uintptr_t FastBreakSpeedTowardsGoal = 0x0210;
		constexpr uintptr_t FastBreakDuration = 0x0214;
		constexpr uintptr_t MissedShotMinScorability = 0x0218;
		constexpr uintptr_t MissedShotMinTension = 0x021C;
		constexpr uintptr_t MissedShotMinLastHitTime = 0x0220;
		constexpr uintptr_t RelevantDemoMaxDistanceToBall = 0x0224;
		constexpr uintptr_t RelevantDemoMaxBallDistanceToGoal = 0x0228;
		constexpr uintptr_t AerialMinValue = 0x022C;
		constexpr uintptr_t AerialMinDuration = 0x0230;
		constexpr uintptr_t AerialMinCarInAirDuration = 0x0234;
		constexpr uintptr_t AerialCooldown = 0x0238;
		constexpr uintptr_t KickoffScoreSeparation = 0x023C;
		constexpr uintptr_t TenseNearGoalMinTension = 0x0240;
		constexpr uintptr_t TenseNearGoalDuration = 0x0244;
		constexpr uintptr_t TenseNearGoalDistance = 0x0248;
		constexpr uintptr_t TenseClearDistance = 0x024C;
		constexpr uintptr_t MinCrossbarImpactForce = 0x0250;
		constexpr uintptr_t ScoreStates = 0x0258;
	}

	namespace CrowdSoundsBase_TA {
		constexpr uintptr_t Sound = 0x0060;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0068;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0090;
		constexpr uintptr_t MatchEndCountDown = 0x00B8;
		constexpr uintptr_t LowEnergyChant = 0x00C8;
		constexpr uintptr_t OvertimeStart = 0x00D0;
		constexpr uintptr_t Win = 0x00D8;
		constexpr uintptr_t Lose = 0x00E0;
		constexpr uintptr_t Forfeit = 0x00E8;
		constexpr uintptr_t MatchEndedEncore = 0x00F0;
		constexpr uintptr_t MatchEndedEncoreDelay = 0x00F8;
	}

	namespace CrowdSounds_Knockout_TA {
		constexpr uintptr_t FCrowdExcitementSounds = 0x0100;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0128;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0150;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0178;
		constexpr uintptr_t FCrowdExcitementSounds = 0x01A0;
		constexpr uintptr_t FCrowdExcitementSounds = 0x01C8;
		constexpr uintptr_t FCrowdExcitementSounds = 0x01F0;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0218;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0240;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0268;
	}

	namespace CrowdSounds_TA {
		constexpr uintptr_t FCrowdExcitementSounds = 0x0100;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0128;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0150;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0178;
		constexpr uintptr_t FCrowdExcitementSounds = 0x01A0;
		constexpr uintptr_t FCrowdExcitementSounds = 0x01C8;
		constexpr uintptr_t FCrowdExcitementSounds = 0x01F0;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0218;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0240;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0268;
		constexpr uintptr_t FCrowdExcitementSounds = 0x0290;
		constexpr uintptr_t FCrowdExcitementSounds = 0x02B8;
		constexpr uintptr_t FCrowdExcitementSounds = 0x02E0;
	}

	namespace CrumbTrailRedefinition_TA {
		constexpr uintptr_t CrumbRedefInfo = 0x0060;
	}

	namespace CrumbTrailSave_TA {
		constexpr uintptr_t CompletedTrails = 0x00C8;
		constexpr uintptr_t ActiveTrails = 0x00D8;
	}

	namespace CrumbTrails_TA {
		constexpr uintptr_t CrumbTrails = 0x0060;
		constexpr uintptr_t CrumbRedefine = 0x0070;
		constexpr uintptr_t CrumbSave = 0x0078;
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace CurrencyProductSet_TA {
		constexpr uintptr_t PlayerWallet = 0x0060;
		constexpr uintptr_t CurrencyProducts = 0x0068;
	}

	namespace CustomMatchSettingsSave_TA {
		constexpr uintptr_t FCustomMatchSettings = 0x00C8;
		constexpr uintptr_t GameTags = 0x0150;
	}

	namespace DLCPack_TA {
		constexpr uintptr_t UnlockedPlatforms = 0x0060;
		constexpr uintptr_t DiscUnlockedPlatforms = 0x0070;
		constexpr uintptr_t LabelSlot = 0x0080;
		constexpr uintptr_t SteamID = 0x0088;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t Products = 0x00D0;
	}

	namespace DataAssetDatabase_ESportsTeam_TA {
		constexpr uintptr_t UnknownData00 = 0x00CC;
	}

	namespace DataAssetDatabase_TA {
		constexpr uintptr_t DataAssetClass = 0x0060;
		constexpr uintptr_t DataAssets = 0x0068;
		constexpr uintptr_t FMap_Mirror = 0x0078;
		constexpr uintptr_t UnnamedMember_0x00C8 = 0x00C8;
	}

	namespace DataAsset_ESportsTeam_TA {
		constexpr uintptr_t TeamID = 0x0060;
		constexpr uintptr_t ESportsTeamReference = 0x0068;
	}

	namespace DataProductCache_TA {
		constexpr uintptr_t ViralItemConfig = 0x0060;
		constexpr uintptr_t DataProducts = 0x0068;
	}

	namespace DebugHelpMenu_TA {
		constexpr uintptr_t CategoryTextScale = 0x00D0;
		constexpr uintptr_t ItemTextScale = 0x00D4;
		constexpr uintptr_t KeyTextScale = 0x00D8;
		constexpr uintptr_t HelpCategories = 0x00E0;
		constexpr uintptr_t SelectedCategoryIdx = 0x00F0;
		constexpr uintptr_t SelectedItemIdx = 0x00F4;
		constexpr uintptr_t ItemsWidth = 0x00F8;
		constexpr uintptr_t ItemsHeight = 0x00FC;
		constexpr uintptr_t Fade = 0x0100;
		constexpr uintptr_t UnnamedMember_0x0104 = 0x0104;
	}

	namespace DecalComponent_Constrained_TA {
		constexpr uintptr_t WorldZ = 0x03E0;
		constexpr uintptr_t UnnamedMember_0x03E4 = 0x03E4;
	}

	namespace DefaultHitHandler_TA {
		constexpr uintptr_t ImpulseVelocityMultiplier = 0x0150;
	}

	namespace DemoExplosionHandler_TA {
		constexpr uintptr_t DemoFXToApply = 0x0150;
	}

	namespace DemolishedCar_TA {
		constexpr uintptr_t FDemolishData = 0x0060;
	}

	namespace DisplayNameResponse {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace DistributionFloatSpeed_TA {
		constexpr uintptr_t FVector = 0x00A8;
		constexpr uintptr_t VelocitySpace = 0x00B4;
	}

	namespace DistributionFloatSteer_TA {
		constexpr uintptr_t UnknownData00 = 0x00A1;
	}

	namespace DynamicLogosConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t LogoImage = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t MaxWaitLogoLoadTime = 0x00C8;
	}

	namespace DynamicMapEventsConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t ActiveDynamicMapEvents = 0x0080;
	}

	namespace DynamicMeshActor_TA {
		constexpr uintptr_t StaticMeshComponent = 0x0268;
	}

	namespace EOSGameClipsConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t ClipDurationSeconds = 0x0080;
		constexpr uintptr_t MinClipLengthSeconds = 0x0088;
		constexpr uintptr_t MinClipCooldownSeconds = 0x008C;
		constexpr uintptr_t MinClipCooldownAfterRecordingStartedSeconds = 0x0090;
		constexpr uintptr_t MaxClipUploadsPerMinute = 0x0094;
	}

	namespace EOSGameClipsController_TA {
		constexpr uintptr_t GameClipsInterface_Object = 0x0060;
		constexpr uintptr_t GameClipsInterface_Interface = 0x0068;
		constexpr uintptr_t GameClipsManager = 0x0070;
		constexpr uintptr_t GameClipsConfig = 0x0078;
		constexpr uintptr_t ClipCaptured_SFX = 0x0080;
		constexpr uintptr_t ClipFailed_SFX = 0x0088;
		constexpr uintptr_t ClipSucceeded_SFX = 0x0090;
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t LastClipTimeSeconds = 0x009C;
	}

	namespace EOSGameClipsManager_TA {
		constexpr uintptr_t GameClipsInterface_Object = 0x0060;
		constexpr uintptr_t GameClipsInterface_Interface = 0x0068;
		constexpr uintptr_t GameClipsConfig = 0x0070;
		constexpr uintptr_t CurrentGameEvent = 0x0078;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t Bitfields_0x00D0 = 0x00D0;
		constexpr uintptr_t linkedAccounts = 0x00D8;
		constexpr uintptr_t InactiveAccounts = 0x00E8;
		constexpr uintptr_t MostRecentRecordingStartTime = 0x00F8;
	}

	namespace EOSGameClipsMetrics_TA {
		constexpr uintptr_t GameClipsManager = 0x0080;
		constexpr uintptr_t GameClipsInterface_Object = 0x0088;
		constexpr uintptr_t GameClipsInterface_Interface = 0x0090;
		constexpr uintptr_t ClipsUploading = 0x0098;
		constexpr uintptr_t GeneralErrors = 0x00A8;
	}

	namespace EOSGameClipsSettingsSave_TA {
		constexpr uintptr_t UnnamedMember_0x00C8 = 0x00C8;
	}

	namespace EOSOnlineStorageSync_TA {
		constexpr uintptr_t SyncTask = 0x0060;
		constexpr uintptr_t EOS_FILE_CORRUPTED = 0x0068;
	}

	namespace EOSOnlineStorageUploader_TA {
		constexpr uintptr_t Config = 0x0060;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t LastSuccessfulUploadTime = 0x0070;
	}

	namespace EOSPermissions_TA {
		constexpr uintptr_t EpicConfig = 0x0060;
		constexpr uintptr_t RetryConfig = 0x0068;
		constexpr uintptr_t FPlayerPermissions = 0x0070;
		constexpr uintptr_t GameplaySettingsSave = 0x0080;
		constexpr uintptr_t NotificationSave = 0x0088;
		constexpr uintptr_t DownloadedPermissions = 0x0090;
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t RetryDelays = 0x00A8;
		constexpr uintptr_t PermissionRetryAttempts = 0x00B8;
		constexpr uintptr_t ActivePermissionsRequest = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
	}

	namespace EOSShopPurchaseEvent_X {
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t CurrencyAmount = 0x0078;
		constexpr uintptr_t Products = 0x0080;
	}

	namespace EOSUserPermissionsError_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace EOSUserPermissions_TA {
		constexpr uintptr_t FEOSPermissionsResponse = 0x0060;
	}

	namespace EOSVoiceConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t MatchRequestDelay = 0x007C;
		constexpr uintptr_t TextNotificationCooldown = 0x0080;
		constexpr uintptr_t BanEnforcementTypes = 0x0088;
		constexpr uintptr_t FString = 0x0098;
	}

	namespace EOSVoiceErrors_TA {
		constexpr uintptr_t VoiceError = 0x0080;
		constexpr uintptr_t VoiceChatBanned = 0x0088;
		constexpr uintptr_t VoiceNotPrimaryPlayer = 0x0090;
		constexpr uintptr_t VoiceNoPlatformPermissions = 0x0098;
		constexpr uintptr_t VoiceNoEpicPermissions = 0x00A0;
		constexpr uintptr_t VoiceNoSpectatorPermissions = 0x00A8;
		constexpr uintptr_t VoiceParentalPermissionRestriction = 0x00B0;
		constexpr uintptr_t VoiceTokenRequestDenied = 0x00B8;
		constexpr uintptr_t VoiceDisabled = 0x00C0;
		constexpr uintptr_t VoiceSettingDisabled = 0x00C8;
		constexpr uintptr_t VoiceInvalidPartyToken = 0x00D0;
		constexpr uintptr_t VoiceAlreadyJoiningRoom = 0x00D8;
		constexpr uintptr_t VoiceAlreadyInRoom = 0x00E0;
		constexpr uintptr_t VoiceRoomNotValid = 0x00E8;
		constexpr uintptr_t VoiceLeaveFailed = 0x00F0;
		constexpr uintptr_t VoiceRemoteUserNotAllowed = 0x00F8;
		constexpr uintptr_t VoiceRemoteUserJoined = 0x0100;
		constexpr uintptr_t VoiceNoConnection = 0x0108;
		constexpr uintptr_t VoiceJoinFailedTooManyParticipants = 0x0110;
		constexpr uintptr_t VoiceJoinFailedInvalidCredentials = 0x0118;
		constexpr uintptr_t VoiceJoinFailed = 0x0120;
		constexpr uintptr_t VoiceUnexpectedError = 0x0128;
		constexpr uintptr_t VoiceAlreadyRequestingToken = 0x0130;
		constexpr uintptr_t VoiceDisabledForTeam = 0x0138;
		constexpr uintptr_t VoiceCrossplatformChatNotEnabled = 0x0140;
		constexpr uintptr_t VoicePlayerPlatformMuted = 0x0148;
		constexpr uintptr_t VoiceCredentialsNotValid = 0x0150;
		constexpr uintptr_t VoiceRoomNotFound = 0x0158;
		constexpr uintptr_t VoiceRemovedDueToSettingChange = 0x0160;
		constexpr uintptr_t VoiceModerationEULANotAccepted = 0x0168;
	}

	namespace EOSVoiceManager_TA {
		constexpr uintptr_t VoiceInterface = 0x0060;
		constexpr uintptr_t VoiceRooms = 0x0068;
		constexpr uintptr_t PendingRoomJoins = 0x0078;
		constexpr uintptr_t VoiceConfig = 0x0088;
		constexpr uintptr_t OnlineGame = 0x0090;
		constexpr uintptr_t OnlineGameParty = 0x0098;
		constexpr uintptr_t Personas = 0x00A0;
		constexpr uintptr_t NoTeamNum = 0x00A8;
		constexpr uintptr_t SpectatorTeamNum = 0x00AC;
		constexpr uintptr_t VoiceReportReasonId = 0x00B0;
		constexpr uintptr_t CurrentRoomTypeBringRecorded = 0x00B1;
		constexpr uintptr_t FUniqueNetId = 0x00B8;
		constexpr uintptr_t PlayersRequestingPartyTokens = 0x0100;
		constexpr uintptr_t VoiceRecordingData = 0x0110;
		constexpr uintptr_t MaxRecordingBufferSeconds = 0x0120;
	}

	namespace EOSVoiceSettingsSave_TA {
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t VoiceChatFilter = 0x00CC;
		constexpr uintptr_t VoiceInputMode = 0x00CD;
		constexpr uintptr_t PreferredRoomType = 0x00CE;
		constexpr uintptr_t NotificationLevel = 0x00CF;
		constexpr uintptr_t VoiceReportingLevel = 0x00D0;
		constexpr uintptr_t OutputVolume = 0x00D4;
		constexpr uintptr_t PreferredAudioDevices = 0x00D8;
		constexpr uintptr_t MutedPlayers = 0x00E8;
		constexpr uintptr_t TextNotificationValue = 0x00F8;
		constexpr uintptr_t MatchNotificationValue = 0x00FC;
		constexpr uintptr_t MainMenuNotificationValue = 0x0100;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
	}

	namespace EOSVoiceTokenCache_TA {
		constexpr uintptr_t CachedVoiceCredentials = 0x0060;
		constexpr uintptr_t StagedVoiceCredentials = 0x0070;
		constexpr uintptr_t PendingTokenRequests = 0x0080;
		constexpr uintptr_t VoiceConfig = 0x0090;
	}

	namespace ESportConfig_TA {
		constexpr uintptr_t Events = 0x0078;
	}

	namespace EndRoundComponent_TA {
		constexpr uintptr_t SoccarGame = 0x00A8;
	}

	namespace EnforceMaxTeamSizeConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace EngagementEventNotification_TA {
		constexpr uintptr_t FString = 0x0170;
	}

	namespace EngagementEventsConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t Events = 0x0080;
		constexpr uintptr_t EventStatuses = 0x0090;
		constexpr uintptr_t FEngagementEventStatus = 0x00A0;
		constexpr uintptr_t PopUpDuration = 0x00D0;
		constexpr uintptr_t SoonInSeconds = 0x00D8;
	}

	namespace EngineAudioBaseComponent_TA {
		constexpr uintptr_t EngineAudio = 0x00A8;
		constexpr uintptr_t ExhaustAudio = 0x00B0;
		constexpr uintptr_t BlowoffComponent = 0x00B8;
		constexpr uintptr_t WheelSpeed = 0x00C0;
		constexpr uintptr_t ThrottleComponent = 0x00C8;
		constexpr uintptr_t GearChangeSound = 0x00D0;
		constexpr uintptr_t MaxActorsGroup = 0x00D8;
		constexpr uintptr_t Car = 0x00E0;
	}

	namespace EngineAudioBlowoffComponent_TA {
		constexpr uintptr_t BlowoffSound = 0x00A8;
		constexpr uintptr_t BlowoffThrottleTime = 0x00B0;
		constexpr uintptr_t Car = 0x00B8;
		constexpr uintptr_t FullThrottleTime = 0x00C0;
	}

	namespace EngineAudioComponent_TA {
		constexpr uintptr_t Profile = 0x0100;
		constexpr uintptr_t FCarStateData = 0x0108;
		constexpr uintptr_t FPointer = 0x0118;
	}

	namespace EngineAudioPreviewBase_TA {
		constexpr uintptr_t StartDelay = 0x0060;
		constexpr uintptr_t AccelerateDelay = 0x0064;
		constexpr uintptr_t AccelerateLength = 0x0068;
		constexpr uintptr_t IdleLength = 0x006C;
		constexpr uintptr_t EngineAsset = 0x0070;
		constexpr uintptr_t Ak = 0x0078;
		constexpr uintptr_t Throttle = 0x0080;
	}

	namespace EngineAudioPreviewRev_TA {
		constexpr uintptr_t Profile = 0x0088;
		constexpr uintptr_t PhysicsSim = 0x0090;
		constexpr uintptr_t FAkRevSimFrame = 0x0098;
	}

	namespace EngineAudioPreview_TA {
		constexpr uintptr_t Profile = 0x0088;
		constexpr uintptr_t FPointer = 0x0090;
		constexpr uintptr_t FInterpCurveFloat = 0x0098;
		constexpr uintptr_t PreviewSpeed = 0x00B0;
		constexpr uintptr_t MaxPreviewSpeed = 0x00B4;
		constexpr uintptr_t WheelSpeedToPreviewSpeed = 0x00B8;
		constexpr uintptr_t BrakeFactor = 0x00BC;
		constexpr uintptr_t FName = 0x00C0;
	}

	namespace EngineAudioProfileBase_TA {
		constexpr uintptr_t BlowoffThrottleTime = 0x0060;
		constexpr uintptr_t WheelForwardSpeedInterpRate = 0x0064;
		constexpr uintptr_t WheelSideSpeedInterpRate = 0x0068;
		constexpr uintptr_t MaxWheelSpeed = 0x006C;
	}

	namespace EngineAudioProfileREV_TA {
		constexpr uintptr_t FAkRevSimPhysicsControls = 0x0070;
		constexpr uintptr_t PhysicsSim = 0x0090;
		constexpr uintptr_t RevLimiter = 0x0098;
	}

	namespace EngineAudioProfile_TA {
		constexpr uintptr_t Gears = 0x0070;
		constexpr uintptr_t GearSwitchTime = 0x0080;
		constexpr uintptr_t RPMAccelStart = 0x0084;
		constexpr uintptr_t RPMAccelEnd = 0x0088;
		constexpr uintptr_t RPMAccelClutched = 0x008C;
		constexpr uintptr_t RPMDecelClutched = 0x0090;
		constexpr uintptr_t RPMMaxClutched = 0x0094;
		constexpr uintptr_t RPMAccelFactor = 0x0098;
		constexpr uintptr_t RPMDecelFactor = 0x009C;
		constexpr uintptr_t RPMAccelBoostStart = 0x00A0;
		constexpr uintptr_t RPMAccelBoostEnd = 0x00A4;
		constexpr uintptr_t RPMShiftUpBoost = 0x00A8;
		constexpr uintptr_t RPMMaxLoad = 0x00AC;
		constexpr uintptr_t EngineLoadSmoothFactor = 0x00B0;
		constexpr uintptr_t AirMaxThrottleTime = 0x00B4;
		constexpr uintptr_t RevLimitRPM = 0x00B8;
		constexpr uintptr_t RevLimitRPMDecel = 0x00BC;
	}

	namespace EngineAudioREVComponent_TA {
		constexpr uintptr_t Profile = 0x0100;
		constexpr uintptr_t PhysicsSim = 0x0108;
		constexpr uintptr_t RevLimiter = 0x0110;
		constexpr uintptr_t Reverse = 0x0118;
		constexpr uintptr_t VelocitySync = 0x0120;
		constexpr uintptr_t Boost = 0x0128;
		constexpr uintptr_t BoostLevel = 0x0130;
		constexpr uintptr_t Resistance = 0x0138;
		constexpr uintptr_t GearManager = 0x0140;
		constexpr uintptr_t FAkRevSimFrame = 0x0148;
		constexpr uintptr_t FAkRevSimUpdateParams = 0x0158;
	}

	namespace EngineAudioRevSimBoostLevel_TA {
		constexpr uintptr_t ActivatedInterpTime = 0x0070;
		constexpr uintptr_t InactiveInterpTime = 0x0074;
		constexpr uintptr_t InterpExp = 0x0078;
		constexpr uintptr_t ActivatedSpeedSq = 0x007C;
		constexpr uintptr_t InterpTime = 0x0080;
		constexpr uintptr_t InterpValue = 0x0084;
		constexpr uintptr_t InterpTimeElapsed = 0x0088;
		constexpr uintptr_t TargetValue = 0x008C;
	}

	namespace EngineAudioRevSimBoost_TA {
		constexpr uintptr_t InterpTime = 0x0070;
		constexpr uintptr_t InterpScale = 0x0074;
		constexpr uintptr_t InterpExp = 0x0078;
		constexpr uintptr_t ActiveTime = 0x007C;
	}

	namespace EngineAudioRevSimGearManager_TA {
		constexpr uintptr_t RealGear = 0x0070;
		constexpr uintptr_t FakeGear = 0x0074;
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t TimeRemaining = 0x007C;
		constexpr uintptr_t SilentDownShiftDelay = 0x0080;
	}

	namespace EngineAudioRevSimLimiter_TA {
		constexpr uintptr_t LimitTime = 0x0070;
		constexpr uintptr_t SideSpeedThresh = 0x0074;
		constexpr uintptr_t DecelScale = 0x0078;
		constexpr uintptr_t AirMaxThrottleTime = 0x007C;
		constexpr uintptr_t TimeRemaining = 0x0080;
		constexpr uintptr_t TimeActiveInAir = 0x0084;
	}

	namespace EngineAudioRevSimResistance_TA {
		constexpr uintptr_t Clutched = 0x0070;
		constexpr uintptr_t ZScale = 0x0074;
		constexpr uintptr_t FInterpCurveFloat = 0x0078;
		constexpr uintptr_t SideFriction = 0x0090;
		constexpr uintptr_t ZFriction = 0x0094;
		constexpr uintptr_t SideAngle = 0x0098;
	}

	namespace EngineAudioRevSimReverse_TA {
		constexpr uintptr_t ReverseGearScale = 0x0070;
	}

	namespace EngineAudioRevSimVelocitySync_TA {
		constexpr uintptr_t NoThrottleTime = 0x0070;
		constexpr uintptr_t NoThrottleTimeElapsed = 0x0074;
		constexpr uintptr_t RealToSimScale = 0x0078;
		constexpr uintptr_t InterpSpeed = 0x007C;
		constexpr uintptr_t InterpTime = 0x0080;
		constexpr uintptr_t InterpTimeLeft = 0x0084;
		constexpr uintptr_t FirstGearThrottleThreshold = 0x0088;
	}

	namespace EngineShare_TA {
		constexpr uintptr_t Bitfields_0x0170 = 0x0170;
		constexpr uintptr_t ReplayManager = 0x0178;
		constexpr uintptr_t AdManager = 0x0180;
		constexpr uintptr_t OnlineProductStore = 0x0188;
		constexpr uintptr_t PhysicsFramerate = 0x0190;
		constexpr uintptr_t MaxPhysicsSubsteps = 0x0194;
		constexpr uintptr_t MaxUploadedClientFrames = 0x0198;
		constexpr uintptr_t MaxClientReplayFrames = 0x019C;
		constexpr uintptr_t PhysicsFrame = 0x01A0;
		constexpr uintptr_t RenderAlpha = 0x01A4;
		constexpr uintptr_t ReplicatedPhysicsFrame = 0x01A8;
		constexpr uintptr_t DirtyPhysicsFrame = 0x01AC;
		constexpr uintptr_t ForceCorrectionFrames = 0x01B0;
		constexpr uintptr_t TickNotifies = 0x01B8;
		constexpr uintptr_t TickNotifyIndex = 0x01C8;
		constexpr uintptr_t FString = 0x01D0;
		constexpr uintptr_t SystemSettingsManager = 0x01E0;
		constexpr uintptr_t DebugClientCorrectionStartTime = 0x01E8;
		constexpr uintptr_t DebugClientCorrectionCount = 0x01EC;
		constexpr uintptr_t StatGraphs = 0x01F0;
		constexpr uintptr_t PhysicsConfig = 0x01F8;
		constexpr uintptr_t InputBuffers = 0x0200;
		constexpr uintptr_t LastPhysicsDeltaTimeScale = 0x0210;
	}

	namespace EpicAccountSave_TA {
		constexpr uintptr_t LinkedPlatforms = 0x00C8;
		constexpr uintptr_t ConvertFriendsData = 0x00D8;
		constexpr uintptr_t SentEOSFriendInvites = 0x00E8;
	}

	namespace EpicFriendsConverterConfig_TA {
		constexpr uintptr_t SecondsBetweenInvites = 0x0078;
		constexpr uintptr_t MaxNumberOfAttemptsPerUser = 0x007C;
	}

	namespace EpicFriendsConverter_TA {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
		constexpr uintptr_t EpicSave = 0x0068;
		constexpr uintptr_t InvitesToSend = 0x0070;
		constexpr uintptr_t LocalPlayerId = 0x0080;
		constexpr uintptr_t EpicFriendsConverterConfig = 0x0088;
		constexpr uintptr_t EOSSubsystem = 0x0090;
		constexpr uintptr_t FriendsPlugin = 0x0098;
		constexpr uintptr_t SecondsBetweenInvites = 0x00A0;
		constexpr uintptr_t NumFailedAttempts = 0x00A4;
	}

	namespace Errors_TA {
		constexpr uintptr_t ReplayImport = 0x0080;
		constexpr uintptr_t ReplayExport = 0x0088;
		constexpr uintptr_t ReplayNoReplay = 0x0090;
		constexpr uintptr_t ReplayExportNoSpace = 0x0098;
		constexpr uintptr_t UpdateRequired = 0x00A0;
		constexpr uintptr_t TradeInMaxed = 0x00A8;
		constexpr uintptr_t OrderNotFound = 0x00B0;
		constexpr uintptr_t InventoryOutOfSync = 0x00B8;
		constexpr uintptr_t TimedOut = 0x00C0;
		constexpr uintptr_t TrainingModeNotFound = 0x00C8;
		constexpr uintptr_t TrainingModeDownloadFailed = 0x00D0;
		constexpr uintptr_t TrainingModeInvalidFavoritedCodes = 0x00D8;
		constexpr uintptr_t TrainingModeListPlayerTrainingFailed = 0x00E0;
		constexpr uintptr_t TrainingModeAddFailed = 0x00E8;
		constexpr uintptr_t TrainingModeUpdateFailed = 0x00F0;
		constexpr uintptr_t TrainingNameInvalid = 0x00F8;
		constexpr uintptr_t CodeIsNotValid = 0x0100;
		constexpr uintptr_t CodeHasBeenRedeemed = 0x0108;
		constexpr uintptr_t CodeMaxIncorrectAttempts = 0x0110;
		constexpr uintptr_t PlayerAlreadyLinked = 0x0118;
		constexpr uintptr_t InvalidPlayerPlatformAuth = 0x0120;
		constexpr uintptr_t OnlineAchievementsSaveDataNotFound = 0x0128;
		constexpr uintptr_t ShopItemPlayerPurchaseMax = 0x0130;
		constexpr uintptr_t MicrotransactionProductPurchaseLimitReached = 0x0138;
		constexpr uintptr_t TwoFactorAuthenticationRequired = 0x0140;
		constexpr uintptr_t MatchHasConcluded = 0x0148;
		constexpr uintptr_t InvalidRocketPassPurchase = 0x0150;
	}

	namespace EulaConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t ExcludedPlatforms = 0x0080;
		constexpr uintptr_t IgnoredHashIds = 0x0090;
	}

	namespace EulaSave_TA {
		constexpr uintptr_t AcceptedEulas = 0x00C8;
		constexpr uintptr_t ResetCounter = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
	}

	namespace Eula_TA {
		constexpr uintptr_t EulaConfig = 0x0090;
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
	}

	namespace EventsPageConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t ButtonTexture_Default = 0x00C0;
		constexpr uintptr_t ButtonTexture_Hover = 0x00C8;
		constexpr uintptr_t ButtonTexture_Click = 0x00D0;
	}

	namespace ExclusiveInteraction_TA {
		constexpr uintptr_t ControllersWithExclusiveInputEnabled = 0x00D0;
	}

	namespace ExplosionHitHandler_TA {
		constexpr uintptr_t Bitfields_0x00F8 = 0x00F8;
		constexpr uintptr_t FMap_Mirror = 0x0100;
	}

	namespace ExplosionPreviewer_TA {
		constexpr uintptr_t ProductLoader = 0x0070;
		constexpr uintptr_t FProductInstanceID = 0x0078;
		constexpr uintptr_t ExplosionProduct = 0x0088;
		constexpr uintptr_t ExplosionInstance = 0x0090;
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t PC = 0x00A0;
	}

	namespace FXActor_BallBreakout_TA {
		constexpr uintptr_t MaxChargeSFX = 0x03D8;
		constexpr uintptr_t SwitchTeamSFX = 0x03E0;
		constexpr uintptr_t IdleSFX = 0x03E8;
		constexpr uintptr_t ResetSFX = 0x03F0;
		constexpr uintptr_t ChargeSFX = 0x03F8;
		constexpr uintptr_t DamageSFX = 0x0408;
		constexpr uintptr_t DamageEvents = 0x0418;
		constexpr uintptr_t BallBreakout = 0x0428;
		constexpr uintptr_t LastDamage = 0x0430;
		constexpr uintptr_t LastNoDamageHit = 0x0434;
	}

	namespace FXActor_BallHaunted_TA {
		constexpr uintptr_t SwitchTeamSFX = 0x03D8;
		constexpr uintptr_t IdleSFX = 0x03E0;
		constexpr uintptr_t BeamBreakSFX = 0x03E8;
		constexpr uintptr_t BallEnterTrapSFX = 0x03F0;
		constexpr uintptr_t BallExitTrapSFX = 0x03F8;
		constexpr uintptr_t BallCountdownSFX = 0x0400;
		constexpr uintptr_t DamageEvents = 0x0408;
		constexpr uintptr_t PulsePSArchetype = 0x0418;
		constexpr uintptr_t FName = 0x0420;
		constexpr uintptr_t BallPulseTimeModifier = 0x0428;
		constexpr uintptr_t BrokenBeamResetTime = 0x042C;
		constexpr uintptr_t MaxTimePercentageToPerformPulse = 0x0430;
		constexpr uintptr_t BallHaunted = 0x0438;
		constexpr uintptr_t DamageIndex = 0x0440;
		constexpr uintptr_t Bitfields_0x0444 = 0x0444;
		constexpr uintptr_t CurrentBrokenTime = 0x0448;
		constexpr uintptr_t NextPulseTime = 0x044C;
		constexpr uintptr_t PulsePSC = 0x0450;
	}

	namespace FXActor_BallPossession_TA {
		constexpr uintptr_t PossessionStaticMesh = 0x0378;
		constexpr uintptr_t MeshMaterialInstance = 0x0380;
		constexpr uintptr_t FName = 0x0388;
		constexpr uintptr_t FName = 0x0390;
		constexpr uintptr_t BallFreezeScale = 0x0398;
		constexpr uintptr_t PossessionMesh = 0x03A0;
		constexpr uintptr_t TeamOwnerInstance = 0x03A8;
	}

	namespace FXActor_BallResetWarn_TA {
		constexpr uintptr_t BallPulseTimeModifier = 0x0378;
		constexpr uintptr_t StartingPulseTime = 0x037C;
		constexpr uintptr_t TimeMultiplier = 0x0380;
		constexpr uintptr_t BallCountdownSFX = 0x0388;
		constexpr uintptr_t BallTeleportSFX = 0x0390;
		constexpr uintptr_t PulsePSArchetype = 0x0398;
		constexpr uintptr_t FName = 0x03A0;
		constexpr uintptr_t PulsePSC = 0x03A8;
		constexpr uintptr_t Ball = 0x03B0;
		constexpr uintptr_t ElapsedTime = 0x03B8;
		constexpr uintptr_t NextPulseTime = 0x03BC;
	}

	namespace FXActor_Ball_TA {
		constexpr uintptr_t SuperSonicSpeed = 0x0378;
		constexpr uintptr_t MaxGoalProximityDistance = 0x037C;
		constexpr uintptr_t BallFadeInSpeed = 0x0380;
		constexpr uintptr_t BallFadeOutSpeed = 0x0384;
		constexpr uintptr_t TrailOpacityLerpSpeed = 0x0388;
		constexpr uintptr_t CurrentTrailOpacity = 0x038C;
		constexpr uintptr_t BallFadeSpeed = 0x0390;
		constexpr uintptr_t BallFadeOpacity = 0x0394;
		constexpr uintptr_t ShockwaveParamMin = 0x0398;
		constexpr uintptr_t ShockwaveParamMax = 0x039C;
		constexpr uintptr_t ShockwaveParamTime = 0x03A0;
		constexpr uintptr_t InAirState = 0x03A8;
		constexpr uintptr_t SuperSonicState = 0x03B0;
		constexpr uintptr_t Ball = 0x03B8;
		constexpr uintptr_t TouchingWorldTime = 0x03C0;
		constexpr uintptr_t Bitfields_0x03C4 = 0x03C4;
		constexpr uintptr_t CurrentTrailDilation = 0x03C8;
		constexpr uintptr_t MaxTrailDilation = 0x03CC;
		constexpr uintptr_t FName = 0x03D0;
	}

	namespace FXActor_Boost_TA {
		constexpr uintptr_t ParametersPerExtraBoostSockets = 0x0378;
		constexpr uintptr_t BodyParticleParameters = 0x0388;
		constexpr uintptr_t DryFireSound = 0x0398;
		constexpr uintptr_t FLinearColor = 0x03A0;
		constexpr uintptr_t BoostMeshMaterialParams = 0x03B0;
		constexpr uintptr_t BoostMeshMaterialOverrides = 0x03C0;
		constexpr uintptr_t BoostMeshArchetype = 0x03D0;
		constexpr uintptr_t BoostMesh = 0x03D8;
		constexpr uintptr_t FRandomRange = 0x03E0;
		constexpr uintptr_t FRandomRange = 0x03E8;
		constexpr uintptr_t MultipleBoostsOverride = 0x03F0;
		constexpr uintptr_t BoostEmitterSocketBehavior = 0x0400;
		constexpr uintptr_t PreviewParticleOverrides = 0x0408;
		constexpr uintptr_t Bitfields_0x0418 = 0x0418;
		constexpr uintptr_t MaxBoostMeshMaterialTime = 0x041C;
		constexpr uintptr_t Vehicle = 0x0420;
		constexpr uintptr_t CarPreview = 0x0428;
		constexpr uintptr_t CarMesh = 0x0430;
	}

	namespace FXActor_BreakoutPlatform_TA {
		constexpr uintptr_t PlatformMaterial = 0x0378;
		constexpr uintptr_t RaysMaterial = 0x0380;
		constexpr uintptr_t FName = 0x0388;
		constexpr uintptr_t DamagedParams = 0x0390;
		constexpr uintptr_t BrokenParams = 0x03A0;
		constexpr uintptr_t DamageSFX = 0x03B0;
		constexpr uintptr_t DirectBreakSFX = 0x03B8;
		constexpr uintptr_t IndirectBreakSFX = 0x03C0;
		constexpr uintptr_t DamageDistanceSpeed = 0x03C8;
		constexpr uintptr_t DamagedState = 0x03D0;
		constexpr uintptr_t BrokenState = 0x03D8;
		constexpr uintptr_t BreakoutPlatform = 0x03E0;
		constexpr uintptr_t MIC = 0x03E8;
		constexpr uintptr_t RaysMIC = 0x03F0;
		constexpr uintptr_t DamageState = 0x03F8;
		constexpr uintptr_t DamageTime = 0x03FC;
		constexpr uintptr_t BrokenTime = 0x0400;
		constexpr uintptr_t RemainingTime = 0x0404;
	}

	namespace FXActor_Car_Knockout_TA {
		constexpr uintptr_t StateEvents = 0x0498;
		constexpr uintptr_t MVPEvent = 0x04A8;
	}

	namespace FXActor_Car_TA {
		constexpr uintptr_t WheelEffectsMap = 0x0378;
		constexpr uintptr_t AkWheelImpactSound = 0x0380;
		constexpr uintptr_t AkWheelDriveSound = 0x0388;
		constexpr uintptr_t AkEnterSupersonicSound = 0x0390;
		constexpr uintptr_t AkLoopSupersonicSound = 0x0398;
		constexpr uintptr_t MinImpactMomentum = 0x03A0;
		constexpr uintptr_t FName = 0x03A4;
		constexpr uintptr_t FName = 0x03AC;
		constexpr uintptr_t WheelImpactShake = 0x03B8;
		constexpr uintptr_t WheelImpactForceFeedback = 0x03C0;
		constexpr uintptr_t FInterpCurveFloat = 0x03C8;
		constexpr uintptr_t SupersonicWheelTemplate = 0x03E0;
		constexpr uintptr_t BoostGlowRate = 0x03E8;
		constexpr uintptr_t ShakeComponent = 0x03F0;
		constexpr uintptr_t Vehicle = 0x03F8;
		constexpr uintptr_t Bitfields_0x0400 = 0x0400;
		constexpr uintptr_t ThrottleState = 0x0408;
		constexpr uintptr_t SuperSonicState = 0x0410;
		constexpr uintptr_t InAirState = 0x0418;
		constexpr uintptr_t BoostState = 0x0420;
		constexpr uintptr_t BoostPreviewState = 0x0428;
		constexpr uintptr_t BoostFlyState = 0x0430;
		constexpr uintptr_t OnWallState = 0x0438;
		constexpr uintptr_t SuperSonicEndState = 0x0440;
		constexpr uintptr_t PMCAnimBeginState = 0x0448;
		constexpr uintptr_t PMCAnimEndState = 0x0450;
		constexpr uintptr_t ContactPhysMat = 0x0458;
		constexpr uintptr_t ContactPhysMatProp = 0x0460;
		constexpr uintptr_t WheelEffects = 0x0468;
		constexpr uintptr_t WheelEffectsParticle = 0x0478;
		constexpr uintptr_t CarMesh = 0x0480;
		constexpr uintptr_t MaxActorsGroup = 0x0488;
		constexpr uintptr_t BoostGlow = 0x0490;
	}

	namespace FXActor_GameEditorActor_TA {
		constexpr uintptr_t SpeedMultiplier = 0x0328;
		constexpr uintptr_t EditingState = 0x0330;
		constexpr uintptr_t FVector = 0x0338;
	}

	namespace FXActor_Knockout_Attack_TA {
		constexpr uintptr_t AttackType = 0x0378;
		constexpr uintptr_t AttackEvents = 0x0380;
	}

	namespace FXActor_SafeZone_Knockout_TA {
		constexpr uintptr_t SafeZones = 0x0378;
		constexpr uintptr_t EliminationSafeZones = 0x0388;
		constexpr uintptr_t NonEliminationSafeZones = 0x0398;
		constexpr uintptr_t GameEvent = 0x03A8;
		constexpr uintptr_t LastZoneIndex = 0x03B0;
		constexpr uintptr_t StateEvents = 0x03B8;
	}

	namespace FXActor_TA {
		constexpr uintptr_t HideWorldUIState = 0x0328;
		constexpr uintptr_t PreviewState = 0x0330;
		constexpr uintptr_t PaintedState = 0x0338;
		constexpr uintptr_t BoostEndEvent = 0x0340;
		constexpr uintptr_t StartOfReplayEvent = 0x0348;
		constexpr uintptr_t TeamStates = 0x0350;
		constexpr uintptr_t MyTeamState = 0x0360;
		constexpr uintptr_t OpposingTeamState = 0x0368;
		constexpr uintptr_t LocalPlayerAudioParamsComponent = 0x0370;
	}

	namespace FXActor_TrainingEditor_TA {
		constexpr uintptr_t AdjustSpeedStateRemoveDelay = 0x0328;
		constexpr uintptr_t AkBallSpeedDirectionChange = 0x0330;
		constexpr uintptr_t SimulatingBallState = 0x0338;
		constexpr uintptr_t AdjustingSpeedState = 0x0340;
		constexpr uintptr_t PlaytestingState = 0x0348;
		constexpr uintptr_t GameEvent = 0x0350;
		constexpr uintptr_t PrevLaunchSpeed = 0x0358;
		constexpr uintptr_t PrevLaunchSpeedSign = 0x035C;
	}

	namespace FXExplosionHandler_TA {
		constexpr uintptr_t FXToApply = 0x0150;
	}

	namespace FXTrait_BoostParticle_TA {
		constexpr uintptr_t ParticlePreview = 0x0060;
		constexpr uintptr_t DuplicateParticle = 0x0068;
		constexpr uintptr_t DuplicateParticlePreview = 0x0070;
		constexpr uintptr_t SharedParameters = 0x0078;
		constexpr uintptr_t DuplicateParameters = 0x0088;
		constexpr uintptr_t PreviewOverrideParameters = 0x0098;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
	}

	namespace FXTrait_PreviewParticle_TA {
		constexpr uintptr_t ParticlePreview = 0x0060;
		constexpr uintptr_t OldParticle = 0x0068;
	}

	namespace FaceItClientReservationMessage_X {
		constexpr uintptr_t FServerReservationData = 0x0060;
		constexpr uintptr_t FFaceItMatchInfo = 0x00D0;
		constexpr uintptr_t Expiration = 0x0150;
		constexpr uintptr_t OfflineTimeToLiveSeconds = 0x0158;
	}

	namespace FaceItConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t PartnerNames = 0x0080;
		constexpr uintptr_t FString = 0x0090;
	}

	namespace FaceItErrors_TA {
		constexpr uintptr_t MatchHasBeenCancelled = 0x0080;
		constexpr uintptr_t CannotJoinCrossPlatformMatch = 0x0088;
		constexpr uintptr_t CannotJoinWhileInParty = 0x0090;
		constexpr uintptr_t CannotJoinWhilePlayingSplitscreen = 0x0098;
		constexpr uintptr_t CannotJoinWhileOnline = 0x00A0;
		constexpr uintptr_t ReturnToMainMenuToJoin = 0x00A8;
		constexpr uintptr_t JoinGameFailed = 0x00B0;
		constexpr uintptr_t NoFaceItMatchFound = 0x00B8;
		constexpr uintptr_t FaceItGameServerPending = 0x00C0;
		constexpr uintptr_t ExternalMatchServerNotFound = 0x00C8;
		constexpr uintptr_t ReservationSentToIncorrectPlayer = 0x00D0;
	}

	namespace FaceItFindServerTask_TA {
		constexpr uintptr_t SearchTimeout = 0x00D0;
		constexpr uintptr_t RPC = 0x00D8;
	}

	namespace FaceItMatchNotification_TA {
		constexpr uintptr_t FServerReservationData = 0x0170;
		constexpr uintptr_t FFaceItMatchInfo = 0x01E0;
	}

	namespace FaceIt_TA {
		constexpr uintptr_t FFaceItMatchInfo = 0x0060;
		constexpr uintptr_t FServerReservationData = 0x00E0;
		constexpr uintptr_t JoinTask = 0x0150;
		constexpr uintptr_t Config = 0x0158;
		constexpr uintptr_t OnlineGame = 0x0160;
		constexpr uintptr_t OnlineGameParty = 0x0168;
		constexpr uintptr_t PendingFindMatchTask = 0x0170;
	}

	namespace FirstTimeExperienceManager_TA {
		constexpr uintptr_t Versioning = 0x0060;
		constexpr uintptr_t FTEGroups = 0x0068;
		constexpr uintptr_t FTELevelInfo = 0x0078;
		constexpr uintptr_t FTERedefine = 0x0088;
		constexpr uintptr_t FFTEGroup = 0x0090;
		constexpr uintptr_t CurrentCheckpointIndex = 0x00D8;
		constexpr uintptr_t FName = 0x00DC;
		constexpr uintptr_t FTESave = 0x00E8;
		constexpr uintptr_t LegacySave = 0x00F0;
		constexpr uintptr_t ChallengeCompleteInfo = 0x00F8;
		constexpr uintptr_t ActiveTriggers = 0x0108;
		constexpr uintptr_t UnnamedMember_0x0118 = 0x0118;
	}

	namespace FirstTimeExperienceRedefinition_TA {
		constexpr uintptr_t FTERedefinedInfo = 0x0060;
		constexpr uintptr_t Bitfields_0x0070 = 0x0070;
	}

	namespace FirstTimeExperienceSave_TA {
		constexpr uintptr_t CompletedFTEs = 0x00C8;
		constexpr uintptr_t Versioning = 0x00D8;
		constexpr uintptr_t LegacyGroupType = 0x00D9;
		constexpr uintptr_t FName = 0x00DC;
		constexpr uintptr_t FName = 0x00E4;
		constexpr uintptr_t UnnamedMember_0x00EC = 0x00EC;
	}

	namespace FlockActor_TA {
		constexpr uintptr_t AgentMesh = 0x0268;
		constexpr uintptr_t FlockInstancedMesh = 0x0270;
		constexpr uintptr_t FlockSize = 0x0278;
		constexpr uintptr_t SeperationWeight = 0x027C;
		constexpr uintptr_t FVector = 0x0280;
		constexpr uintptr_t AgentSpeed = 0x028C;
		constexpr uintptr_t SeperationIdealDistance = 0x0290;
		constexpr uintptr_t Spline = 0x0298;
		constexpr uintptr_t SpawnSpreadDistanceAlongSpline = 0x02A0;
		constexpr uintptr_t Bitfields_0x02A4 = 0x02A4;
		constexpr uintptr_t WaitTimeInSeconds = 0x02A8;
		constexpr uintptr_t MinAgentScale = 0x02AC;
		constexpr uintptr_t MaxAgentScale = 0x02B0;
		constexpr uintptr_t CurrentRestartTime = 0x02B4;
		constexpr uintptr_t Agents = 0x02B8;
		constexpr uintptr_t FVector = 0x02C8;
	}

	namespace FloppyBits_TA {
		constexpr uintptr_t PhysAsset = 0x0078;
		constexpr uintptr_t FRBCollisionChannelContainer = 0x0080;
		constexpr uintptr_t SkelMesh = 0x0088;
	}

	namespace ForceVolume_TA {
		constexpr uintptr_t FPointer = 0x02A8;
		constexpr uintptr_t ForceDirection = 0x02B0;
		constexpr uintptr_t ConstantForceMode = 0x02B1;
		constexpr uintptr_t EnterForceMode = 0x02B2;
		constexpr uintptr_t ConstantForce = 0x02B4;
		constexpr uintptr_t EnterForce = 0x02B8;
		constexpr uintptr_t CustomForceDirection = 0x02C0;
	}

	namespace FpsBucketRecorder_TA {
		constexpr uintptr_t Buckets = 0x00A0;
		constexpr uintptr_t MinFPS = 0x00B0;
		constexpr uintptr_t MaxFPS = 0x00B4;
	}

	namespace FreeToPlayConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace FreeplayCommandsConfig_TA {
		constexpr uintptr_t BallSpinSpeedMultiplier = 0x0078;
		constexpr uintptr_t BallInFrontDistance = 0x007C;
		constexpr uintptr_t BallOnCarDistance = 0x0080;
		constexpr uintptr_t BallOnCarBaseForwardOffset = 0x0084;
		constexpr uintptr_t BallOnCarForwardOffsetFromTurn = 0x0088;
		constexpr uintptr_t BallOnCarAccelerationEffect = 0x008C;
		constexpr uintptr_t BallOnCarMaxRightOffset = 0x0090;
		constexpr uintptr_t BallOnCarSlowRightOffsetPerc = 0x0094;
		constexpr uintptr_t BallOnCarMinUpOffsetPerc = 0x0098;
		constexpr uintptr_t PopBallUpZVelocity = 0x009C;
		constexpr uintptr_t MaxVerticalLaunchSpeedRatio = 0x00A0;
		constexpr uintptr_t MaxVerticalLaunchSpeedRatioHoops = 0x00A4;
		constexpr uintptr_t DefendShotLaunchSpeed = 0x00A8;
		constexpr uintptr_t DefendShotLaunchSpeedHoops = 0x00AC;
		constexpr uintptr_t DefendShotLaunchSpeedBreakout = 0x00B0;
		constexpr uintptr_t DefendShotHoopsRecommendedReboundRange = 0x00B4;
		constexpr uintptr_t DefendShotHoopsSpeedDropoffRange = 0x00B8;
		constexpr uintptr_t DefendShotBreakoutSpeedDropoffRange = 0x00BC;
		constexpr uintptr_t DefendShotBreakoutSpeedDropoffRangeHeight = 0x00C0;
		constexpr uintptr_t DefendShotHoopsMinSpeedReductionAngle = 0x00C4;
		constexpr uintptr_t DefendShotHoopsAboveNetSpeedReduction = 0x00C8;
		constexpr uintptr_t DefendShotBreakoutMaxTileDistance = 0x00CC;
		constexpr uintptr_t RedirectPassLaunchSpeed = 0x00D0;
		constexpr uintptr_t RedirectPassVelocityWeight = 0x00D4;
		constexpr uintptr_t RedirectPassVelocityZWeight = 0x00D8;
		constexpr uintptr_t RedirectPassGoalWeight = 0x00DC;
		constexpr uintptr_t RedirectPassMaxGoalLeading = 0x00E0;
		constexpr uintptr_t RedirectPassAdditionalHeight = 0x00E4;
		constexpr uintptr_t RedirectPassSpeedDropoffRange = 0x00E8;
		constexpr uintptr_t RedirectPassIterations = 0x00EC;
		constexpr uintptr_t DefendShotHoopsMaxSamples = 0x00F0;
		constexpr uintptr_t DefendShotHoopsReboundDenominator = 0x00F4;
		constexpr uintptr_t TeleportSucceededSFX = 0x00F8;
		constexpr uintptr_t TeleportFailedSFX = 0x0100;
		constexpr uintptr_t LaunchBallSFX = 0x0108;
	}

	namespace FreeplayCommands_TA {
		constexpr uintptr_t SoccarGame = 0x0268;
		constexpr uintptr_t PlayerController = 0x0270;
		constexpr uintptr_t FreeplayConfig = 0x0278;
		constexpr uintptr_t ActivatedCommandsMaxLength = 0x0280;
		constexpr uintptr_t ActivatedCommands = 0x0288;
		constexpr uintptr_t LastResetTime = 0x0298;
		constexpr uintptr_t ResetCooldown = 0x029C;
	}

	namespace FreeplayConfig_TA {
		constexpr uintptr_t DefaultBoostRechargeDelay = 0x0078;
		constexpr uintptr_t BoostRechargeRate = 0x007C;
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace FreeplayErrors_TA {
		constexpr uintptr_t NoCar = 0x0080;
		constexpr uintptr_t NoBall = 0x0088;
		constexpr uintptr_t NoClosestGoal = 0x0090;
		constexpr uintptr_t TeleportFailed = 0x0098;
		constexpr uintptr_t InvalidHoopsGoal = 0x00A0;
		constexpr uintptr_t InvalidBreakoutGame = 0x00A8;
		constexpr uintptr_t StillInResetCooldown = 0x00B0;
	}

	namespace FreeplaySessionManager_TA {
		constexpr uintptr_t FreeplayCommands = 0x0268;
		constexpr uintptr_t SoccarEvent = 0x0270;
		constexpr uintptr_t Bitfields_0x0278 = 0x0278;
		constexpr uintptr_t FFreeplaySettings = 0x027C;
		constexpr uintptr_t DefaultBoostRechargeRate = 0x0280;
		constexpr uintptr_t DefaultBoostRechargeDelay = 0x0284;
		constexpr uintptr_t OnlineFreeplaySettings = 0x0288;
	}

	namespace FriendRequestNotification_TA {
		constexpr uintptr_t FUniqueNetId = 0x0170;
	}

	namespace FriendsListBuilder_TA {
		constexpr uintptr_t PlatformFriends = 0x0060;
		constexpr uintptr_t EpicFriends = 0x0070;
		constexpr uintptr_t AllFriends = 0x0080;
	}

	namespace GFxClubAction_TA {
		constexpr uintptr_t Task = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t GFxClubsOwner = 0x0078;
	}

	namespace GFxData_AdHoc_TA {
		constexpr uintptr_t AdHocDesiredState = 0x0098;
		constexpr uintptr_t AdHocState = 0x0099;
	}

	namespace GFxData_AutoTour_CompletedResults_TA {
		constexpr uintptr_t PsyNet = 0x0098;
		constexpr uintptr_t Tournaments = 0x00A0;
		constexpr uintptr_t Config = 0x00A8;
		constexpr uintptr_t AutoTour = 0x00B0;
		constexpr uintptr_t CycleID = 0x00B8;
		constexpr uintptr_t WeekIndex = 0x00C0;
		constexpr uintptr_t Bitfields_0x00C4 = 0x00C4;
		constexpr uintptr_t FTournamentResult = 0x00C8;
		constexpr uintptr_t OldWeeklyResults = 0x00D8;
		constexpr uintptr_t NewWeeklyResults = 0x00E8;
		constexpr uintptr_t CurrencyRewards = 0x00F8;
		constexpr uintptr_t OldWeeklyCurrencies = 0x0108;
		constexpr uintptr_t WeeklyCurrencies = 0x0118;
		constexpr uintptr_t FinalCurrencies = 0x0128;
		constexpr uintptr_t TournamentID = 0x0138;
		constexpr uintptr_t ScheduleID = 0x0140;
		constexpr uintptr_t RejoinTournamentTime = 0x0148;
	}

	namespace GFxData_AutoTour_TA {
		constexpr uintptr_t Config = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t NumWeeksInCycle = 0x00B0;
		constexpr uintptr_t CycleScore = 0x00B4;
		constexpr uintptr_t CurrencyID = 0x00B8;
		constexpr uintptr_t UnnamedMember_0x00BC = 0x00BC;
		constexpr uintptr_t TourCards = 0x00C0;
		constexpr uintptr_t Weeks = 0x00D0;
		constexpr uintptr_t EndOfTournamentResults = 0x00E0;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t PsyNet = 0x0108;
		constexpr uintptr_t Tournaments = 0x0110;
		constexpr uintptr_t AutoTour = 0x0118;
	}

	namespace GFxData_AutoTour_TourCard_TA {
		constexpr uintptr_t OnlineGameTournaments = 0x0098;
		constexpr uintptr_t Settings = 0x00A0;
		constexpr uintptr_t StartTime = 0x00B0;
		constexpr uintptr_t LastTournamentTime = 0x00B8;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t ScheduleID = 0x00E0;
		constexpr uintptr_t TeamSize = 0x00E8;
		constexpr uintptr_t GameMode = 0x00EC;
		constexpr uintptr_t GameModesDisplayNames = 0x00F0;
		constexpr uintptr_t Bitfields_0x0100 = 0x0100;
	}

	namespace GFxData_AutoTour_Week_TA {
		constexpr uintptr_t Score = 0x0098;
		constexpr uintptr_t Results = 0x00A0;
	}

	namespace GFxData_BanMessage_TA {
		constexpr uintptr_t UnknownData00 = 0x0094;
	}

	namespace GFxData_BlogTile_TA {
		constexpr uintptr_t ImageTexture = 0x0098;
		constexpr uintptr_t TextureSizeX = 0x00A0;
		constexpr uintptr_t TextureSizeY = 0x00A4;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
	}

	namespace GFxData_BlueprintGarage_TA {
		constexpr uintptr_t BlueprintGarageSet = 0x0098;
		constexpr uintptr_t BlueprintPreviewProducts = 0x00A0;
		constexpr uintptr_t PendingBlueprintProduct = 0x00B0;
		constexpr uintptr_t SaveData = 0x00B8;
	}

	namespace GFxData_CarColors_TA {
		constexpr uintptr_t Custom = 0x0098;
		constexpr uintptr_t Team0 = 0x00A8;
		constexpr uintptr_t Team1 = 0x00B8;
		constexpr uintptr_t Clubs = 0x00C8;
		constexpr uintptr_t PlayerBanners = 0x00D8;
		constexpr uintptr_t PlayerVanity = 0x00E8;
	}

	namespace GFxData_CarKnockOut_TA {
		constexpr uintptr_t LivesRemaining = 0x0098;
		constexpr uintptr_t DodgesRemaining = 0x009C;
		constexpr uintptr_t JumpsRemaining = 0x00A0;
		constexpr uintptr_t StunlockAlpha = 0x00A4;
		constexpr uintptr_t StunlockType = 0x00A8;
		constexpr uintptr_t GrabbingAlpha = 0x00AC;
		constexpr uintptr_t ActiveGrabbedCar = 0x00B0;
	}

	namespace GFxData_CarRumble_TA {
		constexpr uintptr_t Items = 0x0098;
		constexpr uintptr_t SelectedItem = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00AC = 0x00AC;
		constexpr uintptr_t ItemCount = 0x00B0;
		constexpr uintptr_t PreviewTimeSeconds = 0x00B4;
		constexpr uintptr_t Pickups = 0x00B8;
	}

	namespace GFxData_ChallengeBase_TA {
		constexpr uintptr_t GFxReward = 0x0098;
		constexpr uintptr_t GFxCurrency = 0x00A0;
		constexpr uintptr_t GFxRequirement = 0x00B0;
		constexpr uintptr_t GFxUnlockChallengesRewards = 0x00C0;
		constexpr uintptr_t ModalProcessing = 0x00D0;
	}

	namespace GFxData_ChallengeFolder_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t GFxParentFolder = 0x00A0;
		constexpr uintptr_t GFxSubFolders = 0x00A8;
		constexpr uintptr_t SubFolderClass = 0x00B8;
	}

	namespace GFxData_ChallengeManager_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t ActiveChallengeFilter = 0x00A8;
		constexpr uintptr_t ChallengeManager = 0x00B0;
		constexpr uintptr_t GFxChallengePages = 0x00B8;
		constexpr uintptr_t ChallengeFilters = 0x00C8;
	}

	namespace GFxData_ChallengeObject_TA {
		constexpr uintptr_t UnknownData00 = 0x0094;
	}

	namespace GFxData_ChallengePage_TA {
		constexpr uintptr_t ChallengeFilter = 0x00F0;
	}

	namespace GFxData_ChallengeTab_TA {
		constexpr uintptr_t ChallengeManager = 0x00F0;
		constexpr uintptr_t TotalNormalChallenges = 0x00F8;
		constexpr uintptr_t CompletedNormalChallenges = 0x00FC;
		constexpr uintptr_t TotalPremiumChallenges = 0x0100;
		constexpr uintptr_t CompletedPremiumChallenges = 0x0104;
		constexpr uintptr_t UnnamedMember_0x0108 = 0x0108;
	}

	namespace GFxData_Chat_TA {
		constexpr uintptr_t MaxMessages = 0x0098;
		constexpr uintptr_t PresetGroups = 0x00A0;
		constexpr uintptr_t PresetMessages = 0x00B0;
		constexpr uintptr_t Messages = 0x00C0;
		constexpr uintptr_t UnnamedMember_0x00D0 = 0x00D0;
		constexpr uintptr_t LastMessagedCrossPlatformChatState = 0x00D4;
		constexpr uintptr_t ChatHistory = 0x00D8;
		constexpr uintptr_t MaxNumGroups = 0x00E0;
		constexpr uintptr_t MaxNumMessagesPerGroup = 0x00E4;
		constexpr uintptr_t FChatPresetGroupOverride = 0x00E8;
		constexpr uintptr_t FChatPresetGroupOverride = 0x0108;
		constexpr uintptr_t AprilConfig = 0x0128;
	}

	namespace GFxData_ClientPerformanceStats_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
	}

	namespace GFxData_ClubDetails_TA {
		constexpr uintptr_t ClubID = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t PrimaryColorID = 0x00C0;
		constexpr uintptr_t AccentColorID = 0x00C4;
		constexpr uintptr_t FUniqueNetId = 0x00C8;
		constexpr uintptr_t Bitfields_0x0110 = 0x0110;
		constexpr uintptr_t FName = 0x0114;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FColor = 0x0130;
		constexpr uintptr_t FColor = 0x0134;
		constexpr uintptr_t AssistBadgeSeasonTier = 0x0138;
		constexpr uintptr_t GoalBadgeSeasonTier = 0x0139;
		constexpr uintptr_t SaveBadgeSeasonTier = 0x013A;
		constexpr uintptr_t ClubDetails = 0x0140;
		constexpr uintptr_t ClubMembers = 0x0148;
		constexpr uintptr_t WordFilter = 0x0158;
		constexpr uintptr_t CrossplayConfig = 0x0160;
		constexpr uintptr_t Personas = 0x0168;
	}

	namespace GFxData_ClubInvite_TA {
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t Invite = 0x0148;
	}

	namespace GFxData_ClubMember_TA {
		constexpr uintptr_t ClubID = 0x0098;
		constexpr uintptr_t FUniqueNetId = 0x00A0;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t Avatar = 0x00F8;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t OnlineSubsytem = 0x0110;
		constexpr uintptr_t WordFilter = 0x0118;
		constexpr uintptr_t OnlineGame = 0x0120;
	}

	namespace GFxData_ClubServerBrowser_TA {
		constexpr uintptr_t ServerList = 0x0098;
		constexpr uintptr_t Servers = 0x00A0;
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
	}

	namespace GFxData_Clubs_TA {
		constexpr uintptr_t LocalClubID = 0x0098;
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
		constexpr uintptr_t LocalPlayerClubRole = 0x00A4;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t LocalAvailableClubTitles = 0x00C8;
		constexpr uintptr_t LocalClubMembers = 0x00D8;
		constexpr uintptr_t PsyNet = 0x00E8;
		constexpr uintptr_t ClubProvider = 0x00F0;
		constexpr uintptr_t ClubsConfig = 0x00F8;
		constexpr uintptr_t TitleConfig = 0x0100;
		constexpr uintptr_t Party = 0x0108;
		constexpr uintptr_t PersonasData = 0x0110;
		constexpr uintptr_t ClubManager = 0x0118;
		constexpr uintptr_t AllClubDetails = 0x0120;
		constexpr uintptr_t LocalClubDetails = 0x0130;
		constexpr uintptr_t CurrentClubAction = 0x0138;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t FString = 0x0150;
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t FString = 0x0180;
		constexpr uintptr_t FString = 0x0190;
		constexpr uintptr_t FString = 0x01A0;
		constexpr uintptr_t FString = 0x01B0;
		constexpr uintptr_t FString = 0x01C0;
		constexpr uintptr_t FString = 0x01D0;
		constexpr uintptr_t FString = 0x01E0;
		constexpr uintptr_t FString = 0x01F0;
		constexpr uintptr_t FString = 0x0200;
		constexpr uintptr_t ClubMilestoneDataRPC = 0x0210;
		constexpr uintptr_t ClubAvailableTitlesRPC = 0x0218;
		constexpr uintptr_t LastMilestoneDataRequestTime = 0x0220;
		constexpr uintptr_t MatchesPlayed = 0x0228;
		constexpr uintptr_t WinPercent = 0x022C;
		constexpr uintptr_t FString = 0x0230;
		constexpr uintptr_t PreviousSeasonBadges = 0x0240;
		constexpr uintptr_t MilestoneStatDisplayNames = 0x0250;
		constexpr uintptr_t SeasonMilestoneData = 0x0260;
		constexpr uintptr_t Stats = 0x0270;
		constexpr uintptr_t AssistStat = 0x0280;
		constexpr uintptr_t GoalStat = 0x0284;
		constexpr uintptr_t SaveStat = 0x0288;
		constexpr uintptr_t WinStatEvent = 0x0290;
		constexpr uintptr_t TimePlayedStatEvent = 0x0298;
		constexpr uintptr_t GoalStatEvent = 0x02A0;
		constexpr uintptr_t AerialGoalStatEvent = 0x02A8;
		constexpr uintptr_t LongGoalStatEvent = 0x02B0;
		constexpr uintptr_t BackwardsGoalStatEvent = 0x02B8;
		constexpr uintptr_t OvertimeGoalStatEvent = 0x02C0;
		constexpr uintptr_t TurtleGoalStatEvent = 0x02C8;
		constexpr uintptr_t AssistStatEvent = 0x02D0;
		constexpr uintptr_t PlaymakerStatEvent = 0x02D8;
		constexpr uintptr_t SaveStatEvent = 0x02E0;
		constexpr uintptr_t EpicSaveStatEvent = 0x02E8;
		constexpr uintptr_t SaviorStatEvent = 0x02F0;
		constexpr uintptr_t ShotStatEvent = 0x02F8;
		constexpr uintptr_t CenterStatEvent = 0x0300;
		constexpr uintptr_t ClearStatEvent = 0x0308;
		constexpr uintptr_t AerialHitStatEvent = 0x0310;
		constexpr uintptr_t BicycleHitStatEvent = 0x0318;
		constexpr uintptr_t JuggleHitStatEvent = 0x0320;
		constexpr uintptr_t DemolishStatEvent = 0x0328;
		constexpr uintptr_t DemolitionStatEvent = 0x0330;
		constexpr uintptr_t FirstTouchStatEvent = 0x0338;
		constexpr uintptr_t PoolShotStatEvent = 0x0340;
		constexpr uintptr_t LowFiveStatEvent = 0x0348;
		constexpr uintptr_t HighFiveStatEvent = 0x0350;
		constexpr uintptr_t BreakoutDamageStatEvent = 0x0358;
		constexpr uintptr_t BreakoutDamageLargeStatEvent = 0x0360;
		constexpr uintptr_t HoopsSwishGoalStatEvent = 0x0368;
		constexpr uintptr_t FString = 0x0370;
		constexpr uintptr_t FString = 0x0380;
		constexpr uintptr_t FString = 0x0390;
		constexpr uintptr_t FString = 0x03A0;
		constexpr uintptr_t FString = 0x03B0;
		constexpr uintptr_t FString = 0x03C0;
		constexpr uintptr_t FString = 0x03D0;
		constexpr uintptr_t FString = 0x03E0;
		constexpr uintptr_t FString = 0x03F0;
		constexpr uintptr_t FString = 0x0400;
		constexpr uintptr_t FString = 0x0410;
		constexpr uintptr_t FString = 0x0420;
		constexpr uintptr_t ActionsOwnerToManager = 0x0430;
		constexpr uintptr_t ActionsOwnerToMember = 0x0440;
		constexpr uintptr_t ActionsManagerToOwner = 0x0450;
		constexpr uintptr_t ActionsManagerToManager = 0x0460;
		constexpr uintptr_t ActionsManagerToMember = 0x0470;
		constexpr uintptr_t ActionsMember = 0x0480;
	}

	namespace GFxData_Community_TA {
		constexpr uintptr_t GFxBlogTiles = 0x0098;
		constexpr uintptr_t Config = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t Cache = 0x00C0;
		constexpr uintptr_t ShopNotificationsManager = 0x00C8;
		constexpr uintptr_t Bitfields_0x00D0 = 0x00D0;
	}

	namespace GFxData_ConnectionStats_TA {
		constexpr uintptr_t ConnectionQualityConfig = 0x0098;
	}

	namespace GFxData_ContainerDrops_TA {
		constexpr uintptr_t ContainerDropList = 0x0098;
		constexpr uintptr_t ContainerDropsSet = 0x00A8;
		constexpr uintptr_t GetDropTableTask = 0x00B0;
	}

	namespace GFxData_Controls_TA {
		constexpr uintptr_t Categories = 0x0098;
		constexpr uintptr_t Actions = 0x00A8;
		constexpr uintptr_t PCBindings = 0x00B8;
		constexpr uintptr_t GamepadBindings = 0x00C8;
		constexpr uintptr_t Profile = 0x00D8;
		constexpr uintptr_t GamepadSave = 0x00E0;
		constexpr uintptr_t BindingActions = 0x00E8;
		constexpr uintptr_t FName = 0x00F8;
		constexpr uintptr_t FName = 0x0100;
		constexpr uintptr_t Interaction = 0x0108;
		constexpr uintptr_t ProfilePCSave = 0x0110;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t FString = 0x0158;
	}

	namespace GFxData_Credits_TA {
		constexpr uintptr_t LocalizedDepartmentGroups = 0x0098;
		constexpr uintptr_t LocalizedCopyrightGroups = 0x00A8;
		constexpr uintptr_t LocalizedMusicGroups = 0x00B8;
		constexpr uintptr_t DepartmentGroups = 0x00C8;
		constexpr uintptr_t CopyrightGroups = 0x00D8;
		constexpr uintptr_t MusicGroups = 0x00E8;
	}

	namespace GFxData_CrumbTrails_TA {
		constexpr uintptr_t TrailNames = 0x0098;
		constexpr uintptr_t CrumbsMgr = 0x00A8;
	}

	namespace GFxData_CustomTeams_TA {
		constexpr uintptr_t Settings = 0x0098;
		constexpr uintptr_t SettingsType = 0x00A8;
		constexpr uintptr_t TeamColors = 0x00B0;
		constexpr uintptr_t CustomColors = 0x00C0;
		constexpr uintptr_t TAPlayer = 0x00D0;
		constexpr uintptr_t PreviewTeam = 0x00D8;
		constexpr uintptr_t PreviewSet = 0x00E0;
		constexpr uintptr_t PreviewColors = 0x00E8;
	}

	namespace GFxData_DLC_TA {
		constexpr uintptr_t Packs = 0x0098;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
		constexpr uintptr_t MtxConfig = 0x00B0;
		constexpr uintptr_t OnlineSub = 0x00B8;
		constexpr uintptr_t MTX = 0x00C0;
		constexpr uintptr_t TimeWhenClientLostFocus = 0x00C8;
	}

	namespace GFxData_DynamicLogos_TA {
		constexpr uintptr_t DynamicLogosConfig = 0x0098;
	}

	namespace GFxData_EOSGameClipsConfig_TA {
		constexpr uintptr_t GameClipsConfig = 0x0098;
	}

	namespace GFxData_EOSGameClipsController_TA {
		constexpr uintptr_t GameClipsManager = 0x0098;
		constexpr uintptr_t GameClipsController = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace GFxData_EOSGameClipsLocalPlayer_TA {
		constexpr uintptr_t GameClipsManager = 0x0098;
		constexpr uintptr_t GameClipsConfig = 0x00A0;
		constexpr uintptr_t CurrentGameEvent = 0x00A8;
	}

	namespace GFxData_EOSGameClipsMaskArea_TA {
		constexpr uintptr_t GameClipsManager = 0x0098;
		constexpr uintptr_t ActiveMaskAreas = 0x00A0;
		constexpr uintptr_t DrawableCanvas = 0x00B0;
		constexpr uintptr_t FColor = 0x00B8;
	}

	namespace GFxData_EOSVoiceManager_TA {
		constexpr uintptr_t TrackedRooms = 0x0098;
		constexpr uintptr_t VoiceSettingsSave = 0x00A8;
		constexpr uintptr_t SoundSettingsSave = 0x00B0;
		constexpr uintptr_t UISavedValues = 0x00B8;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t InactivePTTVolume = 0x00D8;
		constexpr uintptr_t ActivePTTVolume = 0x00DC;
		constexpr uintptr_t ViewportClient = 0x00E0;
		constexpr uintptr_t VoiceManager = 0x00E8;
		constexpr uintptr_t VoiceConfig = 0x00F0;
	}

	namespace GFxData_EOSVoiceRoomMember_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t Bitfields_0x0100 = 0x0100;
		constexpr uintptr_t Persona = 0x0108;
		constexpr uintptr_t PlayerActivity = 0x0110;
	}

	namespace GFxData_EOSVoiceRoom_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t RoomType = 0x00A8;
		constexpr uintptr_t VoiceChatFilter = 0x00A9;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t RoomMembers = 0x0188;
		constexpr uintptr_t VoiceSettingsSave = 0x0198;
		constexpr uintptr_t NotificationCooldowns = 0x01A0;
		constexpr uintptr_t CreatedTimestamp = 0x01B0;
		constexpr uintptr_t FVoiceRoomPlayerActivity = 0x01B8;
		constexpr uintptr_t MinPlayersForVoiceRecording = 0x01D8;
		constexpr uintptr_t VoiceManager = 0x01E0;
		constexpr uintptr_t Personas = 0x01E8;
		constexpr uintptr_t VoiceConfig = 0x01F0;
		constexpr uintptr_t ChatFilterManager = 0x01F8;
	}

	namespace GFxData_EOSVoiceUser_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t FName = 0x009C;
		constexpr uintptr_t FName = 0x00A4;
		constexpr uintptr_t LegacySave = 0x00B0;
		constexpr uintptr_t VoiceManager = 0x00B8;
		constexpr uintptr_t VoiceConfig = 0x00C0;
	}

	namespace GFxData_ESportConfig_TA {
		constexpr uintptr_t ESportEvents = 0x0098;
	}

	namespace GFxData_EngagementEventsConfig_TA {
		constexpr uintptr_t EngagementEvents = 0x0098;
		constexpr uintptr_t NotificationSave = 0x00A0;
		constexpr uintptr_t ValidMenus = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00B8 = 0x00B8;
		constexpr uintptr_t CurrentNotification = 0x00C0;
	}

	namespace GFxData_EpicLogin_TA {
		constexpr uintptr_t EpicAccountSave = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t EpicConfig = 0x0168;
	}

	namespace GFxData_ErrorModals_TA {
		constexpr uintptr_t GameEvent = 0x0098;
		constexpr uintptr_t PendingErrors = 0x00A0;
	}

	namespace GFxData_EventsPageBrowser_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t UIConfig = 0x00A0;
		constexpr uintptr_t EventsConfig = 0x00A8;
	}

	namespace GFxData_FaceIt_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t FaceIt = 0x00A0;
		constexpr uintptr_t Config = 0x00A8;
		constexpr uintptr_t PsyNet = 0x00B0;
		constexpr uintptr_t LastSpectatorPopupTime = 0x00B8;
		constexpr uintptr_t SpectatorPopupDelaySeconds = 0x00C0;
	}

	namespace GFxData_Features_TA {
		constexpr uintptr_t DeprecatedPermanentFeatures = 0x0098;
	}

	namespace GFxData_FirstTimeExperience_TA {
		constexpr uintptr_t FName = 0x0098;
		constexpr uintptr_t FName = 0x00A0;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
		constexpr uintptr_t FTEManager = 0x00B0;
	}

	namespace GFxData_FreeToPlayRewards_TA {
		constexpr uintptr_t LegacyStatus = 0x0098;
		constexpr uintptr_t CompensationItems = 0x00A0;
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
	}

	namespace GFxData_FriendsHiddenManager_TA {
		constexpr uintptr_t HiddenPresenceGroup = 0x0060;
		constexpr uintptr_t HiddenFriends = 0x0068;
	}

	namespace GFxData_Friends_TA {
		constexpr uintptr_t Friends = 0x0098;
		constexpr uintptr_t PlatformFriends = 0x00A8;
		constexpr uintptr_t EpicFriends = 0x00B8;
		constexpr uintptr_t bLocked = 0x00C8;
		constexpr uintptr_t RecentPlayers = 0x00D8;
		constexpr uintptr_t RecentPlayersToBeAdded = 0x00E0;
		constexpr uintptr_t Recent = 0x00F0;
		constexpr uintptr_t Pending = 0x0100;
		constexpr uintptr_t NumOnlineFriendsPlatform = 0x0110;
		constexpr uintptr_t NumInGameFriendsPlatform = 0x0114;
		constexpr uintptr_t NumOnlineFriendsEpic = 0x0118;
		constexpr uintptr_t NumInGameFriendsEpic = 0x011C;
		constexpr uintptr_t Bitfields_0x0120 = 0x0120;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t HiddenManager = 0x0138;
		constexpr uintptr_t PersonasData = 0x0140;
		constexpr uintptr_t OnlineGame = 0x0148;
		constexpr uintptr_t AccountSettings = 0x0150;
		constexpr uintptr_t DefaultPlatformFriendGroups = 0x0158;
		constexpr uintptr_t DefaultEpicFriendGroups = 0x0168;
		constexpr uintptr_t DefaultAllFriendGroups = 0x0178;
		constexpr uintptr_t Party = 0x0188;
		constexpr uintptr_t PartyMemberPersonas = 0x0190;
		constexpr uintptr_t PlatformPartyPresenceGroup = 0x01A0;
		constexpr uintptr_t EpicPartyPresenceGroup = 0x01A8;
		constexpr uintptr_t ObservedProfile = 0x01B0;
		constexpr uintptr_t FString = 0x01B8;
		constexpr uintptr_t PinGrantPlatform = 0x01C8;
		constexpr uintptr_t ModalProcessing = 0x01D0;
	}

	namespace GFxData_GameEvent_TA {
		constexpr uintptr_t TimeRemaining = 0x0098;
		constexpr uintptr_t TimeToNextMatch = 0x009C;
		constexpr uintptr_t TimeWaitingForPlayersRemaining = 0x00A0;
		constexpr uintptr_t Bitfields_0x00A4 = 0x00A4;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t FName = 0x00C0;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t ReplayScoredBy = 0x00D0;
		constexpr uintptr_t ReplayAssistedBy = 0x00D4;
		constexpr uintptr_t ReplaySpeed = 0x00D8;
		constexpr uintptr_t ReplayTime = 0x00DC;
		constexpr uintptr_t WinningTeam = 0x00E0;
		constexpr uintptr_t TieBreakDecision = 0x00E4;
		constexpr uintptr_t MaxPlayers = 0x00E8;
		constexpr uintptr_t MaxScore = 0x00EC;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FName = 0x0100;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t SeriesGames = 0x0148;
	}

	namespace GFxData_GarageProductSlot_TA {
		constexpr uintptr_t SavedLoadoutSet = 0x0118;
	}

	namespace GFxData_Garage_TA {
		constexpr uintptr_t LoadoutSlots = 0x0098;
		constexpr uintptr_t PreviewActor = 0x00A8;
		constexpr uintptr_t GarageProductSlots = 0x00B0;
		constexpr uintptr_t TabIndex = 0x00C0;
		constexpr uintptr_t Teams = 0x00C8;
		constexpr uintptr_t PaintFinishSlotIndex = 0x00D8;
		constexpr uintptr_t PreviewTeam = 0x00DC;
		constexpr uintptr_t CustomColors = 0x00E0;
		constexpr uintptr_t Team0Colors = 0x00F0;
		constexpr uintptr_t Team1Colors = 0x0100;
		constexpr uintptr_t Bitfields_0x0110 = 0x0110;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t ForcedTeam0Color = 0x0138;
		constexpr uintptr_t ForcedTeam1Color = 0x013C;
		constexpr uintptr_t ForcedCustom0Color = 0x0140;
		constexpr uintptr_t ForcedCustom1Color = 0x0144;
		constexpr uintptr_t Profile = 0x0148;
		constexpr uintptr_t Loadouts = 0x0150;
		constexpr uintptr_t LastUnforcedLoadout = 0x01D0;
		constexpr uintptr_t LoadoutSet = 0x0250;
		constexpr uintptr_t CarPreviewSet = 0x0258;
		constexpr uintptr_t ExplosionPreview = 0x0260;
		constexpr uintptr_t FName = 0x0268;
		constexpr uintptr_t CurrentSlot = 0x0270;
	}

	namespace GFxData_IntroCarSelect_TA {
		constexpr uintptr_t ModalProcessing = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FTE = 0x00B0;
	}

	namespace GFxData_ItemShopNotificationsConfig_TA {
		constexpr uintptr_t ItemShopNotificationsConfig = 0x0098;
	}

	namespace GFxData_LanBrowser_TA {
		constexpr uintptr_t LanBrowser = 0x0098;
		constexpr uintptr_t GetServerListTask = 0x00A0;
	}

	namespace GFxData_LanMatch_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t SelectedMaxPlayerCount = 0x00B8;
		constexpr uintptr_t SettingsType = 0x00BC;
	}

	namespace GFxData_LanServer_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t OwnerAvatar = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t ServerBuildID = 0x00F0;
		constexpr uintptr_t OnlineGame = 0x00F8;
		constexpr uintptr_t OnlineSubsystem = 0x0100;
		constexpr uintptr_t WorldFilter = 0x0108;
		constexpr uintptr_t LanBrowser = 0x0110;
	}

	namespace GFxData_Leaderboards_TA {
		constexpr uintptr_t LeaderboardDataSet = 0x0098;
		constexpr uintptr_t PlayerLeaderboardValue = 0x00A8;
		constexpr uintptr_t PlayerLeaderboardDivision = 0x00AC;
		constexpr uintptr_t PlayerLeaderboardMMR = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t Leaderboards = 0x00D0;
		constexpr uintptr_t FName = 0x00D8;
		constexpr uintptr_t VanityManager = 0x00E0;
	}

	namespace GFxData_LegacyStatus_TA {
		constexpr uintptr_t LegacyStatus = 0x0098;
		constexpr uintptr_t LegacySetState = 0x0099;
	}

	namespace GFxData_LegalText_TA {
		constexpr uintptr_t LegacyLegalPlatforms = 0x0098;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
	}

	namespace GFxData_LoadoutSets_TA {
		constexpr uintptr_t LoadoutSets = 0x0098;
		constexpr uintptr_t Profile = 0x00A8;
		constexpr uintptr_t RandomLoadouts = 0x00B0;
		constexpr uintptr_t RandomLoadoutLoader = 0x0130;
		constexpr uintptr_t PreviousLoadoutSetLoader = 0x0138;
		constexpr uintptr_t NextLoadoutSetLoader = 0x0140;
		constexpr uintptr_t LoadoutSequencer = 0x0148;
		constexpr uintptr_t PreviousBodyProductID = 0x0150;
		constexpr uintptr_t LoadoutSave = 0x0158;
	}

	namespace GFxData_LocalCar_TA {
		constexpr uintptr_t Boost = 0x0098;
		constexpr uintptr_t Bitfields_0x009C = 0x009C;
		constexpr uintptr_t TimeTillItem = 0x00A0;
		constexpr uintptr_t MaxTimeTillItem = 0x00A4;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t ItemIcon = 0x00B8;
		constexpr uintptr_t ItemTimeRemaining = 0x00C0;
		constexpr uintptr_t ItemTargetID = 0x00C4;
	}

	namespace GFxData_LocalPlayer_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t PlayerAvatarTexture = 0x00D0;
		constexpr uintptr_t XpLevel = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t XPTotal = 0x00F0;
		constexpr uintptr_t XPProgressInCurrentLevel = 0x00F4;
		constexpr uintptr_t XPRequiredForNextLevel = 0x00F8;
		constexpr uintptr_t Team = 0x00FC;
		constexpr uintptr_t CameraYaw = 0x0100;
		constexpr uintptr_t SplitScreenPosition = 0x0104;
		constexpr uintptr_t ControllerId = 0x0108;
		constexpr uintptr_t LocalPlayerIndex = 0x010C;
		constexpr uintptr_t FName = 0x0110;
		constexpr uintptr_t IdleKickSeconds = 0x0118;
		constexpr uintptr_t FProductHashID = 0x011C;
		constexpr uintptr_t RankInfoDisplayType = 0x0120;
		constexpr uintptr_t InfectedStatus = 0x0121;
		constexpr uintptr_t OrphanedControllerId = 0x0122;
		constexpr uintptr_t PersonaSave = 0x0128;
		constexpr uintptr_t FUniqueNetId = 0x0130;
		constexpr uintptr_t Player = 0x0178;
		constexpr uintptr_t ModalOrphaned = 0x0180;
	}

	namespace GFxData_MTXGarage_TA {
		constexpr uintptr_t CatalogItems = 0x0098;
		constexpr uintptr_t CatalogProducts = 0x00A8;
		constexpr uintptr_t CartItems = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t Bitfields_0x00E8 = 0x00E8;
		constexpr uintptr_t ModalProcessing = 0x00F0;
		constexpr uintptr_t BlackMarketSkinProductID = 0x00F8;
		constexpr uintptr_t CatalogExpirationTime = 0x00FC;
		constexpr uintptr_t CatalogCacheDuration = 0x0100;
		constexpr uintptr_t CatalogCategory = 0x0104;
		constexpr uintptr_t PurchaseTimeoutTime = 0x0108;
		constexpr uintptr_t GetPriceTimeoutTime = 0x010C;
		constexpr uintptr_t Menu = 0x0110;
		constexpr uintptr_t MtxConfig = 0x0118;
		constexpr uintptr_t SystemInterface_Object = 0x0120;
		constexpr uintptr_t SystemInterface_Interface = 0x0128;
		constexpr uintptr_t PurchaseInterface_Object = 0x0130;
		constexpr uintptr_t PurchaseInterface_Interface = 0x0138;
		constexpr uintptr_t PsyNetConnection = 0x0140;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t OnlineProductStoreSet = 0x0158;
	}

	namespace GFxData_MainMenu_TA {
		constexpr uintptr_t PreviewCameraRotationScale = 0x0098;
		constexpr uintptr_t FName = 0x009C;
		constexpr uintptr_t RequestedSubIdx = 0x00A4;
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t QueuedSubIdx = 0x00B0;
		constexpr uintptr_t FName = 0x00B4;
		constexpr uintptr_t FName = 0x00BC;
		constexpr uintptr_t FName = 0x00C4;
	}

	namespace GFxData_MapPrefs_TA {
		constexpr uintptr_t PlaylistTypes = 0x0098;
		constexpr uintptr_t MapTypes = 0x00A8;
		constexpr uintptr_t Playlists = 0x00B8;
		constexpr uintptr_t Maps = 0x00C8;
		constexpr uintptr_t MapPrefsConfig = 0x00D8;
		constexpr uintptr_t MapPrefsSave = 0x00E0;
		constexpr uintptr_t MapsConfig = 0x00E8;
	}

	namespace GFxData_MapSelection_TA {
		constexpr uintptr_t Selections = 0x0098;
	}

	namespace GFxData_Map_TA {
		constexpr uintptr_t FGFxMapData = 0x0098;
		constexpr uintptr_t FGFxMapData = 0x00D0;
		constexpr uintptr_t FGFxMapData = 0x0108;
		constexpr uintptr_t Data = 0x0140;
		constexpr uintptr_t ActiveMapIndex = 0x0150;
		constexpr uintptr_t LastLoadedMapImage = 0x0158;
		constexpr uintptr_t FName = 0x0160;
		constexpr uintptr_t FName = 0x0168;
		constexpr uintptr_t FName = 0x0170;
		constexpr uintptr_t DefaultThumbnail = 0x0178;
	}

	namespace GFxData_MatchAdmin_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t PlayerPRI = 0x00A0;
	}

	namespace GFxData_MatchHistoryManager_TA {
		constexpr uintptr_t SyncStatus = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t Bitfields_0x00B0 = 0x00B0;
		constexpr uintptr_t Matches = 0x00B8;
		constexpr uintptr_t SyncRPC = 0x00C8;
		constexpr uintptr_t Config = 0x00D0;
	}

	namespace GFxData_MatchHistoryPlayer_TA {
		constexpr uintptr_t Index = 0x0098;
		constexpr uintptr_t Player = 0x00A0;
	}

	namespace GFxData_MatchHistory_TA {
		constexpr uintptr_t Index = 0x0098;
		constexpr uintptr_t LocalPlayerTeam = 0x009C;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t Bitfields_0x00B0 = 0x00B0;
		constexpr uintptr_t TeamSize = 0x00B4;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t MatchStartEpoch = 0x00D8;
		constexpr uintptr_t MatchEndEpoch = 0x00E0;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t Match = 0x0108;
		constexpr uintptr_t PrimaryPlayerScore = 0x0110;
		constexpr uintptr_t PrimaryPlayerGoals = 0x0114;
		constexpr uintptr_t PrimaryPlayerAssists = 0x0118;
		constexpr uintptr_t PrimaryPlayerSaves = 0x011C;
		constexpr uintptr_t PrimaryPlayerShots = 0x0120;
	}

	namespace GFxData_Matchmaking_TA {
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t Regions = 0x0198;
		constexpr uintptr_t TotalPopulation = 0x01A8;
		constexpr uintptr_t MatchmakingViewTab = 0x01AC;
		constexpr uintptr_t Bitfields_0x01B0 = 0x01B0;
		constexpr uintptr_t SeasonEndDays = 0x01B4;
		constexpr uintptr_t SeasonEndHours = 0x01B8;
		constexpr uintptr_t SeasonEndMinutes = 0x01BC;
		constexpr uintptr_t MatchmakingSave = 0x01C0;
		constexpr uintptr_t PlayMenuSave = 0x01C8;
		constexpr uintptr_t MessageUpdates = 0x01D0;
		constexpr uintptr_t CurrentMessageUpdateIndex = 0x01E0;
		constexpr uintptr_t RankedConfig = 0x01E8;
		constexpr uintptr_t TabFilters = 0x01F0;
	}

	namespace GFxData_MenuSequence_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t MenuStack = 0x00A0;
	}

	namespace GFxData_MenuStack_TA {
		constexpr uintptr_t MenuNames = 0x0098;
		constexpr uintptr_t FName = 0x00A8;
	}

	namespace GFxData_MenuTreeNode_Custom_TA {
		constexpr uintptr_t UnknownData00 = 0x00C9;
	}

	namespace GFxData_MenuTreeNode_ExternalScreen_TA {
		constexpr uintptr_t UnknownData00 = 0x00C9;
	}

	namespace GFxData_MenuTreeNode_GenericFolder_TA {
		constexpr uintptr_t UnnamedMember_0x00D0 = 0x00D0;
	}

	namespace GFxData_MenuTreeNode_PlaylistFolder_TA {
		constexpr uintptr_t UnnamedMember_0x00D8 = 0x00D8;
	}

	namespace GFxData_MenuTreeNode_Playlist_TA {
		constexpr uintptr_t Bitfields_0x00D0 = 0x00D0;
		constexpr uintptr_t FString = 0x00D8;
	}

	namespace GFxData_MenuTreeNode_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t ThumbnailImage = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t BannerType = 0x00C8;
	}

	namespace GFxData_MenuTree_TA {
		constexpr uintptr_t MenuTreeConfig = 0x0098;
		constexpr uintptr_t MenuTreeBuilder = 0x00A0;
		constexpr uintptr_t RootNode = 0x00A8;
		constexpr uintptr_t CurrentNode = 0x00B0;
		constexpr uintptr_t NodesData = 0x00B8;
	}

	namespace GFxData_MicroEvent_TA {
		constexpr uintptr_t MicroEventConfig = 0x0098;
		constexpr uintptr_t MicroEvent = 0x00A0;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
	}

	namespace GFxData_MiniScoreboard_TA {
		constexpr uintptr_t Data = 0x0098;
		constexpr uintptr_t MiniScoreboardSlots = 0x00A8;
	}

	namespace GFxData_MultiItemDrops_TA {
		constexpr uintptr_t MultiItemDropConfig = 0x0098;
		constexpr uintptr_t ActiveGroup = 0x00A0;
		constexpr uintptr_t PendingGroups = 0x00A8;
		constexpr uintptr_t GroupsRemaining = 0x00B8;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t Wallet = 0x00D0;
		constexpr uintptr_t RewardDrops = 0x00D8;
		constexpr uintptr_t FName = 0x00E8;
	}

	namespace GFxData_MusicPlayer_TA {
		constexpr uintptr_t UrlConfig = 0x0098;
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
		constexpr uintptr_t DefaultPlaylists = 0x00A8;
		constexpr uintptr_t Playlists = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t TrackIcon = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t StartupLogoDisplayDurationMS = 0x0100;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t CurrentTrackPlayingID = 0x0118;
		constexpr uintptr_t CurrentTrack = 0x0120;
		constexpr uintptr_t MasterTracklist = 0x0128;
		constexpr uintptr_t ActiveTracklist_Object = 0x0138;
		constexpr uintptr_t ActiveTracklist_Interface = 0x0140;
		constexpr uintptr_t TracklistFactory = 0x0148;
		constexpr uintptr_t MainRotationTracklistBuilder = 0x0150;
		constexpr uintptr_t MusicTheme = 0x0158;
		constexpr uintptr_t MusicSave = 0x0160;
		constexpr uintptr_t GameMusicPlayer = 0x0168;
		constexpr uintptr_t StreamerSafeConfig = 0x0170;
	}

	namespace GFxData_Mutators_TA {
		constexpr uintptr_t FName = 0x0098;
		constexpr uintptr_t SelectedGameMode = 0x00A0;
		constexpr uintptr_t SelectedBotDifficulty = 0x00A4;
		constexpr uintptr_t GameModes = 0x00A8;
		constexpr uintptr_t MaxNumRows = 0x00B8;
		constexpr uintptr_t MaxNumColumns = 0x00BC;
		constexpr uintptr_t MaxAllowedMutators = 0x00C0;
		constexpr uintptr_t MaxPreviewMutators = 0x00C4;
		constexpr uintptr_t NumSelectedMutators = 0x00C8;
		constexpr uintptr_t CustomGameSettings = 0x00D0;
		constexpr uintptr_t GameSettingCategories = 0x00E0;
		constexpr uintptr_t GameModeMutatorSettingPresets = 0x00F0;
		constexpr uintptr_t PresetCategoryIndex = 0x0100;
		constexpr uintptr_t MutatorGroupIDs = 0x0108;
		constexpr uintptr_t ModeMaps = 0x0118;
		constexpr uintptr_t SettingsType = 0x0128;
		constexpr uintptr_t Profile = 0x0130;
		constexpr uintptr_t GameModeObj = 0x0138;
		constexpr uintptr_t AllGoalResetOptions = 0x0140;
		constexpr uintptr_t UnnamedMember_0x0150 = 0x0150;
		constexpr uintptr_t GoalResetOptions = 0x0158;
		constexpr uintptr_t SelectedGoalResetOption = 0x0168;
		constexpr uintptr_t AllBoostOptions = 0x0170;
		constexpr uintptr_t BoostOptions = 0x0180;
		constexpr uintptr_t SelectedBoostOption = 0x0190;
		constexpr uintptr_t FString = 0x0198;
		constexpr uintptr_t FString = 0x01A8;
		constexpr uintptr_t GameTags = 0x01B8;
		constexpr uintptr_t OnlineFreeplaySave = 0x01C0;
		constexpr uintptr_t MutatorConfig = 0x01C8;
	}

	namespace GFxData_Nameplate_TA {
		constexpr uintptr_t HideFullNameplateDistance = 0x0098;
		constexpr uintptr_t LivesVisibilityFadeMinDistance = 0x009C;
		constexpr uintptr_t LivesVisibilityFadeMaxDistance = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t Team = 0x00B8;
		constexpr uintptr_t Bitfields_0x00BC = 0x00BC;
		constexpr uintptr_t LivesVisibility = 0x00C0;
		constexpr uintptr_t RemainingLives = 0x00C4;
		constexpr uintptr_t MaxLives = 0x00C8;
		constexpr uintptr_t BoostAmount = 0x00CC;
		constexpr uintptr_t InfectedStatus = 0x00D0;
		constexpr uintptr_t NameplateComponent = 0x00D8;
		constexpr uintptr_t GameplaySettings = 0x00E0;
		constexpr uintptr_t Persona = 0x00E8;
	}

	namespace GFxData_NotificationManager_TA {
		constexpr uintptr_t Notifications = 0x0098;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t NotificationSave = 0x00B0;
		constexpr uintptr_t PendingNotifications = 0x00B8;
		constexpr uintptr_t ActiveNotifications = 0x00C8;
	}

	namespace GFxData_Notification_TA {
		constexpr uintptr_t UnknownData00 = 0x0094;
	}

	namespace GFxData_OnlineFreeplay_TA {
		constexpr uintptr_t UnnamedMember_0x01A0 = 0x01A0;
		constexpr uintptr_t GameModes = 0x01A8;
		constexpr uintptr_t GoalResetOptions = 0x01B8;
		constexpr uintptr_t SelectedGameMode = 0x01C8;
		constexpr uintptr_t SelectedBoost = 0x01CC;
		constexpr uintptr_t SelectedGoalReset = 0x01CD;
		constexpr uintptr_t DefaultGameModeIndex = 0x01D0;
		constexpr uintptr_t FName = 0x01D4;
		constexpr uintptr_t MaxPlayerCount = 0x01DC;
		constexpr uintptr_t BallResetRestrictedGameModes = 0x01E0;
		constexpr uintptr_t BallResetIndex = 0x01F0;
	}

	namespace GFxData_OnlineMatchStatus_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t FName = 0x009C;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t SavedSearchStrings = 0x00B8;
		constexpr uintptr_t StatusOwner = 0x00C8;
		constexpr uintptr_t OnlineParty = 0x00D0;
		constexpr uintptr_t FString = 0x00D8;
	}

	namespace GFxData_OnlineMatch_TA {
		constexpr uintptr_t TAPlayer = 0x0098;
		constexpr uintptr_t Profile = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t CountdownSeconds = 0x00E8;
		constexpr uintptr_t OnlineParty = 0x00F0;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t SearchStatusData = 0x0108;
		constexpr uintptr_t UnnamedMember_0x0110 = 0x0110;
	}

	namespace GFxData_PRI_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t Avatar = 0x00C8;
		constexpr uintptr_t Team = 0x00D0;
		constexpr uintptr_t Score = 0x00D4;
		constexpr uintptr_t Goals = 0x00D8;
		constexpr uintptr_t Assists = 0x00DC;
		constexpr uintptr_t Saves = 0x00E0;
		constexpr uintptr_t Shots = 0x00E4;
		constexpr uintptr_t Ping = 0x00E8;
		constexpr uintptr_t BreakoutDamage = 0x00EC;
		constexpr uintptr_t Bitfields_0x00F0 = 0x00F0;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FColor = 0x0128;
		constexpr uintptr_t FColor = 0x012C;
		constexpr uintptr_t SkillTier = 0x0130;
		constexpr uintptr_t Boost = 0x0134;
		constexpr uintptr_t PRI = 0x0138;
		constexpr uintptr_t FUniqueNetId = 0x0140;
		constexpr uintptr_t PodiumSpotlightScreenPosX = 0x0188;
		constexpr uintptr_t PodiumSpotlightScreenPosY = 0x018C;
		constexpr uintptr_t FString = 0x0190;
		constexpr uintptr_t FString = 0x01A0;
		constexpr uintptr_t FString = 0x01B0;
		constexpr uintptr_t FString = 0x01C0;
		constexpr uintptr_t PrimaryStat = 0x01D0;
		constexpr uintptr_t SecondaryStat = 0x01D4;
		constexpr uintptr_t ClubID = 0x01D8;
		constexpr uintptr_t WorstConnectionQualityStateBeyondLatency = 0x01E0;
		constexpr uintptr_t QuitSeverity = 0x01E1;
		constexpr uintptr_t InfectedStatus = 0x01E2;
		constexpr uintptr_t SpectatorShortcut = 0x01E4;
		constexpr uintptr_t GFxPlayerBanner = 0x01E8;
		constexpr uintptr_t GFxPlayerAvatar = 0x01F0;
		constexpr uintptr_t GFxPlayerBorder = 0x01F8;
		constexpr uintptr_t Persona = 0x0200;
		constexpr uintptr_t PrimaryPersona = 0x0208;
		constexpr uintptr_t Personas = 0x0210;
		constexpr uintptr_t ScoreboardStats = 0x0218;
		constexpr uintptr_t SpectatorStats = 0x0220;
	}

	namespace GFxData_PartyInvite_TA {
		constexpr uintptr_t Invites = 0x0098;
		constexpr uintptr_t PendingInvites = 0x00A8;
		constexpr uintptr_t SilentSentInvites = 0x00B8;
		constexpr uintptr_t PsyNetParty = 0x00C8;
		constexpr uintptr_t OnlineGameParty = 0x00D0;
		constexpr uintptr_t CrossplayConfig = 0x00D8;
		constexpr uintptr_t PersonasData = 0x00E0;
	}

	namespace GFxData_PartyJoinRequest_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t ExpirationTimeSeconds = 0x00C8;
		constexpr uintptr_t OnlineGameParty = 0x00D0;
		constexpr uintptr_t PersonasData = 0x00D8;
		constexpr uintptr_t PsyNetParty = 0x00E0;
	}

	namespace GFxData_PartyMemberProfile_TA {
		constexpr uintptr_t FUniqueNetId = 0x0098;
		constexpr uintptr_t FName = 0x00E0;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FColor = 0x00F8;
		constexpr uintptr_t FColor = 0x00FC;
		constexpr uintptr_t Profile = 0x0100;
		constexpr uintptr_t OnlineGameParty = 0x0108;
	}

	namespace GFxData_Party_TA {
		constexpr uintptr_t Members = 0x0098;
		constexpr uintptr_t MaxPartySize = 0x00A8;
		constexpr uintptr_t FName = 0x00AC;
		constexpr uintptr_t OnlineParty = 0x00B8;
		constexpr uintptr_t PersonasData = 0x00C0;
		constexpr uintptr_t Clubs = 0x00C8;
		constexpr uintptr_t VanityManager = 0x00D0;
		constexpr uintptr_t PsyNetPartyStatus = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t PartyErrorModal = 0x00F0;
		constexpr uintptr_t UnnamedMember_0x00F8 = 0x00F8;
		constexpr uintptr_t CrossplayConfig = 0x0100;
	}

	namespace GFxData_PersonaGroup_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t GroupPresenceId = 0x00A8;
		constexpr uintptr_t GroupOrigin = 0x00AC;
	}

	namespace GFxData_Persona_TA {
		constexpr uintptr_t Persona = 0x0098;
		constexpr uintptr_t PlayerAvatar = 0x00A0;
	}

	namespace GFxData_Personas_TA {
		constexpr uintptr_t FMap_Mirror = 0x0098;
		constexpr uintptr_t PersonasData = 0x00E8;
	}

	namespace GFxData_PlatformAuth_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
	}

	namespace GFxData_PlayerAvatarBorderPreview_TA {
		constexpr uintptr_t AvatarBorderPreviews = 0x0098;
	}

	namespace GFxData_PlayerAvatarBorder_TA {
		constexpr uintptr_t PlayerBorder = 0x0098;
	}

	namespace GFxData_PlayerAvatarPreview_TA {
		constexpr uintptr_t AvatarPreviews = 0x0098;
	}

	namespace GFxData_PlayerAvatar_TA {
		constexpr uintptr_t PlayerAvatar = 0x0098;
	}

	namespace GFxData_PlayerBanner_TA {
		constexpr uintptr_t PlayerBanner = 0x0098;
	}

	namespace GFxData_PlayerBanners_TA {
		constexpr uintptr_t Banners = 0x0098;
		constexpr uintptr_t LastPreviewBanner = 0x00A8;
	}

	namespace GFxData_PlayerRecord_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t UnnamedMember_0x00A8 = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t PRI = 0x00D0;
		constexpr uintptr_t FUniqueNetId = 0x00D8;
	}

	namespace GFxData_PlayerTitles_TA {
		constexpr uintptr_t SelectedTitle = 0x0098;
		constexpr uintptr_t PlayerTitles = 0x00A0;
		constexpr uintptr_t LoadoutSave = 0x00B0;
		constexpr uintptr_t TitleConfig = 0x00B8;
	}

	namespace GFxData_PlayerVanity_TA {
		constexpr uintptr_t VanityMgr = 0x0098;
		constexpr uintptr_t GFxPlayerAvatarBorder = 0x00A0;
		constexpr uintptr_t GFxPlayerBanner = 0x00A8;
	}

	namespace GFxData_Playlist_TA {
		constexpr uintptr_t Playlist = 0x0098;
		constexpr uintptr_t Id = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t TeamSize = 0x00E8;
		constexpr uintptr_t Bitfields_0x00EC = 0x00EC;
		constexpr uintptr_t PlaylistBackgroundTexture = 0x00F0;
		constexpr uintptr_t PlaylistIconActiveTexture = 0x00F8;
		constexpr uintptr_t PlaylistIconInactiveTexture = 0x0100;
		constexpr uintptr_t PlaylistNodeThumbnailTexture = 0x0108;
		constexpr uintptr_t PlayerCountBucket = 0x0110;
		constexpr uintptr_t SkillTier = 0x0114;
		constexpr uintptr_t SkillDivision = 0x0118;
		constexpr uintptr_t SkillMatchesPlayed = 0x011C;
		constexpr uintptr_t SkillPlacementMatchesPlayed = 0x0120;
		constexpr uintptr_t SkillMMR = 0x0124;
		constexpr uintptr_t PrevSkillTier = 0x0128;
		constexpr uintptr_t PrevSkillDivision = 0x012C;
		constexpr uintptr_t MaximumRankDisparity = 0x0130;
		constexpr uintptr_t StartTime = 0x0138;
		constexpr uintptr_t EndTime = 0x0140;
		constexpr uintptr_t DetailsGroup = 0x0148;
		constexpr uintptr_t MicroEventConfig = 0x0150;
	}

	namespace GFxData_PossibleTradeIn_TA {
		constexpr uintptr_t FProductFilter = 0x0098;
		constexpr uintptr_t TradeInFilterID = 0x0208;
		constexpr uintptr_t Quality = 0x020C;
		constexpr uintptr_t NumberofTradeIns = 0x0210;
		constexpr uintptr_t RemainingItems = 0x0214;
		constexpr uintptr_t FProductTradeInFilter = 0x0218;
		constexpr uintptr_t FilteredHashIDs = 0x0268;
	}

	namespace GFxData_PreMatchLobby_TA {
		constexpr uintptr_t PreMatchLobby = 0x0098;
	}

	namespace GFxData_PrivateMatch_TA {
		constexpr uintptr_t Regions = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t SelectedMaxPlayerCount = 0x0148;
		constexpr uintptr_t UnnamedMember_0x014C = 0x014C;
		constexpr uintptr_t MinServerNameLength = 0x0150;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t SearchStatusOwner = 0x0198;
		constexpr uintptr_t SettingsType = 0x0199;
	}

	namespace GFxData_Privileges_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t OnlineGame = 0x00A0;
	}

	namespace GFxData_ProductAttribute_Anthem_TA {
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
	}

	namespace GFxData_ProductAttribute_Blueprint_TA {
		constexpr uintptr_t ProductThumbnail = 0x00B0;
		constexpr uintptr_t BlueprintThumbnail = 0x00B8;
		constexpr uintptr_t Cost = 0x00C0;
		constexpr uintptr_t UnnamedMember_0x00C4 = 0x00C4;
		constexpr uintptr_t FProductHashID = 0x00C8;
	}

	namespace GFxData_ProductAttribute_Certified_TA {
		constexpr uintptr_t FString = 0x00B0;
	}

	namespace GFxData_ProductAttribute_ContainerKey_TA {
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Container_TA {
		constexpr uintptr_t Bitfields_0x00B0 = 0x00B0;
	}

	namespace GFxData_ProductAttribute_CreatorDetails_TA {
		constexpr uintptr_t FString = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Currency_TA {
		constexpr uintptr_t CurrencyID = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Expiration_TA {
		constexpr uintptr_t ExpirationTime = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Indestructible_TA {
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Level_TA {
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Painted_TA {
		constexpr uintptr_t FColor = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t ProductPaintMask = 0x00C8;
		constexpr uintptr_t ProductPaintDiffHue = 0x00D0;
		constexpr uintptr_t ProductPaintDiffSaturation = 0x00D4;
		constexpr uintptr_t ProductPaintDiffLightness = 0x00D8;
	}

	namespace GFxData_ProductAttribute_ProductLink_TA {
		constexpr uintptr_t ProductID = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Reactive_TA {
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
	}

	namespace GFxData_ProductAttribute_Rental_TA {
		constexpr uintptr_t RentalLength = 0x00B0;
	}

	namespace GFxData_ProductAttribute_ShopItem_TA {
		constexpr uintptr_t BackgroundImage = 0x00B0;
		constexpr uintptr_t ItemLogo = 0x00B8;
	}

	namespace GFxData_ProductAttribute_SpecialEdition_TA {
		constexpr uintptr_t FString = 0x00B0;
	}

	namespace GFxData_ProductAttribute_TA {
		constexpr uintptr_t AttributeClass = 0x0098;
		constexpr uintptr_t AttributeProvider_Object = 0x00A0;
		constexpr uintptr_t AttributeProvider_Interface = 0x00A8;
	}

	namespace GFxData_ProductAttribute_TeamEdition_TA {
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t TeamLogo = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
	}

	namespace GFxData_ProductAttribute_Tiered_TA {
		constexpr uintptr_t ProductTier = 0x00B0;
	}

	namespace GFxData_ProductAttribute_Title_TA {
		constexpr uintptr_t FName = 0x00B0;
	}

	namespace GFxData_ProductFilter_TA {
		constexpr uintptr_t UIAttributes = 0x0098;
		constexpr uintptr_t AlwaysIgnoredSlots = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t Slots = 0x00C8;
		constexpr uintptr_t Qualities = 0x00D8;
		constexpr uintptr_t Attributes = 0x00E8;
		constexpr uintptr_t ExtraAttributes = 0x00F8;
		constexpr uintptr_t Paints = 0x0108;
		constexpr uintptr_t SeriesIDs = 0x0118;
		constexpr uintptr_t SortingLabels = 0x0128;
		constexpr uintptr_t Bitfields_0x0138 = 0x0138;
		constexpr uintptr_t BatchPreviewQuantityTimer = 0x013C;
		constexpr uintptr_t FilterStack = 0x0140;
		constexpr uintptr_t Filters = 0x0150;
		constexpr uintptr_t ProductQualitiesToIgnore = 0x0710;
		constexpr uintptr_t ProductSortingToIgnore = 0x0720;
		constexpr uintptr_t ProductAttributesToIgnore = 0x0730;
		constexpr uintptr_t FString = 0x0740;
		constexpr uintptr_t GarageArchiveSlot = 0x0750;
		constexpr uintptr_t GarageFavoritedSlot = 0x0758;
		constexpr uintptr_t LoadoutSave = 0x0760;
		constexpr uintptr_t MtxConfig = 0x0768;
		constexpr uintptr_t ProductsConfig = 0x0770;
	}

	namespace GFxData_ProductSlot_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t FName = 0x009C;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t Icon = 0x00C8;
		constexpr uintptr_t SlotIndex = 0x00D0;
		constexpr uintptr_t FProductHashID = 0x00D4;
		constexpr uintptr_t FProductHashID = 0x00D8;
		constexpr uintptr_t FProductHashID = 0x00DC;
		constexpr uintptr_t DefaultProductID = 0x00E0;
		constexpr uintptr_t MatchesNeededToUnlock = 0x00E4;
	}

	namespace GFxData_ProductTradeIn_TA {
		constexpr uintptr_t TradeIns = 0x0098;
		constexpr uintptr_t ProductTransactions = 0x00A8;
		constexpr uintptr_t ModalProcessing = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t NumProductsRequiredForTradeIn = 0x00D8;
		constexpr uintptr_t TradeInFilters = 0x00E0;
	}

	namespace GFxData_Products_TA {
		constexpr uintptr_t LoadingProducts = 0x0098;
		constexpr uintptr_t Stats = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t ProductIcon = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FProductInstanceID = 0x00F0;
		constexpr uintptr_t BaseProductID = 0x0100;
		constexpr uintptr_t FProductHashID = 0x0104;
		constexpr uintptr_t FProductHashID = 0x0108;
		constexpr uintptr_t SchematicPointerID = 0x010C;
		constexpr uintptr_t ProductSlot = 0x0110;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FString = 0x0128;
		constexpr uintptr_t Bitfields_0x0138 = 0x0138;
		constexpr uintptr_t FColor = 0x013C;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t ProductQuality = 0x0150;
		constexpr uintptr_t XEStatus = 0x0151;
		constexpr uintptr_t ProductQuantity = 0x0154;
		constexpr uintptr_t TradeHold = 0x0158;
		constexpr uintptr_t SeriesID = 0x015C;
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t FString = 0x0180;
		constexpr uintptr_t FString = 0x0190;
		constexpr uintptr_t ProductTradeInQuantity = 0x01A0;
		constexpr uintptr_t SchematicResources = 0x01A4;
		constexpr uintptr_t AttributeMap = 0x01A8;
		constexpr uintptr_t FString = 0x01B0;
		constexpr uintptr_t NewProducts = 0x01C0;
		constexpr uintptr_t FavoriteSave = 0x01D0;
		constexpr uintptr_t ArchiveSave = 0x01D8;
		constexpr uintptr_t LoadoutSave = 0x01E0;
		constexpr uintptr_t DynamicThumbnailsIgnorableOnlinePaintedProducts = 0x01E8;
		constexpr uintptr_t MtxConfig = 0x01F8;
		constexpr uintptr_t ProductsConfig = 0x0200;
	}

	namespace GFxData_QuickChatBindings_TA {
		constexpr uintptr_t AllQuickChats = 0x0098;
		constexpr uintptr_t Bindings = 0x00A8;
		constexpr uintptr_t QuickChats = 0x00B8;
		constexpr uintptr_t PostGameQuickChats = 0x00C8;
		constexpr uintptr_t PreGameQuickChats = 0x00D8;
		constexpr uintptr_t QuickChatSave = 0x00E8;
	}

	namespace GFxData_RedeemCodes_TA {
		constexpr uintptr_t RedeemTask = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
	}

	namespace GFxData_Regions_TA {
		constexpr uintptr_t SuperRegions = 0x0098;
		constexpr uintptr_t Regions = 0x00A8;
	}

	namespace GFxData_ReplayManager_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t ReplayData = 0x00B8;
		constexpr uintptr_t ReplayLoadResults = 0x00C8;
		constexpr uintptr_t ModalProcessing = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t UnnamedMember_0x00F0 = 0x00F0;
		constexpr uintptr_t MatchHistoryConfig = 0x00F8;
		constexpr uintptr_t CurrentLoadedIndex = 0x0100;
	}

	namespace GFxData_ReplayViewer_TA {
		constexpr uintptr_t CurrentFrame = 0x0098;
		constexpr uintptr_t CameraModes = 0x00A0;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t Bitfields_0x00E0 = 0x00E0;
		constexpr uintptr_t Slomo = 0x00E4;
		constexpr uintptr_t FOV = 0x00E8;
		constexpr uintptr_t ViewRoll = 0x00EC;
		constexpr uintptr_t Replay = 0x00F0;
		constexpr uintptr_t PendingSkipToFrame = 0x00F8;
		constexpr uintptr_t ModalProcessing = 0x0100;
	}

	namespace GFxData_Replay_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t PrimaryPlayerTeam = 0x00A8;
		constexpr uintptr_t PrimaryPlayerScore = 0x00AC;
		constexpr uintptr_t PrimaryPlayerGoals = 0x00B0;
		constexpr uintptr_t PrimaryPlayerAssists = 0x00B4;
		constexpr uintptr_t PrimaryPlayerSaves = 0x00B8;
		constexpr uintptr_t PrimaryPlayerShots = 0x00BC;
		constexpr uintptr_t MatchStartEpoch = 0x00C0;
		constexpr uintptr_t MatchEndEpoch = 0x00C8;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t TotalSecondsPlayed = 0x00F0;
		constexpr uintptr_t WinningTeam = 0x00F4;
		constexpr uintptr_t Bitfields_0x00F8 = 0x00F8;
	}

	namespace GFxData_Restrictions_TA {
		constexpr uintptr_t RestrictedModal = 0x0098;
		constexpr uintptr_t EpicConfig = 0x00A0;
	}

	namespace GFxData_RewardDrop_TA {
		constexpr uintptr_t RewardDrops = 0x0098;
	}

	namespace GFxData_RewardDrop_XP_TA {
		constexpr uintptr_t UnnamedMember_0x00A0 = 0x00A0;
	}

	namespace GFxData_RewardDrops_TA {
		constexpr uintptr_t FName = 0x0098;
		constexpr uintptr_t Total = 0x00A0;
		constexpr uintptr_t Base = 0x00A4;
		constexpr uintptr_t BaseLevel = 0x00A8;
		constexpr uintptr_t Level = 0x00AC;
		constexpr uintptr_t LevelThresholds = 0x00B0;
		constexpr uintptr_t Modifiers = 0x00C0;
		constexpr uintptr_t RewardDrops = 0x00D0;
		constexpr uintptr_t PremiumModifierNames = 0x00D8;
		constexpr uintptr_t PenaltyModifierNames = 0x00E8;
		constexpr uintptr_t PromoModifierNames = 0x00F8;
		constexpr uintptr_t FName = 0x0108;
		constexpr uintptr_t FString = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FName = 0x0130;
		constexpr uintptr_t FName = 0x0138;
		constexpr uintptr_t UnnamedMember_0x0140 = 0x0140;
	}

	namespace GFxData_RocketPass_TA {
		constexpr uintptr_t FreeRewards = 0x0098;
		constexpr uintptr_t PremiumRewards = 0x00A8;
		constexpr uintptr_t PrestigeRewards = 0x00B8;
		constexpr uintptr_t PremiumXPRewards = 0x00C8;
		constexpr uintptr_t PremiumCurrencyRewards = 0x00D8;
		constexpr uintptr_t StartTime = 0x00E8;
		constexpr uintptr_t EndTime = 0x00F0;
		constexpr uintptr_t RocketPassSet = 0x00F8;
		constexpr uintptr_t PendingMasterTask = 0x0100;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FName = 0x0118;
		constexpr uintptr_t FName = 0x0120;
		constexpr uintptr_t UnnamedMember_0x0128 = 0x0128;
		constexpr uintptr_t RocketPass = 0x0130;
		constexpr uintptr_t RocketPassConfig = 0x0138;
	}

	namespace GFxData_SaveData_TA {
		constexpr uintptr_t PersistentSavedValues = 0x0098;
		constexpr uintptr_t TransientSavedValues = 0x00A0;
	}

	namespace GFxData_SchematicTradeIn_TA {
		constexpr uintptr_t Schematics = 0x0098;
		constexpr uintptr_t ModalProcessing = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t MinResources = 0x00C0;
		constexpr uintptr_t MaxResources = 0x00C4;
	}

	namespace GFxData_ScoreboardStat_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
	}

	namespace GFxData_Scoreboard_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
	}

	namespace GFxData_SeasonMode_TA {
		constexpr uintptr_t PlayerBots = 0x0098;
		constexpr uintptr_t NumSeasons = 0x00A8;
		constexpr uintptr_t Logos = 0x00B0;
		constexpr uintptr_t Bots = 0x00C0;
		constexpr uintptr_t TeamLogo = 0x00D0;
		constexpr uintptr_t SeasonSave = 0x00D8;
		constexpr uintptr_t PreviewSet = 0x00E0;
		constexpr uintptr_t UnnamedMember_0x00E8 = 0x00E8;
		constexpr uintptr_t CurrentTeamSize = 0x00EC;
	}

	namespace GFxData_SeasonReward_TA {
		constexpr uintptr_t Level = 0x0098;
		constexpr uintptr_t Wins = 0x009C;
		constexpr uintptr_t WinsRequired = 0x00A0;
		constexpr uintptr_t UnnamedMember_0x00A4 = 0x00A4;
		constexpr uintptr_t RankedConfig = 0x00A8;
		constexpr uintptr_t Skill = 0x00B0;
	}

	namespace GFxData_Season_TA {
		constexpr uintptr_t TeamRankings = 0x0098;
		constexpr uintptr_t WeekMatches = 0x00A8;
		constexpr uintptr_t Weeks = 0x00B8;
		constexpr uintptr_t Profile = 0x00C8;
		constexpr uintptr_t Season = 0x00D0;
	}

	namespace GFxData_ServerBrowser_TA {
		constexpr uintptr_t TAPlayer = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t Results = 0x00C0;
		constexpr uintptr_t ProcessingModal = 0x00D0;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t SaveData = 0x00E8;
	}

	namespace GFxData_ServerPerformanceStats_TA {
		constexpr uintptr_t ServerPerformanceStatus = 0x0098;
		constexpr uintptr_t UnnamedMember_0x009C = 0x009C;
	}

	namespace GFxData_Settings_TA {
		constexpr uintptr_t CrossNetworkTask = 0x0098;
		constexpr uintptr_t FProfileSliderLimits = 0x00A0;
		constexpr uintptr_t FProfileSliderLimits = 0x00AC;
		constexpr uintptr_t FProfileSliderLimits = 0x00B8;
		constexpr uintptr_t FProfileSliderLimits = 0x00C4;
		constexpr uintptr_t FProfileSliderLimits = 0x00D0;
		constexpr uintptr_t FProfileSliderLimits = 0x00DC;
		constexpr uintptr_t FProfileSliderLimits = 0x00E8;
		constexpr uintptr_t FProfileSliderLimits = 0x00F4;
		constexpr uintptr_t FProfileSliderLimits = 0x0100;
		constexpr uintptr_t FProfileSliderLimits = 0x010C;
		constexpr uintptr_t FProfileSliderLimits = 0x0118;
		constexpr uintptr_t FProfileSliderLimits = 0x0124;
		constexpr uintptr_t FProfileSliderLimits = 0x0130;
		constexpr uintptr_t FProfileSliderLimits = 0x013C;
		constexpr uintptr_t FProfileSliderLimits = 0x0148;
		constexpr uintptr_t FProfileSliderLimits = 0x0154;
		constexpr uintptr_t FProfileSliderLimits = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t SettingsConfig = 0x0180;
		constexpr uintptr_t FreeplayConfig = 0x0188;
		constexpr uintptr_t ItemShopNotificationsConfig = 0x0190;
		constexpr uintptr_t FString = 0x0198;
		constexpr uintptr_t CrossplaySetting = 0x01A8;
		constexpr uintptr_t UserSettings = 0x01B0;
		constexpr uintptr_t FString = 0x01C0;
		constexpr uintptr_t FString = 0x01D0;
		constexpr uintptr_t Bitfields_0x01E0 = 0x01E0;
		constexpr uintptr_t Profile = 0x01E8;
		constexpr uintptr_t SaveData = 0x01F0;
		constexpr uintptr_t Viewport = 0x01F8;
		constexpr uintptr_t SettingObserver = 0x0200;
		constexpr uintptr_t SoundSave = 0x0208;
		constexpr uintptr_t SoundSaveController = 0x0210;
		constexpr uintptr_t GameplaySave = 0x0218;
		constexpr uintptr_t ProfileGameplaySave = 0x0220;
		constexpr uintptr_t NetworkSave = 0x0228;
		constexpr uintptr_t ConnectionQualitySave = 0x0230;
		constexpr uintptr_t ProfileCameraSave = 0x0238;
		constexpr uintptr_t GamepadSave = 0x0240;
		constexpr uintptr_t VideoSave = 0x0248;
		constexpr uintptr_t MusicSave = 0x0250;
		constexpr uintptr_t ProfileControlsSave = 0x0258;
		constexpr uintptr_t NotificationSave = 0x0260;
		constexpr uintptr_t EpicAccountSave = 0x0268;
		constexpr uintptr_t VoiceSettingsSave = 0x0270;
		constexpr uintptr_t OnlineFreeplaySave = 0x0278;
		constexpr uintptr_t SteamInputSettings = 0x0280;
		constexpr uintptr_t ControllerCount = 0x0288;
		constexpr uintptr_t FString = 0x0290;
		constexpr uintptr_t FString = 0x02A0;
		constexpr uintptr_t FString = 0x02B0;
		constexpr uintptr_t FString = 0x02C0;
		constexpr uintptr_t FString = 0x02D0;
		constexpr uintptr_t FString = 0x02E0;
		constexpr uintptr_t FString = 0x02F0;
	}

	namespace GFxData_ShopAds_TA {
		constexpr uintptr_t Config = 0x0098;
	}

	namespace GFxData_ShopCatalogue_TA {
		constexpr uintptr_t ShopManager = 0x0098;
		constexpr uintptr_t ShopID = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t StartDate = 0x00D8;
		constexpr uintptr_t EndDate = 0x00E0;
		constexpr uintptr_t ShopImage = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t Bitfields_0x0100 = 0x0100;
		constexpr uintptr_t CachedItems = 0x0108;
		constexpr uintptr_t CacheDuration = 0x0118;
		constexpr uintptr_t LastCacheTime = 0x011C;
		constexpr uintptr_t LastOwnedCacheTime = 0x0120;
		constexpr uintptr_t LastOwnershipDesyncTime = 0x0124;
		constexpr uintptr_t ShopTask = 0x0128;
		constexpr uintptr_t CatalogueSet = 0x0130;
		constexpr uintptr_t ExpirationHelper = 0x0138;
		constexpr uintptr_t AutoLoadHelper = 0x0140;
		constexpr uintptr_t ShopsConfig = 0x0148;
	}

	namespace GFxData_Shops_TA {
		constexpr uintptr_t ShopManager = 0x0098;
		constexpr uintptr_t ImageDownloader = 0x00A0;
		constexpr uintptr_t Config = 0x00A8;
		constexpr uintptr_t Shops = 0x00B0;
		constexpr uintptr_t FMap_Mirror = 0x00C0;
		constexpr uintptr_t DebugShopID = 0x0110;
		constexpr uintptr_t Bitfields_0x0114 = 0x0114;
		constexpr uintptr_t CrateShopSet = 0x0118;
		constexpr uintptr_t CacheDuration = 0x0120;
		constexpr uintptr_t LastCacheTime = 0x0124;
		constexpr uintptr_t ShopTask = 0x0128;
		constexpr uintptr_t ShopMetrics = 0x0130;
		constexpr uintptr_t ShopTabs = 0x0138;
		constexpr uintptr_t ShopNotificationsManager = 0x0140;
		constexpr uintptr_t CatalogueCache = 0x0148;
	}

	namespace GFxData_SpecialEventStore_TA {
		constexpr uintptr_t EventID = 0x0098;
		constexpr uintptr_t Rewards = 0x00A0;
		constexpr uintptr_t SpecialEventsSet = 0x00B0;
	}

	namespace GFxData_SpecialEvents_TA {
		constexpr uintptr_t EventData = 0x0098;
		constexpr uintptr_t EventState = 0x00A0;
		constexpr uintptr_t Currency = 0x00A4;
		constexpr uintptr_t SecondsRemaining = 0x00A8;
		constexpr uintptr_t EventStores = 0x00B0;
		constexpr uintptr_t Wallet = 0x00C0;
		constexpr uintptr_t UnnamedMember_0x00C8 = 0x00C8;
	}

	namespace GFxData_SpectatorStatNames_TA {
		constexpr uintptr_t FString = 0x0098;
	}

	namespace GFxData_SpectatorStat_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
	}

	namespace GFxData_SplitscreenMatch_TA {
		constexpr uintptr_t UnknownData00 = 0x019A;
	}

	namespace GFxData_StartMenu_TA {
		constexpr uintptr_t OnlineGame = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t SignInModal = 0x00B0;
		constexpr uintptr_t ClickedControllerIndex = 0x00B8;
		constexpr uintptr_t PlayerInterfaceAwaiting_Object = 0x00C0;
		constexpr uintptr_t PlayerInterfaceAwaiting_Interface = 0x00C8;
	}

	namespace GFxData_Stats_TA {
		constexpr uintptr_t Events = 0x0098;
		constexpr uintptr_t StatEvents = 0x00A8;
	}

	namespace GFxData_SupportACreator_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t ExpirationDate = 0x00A8;
		constexpr uintptr_t SupportType = 0x00B0;
		constexpr uintptr_t ProcessingModal = 0x00B8;
		constexpr uintptr_t CreatorIcons = 0x00C0;
	}

	namespace GFxData_System_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t LocalPlayerCount = 0x00C8;
		constexpr uintptr_t Bitfields_0x00CC = 0x00CC;
		constexpr uintptr_t SplitScreenType = 0x00D0;
		constexpr uintptr_t AvailableGamepadType = 0x00D1;
		constexpr uintptr_t SafeZoneRatio = 0x00D4;
		constexpr uintptr_t UIScale = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
	}

	namespace GFxData_TeamInfo_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FColor = 0x00A8;
		constexpr uintptr_t Score = 0x00AC;
		constexpr uintptr_t TeamLogo = 0x00B0;
		constexpr uintptr_t TeamClubID = 0x00B8;
		constexpr uintptr_t SeriesScore = 0x00C0;
		constexpr uintptr_t Team = 0x00C8;
		constexpr uintptr_t Difficulty = 0x00D0;
	}

	namespace GFxData_ThankYouMessageManager_TA {
		constexpr uintptr_t Config = 0x0098;
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
		constexpr uintptr_t FName = 0x00A4;
		constexpr uintptr_t FName = 0x00AC;
		constexpr uintptr_t UISavedValues = 0x00B8;
	}

	namespace GFxData_TourBracketGame_TA {
		constexpr uintptr_t MatchID = 0x0098;
		constexpr uintptr_t GameNum = 0x009C;
		constexpr uintptr_t TeamScore0 = 0x00A0;
		constexpr uintptr_t TeamScore1 = 0x00A4;
		constexpr uintptr_t GameTimeSeconds = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00AC = 0x00AC;
		constexpr uintptr_t WinnerTeam = 0x00B0;
	}

	namespace GFxData_TourBracketLeaderboard_TA {
		constexpr uintptr_t TeamGoals = 0x0098;
		constexpr uintptr_t PlayerGoals = 0x00A8;
		constexpr uintptr_t PlayerAssists = 0x00B8;
		constexpr uintptr_t PlayerSaves = 0x00C8;
	}

	namespace GFxData_TourBracketMatchDetails_TA {
		constexpr uintptr_t TournamentID = 0x0098;
		constexpr uintptr_t MatchID = 0x00A0;
		constexpr uintptr_t PollIntervalSeconds = 0x00A4;
		constexpr uintptr_t GetMatchDetailsTask = 0x00A8;
		constexpr uintptr_t Tournaments = 0x00B0;
	}

	namespace GFxData_TourBracketMatchTeamDetails_TA {
		constexpr uintptr_t TeamID = 0x0098;
		constexpr uintptr_t GameStats = 0x00A0;
		constexpr uintptr_t PlayerStats = 0x00B0;
	}

	namespace GFxData_TourBracketMatch_TA {
		constexpr uintptr_t MatchID = 0x0098;
		constexpr uintptr_t Round = 0x009C;
		constexpr uintptr_t Order = 0x00A0;
		constexpr uintptr_t NextMatch = 0x00A4;
		constexpr uintptr_t PrevMatchA = 0x00A8;
		constexpr uintptr_t PrevMatchB = 0x00AC;
		constexpr uintptr_t TeamA = 0x00B0;
		constexpr uintptr_t TeamB = 0x00B8;
		constexpr uintptr_t TeamAWins = 0x00C0;
		constexpr uintptr_t TeamBWins = 0x00C4;
		constexpr uintptr_t WinnerTeam = 0x00C8;
		constexpr uintptr_t Bitfields_0x00D0 = 0x00D0;
		constexpr uintptr_t GFxGameClass = 0x00D8;
	}

	namespace GFxData_TourBracketTeam_TA {
		constexpr uintptr_t TeamID = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t TeamColorID = 0x00B0;
		constexpr uintptr_t CustomColorID = 0x00B4;
	}

	namespace GFxData_TourBracket_TA {
		constexpr uintptr_t Tournaments = 0x0098;
		constexpr uintptr_t PlayerTeamID = 0x00A0;
		constexpr uintptr_t TotalRounds = 0x00A8;
		constexpr uintptr_t Id = 0x00B0;
		constexpr uintptr_t CurrentPayouts = 0x00B8;
		constexpr uintptr_t BracketSync = 0x00C8;
	}

	namespace GFxData_TourCheckInError_TA {
		constexpr uintptr_t Tournaments = 0x0098;
	}

	namespace GFxData_TourCheckIn_TA {
		constexpr uintptr_t Tournaments = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FCustomMatchTeamSettings = 0x00B0;
		constexpr uintptr_t SaveData = 0x00D0;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace GFxData_TourConfig_TA {
		constexpr uintptr_t Config = 0x0098;
	}

	namespace GFxData_TourCreate_TA {
		constexpr uintptr_t FString = 0x01A0;
		constexpr uintptr_t FString = 0x01B0;
		constexpr uintptr_t MaxBracketSize = 0x01C0;
		constexpr uintptr_t RankMin = 0x01C4;
		constexpr uintptr_t RankMax = 0x01C8;
		constexpr uintptr_t SeriesLength = 0x01CC;
		constexpr uintptr_t FinalSeriesLength = 0x01D0;
		constexpr uintptr_t Rewards = 0x01D8;
		constexpr uintptr_t SeedingType = 0x01E8;
		constexpr uintptr_t TieBreaker = 0x01E9;
		constexpr uintptr_t OnlineSub = 0x01F0;
		constexpr uintptr_t Tournaments = 0x01F8;
		constexpr uintptr_t Config = 0x0200;
		constexpr uintptr_t Settings = 0x0208;
		constexpr uintptr_t TournamentSave = 0x0210;
		constexpr uintptr_t DefaultMapSet = 0x0218;
	}

	namespace GFxData_TourDependentMatch_TA {
		constexpr uintptr_t Tournaments = 0x00E0;
	}

	namespace GFxData_TourDetails_TA {
		constexpr uintptr_t Settings = 0x0098;
		constexpr uintptr_t OnlineProductSet = 0x00A0;
		constexpr uintptr_t DetailsSync = 0x00A8;
		constexpr uintptr_t TourSettings = 0x00B0;
		constexpr uintptr_t Tournaments = 0x00B8;
		constexpr uintptr_t Rewards = 0x00C0;
		constexpr uintptr_t CreatorAvatar = 0x00D0;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t Bitfields_0x00E8 = 0x00E8;
	}

	namespace GFxData_TourEvent_TA {
		constexpr uintptr_t Tournaments = 0x0098;
		constexpr uintptr_t TourMatchmaking = 0x00A0;
		constexpr uintptr_t TourConfig = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t Id = 0x00C0;
		constexpr uintptr_t ScheduleID = 0x00C8;
		constexpr uintptr_t SecondsRemaining = 0x00D0;
		constexpr uintptr_t GenerateBracketTime = 0x00D8;
		constexpr uintptr_t Status = 0x00E0;
		constexpr uintptr_t LocalTeamID = 0x00E8;
		constexpr uintptr_t Round = 0x00F0;
		constexpr uintptr_t TotalRounds = 0x00F4;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t EndGameWarningEpochTime = 0x0108;
		constexpr uintptr_t EndGameEpochTime = 0x0110;
		constexpr uintptr_t UnnamedMember_0x0118 = 0x0118;
		constexpr uintptr_t ActiveTournament = 0x0120;
		constexpr uintptr_t MatchID = 0x0128;
	}

	namespace GFxData_TourMatchmaking_TA {
		constexpr uintptr_t TourMatchmaking = 0x0098;
		constexpr uintptr_t GameVersion = 0x00A0;
	}

	namespace GFxData_TourPlatforms_TA {
		constexpr uintptr_t Groups = 0x0098;
		constexpr uintptr_t OnlineSub = 0x00A8;
	}

	namespace GFxData_TourRegistration_TA {
		constexpr uintptr_t Tournaments = 0x0098;
	}

	namespace GFxData_TourSearch_TA {
		constexpr uintptr_t Config = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t RankMin = 0x00B0;
		constexpr uintptr_t RankMax = 0x00B4;
		constexpr uintptr_t GameMode = 0x00B8;
		constexpr uintptr_t Regions = 0x00C0;
		constexpr uintptr_t TeamSize = 0x00D0;
		constexpr uintptr_t BracketSize = 0x00D4;
		constexpr uintptr_t UnnamedMember_0x00D8 = 0x00D8;
		constexpr uintptr_t GFxTourList = 0x00E0;
		constexpr uintptr_t TourList = 0x00E8;
		constexpr uintptr_t Profile = 0x00F0;
		constexpr uintptr_t SearchTask = 0x00F8;
		constexpr uintptr_t TournamentSave = 0x0100;
	}

	namespace GFxData_TourSpectate_TA {
		constexpr uintptr_t Tournaments = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t ActiveTask = 0x00D0;
		constexpr uintptr_t PendingTourID = 0x00D8;
	}

	namespace GFxData_TourStatus_TA {
		constexpr uintptr_t Status = 0x0098;
	}

	namespace GFxData_TourSubscription_TA {
		constexpr uintptr_t TourSettings = 0x0098;
		constexpr uintptr_t TourList = 0x00A0;
		constexpr uintptr_t Difficulty = 0x00A8;
		constexpr uintptr_t Placement = 0x00AC;
	}

	namespace GFxData_TourSubscriptions_TA {
		constexpr uintptr_t Tournaments = 0x0098;
		constexpr uintptr_t Subscriptions = 0x00A0;
		constexpr uintptr_t Created = 0x00A8;
		constexpr uintptr_t AdminOf = 0x00B8;
		constexpr uintptr_t RegisteredTo = 0x00C8;
	}

	namespace GFxData_TradeInFilter_TA {
		constexpr uintptr_t Id = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t PossibleTradeIns = 0x00B0;
		constexpr uintptr_t FProductTradeInFilter = 0x00C0;
		constexpr uintptr_t SaveData = 0x0110;
	}

	namespace GFxData_TrainingModeBrowser_TA {
		constexpr uintptr_t TrainingBrowserConfig = 0x0098;
		constexpr uintptr_t CachedOnlineSearchResults = 0x00A0;
		constexpr uintptr_t PendingRPC = 0x00D0;
		constexpr uintptr_t CachedSearchDuration = 0x00D8;
		constexpr uintptr_t CachedFavoriteTimeoutTime = 0x00DC;
		constexpr uintptr_t FavoritedFilesMetaData = 0x00E0;
		constexpr uintptr_t Bitfields_0x00F0 = 0x00F0;
		constexpr uintptr_t CachedFavoriteDuration = 0x00F4;
		constexpr uintptr_t CachedDownloadedFiles = 0x00F8;
		constexpr uintptr_t LoadingFiles = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t MaxCachedDownloadedFiles = 0x0128;
		constexpr uintptr_t TrainingSaveData = 0x0130;
	}

	namespace GFxData_TrainingModeConstants_TA {
		constexpr uintptr_t Difficulties = 0x0098;
		constexpr uintptr_t Types = 0x00A8;
		constexpr uintptr_t Tags = 0x00B8;
		constexpr uintptr_t FName = 0x00C8;
	}

	namespace GFxData_TrainingModeEditor_TA {
		constexpr uintptr_t MyGameEvent = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t RoundData = 0x00B0;
		constexpr uintptr_t CurrentRound = 0x00C0;
		constexpr uintptr_t Tags = 0x00C8;
		constexpr uintptr_t Editing = 0x00D8;
		constexpr uintptr_t BallStartSpeed = 0x00DC;
		constexpr uintptr_t BallScreenPosX = 0x00E0;
		constexpr uintptr_t BallScreenPosY = 0x00E4;
		constexpr uintptr_t Bitfields_0x00E8 = 0x00E8;
		constexpr uintptr_t ModalProcessing = 0x00F0;
	}

	namespace GFxData_TrainingMode_TA {
		constexpr uintptr_t TrainingModeConfig = 0x0098;
		constexpr uintptr_t Status = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t Bitfields_0x00D8 = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t ShotsCompleted = 0x0100;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t CreatorAvatar = 0x0118;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t SaveData = 0x0150;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t ModalProcessing = 0x0198;
	}

	namespace GFxData_Training_TA {
		constexpr uintptr_t FName = 0x0098;
		constexpr uintptr_t CurrentScore = 0x00A0;
		constexpr uintptr_t CurrentRound = 0x00A4;
		constexpr uintptr_t TotalRounds = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FName = 0x00C0;
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t UseActions = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t ProgressPerShot = 0x00F0;
		constexpr uintptr_t CurrentPlaylistIndex = 0x0100;
		constexpr uintptr_t ControlsVisibility = 0x0104;
		constexpr uintptr_t TrainingEditor = 0x0108;
		constexpr uintptr_t ProgressTracker = 0x0110;
		constexpr uintptr_t TrainingConfig = 0x0118;
	}

	namespace GFxData_UIConfig_TA {
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
	}

	namespace GFxData_UserBugReport_TA {
		constexpr uintptr_t Config = 0x0098;
		constexpr uintptr_t UnnamedMember_0x00A0 = 0x00A0;
		constexpr uintptr_t Categories = 0x00A8;
		constexpr uintptr_t SelectedCategories = 0x00B8;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t Status = 0x00D8;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t PendingData = 0x0100;
		constexpr uintptr_t UploadTask = 0x0108;
	}

	namespace GFxData_UserSetting_TA {
		constexpr uintptr_t Type = 0x0098;
		constexpr uintptr_t FName = 0x009C;
		constexpr uintptr_t FName = 0x00A4;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t ValuesArray = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t Bitfields_0x0110 = 0x0110;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t FProfileSliderLimits = 0x0128;
	}

	namespace GFxData_ViewMetrics_TA {
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
		constexpr uintptr_t ActiveViewID = 0x009C;
		constexpr uintptr_t Config = 0x00A0;
	}

	namespace GFxData_Vote_TA {
		constexpr uintptr_t Subject = 0x0098;
		constexpr uintptr_t VoteStatus = 0x0099;
		constexpr uintptr_t LocalVoteStatus = 0x009A;
		constexpr uintptr_t YesVotes = 0x009C;
		constexpr uintptr_t NoVotes = 0x00A0;
		constexpr uintptr_t RequiredVotes = 0x00A4;
		constexpr uintptr_t TimeRemaining = 0x00A8;
		constexpr uintptr_t VoteActor = 0x00B0;
	}

	namespace GFxData_WalletCurrency_TA {
		constexpr uintptr_t CurrencyID = 0x0098;
		constexpr uintptr_t Type = 0x009C;
		constexpr uintptr_t SmallImage = 0x00A0;
		constexpr uintptr_t LargeImage = 0x00A8;
		constexpr uintptr_t Amount = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
	}

	namespace GFxData_Wallet_TA {
		constexpr uintptr_t Wallet = 0x0098;
		constexpr uintptr_t Currencies = 0x00A0;
	}

	namespace GFxData_WebBrowser_TA {
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t UrlConfig = 0x00B8;
	}

	namespace GFxData_Workshop_TA {
		constexpr uintptr_t Items = 0x0098;
		constexpr uintptr_t RetrievedNetIds = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
	}

	namespace GFxEngine_TA {
		constexpr uintptr_t UISoundStates = 0x01A0;
		constexpr uintptr_t UnnamedMember_0x01B0 = 0x01B0;
		constexpr uintptr_t LoadingScreen = 0x01B8;
		constexpr uintptr_t OnlineSubsystem = 0x01C0;
	}

	namespace GFxHUD_GameEditor_TA {
		constexpr uintptr_t EditorData = 0x0540;
		constexpr uintptr_t TrainingGameEvent = 0x0548;
	}

	namespace GFxHUD_KnockOut_TA {
		constexpr uintptr_t KnockOutGame = 0x0558;
		constexpr uintptr_t KnockOutCarData = 0x0560;
		constexpr uintptr_t ViewportClient = 0x0568;
		constexpr uintptr_t DefaultMinZOffsetValue = 0x0570;
		constexpr uintptr_t DefaultMaxZOffsetValue = 0x0574;
		constexpr uintptr_t LowMinZOffsetClampValue = 0x0578;
		constexpr uintptr_t HighMinZOffsetClampValue = 0x057C;
		constexpr uintptr_t LowMaxZOffsetClampValue = 0x0580;
		constexpr uintptr_t HighMaxZOffsetClampValue = 0x0584;
		constexpr uintptr_t MinSqDistance = 0x0588;
		constexpr uintptr_t MaxSqDistance = 0x058C;
	}

	namespace GFxHUD_Replay_TA {
		constexpr uintptr_t Game = 0x05A0;
		constexpr uintptr_t PrevKeyframeBufferTime = 0x05A8;
		constexpr uintptr_t Bitfields_0x05AC = 0x05AC;
		constexpr uintptr_t ReferencedProducts = 0x05B0;
	}

	namespace GFxHUD_Soccar_TA {
		constexpr uintptr_t SoccarGame = 0x0540;
		constexpr uintptr_t GFxServerPerformanceStats = 0x0548;
		constexpr uintptr_t PreMatchLobby = 0x0550;
	}

	namespace GFxHUD_Spectator_TA {
		constexpr uintptr_t ViewerData = 0x0540;
		constexpr uintptr_t ZoomSpeed = 0x0548;
		constexpr uintptr_t ZoomClickTime = 0x054C;
		constexpr uintptr_t GameHUD = 0x0550;
		constexpr uintptr_t TargetPlayerPRI = 0x0558;
		constexpr uintptr_t Bitfields_0x0560 = 0x0560;
		constexpr uintptr_t ZoomInTime = 0x0564;
		constexpr uintptr_t ZoomOutTime = 0x0568;
	}

	namespace GFxHUD_TA {
		constexpr uintptr_t FString = 0x0390;
		constexpr uintptr_t GFxPRIClass = 0x03A0;
		constexpr uintptr_t MatchInfoMovieArchetype = 0x03A8;
		constexpr uintptr_t MatchInfoMovie = 0x03B0;
		constexpr uintptr_t NameplatesManager = 0x03B8;
		constexpr uintptr_t FString = 0x03C0;
		constexpr uintptr_t FString = 0x03D0;
		constexpr uintptr_t FString = 0x03E0;
		constexpr uintptr_t FString = 0x03F0;
		constexpr uintptr_t FString = 0x0400;
		constexpr uintptr_t FString = 0x0410;
		constexpr uintptr_t FString = 0x0420;
		constexpr uintptr_t FString = 0x0430;
		constexpr uintptr_t FString = 0x0440;
		constexpr uintptr_t OwnerPRI = 0x0450;
		constexpr uintptr_t OwnerCar = 0x0458;
		constexpr uintptr_t GameEvent = 0x0460;
		constexpr uintptr_t TeamGameEvent = 0x0468;
		constexpr uintptr_t GameEventData = 0x0470;
		constexpr uintptr_t CarData = 0x0478;
		constexpr uintptr_t PRIData = 0x0480;
		constexpr uintptr_t MiniScoreboard = 0x0490;
		constexpr uintptr_t EOSGameClipsMaskHandler = 0x0498;
		constexpr uintptr_t PlayerRecordData = 0x04A0;
		constexpr uintptr_t Bitfields_0x04B0 = 0x04B0;
		constexpr uintptr_t FVector = 0x04B4;
		constexpr uintptr_t FVector = 0x04C0;
		constexpr uintptr_t CloseScoreboardTime = 0x04CC;
		constexpr uintptr_t PendingShowAddMessagePlayers = 0x04D0;
		constexpr uintptr_t LastTarget = 0x04E0;
		constexpr uintptr_t TestLastLogTime = 0x04E8;
		constexpr uintptr_t CarDisplayingBoost = 0x04F0;
		constexpr uintptr_t AdHocBeacon = 0x04F8;
		constexpr uintptr_t FString = 0x0500;
		constexpr uintptr_t FString = 0x0510;
		constexpr uintptr_t Scoreboard = 0x0520;
	}

	namespace GFxHUD_Training_TA {
		constexpr uintptr_t TrainingData = 0x0558;
	}

	namespace GFxModal_FriendJoin_TA {
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace GFxModal_RankedReconnect_TA {
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t Task = 0x00E8;
	}

	namespace GFxNameplatesManager_TA {
		constexpr uintptr_t MovieArchetype = 0x0070;
		constexpr uintptr_t NameplateMeshArchetype = 0x0078;
		constexpr uintptr_t Shell = 0x0080;
		constexpr uintptr_t Movie = 0x0088;
		constexpr uintptr_t Bitfields_0x0090 = 0x0090;
		constexpr uintptr_t ComponentSlots = 0x0098;
		constexpr uintptr_t PendingComponents = 0x00A8;
		constexpr uintptr_t NameplateRows = 0x00B8;
		constexpr uintptr_t Nameplates = 0x00C8;
	}

	namespace GFxProductAttributeMap_TA {
		constexpr uintptr_t GFxClasses = 0x0060;
	}

	namespace GFxShell_TA {
		constexpr uintptr_t ChampionshipTrophyArchetype = 0x0130;
		constexpr uintptr_t TAPlayer = 0x0138;
		constexpr uintptr_t SystemData = 0x0140;
		constexpr uintptr_t LocalPlayerData = 0x0148;
		constexpr uintptr_t Bitfields_0x0150 = 0x0150;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t FString = 0x0198;
		constexpr uintptr_t FString = 0x01A8;
		constexpr uintptr_t FString = 0x01B8;
		constexpr uintptr_t FString = 0x01C8;
		constexpr uintptr_t FString = 0x01D8;
		constexpr uintptr_t FString = 0x01E8;
		constexpr uintptr_t FString = 0x01F8;
		constexpr uintptr_t FString = 0x0208;
		constexpr uintptr_t FString = 0x0218;
		constexpr uintptr_t ActiveModals = 0x0228;
		constexpr uintptr_t PendingMessageType = 0x0238;
		constexpr uintptr_t FString = 0x0240;
		constexpr uintptr_t FString = 0x0250;
		constexpr uintptr_t LastPsyNetReconnectTime = 0x0260;
		constexpr uintptr_t ModalKick = 0x0268;
		constexpr uintptr_t FString = 0x0270;
		constexpr uintptr_t MAX_CLIENT_OFFSET = 0x0280;
		constexpr uintptr_t VoiceManager = 0x0288;
	}

	namespace GFxTourList_TA {
		constexpr uintptr_t Shell = 0x0070;
		constexpr uintptr_t TourList = 0x0078;
		constexpr uintptr_t GFxDataClass = 0x0080;
	}

	namespace GRI_TA {
		constexpr uintptr_t UnnamedMember_0x06A8 = 0x06A8;
		constexpr uintptr_t FString = 0x06B0;
	}

	namespace GameData_TA {
		constexpr uintptr_t Products = 0x0060;
		constexpr uintptr_t XPManager = 0x0068;
		constexpr uintptr_t MaxTeamSize = 0x0070;
		constexpr uintptr_t ProductSlots = 0x0078;
		constexpr uintptr_t SlotLoadOrder = 0x0088;
		constexpr uintptr_t BodySlot = 0x0098;
		constexpr uintptr_t SkinSlot = 0x00A0;
		constexpr uintptr_t WheelSlot = 0x00A8;
		constexpr uintptr_t BoostSlot = 0x00B0;
		constexpr uintptr_t AntennaSlot = 0x00B8;
		constexpr uintptr_t HatSlot = 0x00C0;
		constexpr uintptr_t FrontSlot = 0x00C8;
		constexpr uintptr_t PaintFinishSlot = 0x00D0;
		constexpr uintptr_t BotSlot = 0x00D8;
		constexpr uintptr_t LogoSlot = 0x00E0;
		constexpr uintptr_t UnderGlowSlot = 0x00E8;
		constexpr uintptr_t PremiumInventorySlot = 0x00F0;
		constexpr uintptr_t CustomFinishSlot = 0x00F8;
		constexpr uintptr_t EngineAudioSlot = 0x0100;
		constexpr uintptr_t SupersonicTrailSlot = 0x0108;
		constexpr uintptr_t GoalExplosionSlot = 0x0110;
		constexpr uintptr_t PlayerBannerSlot = 0x0118;
		constexpr uintptr_t PlayerTitleSlot = 0x0120;
		constexpr uintptr_t ESportsTeamSlot = 0x0128;
		constexpr uintptr_t ArchiveSlot = 0x0130;
		constexpr uintptr_t AllSlot = 0x0138;
		constexpr uintptr_t ShopItemSlot = 0x0140;
		constexpr uintptr_t CurrencySlot = 0x0148;
		constexpr uintptr_t PlayerAvatarSlot = 0x0150;
		constexpr uintptr_t PlayerAvatarBorderSlot = 0x0158;
		constexpr uintptr_t GiftPackSlot = 0x0160;
		constexpr uintptr_t BlueprintSlot = 0x0168;
		constexpr uintptr_t MusicStingersSlot = 0x0170;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t TeamArchetypePaths = 0x0188;
		constexpr uintptr_t TeamArchetypes = 0x0198;
		constexpr uintptr_t FString = 0x01A8;
		constexpr uintptr_t GameModeList = 0x01B8;
		constexpr uintptr_t DefaultLoadouts = 0x01C0;
		constexpr uintptr_t FClientLoadoutData = 0x0240;
		constexpr uintptr_t CustomColorSet = 0x0250;
		constexpr uintptr_t ClubColorSet = 0x0258;
		constexpr uintptr_t ClubColorSet_v1 = 0x0260;
		constexpr uintptr_t PlayerBannerColorSet = 0x0268;
		constexpr uintptr_t PlayerVanityColorSet = 0x0270;
		constexpr uintptr_t MapList = 0x0278;
		constexpr uintptr_t GlobalLookupTexture = 0x0280;
		constexpr uintptr_t OnlineProductAttributes = 0x0288;
		constexpr uintptr_t PaintDB = 0x0298;
		constexpr uintptr_t CertifiedStatDB = 0x02A0;
		constexpr uintptr_t SpecialEditionDB = 0x02A8;
		constexpr uintptr_t ESportsTeamDB = 0x02B0;
	}

	namespace GameEditor_Actor_TA {
		constexpr uintptr_t Mesh = 0x0268;
		constexpr uintptr_t FVector = 0x0270;
		constexpr uintptr_t MaxRotatePitch = 0x027C;
		constexpr uintptr_t MaxInputRotatePitch = 0x0280;
		constexpr uintptr_t UnnamedMember_0x0284 = 0x0284;
		constexpr uintptr_t FXActorArchetype = 0x0288;
		constexpr uintptr_t FXActor = 0x0290;
	}

	namespace GameEditor_Ring_TA {
		constexpr uintptr_t ActorTouchRecords = 0x02D0;
		constexpr uintptr_t MaxRadius = 0x02E0;
		constexpr uintptr_t DetectionType = 0x02E4;
	}

	namespace GameEditor_Trigger_TA {
		constexpr uintptr_t UnnamedMember_0x02B0 = 0x02B0;
	}

	namespace GameEngine_TA {
		constexpr uintptr_t ServerConfig = 0x0B48;
	}

	namespace GameEventProductAssetCache_TA {
		constexpr uintptr_t AssetCache = 0x00A8;
		constexpr uintptr_t PriCache = 0x00B0;
	}

	namespace GameEvent_Breakout_TA {
		constexpr uintptr_t Bitfields_0x0D88 = 0x0D88;
		constexpr uintptr_t LastScoredOnTeam = 0x0D8C;
		constexpr uintptr_t Platforms = 0x0D90;
	}

	namespace GameEvent_FTE_TA {
		constexpr uintptr_t MaxTimeToShowInstructions = 0x0D88;
		constexpr uintptr_t InvalidTeamNum = 0x0D8C;
	}

	namespace GameEvent_Football_TA {
		constexpr uintptr_t LastScoredTeamIndex = 0x0D88;
		constexpr uintptr_t FVector = 0x0D8C;
		constexpr uintptr_t FVector = 0x0D98;
		constexpr uintptr_t FVector = 0x0DA4;
		constexpr uintptr_t BallKickOffScale = 0x0DB0;
		constexpr uintptr_t SpawnRadiusCheck = 0x0DB4;
		constexpr uintptr_t KickoffDelay = 0x0DB8;
	}

	namespace GameEvent_GameEditor_TA {
		constexpr uintptr_t SaveDataClass = 0x0D88;
		constexpr uintptr_t SaveData = 0x0D90;
		constexpr uintptr_t ActiveRoundNumber = 0x0D98;
		constexpr uintptr_t SpawnableArchetypes = 0x0DA0;
		constexpr uintptr_t CarSpawnPoints = 0x0DB0;
		constexpr uintptr_t EditorPawnArchetype = 0x0DC0;
		constexpr uintptr_t MaxRounds = 0x0DC8;
		constexpr uintptr_t UndoHistory = 0x0DD0;
		constexpr uintptr_t HistoryPosition = 0x0DE0;
		constexpr uintptr_t MaxUndoHistory = 0x0DE4;
		constexpr uintptr_t FXActorArchetype = 0x0DE8;
		constexpr uintptr_t FXActor = 0x0DF0;
	}

	namespace GameEvent_GodBall_TA {
		constexpr uintptr_t LastScoredTeamIndex = 0x0D88;
		constexpr uintptr_t FVector = 0x0D8C;
		constexpr uintptr_t FVector = 0x0D98;
		constexpr uintptr_t FVector = 0x0DA4;
		constexpr uintptr_t BallKickOffScale = 0x0DB0;
		constexpr uintptr_t SpawnRadiusCheck = 0x0DB4;
	}

	namespace GameEvent_KnockOut_TA {
		constexpr uintptr_t UnnamedMember_0x0D88 = 0x0D88;
		constexpr uintptr_t PlayerLives = 0x0D8C;
		constexpr uintptr_t PlayersEliminated = 0x0D90;
		constexpr uintptr_t PickupArchetypes = 0x0D98;
		constexpr uintptr_t PickupFXActor = 0x0DA8;
		constexpr uintptr_t PickupRespawnDelay = 0x0DB0;
		constexpr uintptr_t SafeZone = 0x0DB8;
		constexpr uintptr_t SafeZoneArchetype = 0x0DC0;
		constexpr uintptr_t ReturnToSafezoneMessage = 0x0DC8;
		constexpr uintptr_t ReturnedToSafezoneMessage = 0x0DD0;
		constexpr uintptr_t SafeZoneShrinkingMessage = 0x0DD8;
		constexpr uintptr_t SafeZoneFinalZoneMessage = 0x0DE0;
		constexpr uintptr_t OutOfWorldMessage = 0x0DE8;
		constexpr uintptr_t PodiumSpawnLocationZ = 0x0DF0;
	}

	namespace GameEvent_Lobby_TA {
		constexpr uintptr_t BallArchetype = 0x0740;
		constexpr uintptr_t Ball = 0x0748;
	}

	namespace GameEvent_Season_TA {
		constexpr uintptr_t PreMatchTime = 0x0D88;
		constexpr uintptr_t Season = 0x0D90;
		constexpr uintptr_t FSeasonMatch = 0x0D98;
		constexpr uintptr_t Profile = 0x0DB8;
		constexpr uintptr_t HumanTeam = 0x0DC0;
		constexpr uintptr_t BotTeam = 0x0DC8;
		constexpr uintptr_t HumanMatchTeam = 0x0DD0;
		constexpr uintptr_t BotMatchTeam = 0x0DD4;
		constexpr uintptr_t SeasonIntroTime = 0x0DD8;
		constexpr uintptr_t Bitfields_0x0DDC = 0x0DDC;
		constexpr uintptr_t SimilarLogoGroups = 0x0DE0;
		constexpr uintptr_t TeamOverrides = 0x0DE8;
	}

	namespace GameEvent_Soccar_SubRules_Basketball_TA {
		constexpr uintptr_t LongDistanceScore = 0x0060;
		constexpr uintptr_t DefaultScore = 0x0064;
	}

	namespace GameEvent_Soccar_SubRules_Items_TA {
		constexpr uintptr_t DispenserArchetype = 0x0060;
		constexpr uintptr_t StaggerTime = 0x0068;
		constexpr uintptr_t CurrentStaggerByTeam = 0x006C;
		constexpr uintptr_t ItemDispensers = 0x0078;
	}

	namespace GameEvent_Soccar_TA {
		constexpr uintptr_t TestCarArchetype = 0x07D0;
		constexpr uintptr_t BallArchetype = 0x07D8;
		constexpr uintptr_t GoalIndicatorArchetype = 0x07E0;
		constexpr uintptr_t Bitfields_0x07E8 = 0x07E8;
		constexpr uintptr_t BallSpawnPoints = 0x07F0;
		constexpr uintptr_t BallSpawnPointIndex = 0x0800;
		constexpr uintptr_t StatFactoryArchetype = 0x0808;
		constexpr uintptr_t FName = 0x0810;
		constexpr uintptr_t SeriesLength = 0x0818;
		constexpr uintptr_t GameTime = 0x081C;
		constexpr uintptr_t WarmupTime = 0x0820;
		constexpr uintptr_t MaxScore = 0x0824;
		constexpr uintptr_t AutoBalanceDifference = 0x0828;
		constexpr uintptr_t OvertimeComponent = 0x0830;
		constexpr uintptr_t FInterpCurveFloat = 0x0838;
		constexpr uintptr_t ScoreSlomoTime = 0x0850;
		constexpr uintptr_t GameTimeRemaining = 0x0854;
		constexpr uintptr_t SecondsRemaining = 0x0858;
		constexpr uintptr_t WaitTimeRemaining = 0x085C;
		constexpr uintptr_t TotalGameTimePlayed = 0x0860;
		constexpr uintptr_t OvertimeTimePlayed = 0x0864;
		constexpr uintptr_t GoalScoredMessage = 0x0868;
		constexpr uintptr_t OvertimeMessage = 0x0870;
		constexpr uintptr_t TwoMinRemainingMessage = 0x0878;
		constexpr uintptr_t OneMinRemainingMessage = 0x0880;
		constexpr uintptr_t ThirtySecondsRemainingMessage = 0x0888;
		constexpr uintptr_t StopMessage = 0x0890;
		constexpr uintptr_t GamePausedMessage = 0x0898;
		constexpr uintptr_t GameUnPausedMessage = 0x08A0;
		constexpr uintptr_t OutOfBoundsMessage = 0x08A8;
		constexpr uintptr_t NextSpawnIndex = 0x08B0;
		constexpr uintptr_t ReplayDirectorArchetype = 0x08B8;
		constexpr uintptr_t ReplayDirector = 0x08C0;
		constexpr uintptr_t GameBalls = 0x08C8;
		constexpr uintptr_t TotalGameBalls = 0x08D8;
		constexpr uintptr_t PostGoalTime = 0x08DC;
		constexpr uintptr_t StatFactory = 0x08E0;
		constexpr uintptr_t Goals = 0x08E8;
		constexpr uintptr_t SecondsRemainingCountdown = 0x08F8;
		constexpr uintptr_t SecondsRemainingMessage = 0x0900;
		constexpr uintptr_t FVector = 0x0908;
		constexpr uintptr_t GameWinner = 0x0918;
		constexpr uintptr_t MatchWinner = 0x0920;
		constexpr uintptr_t TeamLastScored = 0x0928;
		constexpr uintptr_t TieBreakDecision = 0x0930;
		constexpr uintptr_t ReplicatedScoredOnTeam = 0x0931;
		constexpr uintptr_t ReplicatedServerPerformanceState = 0x0932;
		constexpr uintptr_t MVP = 0x0938;
		constexpr uintptr_t FastestGoalPlayer = 0x0940;
		constexpr uintptr_t SlowestGoalPlayer = 0x0948;
		constexpr uintptr_t FurthestGoalPlayer = 0x0950;
		constexpr uintptr_t FastestGoalSpeed = 0x0958;
		constexpr uintptr_t SlowestGoalSpeed = 0x095C;
		constexpr uintptr_t FurthestGoal = 0x0960;
		constexpr uintptr_t ScoringPlayer = 0x0968;
		constexpr uintptr_t RoundNum = 0x0970;
		constexpr uintptr_t AssistMaxTime = 0x0974;
		constexpr uintptr_t BallHasBeenHitStartDelay = 0x0978;
		constexpr uintptr_t BallRespawnTime = 0x097C;
		constexpr uintptr_t DefaultSubRules = 0x0980;
		constexpr uintptr_t SubRulesArchetype = 0x0988;
		constexpr uintptr_t SubRules = 0x0990;
		constexpr uintptr_t SpawnPointsPodiumAnim = 0x0998;
		constexpr uintptr_t SpawnPointsPodium = 0x09A0;
		constexpr uintptr_t PodiumDelay = 0x09A8;
		constexpr uintptr_t PodiumTime = 0x09AC;
		constexpr uintptr_t SpawnPointLobbyTeams = 0x09B0;
		constexpr uintptr_t StatCategories = 0x09C0;
		constexpr uintptr_t BallTrajectory = 0x09D0;
		constexpr uintptr_t BallTrajectoryArchetype = 0x09D8;
		constexpr uintptr_t UnpauseCountdown = 0x09E0;
		constexpr uintptr_t Pauser = 0x09E8;
		constexpr uintptr_t PlayerMatchData = 0x09F0;
		constexpr uintptr_t EndRoundComponentArchetype = 0x0A00;
		constexpr uintptr_t EndRoundComponent = 0x0A08;
		constexpr uintptr_t MatchBroadcast = 0x0A10;
		constexpr uintptr_t ReplicatedStatEvent = 0x0A18;
		constexpr uintptr_t ImportantStatEvents = 0x0A20;
		constexpr uintptr_t GameObserver = 0x0A30;
		constexpr uintptr_t ActiveFpsRecorder = 0x0A38;
		constexpr uintptr_t InactiveFpsRecorder = 0x0A40;
		constexpr uintptr_t ServerPerformanceTracker = 0x0A48;
		constexpr uintptr_t MatchSeries = 0x0A50;
		constexpr uintptr_t CrowdSound = 0x0A58;
		constexpr uintptr_t ClubInformation = 0x0A60;
		constexpr uintptr_t PendingClubStatRecords = 0x0A70;
		constexpr uintptr_t LobbyTagOffsetZ = 0x0A80;
		constexpr uintptr_t PodiumTagOffsetZ = 0x0A84;
		constexpr uintptr_t BallSpacing = 0x0A88;
		constexpr uintptr_t PreMatchPlayersReadyStartDelay = 0x0A8C;
		constexpr uintptr_t RemovedPRIs = 0x0A90;
	}

	namespace GameEvent_TA {
		constexpr uintptr_t RegistryGroup = 0x0268;
		constexpr uintptr_t MatchType = 0x0270;
		constexpr uintptr_t MatchTypeClass = 0x0278;
		constexpr uintptr_t FName = 0x0280;
		constexpr uintptr_t FName = 0x0288;
		constexpr uintptr_t FName = 0x0290;
		constexpr uintptr_t CarArchetype = 0x0298;
		constexpr uintptr_t CountdownTime = 0x02A0;
		constexpr uintptr_t FinishTime = 0x02A4;
		constexpr uintptr_t Bitfields_0x02A8 = 0x02A8;
		constexpr uintptr_t MinPlayers = 0x02AC;
		constexpr uintptr_t MaxPlayers = 0x02B0;
		constexpr uintptr_t SpawnPoints = 0x02B8;
		constexpr uintptr_t AIManagerArchetype = 0x02C8;
		constexpr uintptr_t AIManager = 0x02D0;
		constexpr uintptr_t Pylon = 0x02D8;
		constexpr uintptr_t BotArchetype = 0x02E0;
		constexpr uintptr_t BotSkill = 0x02E8;
		constexpr uintptr_t DefaultMutators = 0x02F0;
		constexpr uintptr_t Mutators = 0x0300;
		constexpr uintptr_t MatchTimeDilation = 0x0310;
		constexpr uintptr_t HUDArchetype = 0x0318;
		constexpr uintptr_t Activator = 0x0320;
		constexpr uintptr_t ActivatorCar = 0x0328;
		constexpr uintptr_t Players = 0x0330;
		constexpr uintptr_t PRIs = 0x0340;
		constexpr uintptr_t Cars = 0x0350;
		constexpr uintptr_t LocalPlayers = 0x0360;
		constexpr uintptr_t StartPointIndex = 0x0370;
		constexpr uintptr_t ReplicatedStateIndex = 0x0374;
		constexpr uintptr_t DeprecatedIndexToState = 0x0378;
		constexpr uintptr_t FName = 0x0388;
		constexpr uintptr_t GameFullMessage = 0x0390;
		constexpr uintptr_t OtherActiveMessage = 0x0398;
		constexpr uintptr_t NotEnoughPlayersMessage = 0x03A0;
		constexpr uintptr_t TooManyPlayersMessage = 0x03A8;
		constexpr uintptr_t NotPartyLeaderMessage = 0x03B0;
		constexpr uintptr_t CountdownMessages = 0x03B8;
		constexpr uintptr_t GoMessage = 0x03C8;
		constexpr uintptr_t ReplacingBotCountdownMessages = 0x03D0;
		constexpr uintptr_t ReplacingBotGoMessage = 0x03E0;
		constexpr uintptr_t SpawnDelayConfig = 0x03E8;
		constexpr uintptr_t ChatHistory = 0x03F0;
		constexpr uintptr_t GameStateTimeRemaining = 0x0400;
		constexpr uintptr_t ReplicatedGameStateTimeRemaining = 0x0404;
		constexpr uintptr_t BotConfig = 0x0408;
		constexpr uintptr_t ForfeitInitiatorIDs = 0x0410;
		constexpr uintptr_t BannedPlayers = 0x0420;
		constexpr uintptr_t GameOwner = 0x0430;
		constexpr uintptr_t FCustomMatchSettings = 0x0438;
		constexpr uintptr_t FString = 0x04C0;
		constexpr uintptr_t MatchAdmin = 0x04D0;
		constexpr uintptr_t ListenServer = 0x04D8;
		constexpr uintptr_t ReplicatedRoundCountDownNumber = 0x04E0;
		constexpr uintptr_t MatchRecorder = 0x04E8;
		constexpr uintptr_t RandomizedBots = 0x04F0;
		constexpr uintptr_t GameStates = 0x0500;
		constexpr uintptr_t GameState = 0x0510;
		constexpr uintptr_t PauseInstance = 0x0518;
		constexpr uintptr_t MatchStartEpoch = 0x0520;
		constexpr uintptr_t MatchTotalSecondsPlayed = 0x0528;
	}

	namespace GameEvent_Team_TA {
		constexpr uintptr_t TeamArchetypes = 0x0740;
		constexpr uintptr_t Teams = 0x0750;
		constexpr uintptr_t MaxTeamSize = 0x0760;
		constexpr uintptr_t NumBots = 0x0764;
		constexpr uintptr_t Bitfields_0x0768 = 0x0768;
		constexpr uintptr_t RematchVoteArchetype = 0x0770;
		constexpr uintptr_t RematchVote = 0x0778;
		constexpr uintptr_t PreloadedBotAssets = 0x0780;
		constexpr uintptr_t PlayersRemovedThisFrame = 0x0790;
	}

	namespace GameEvent_TrainingEditor_TA {
		constexpr uintptr_t MinRoundTime = 0x0DF8;
		constexpr uintptr_t MaxRoundTime = 0x0DFC;
		constexpr uintptr_t Bitfields_0x0E00 = 0x0E00;
		constexpr uintptr_t PointsScoredThisRound = 0x0E04;
		constexpr uintptr_t ResetModal = 0x0E08;
		constexpr uintptr_t ShotAttempt = 0x0E10;
		constexpr uintptr_t RedoTotal = 0x0E14;
		constexpr uintptr_t GoalieScore = 0x0E18;
		constexpr uintptr_t PlayTestType = 0x0E1C;
		constexpr uintptr_t GoalMeshBlockers = 0x0E20;
		constexpr uintptr_t GoalMeshBlockerArchetype = 0x0E30;
		constexpr uintptr_t TrainingData = 0x0E38;
		constexpr uintptr_t FName = 0x0E40;
		constexpr uintptr_t SaveDelayTime = 0x0E48;
		constexpr uintptr_t SaveCooldown = 0x0E4C;
		constexpr uintptr_t FString = 0x0E50;
		constexpr uintptr_t TrainingNavigationConfig = 0x0E60;
		constexpr uintptr_t TrainingManipulationConfig = 0x0E68;
		constexpr uintptr_t TrainingNavigator = 0x0E70;
		constexpr uintptr_t TrainingMirror = 0x0E78;
	}

	namespace GameEvent_Training_Goalie_TA {
		constexpr uintptr_t Score = 0x0FE0;
	}

	namespace GameEvent_Tutorial_Advanced_TA {
		constexpr uintptr_t UnknownData00 = 0x0FD4;
	}

	namespace GameEvent_Tutorial_Basic_TA {
		constexpr uintptr_t CurrentScore = 0x0FC8;
		constexpr uintptr_t TotalRounds = 0x0FCC;
		constexpr uintptr_t CurrentRounds = 0x0FD0;
	}

	namespace GameEvent_Tutorial_TA {
		constexpr uintptr_t FVector = 0x0D88;
		constexpr uintptr_t TeamNum = 0x0D94;
		constexpr uintptr_t BallGoalNum = 0x0D98;
		constexpr uintptr_t Bitfields_0x0D9C = 0x0D9C;
		constexpr uintptr_t Difficulty = 0x0DA0;
		constexpr uintptr_t DebugRotationType = 0x0DA1;
		constexpr uintptr_t DifficultyList = 0x0DA8;
		constexpr uintptr_t WaveIndexesLeft = 0x0E20;
		constexpr uintptr_t GoalDepth = 0x0E30;
		constexpr uintptr_t GameEventRounds = 0x0E34;
		constexpr uintptr_t EventStartTime = 0x0E38;
		constexpr uintptr_t FVector = 0x0E3C;
		constexpr uintptr_t SpawnIndexTypeOverride = 0x0E48;
		constexpr uintptr_t Cannon = 0x0E50;
		constexpr uintptr_t WaveIndex = 0x0E58;
		constexpr uintptr_t WaveSpawnCount = 0x0E5C;
		constexpr uintptr_t RandomSpawnIndex = 0x0E60;
		constexpr uintptr_t Tutorial = 0x0E68;
		constexpr uintptr_t FString = 0x0E70;
		constexpr uintptr_t FVector = 0x0E80;
		constexpr uintptr_t CarSpawns = 0x0E90;
		constexpr uintptr_t PointsScoredThisRound = 0x0EA0;
		constexpr uintptr_t BallSpawnCount = 0x0EA4;
		constexpr uintptr_t BallBounceScale = 0x0EA8;
		constexpr uintptr_t CannonArchetype = 0x0EB0;
		constexpr uintptr_t DynamicSpawnPoint = 0x0EB8;
		constexpr uintptr_t CurrentDebugStepX = 0x0EC0;
		constexpr uintptr_t CurrentDebugStepY = 0x0EC4;
		constexpr uintptr_t CurrentDebugStepZ = 0x0EC8;
		constexpr uintptr_t RedoCount = 0x0ECC;
		constexpr uintptr_t RedoTotal = 0x0ED0;
		constexpr uintptr_t ResetModal = 0x0ED8;
		constexpr uintptr_t FFieldSpawnInfo = 0x0EE0;
	}

	namespace GameInfoBase_TA {
		constexpr uintptr_t SoundPacks = 0x04E0;
	}

	namespace GameInfo_CollisionTest_TA {
		constexpr uintptr_t TestComponents = 0x04F0;
		constexpr uintptr_t CurrentTest = 0x0500;
		constexpr uintptr_t CurrentIndex = 0x0508;
		constexpr uintptr_t CurrentActor = 0x0510;
		constexpr uintptr_t UnnamedMember_0x0518 = 0x0518;
	}

	namespace GameInfo_GFxMenu_TA {
		constexpr uintptr_t CarPreviewSet = 0x04F0;
		constexpr uintptr_t PremiumPreviewSet = 0x04F8;
		constexpr uintptr_t ExplosionPreviewer = 0x0500;
		constexpr uintptr_t PostMatchPreviewer = 0x0508;
		constexpr uintptr_t MusicStingersPreviewer = 0x0510;
		constexpr uintptr_t MenuSequencer = 0x0518;
		constexpr uintptr_t UIStateNames = 0x0520;
		constexpr uintptr_t FName = 0x0540;
		constexpr uintptr_t CinematicSequences = 0x0548;
		constexpr uintptr_t OnlineSaveEnable = 0x0558;
	}

	namespace GameInfo_Replay_TA {
		constexpr uintptr_t Replay = 0x04F0;
		constexpr uintptr_t FString = 0x04F8;
		constexpr uintptr_t GameEvent = 0x0508;
		constexpr uintptr_t PrevTime = 0x0510;
		constexpr uintptr_t ReplayStartTime = 0x0514;
		constexpr uintptr_t FString = 0x0518;
	}

	namespace GameInfo_Season_TA {
		constexpr uintptr_t SoccarArchetype = 0x0558;
	}

	namespace GameInfo_Soccar_TA {
		constexpr uintptr_t GameEventArchetypes = 0x0558;
	}

	namespace GameInfo_TA {
		constexpr uintptr_t PostMatchCelebrations = 0x04F0;
		constexpr uintptr_t Bitfields_0x0500 = 0x0500;
		constexpr uintptr_t CurrentGame = 0x0508;
		constexpr uintptr_t FServerConnectionInfo = 0x0510;
	}

	namespace GameInfo_TrainingEditor_TA {
		constexpr uintptr_t UnnamedMember_0x0568 = 0x0568;
	}

	namespace GameInfo_Tutorial_TA {
		constexpr uintptr_t UnnamedMember_0x0568 = 0x0568;
	}

	namespace GameModeList_TA {
		constexpr uintptr_t GameModes = 0x0060;
	}

	namespace GameMode_TA {
		constexpr uintptr_t GameArchetype = 0x0060;
		constexpr uintptr_t MapSet = 0x0068;
		constexpr uintptr_t FreeplayMapSet = 0x0070;
		constexpr uintptr_t StandardMapSet = 0x0078;
		constexpr uintptr_t RocketLabsMedleyMapSet = 0x0080;
		constexpr uintptr_t FName = 0x0088;
		constexpr uintptr_t DisallowedMutatorCategories = 0x0090;
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
		constexpr uintptr_t SortIdx = 0x00A4;
		constexpr uintptr_t GameInfoClass = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
	}

	namespace GameModesConfig_TA {
		constexpr uintptr_t EnabledGameModes = 0x0078;
		constexpr uintptr_t ForcedDetailsGroups = 0x0088;
	}

	namespace GameObserver_TA {
		constexpr uintptr_t HitTimeToBallMin = 0x00A8;
		constexpr uintptr_t HitTimeToBallMax = 0x00AC;
		constexpr uintptr_t HitPredictDistMax = 0x00B0;
		constexpr uintptr_t HitPredictDistMin = 0x00B4;
		constexpr uintptr_t OffenseDotBetweenMin = 0x00B8;
		constexpr uintptr_t OffenseDotBetweenMax = 0x00BC;
		constexpr uintptr_t OffenseDistToGoalMin = 0x00C0;
		constexpr uintptr_t OffenseDistToGoalMax = 0x00C4;
		constexpr uintptr_t OffenseDistToBallMin = 0x00C8;
		constexpr uintptr_t OffenseDistToBallMax = 0x00CC;
		constexpr uintptr_t DefenseDotBetweenMin = 0x00D0;
		constexpr uintptr_t DefenseDotBetweenMax = 0x00D4;
		constexpr uintptr_t DefenseDistToGoalMin = 0x00D8;
		constexpr uintptr_t DefenseDistToGoalMax = 0x00DC;
		constexpr uintptr_t DefenseDistToBallMin = 0x00E0;
		constexpr uintptr_t DefenseDistToBallMax = 0x00E4;
		constexpr uintptr_t ScorabilityDistToBallMin = 0x00E8;
		constexpr uintptr_t ScorabilityDistToBallMax = 0x00EC;
		constexpr uintptr_t ScorabilityDistToBallWeight = 0x00F0;
		constexpr uintptr_t ScorabilityDotToBallMin = 0x00F4;
		constexpr uintptr_t ScorabilityDotToBallMax = 0x00F8;
		constexpr uintptr_t ScorabilityDotToBallWeight = 0x00FC;
		constexpr uintptr_t ScorabilityOffenseWeight = 0x0100;
		constexpr uintptr_t ScorabilityDefenseWeight = 0x0104;
		constexpr uintptr_t CarBallAerialBlend = 0x0108;
		constexpr uintptr_t MaxAerialHitProbability = 0x010C;
		constexpr uintptr_t Bitfields_0x0110 = 0x0110;
		constexpr uintptr_t RelevantCars = 0x0118;
		constexpr uintptr_t RelevantGoals = 0x0128;
		constexpr uintptr_t MinAerialAltitude = 0x0138;
		constexpr uintptr_t MaxAerialAltitude = 0x013C;
		constexpr uintptr_t AerialLikelyhood = 0x0140;
		constexpr uintptr_t MaxCalculatedTimeToBall = 0x0144;
		constexpr uintptr_t FBallData = 0x0148;
		constexpr uintptr_t Listeners = 0x0168;
		constexpr uintptr_t HighestScorability = 0x0178;
		constexpr uintptr_t ClosestBallToGoal = 0x017C;
		constexpr uintptr_t FCarData = 0x0180;
		constexpr uintptr_t FGoalData = 0x01D8;
	}

	namespace GameSettingCategory_TA {
		constexpr uintptr_t AllowedMapSet = 0x00A8;
	}

	namespace GameSettingPlaylist_TA {
		constexpr uintptr_t MapSkillRequirements = 0x0160;
		constexpr uintptr_t TourServerInfoClass = 0x0170;
		constexpr uintptr_t Bitfields_0x0178 = 0x0178;
		constexpr uintptr_t DetailsGroup = 0x017C;
		constexpr uintptr_t TeamColors = 0x0180;
		constexpr uintptr_t FColorOverride = 0x0190;
		constexpr uintptr_t TeamNames = 0x01A8;
		constexpr uintptr_t LoadoutOverrides = 0x01B8;
		constexpr uintptr_t BackFillPolicy = 0x01D8;
	}

	namespace GameShare_TA {
		constexpr uintptr_t CarEngineAudioGroup = 0x0060;
		constexpr uintptr_t BallPositionMaterialInstances = 0x0068;
		constexpr uintptr_t ActiveBoostPills = 0x0078;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
		constexpr uintptr_t Nameplates = 0x0090;
		constexpr uintptr_t CarPreviewActors = 0x00A0;
		constexpr uintptr_t TotalGameBalls = 0x00B0;
		constexpr uintptr_t SoundSourcePool = 0x00B8;
	}

	namespace GameState_TA {
		constexpr uintptr_t Components = 0x0060;
	}

	namespace GameTags_TA {
		constexpr uintptr_t Tags = 0x0060;
	}

	namespace GameViewportClient_TA {
		constexpr uintptr_t Bitfields_0x02C8 = 0x02C8;
		constexpr uintptr_t LastSplitJoinTryTimes = 0x02D0;
		constexpr uintptr_t UIScaleModifier = 0x02E0;
		constexpr uintptr_t NameplateScaleModifier = 0x02E4;
		constexpr uintptr_t GameEvent = 0x02E8;
		constexpr uintptr_t OnlineGame = 0x02F0;
		constexpr uintptr_t FString = 0x02F8;
		constexpr uintptr_t FString = 0x0308;
	}

	namespace GameplayMusicPlayer_TA {
		constexpr uintptr_t MusicSave = 0x0060;
		constexpr uintptr_t CurrentGameEvent = 0x0068;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t FName = 0x0074;
		constexpr uintptr_t FName = 0x007C;
		constexpr uintptr_t MusicPlayerState = 0x0084;
		constexpr uintptr_t FName = 0x0088;
		constexpr uintptr_t FName = 0x0090;
		constexpr uintptr_t FName = 0x0098;
		constexpr uintptr_t FName = 0x00A0;
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t FName = 0x00C0;
	}

	namespace GameplaySettingsSave_TA {
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t QuickChatFilter = 0x00CC;
		constexpr uintptr_t MatchChatFilter = 0x00CD;
		constexpr uintptr_t PartyChatFilter = 0x00CE;
		constexpr uintptr_t DeprecatedVoiceFilter = 0x00CF;
		constexpr uintptr_t ChatFilter = 0x00D0;
		constexpr uintptr_t EffectIntensity = 0x00D1;
		constexpr uintptr_t StatEventDisplayLevel = 0x00D2;
		constexpr uintptr_t FreeplayBoostFillType = 0x00D3;
		constexpr uintptr_t StatGraphLevel = 0x00D4;
		constexpr uintptr_t TrainingControlsVisibility = 0x00D5;
		constexpr uintptr_t SafeZoneRatio = 0x00D8;
		constexpr uintptr_t UIScale = 0x00DC;
		constexpr uintptr_t NameplateScale = 0x00E0;
		constexpr uintptr_t TrainingGameSpeed = 0x00E4;
		constexpr uintptr_t FreeplayBoostFillDelay = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t PickupActivationBuffer = 0x0110;
	}

	namespace GarageArchiveSlot_TA {
		constexpr uintptr_t ArchiveSave = 0x0060;
	}

	namespace GarageFavoritedSlot_TA {
		constexpr uintptr_t FavoriteSave = 0x0060;
	}

	namespace GarageSlotDropGroup_TA {
		constexpr uintptr_t Icon = 0x00C0;
		constexpr uintptr_t SlotIndex = 0x00C8;
	}

	namespace GetUploadUrlsMatch_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t RecordStartTimestamp = 0x0070;
		constexpr uintptr_t Playlist = 0x0078;
		constexpr uintptr_t Mutators = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0090 = 0x0090;
		constexpr uintptr_t Players = 0x0098;
	}

	namespace GetUploadUrlsPlayer_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t ActorID = 0x00A8;
		constexpr uintptr_t Mu = 0x00AC;
	}

	namespace GlobalLookupTexture_TA {
		constexpr uintptr_t FIntVector = 0x01B8;
		constexpr uintptr_t FIntVector = 0x01C0;
		constexpr uintptr_t FIntVector = 0x01C8;
		constexpr uintptr_t FIntVector = 0x01D0;
		constexpr uintptr_t TeamsPositionX = 0x01D8;
		constexpr uintptr_t PlayersPositionX = 0x01DC;
		constexpr uintptr_t TopTeamColors = 0x01E0;
		constexpr uintptr_t BottomTeamColors = 0x01F0;
		constexpr uintptr_t Players = 0x0200;
		constexpr uintptr_t TopPlayerColors = 0x0210;
		constexpr uintptr_t BottomPlayerColors = 0x0220;
		constexpr uintptr_t UnnamedMember_0x0230 = 0x0230;
	}

	namespace GoalCrossbarVolumeManager_TA {
		constexpr uintptr_t HitModifier = 0x02A8;
	}

	namespace GoalCrossbarVolume_TA {
		constexpr uintptr_t CrossbarMaterial = 0x02A8;
	}

	namespace GoalIndicator_TA {
		constexpr uintptr_t Goal = 0x0268;
		constexpr uintptr_t PCOwner = 0x0270;
		constexpr uintptr_t PRI = 0x0278;
		constexpr uintptr_t LensFlareComponent = 0x0280;
		constexpr uintptr_t StaticMeshComponent = 0x0288;
		constexpr uintptr_t DefenseMesh = 0x0290;
		constexpr uintptr_t OffenseMesh = 0x0298;
		constexpr uintptr_t MaterialGoalDefense = 0x02A0;
		constexpr uintptr_t MaterialGoalOffense = 0x02A8;
		constexpr uintptr_t LensFlareTeamList = 0x02B0;
	}

	namespace GoalVolume_TA {
		constexpr uintptr_t Goal = 0x02A8;
	}

	namespace Goal_Hoops_TA {
		constexpr uintptr_t Backboard = 0x01C0;
		constexpr uintptr_t Radius = 0x01C8;
		constexpr uintptr_t FVector = 0x01CC;
		constexpr uintptr_t FVector = 0x01D8;
	}

	namespace Goal_TA {
		constexpr uintptr_t GoalOrientation = 0x00A8;
		constexpr uintptr_t ReplayOrientation = 0x00B0;
		constexpr uintptr_t OverrideGoalIndicatorOrientations = 0x00B8;
		constexpr uintptr_t FVector = 0x00C8;
		constexpr uintptr_t EpicSaveMinSpeed = 0x00D4;
		constexpr uintptr_t EpicSaveArriveTime = 0x00D8;
		constexpr uintptr_t TeamNum = 0x00DC;
		constexpr uintptr_t ScoreFX = 0x00E0;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t Bitfields_0x00F8 = 0x00F8;
		constexpr uintptr_t GoalDirection = 0x0100;
		constexpr uintptr_t PointsToAward = 0x0108;
		constexpr uintptr_t FVector = 0x010C;
		constexpr uintptr_t FVector = 0x0118;
		constexpr uintptr_t MaxGoalScorerAttachRadius = 0x0124;
		constexpr uintptr_t FVector = 0x0128;
		constexpr uintptr_t MinAttachGoalToScorerDot = 0x0134;
		constexpr uintptr_t FVector = 0x0138;
		constexpr uintptr_t FVector = 0x0144;
		constexpr uintptr_t FVector = 0x0150;
		constexpr uintptr_t FVector = 0x015C;
		constexpr uintptr_t FRotator = 0x0168;
		constexpr uintptr_t FVector = 0x0174;
		constexpr uintptr_t FVector = 0x0180;
		constexpr uintptr_t FVector = 0x018C;
		constexpr uintptr_t FVector = 0x0198;
		constexpr uintptr_t FBox = 0x01A4;
	}

	namespace GreenScreenEffectHandler_TA {
		constexpr uintptr_t FColor = 0x0150;
		constexpr uintptr_t FadeInDuration = 0x0154;
		constexpr uintptr_t FadeOutDuration = 0x0158;
		constexpr uintptr_t UnnamedMember_0x015C = 0x015C;
		constexpr uintptr_t GreenScreenActor = 0x0160;
	}

	namespace GreenScreen_TA {
		constexpr uintptr_t HiddenPrimitives = 0x0288;
		constexpr uintptr_t UnnamedMember_0x0298 = 0x0298;
	}

	namespace GroundStaticMeshActor_TA {
		constexpr uintptr_t HideLocationOffset = 0x0288;
	}

	namespace HUDActor_TA {
		constexpr uintptr_t HUD = 0x0268;
	}

	namespace HUDBase_TA {
		constexpr uintptr_t Shell = 0x0320;
		constexpr uintptr_t FString = 0x0328;
		constexpr uintptr_t FString = 0x0338;
		constexpr uintptr_t FString = 0x0348;
		constexpr uintptr_t ChatData = 0x0358;
	}

	namespace HandlingPreset_TA {
		constexpr uintptr_t FVehicleAxleData = 0x0060;
		constexpr uintptr_t FVehicleAxleData = 0x0074;
		constexpr uintptr_t PhysAsset = 0x0088;
		constexpr uintptr_t FSimpleSpringSettings = 0x0090;
	}

	namespace HauntedBallTrapTrigger_TA {
		constexpr uintptr_t LensFlare = 0x0270;
		constexpr uintptr_t TeamIndex = 0x0278;
		constexpr uintptr_t GoalVolume = 0x0280;
		constexpr uintptr_t TrapResetTime = 0x0288;
		constexpr uintptr_t MinLensFlareColorValue = 0x028C;
		constexpr uintptr_t FName = 0x0290;
		constexpr uintptr_t MIC_TrapVolumeMat = 0x0298;
		constexpr uintptr_t MIC_TrapOutlineMat = 0x02A0;
		constexpr uintptr_t UnnamedMember_0x02A8 = 0x02A8;
		constexpr uintptr_t HauntedBall = 0x02B0;
		constexpr uintptr_t SoccarEvent = 0x02B8;
		constexpr uintptr_t BeamPSC = 0x02C0;
		constexpr uintptr_t BeamPSArchetype = 0x02C8;
		constexpr uintptr_t FName = 0x02D0;
	}

	namespace HideLevelAssetsBase_TA {
		constexpr uintptr_t ActorsInLevel = 0x0268;
		constexpr uintptr_t ActorClasses = 0x0278;
	}

	namespace IdenticalProductCache_TA {
		constexpr uintptr_t FMap_Mirror = 0x0070;
		constexpr uintptr_t FMap_Mirror = 0x00C0;
		constexpr uintptr_t FMap_Mirror = 0x0110;
	}

	namespace IdleFeature_TA {
		constexpr uintptr_t IdleActionTime = 0x0060;
		constexpr uintptr_t IdleWarningTime = 0x0064;
	}

	namespace IdlePlayer_TA {
		constexpr uintptr_t StartTime = 0x0060;
	}

	namespace ImpactEffectsComponent_TA {
		constexpr uintptr_t SoundPriority = 0x00A8;
		constexpr uintptr_t ImpactEffectsMap = 0x00B0;
		constexpr uintptr_t AkImpactSound = 0x00B8;
		constexpr uintptr_t AkSlideSound = 0x00C0;
		constexpr uintptr_t AkSlideSoundDelay = 0x00C8;
		constexpr uintptr_t AkSlideMomentumMin = 0x00CC;
		constexpr uintptr_t FName = 0x00D0;
		constexpr uintptr_t FName = 0x00D8;
		constexpr uintptr_t MinImpactMomentum = 0x00E0;
		constexpr uintptr_t MinImpactDelay = 0x00E4;
		constexpr uintptr_t ImpactCameraShake = 0x00E8;
		constexpr uintptr_t ImpactForceFeedback = 0x00F0;
		constexpr uintptr_t FInterpCurveFloat = 0x00F8;
		constexpr uintptr_t LastWorldImpactTime = 0x0110;
		constexpr uintptr_t LastActorImpactTime = 0x0114;
		constexpr uintptr_t SlideTime = 0x0118;
		constexpr uintptr_t SlideParticleComponent = 0x0120;
		constexpr uintptr_t SlideAudioComponent = 0x0128;
		constexpr uintptr_t ShakeComponent = 0x0130;
		constexpr uintptr_t FCollisionEffectData = 0x0138;
		constexpr uintptr_t FCollisionEffectData = 0x0190;
		constexpr uintptr_t SlidePhysMatProp = 0x01E8;
		constexpr uintptr_t ImpactModifier = 0x01F0;
		constexpr uintptr_t SlapbackManager = 0x01F8;
	}

	namespace InMapDragonManager_TA {
		constexpr uintptr_t AimOffsets = 0x0090;
		constexpr uintptr_t MaxAims = 0x00A0;
		constexpr uintptr_t MinAims = 0x00B0;
		constexpr uintptr_t DragonData = 0x00C0;
		constexpr uintptr_t CachedGameEvent = 0x00D0;
		constexpr uintptr_t FName = 0x00D8;
		constexpr uintptr_t LastScoredOnTeam = 0x00E0;
		constexpr uintptr_t UnnamedMember_0x00E4 = 0x00E4;
	}

	namespace InMapScoreboard_TA {
		constexpr uintptr_t StaticMesh = 0x0268;
		constexpr uintptr_t MaterialInstance = 0x0270;
		constexpr uintptr_t MaterialIndex = 0x0278;
		constexpr uintptr_t TeamIndex = 0x027C;
		constexpr uintptr_t FInterpCurveFloat = 0x0280;
		constexpr uintptr_t GoDuration = 0x0298;
		constexpr uintptr_t FName = 0x029C;
		constexpr uintptr_t FName = 0x02A4;
		constexpr uintptr_t FName = 0x02AC;
		constexpr uintptr_t FName = 0x02B4;
		constexpr uintptr_t FName = 0x02BC;
		constexpr uintptr_t FName = 0x02C4;
		constexpr uintptr_t FName = 0x02CC;
		constexpr uintptr_t ExtraScoreboardMICOverrides = 0x02D8;
		constexpr uintptr_t LastCountdownTime = 0x02E8;
		constexpr uintptr_t ReplayCountdownTime = 0x02EC;
		constexpr uintptr_t UnnamedMember_0x02F0 = 0x02F0;
		constexpr uintptr_t GameEvent = 0x02F8;
		constexpr uintptr_t FName = 0x0300;
		constexpr uintptr_t MIC = 0x0308;
		constexpr uintptr_t GoalTime = 0x0310;
	}

	namespace InputBufferGraph_TA {
		constexpr uintptr_t Buffer = 0x0090;
		constexpr uintptr_t BufferTarget = 0x0098;
		constexpr uintptr_t OverUnderFrames = 0x00A0;
		constexpr uintptr_t PhysicsRate = 0x00A8;
		constexpr uintptr_t MaxPhysicsRate = 0x00B0;
		constexpr uintptr_t MinPhysicsRate = 0x00B4;
	}

	namespace InputRecorder_TA {
		constexpr uintptr_t FPointer = 0x0268;
		constexpr uintptr_t MaxRecordTime = 0x0270;
		constexpr uintptr_t Bitfields_0x0274 = 0x0274;
		constexpr uintptr_t CarStates = 0x0278;
		constexpr uintptr_t BallStates = 0x0288;
		constexpr uintptr_t Inputs = 0x0298;
		constexpr uintptr_t InputIndex = 0x02A8;
	}

	namespace InterpTrackAnimControlWithSensibleDefault_TA {
		constexpr uintptr_t UnknownData00 = 0x0114;
	}

	namespace InterpTrackBoostGlow_TA {
		constexpr uintptr_t UnknownData00 = 0x00E4;
	}

	namespace InterpTrackBoostToggle_TA {
		constexpr uintptr_t OverrideBoost = 0x00E0;
		constexpr uintptr_t AttachedParticleSystems = 0x00E8;
		constexpr uintptr_t AttachedSocketNames = 0x00F8;
		constexpr uintptr_t CurrentActor = 0x0108;
		constexpr uintptr_t CurrentBoostFX = 0x0110;
		constexpr uintptr_t UnnamedMember_0x0118 = 0x0118;
	}

	namespace InterpTrackCameraShake_TA {
		constexpr uintptr_t Shake = 0x00E0;
		constexpr uintptr_t ShakeScale = 0x00E8;
		constexpr uintptr_t PlaySpace = 0x00EC;
		constexpr uintptr_t FRotator = 0x00F0;
	}

	namespace InterpTrackCarScale_TA {
		constexpr uintptr_t UnknownData00 = 0x00E4;
	}

	namespace InterpTrackInstVehicleToggle_TA {
		constexpr uintptr_t TargetVehicle = 0x0070;
	}

	namespace InterpTrackInstVehicle_TA {
		constexpr uintptr_t TargetVehicle = 0x0060;
	}

	namespace InterpTrackPostProcess_TA {
		constexpr uintptr_t FPostProcessSettings = 0x00E0;
		constexpr uintptr_t FPostProcessSettings = 0x0248;
	}

	namespace InterpTrackSkelControlRotation_TA {
		constexpr uintptr_t FName = 0x00E8;
		constexpr uintptr_t RotAxis = 0x00F0;
	}

	namespace InterpTrackToggleCarOnGround_TA {
		constexpr uintptr_t UnknownData00 = 0x00DC;
	}

	namespace InterpTrackToggleDumpMovie_TA {
		constexpr uintptr_t UnknownData00 = 0x00DC;
	}

	namespace InterpTrackToggleSupersonic_TA {
		constexpr uintptr_t UnknownData00 = 0x00DC;
	}

	namespace InterpTrackTriggerVehicleFX_TA {
		constexpr uintptr_t FName = 0x00E0;
		constexpr uintptr_t ParticleSystemInstance = 0x00E8;
	}

	namespace IntroCarTemplates_TA {
		constexpr uintptr_t IntroCars = 0x0060;
	}

	namespace ItemDropGroup_TA {
		constexpr uintptr_t Currency = 0x0060;
		constexpr uintptr_t Products = 0x0070;
		constexpr uintptr_t XP = 0x0080;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t GFxDataClass = 0x0098;
		constexpr uintptr_t DisplayOrder = 0x00A0;
	}

	namespace ItemPoolCycle_TA {
		constexpr uintptr_t RemainingItems = 0x0070;
		constexpr uintptr_t LastDispensedItem = 0x0080;
		constexpr uintptr_t DemolishedItem = 0x0088;
	}

	namespace ItemPoolSelection_TA {
		constexpr uintptr_t ConcurrentItemCount = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0074 = 0x0074;
		constexpr uintptr_t LastDispensedItems = 0x0078;
		constexpr uintptr_t DemolishedItems = 0x0088;
		constexpr uintptr_t OriginalPickupCooldownSeconds = 0x0098;
		constexpr uintptr_t CooldownSecondsAtPreviousGoal = 0x009C;
		constexpr uintptr_t ActivePickup = 0x00A0;
	}

	namespace ItemPoolWeightMultiplier_TA {
		constexpr uintptr_t PickWeightMultiplier = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0074 = 0x0074;
		constexpr uintptr_t LastDispensedItem = 0x0078;
		constexpr uintptr_t DemolishedItem = 0x0080;
	}

	namespace ItemPool_TA {
		constexpr uintptr_t Items = 0x0060;
	}

	namespace ItemShopNotification_TA {
		constexpr uintptr_t ItemShopNotificationsConfig = 0x0170;
		constexpr uintptr_t Icon = 0x0178;
		constexpr uintptr_t ShopNotificationID = 0x0180;
	}

	namespace ItemShopNotificationsConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t PopUpDuration = 0x007C;
		constexpr uintptr_t MinRequiredLevel = 0x0080;
	}

	namespace JiggleHitHandler_TA {
		constexpr uintptr_t JiggleDistance = 0x0150;
		constexpr uintptr_t JiggleSpeed = 0x0154;
		constexpr uintptr_t JiggleSlowDownSpeed = 0x0158;
		constexpr uintptr_t BounceOffParticleSystem = 0x0160;
		constexpr uintptr_t JigglingCars = 0x0168;
		constexpr uintptr_t SpawnedParticleActors = 0x0178;
	}

	namespace JoinGameConnectionChecker_TA {
		constexpr uintptr_t ConnectionQualityConfig = 0x0060;
		constexpr uintptr_t GameEvent = 0x0068;
		constexpr uintptr_t OnlineGame = 0x0070;
	}

	namespace K3SUserPermissionsError_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace K3SUserPermissions_TA {
		constexpr uintptr_t FK3SResponse = 0x0060;
		constexpr uintptr_t FK3SMeta = 0x0070;
		constexpr uintptr_t FK3SFirstTimeDefaults = 0x0090;
	}

	namespace LanServerMetaData_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t ServerGameMode = 0x00D0;
		constexpr uintptr_t UnnamedMember_0x00D4 = 0x00D4;
		constexpr uintptr_t NumPlayers = 0x00D8;
		constexpr uintptr_t MaxPlayers = 0x00DC;
		constexpr uintptr_t BuildID = 0x00E0;
	}

	namespace LeaderboardsConfig_TA {
		constexpr uintptr_t RankedLeaderboards = 0x0078;
	}

	namespace LegalText_TA {
		constexpr uintptr_t LegalHash = 0x0060;
		constexpr uintptr_t FString = 0x0068;
	}

	namespace LightBarComponent_TA {
		constexpr uintptr_t Team = 0x00A0;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t StrobeCount = 0x00AC;
		constexpr uintptr_t MaxStrobeCount = 0x00B0;
		constexpr uintptr_t StrobeTime = 0x00B4;
		constexpr uintptr_t StrobeColorList = 0x00B8;
		constexpr uintptr_t StrobeColorIndex = 0x00C8;
	}

	namespace LightCurveType_TA {
		constexpr uintptr_t ParameterValue = 0x0060;
	}

	namespace LightEnvironment_TA {
		constexpr uintptr_t UnknownData00 = 0x018C;
	}

	namespace ListenObject_TA {
		constexpr uintptr_t Id = 0x0060;
	}

	namespace ListenServer_TA {
		constexpr uintptr_t GRI = 0x0060;
		constexpr uintptr_t AdHocBeacon = 0x0068;
		constexpr uintptr_t GameEvent = 0x0070;
		constexpr uintptr_t LoadingPlayers = 0x0078;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
	}

	namespace LoadedMtxCatalog_TA {
		constexpr uintptr_t ValidMtxShopTabs = 0x0070;
		constexpr uintptr_t Catalogs = 0x0080;
	}

	namespace LoadingProduct_TA {
		constexpr uintptr_t ProductID = 0x0060;
		constexpr uintptr_t FProductHashID = 0x0064;
		constexpr uintptr_t ReferencedViews = 0x0068;
		constexpr uintptr_t OnlineProduct = 0x0078;
		constexpr uintptr_t ThumbnailSize = 0x0080;
		constexpr uintptr_t ThumbnailAsset = 0x0088;
		constexpr uintptr_t Asset = 0x0090;
		constexpr uintptr_t Thumbnail = 0x0098;
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
		constexpr uintptr_t AdditionalProductReferences = 0x00A8;
	}

	namespace LoadingScreen_TA {
		constexpr uintptr_t ProtipMessages = 0x0060;
		constexpr uintptr_t ProtipMessagesQueue = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t GFxEngineRef = 0x0090;
		constexpr uintptr_t OnlineGame = 0x0098;
		constexpr uintptr_t FLoadingMovieMapInfo = 0x00A0;
		constexpr uintptr_t Bitfields_0x0140 = 0x0140;
	}

	namespace LoadoutRandomizer_TA {
		constexpr uintptr_t RandomizeSlots = 0x0060;
	}

	namespace LoadoutRenderer_TA {
		constexpr uintptr_t ThumbnailRenderer = 0x0060;
		constexpr uintptr_t Loader = 0x0068;
		constexpr uintptr_t TeamArchetype = 0x0070;
	}

	namespace LoadoutSequencer_TA {
		constexpr uintptr_t SlotSequence = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t PreviewActor = 0x0078;
		constexpr uintptr_t FLoadoutData = 0x0080;
		constexpr uintptr_t FLoadoutData = 0x00C0;
	}

	namespace LoadoutSet_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t Loadouts = 0x0070;
	}

	namespace Loadout_TA {
		constexpr uintptr_t Products = 0x0060;
		constexpr uintptr_t OnlineProducts = 0x0070;
		constexpr uintptr_t OnlineProducts128 = 0x0080;
		constexpr uintptr_t FLoadoutTeamPaint = 0x0090;
		constexpr uintptr_t TeamPaints = 0x00A0;
		constexpr uintptr_t FName = 0x00C0;
		constexpr uintptr_t GaragePreviewTeam = 0x00C8;
		constexpr uintptr_t Profile = 0x00D0;
	}

	namespace LocalPlayerAudioParamsComponent_TA {
		constexpr uintptr_t ParameterInterface_Object = 0x0070;
		constexpr uintptr_t ParameterInterface_Interface = 0x0078;
		constexpr uintptr_t PC = 0x0080;
	}

	namespace LocalPlayerSkillSync_TA {
		constexpr uintptr_t OnlineGame = 0x0060;
		constexpr uintptr_t OnlineSkill = 0x0068;
		constexpr uintptr_t PsyNet = 0x0070;
	}

	namespace LocalPlayer_TA {
		constexpr uintptr_t FPointer = 0x04E8;
		constexpr uintptr_t SaveGameManager = 0x04F0;
		constexpr uintptr_t Profile = 0x04F8;
		constexpr uintptr_t ProfileObjectProvider = 0x0500;
		constexpr uintptr_t SplitScreenPosition = 0x0508;
		constexpr uintptr_t SuspendingEventToken = 0x0510;
		constexpr uintptr_t SignoutStartedEventToken = 0x0518;
		constexpr uintptr_t Bitfields_0x0520 = 0x0520;
		constexpr uintptr_t ControllerLayouts = 0x0528;
		constexpr uintptr_t JoinGameConnectionChecker = 0x0530;
		constexpr uintptr_t ConnectionQualityConfig = 0x0538;
	}

	namespace MapDataLoader_TA {
		constexpr uintptr_t MapSelectors = 0x0060;
		constexpr uintptr_t MapImageLoadRequests = 0x0070;
	}

	namespace MapData_TA {
		constexpr uintptr_t Thumbnail = 0x0060;
		constexpr uintptr_t VariantOf = 0x0068;
		constexpr uintptr_t WeatherVariant = 0x0070;
		constexpr uintptr_t RandomWeight = 0x0074;
		constexpr uintptr_t AdditionalGameTags = 0x0078;
	}

	namespace MapInfo_TA {
		constexpr uintptr_t FWorldColorData = 0x0060;
		constexpr uintptr_t MirrorFieldType = 0x00A0;
		constexpr uintptr_t MirrorFieldXYRotation = 0x00A4;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t FVector = 0x00AC;
		constexpr uintptr_t MinStadiumBrightness = 0x00B8;
		constexpr uintptr_t FRotator = 0x00BC;
		constexpr uintptr_t MapResetStartHeight = 0x00C8;
		constexpr uintptr_t MapResetStartDistance = 0x00CC;
		constexpr uintptr_t MaxWaitTimeTillBallHit = 0x00D0;
		constexpr uintptr_t GoalScoredDistance = 0x00D4;
		constexpr uintptr_t MaxGoalYZoomOutDistance = 0x00D8;
		constexpr uintptr_t MaxGoalXZoomOutDistance = 0x00DC;
		constexpr uintptr_t CountDownFOV = 0x00E0;
		constexpr uintptr_t BackAwayFromWallDistance = 0x00E4;
		constexpr uintptr_t FVector = 0x00E8;
		constexpr uintptr_t ArenaSoundSettings = 0x00F8;
		constexpr uintptr_t CrowdSounds = 0x0100;
		constexpr uintptr_t CrowdActors = 0x0108;
	}

	namespace MapList_TA {
		constexpr uintptr_t AllMaps = 0x0060;
		constexpr uintptr_t AllMaps_Pristine = 0x0070;
		constexpr uintptr_t SortedMaps = 0x0080;
		constexpr uintptr_t SortedMaps_Pristine = 0x0090;
		constexpr uintptr_t AdditionalCookedMaps = 0x00A0;
		constexpr uintptr_t MapGroups = 0x00B0;
		constexpr uintptr_t GeneratedMapGroups = 0x00C0;
		constexpr uintptr_t GeneratedMapGroups_Pristine = 0x00D0;
		constexpr uintptr_t SelectableMaps = 0x00E0;
		constexpr uintptr_t SeasonMaps = 0x00E8;
		constexpr uintptr_t SeasonPlayoffsMaps = 0x00F0;
		constexpr uintptr_t AllMapSets = 0x00F8;
	}

	namespace MapPrefsSave_TA {
		constexpr uintptr_t MapPrefs = 0x00C8;
		constexpr uintptr_t FName = 0x00D8;
	}

	namespace MapSelector_TA {
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t AllMaps = 0x0078;
		constexpr uintptr_t FilteredMaps = 0x0088;
		constexpr uintptr_t AllGroups = 0x0098;
		constexpr uintptr_t RemainingGroupMaps = 0x00A8;
		constexpr uintptr_t RemainingGroups = 0x00B8;
		constexpr uintptr_t PreviousGroups = 0x00C8;
		constexpr uintptr_t PreviousGroupMax = 0x00D8;
		constexpr uintptr_t LastPlayedMap = 0x00E0;
		constexpr uintptr_t Skill = 0x00E8;
		constexpr uintptr_t MapSkillRequirements = 0x00F0;
		constexpr uintptr_t FName = 0x0100;
	}

	namespace MapSet_TA {
		constexpr uintptr_t IncludeSets = 0x0060;
		constexpr uintptr_t ExcludeSets = 0x0070;
		constexpr uintptr_t IncludeMaps = 0x0080;
		constexpr uintptr_t ExcludeMaps = 0x0090;
		constexpr uintptr_t Maps = 0x00A0;
		constexpr uintptr_t Maps_Pristine = 0x00B0;
	}

	namespace MapsConfig_TA {
		constexpr uintptr_t OnlineMapSets = 0x0078;
		constexpr uintptr_t ContentConfig = 0x0088;
	}

	namespace MatchAdminComponent_TA {
		constexpr uintptr_t GameEvent = 0x0060;
		constexpr uintptr_t PlayerPermissions = 0x0068;
		constexpr uintptr_t ServerConfig = 0x0070;
	}

	namespace MatchBroadcastComponent_TA {
		constexpr uintptr_t MatchLog = 0x0070;
		constexpr uintptr_t OnlineGame = 0x0078;
	}

	namespace MatchBroadcastLog_TA {
		constexpr uintptr_t FPointer = 0x0060;
	}

	namespace MatchBroadcast_TA {
		constexpr uintptr_t GameEvent = 0x0268;
		constexpr uintptr_t RecordedPlayers = 0x0270;
		constexpr uintptr_t UnnamedMember_0x0280 = 0x0280;
	}

	namespace MatchCompleteMetrics_TA {
		constexpr uintptr_t History = 0x0080;
	}

	namespace MatchHistoryConfig_TA {
		constexpr uintptr_t CacheRefreshSeconds = 0x0078;
		constexpr uintptr_t MaxConcurrentGFxReplaysLoaded = 0x007C;
	}

	namespace MatchHistoryErrors_TA {
		constexpr uintptr_t ReplayNotFound = 0x0080;
	}

	namespace MatchHistoryItem_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t Match = 0x0070;
	}

	namespace MatchHistoryMetrics_TA {
		constexpr uintptr_t ChangeTabsTimestamp = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
		constexpr uintptr_t CurrentSessionTabChangeMetrics = 0x0090;
		constexpr uintptr_t CurrentMatchPreviews = 0x00A0;
		constexpr uintptr_t FUniqueNetId = 0x00B0;
	}

	namespace MatchRecorder_TA {
		constexpr uintptr_t PRIs = 0x0078;
		constexpr uintptr_t SoccarGame = 0x0088;
	}

	namespace MatchSeries_TA {
		constexpr uintptr_t SeriesLength = 0x0060;
		constexpr uintptr_t Teams = 0x0068;
	}

	namespace MatchType_AutoTournament_TA {
		constexpr uintptr_t AutoTourConfig = 0x0168;
	}

	namespace MatchType_Custom_TA {
		constexpr uintptr_t EnforceTeamSizeConfig = 0x0138;
		constexpr uintptr_t UnnamedMember_0x0140 = 0x0140;
		constexpr uintptr_t LargestMaxTeamSize = 0x0144;
	}

	namespace MatchType_FaceIt_TA {
		constexpr uintptr_t MinPlayersMetWaitTimeSeconds = 0x0168;
		constexpr uintptr_t WaitForPlayersExpirationTimeStamp = 0x0170;
	}

	namespace MatchType_Public_TA {
		constexpr uintptr_t Reservations = 0x0138;
	}

	namespace MatchType_TA {
		constexpr uintptr_t GameEvent = 0x0060;
		constexpr uintptr_t Components = 0x0068;
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t ForfeitVoteWaitGameTime = 0x007C;
		constexpr uintptr_t WaitForPlayersTime = 0x0080;
		constexpr uintptr_t WaitingForPlayersStartTime = 0x0084;
		constexpr uintptr_t FName = 0x0088;
		constexpr uintptr_t LobbyTime = 0x0090;
		constexpr uintptr_t LobbyIntroTime = 0x0094;
		constexpr uintptr_t LobbyEndCountdown = 0x0098;
		constexpr uintptr_t FCustomMatchSettings = 0x00A0;
		constexpr uintptr_t GameTags = 0x0128;
		constexpr uintptr_t Profile = 0x0130;
	}

	namespace MatchType_Tournament_TA {
		constexpr uintptr_t DedicatedServer = 0x0140;
		constexpr uintptr_t TourServer = 0x0148;
		constexpr uintptr_t TournamentServerConfig = 0x0150;
		constexpr uintptr_t MatchSeries = 0x0158;
		constexpr uintptr_t FName = 0x0160;
	}

	namespace MatchWinner_TA {
		constexpr uintptr_t WinningTeam = 0x0060;
	}

	namespace MatchmakingSettingsSave_TA {
		constexpr uintptr_t MatchmakingViewTab = 0x00C8;
		constexpr uintptr_t QuickMatchPlaylists = 0x00D0;
		constexpr uintptr_t QuickMatchRegions = 0x00E0;
		constexpr uintptr_t UnnamedMember_0x00F0 = 0x00F0;
	}

	namespace MatchmakingViewFilter_Casual_TA {
		constexpr uintptr_t MicroEventConfig_Object = 0x0060;
		constexpr uintptr_t MicroEventConfig_Interface = 0x0068;
		constexpr uintptr_t Playlists_Object = 0x0070;
		constexpr uintptr_t Playlists_Interface = 0x0078;
	}

	namespace MatchmakingViewFilter_DebugMicroEvent_TA {
		constexpr uintptr_t SpecialEventConfig = 0x0060;
		constexpr uintptr_t Playlists_Object = 0x0068;
		constexpr uintptr_t Playlists_Interface = 0x0070;
	}

	namespace MatchmakingViewFilter_MenuTree_TA {
		constexpr uintptr_t Playlists_Object = 0x0060;
		constexpr uintptr_t Playlists_Interface = 0x0068;
		constexpr uintptr_t MenuTreeBuilder = 0x0070;
	}

	namespace MatchmakingViewFilter_RankedSports_TA {
		constexpr uintptr_t Playlists_Object = 0x0060;
		constexpr uintptr_t Playlists_Interface = 0x0068;
	}

	namespace MatchmakingViewFilter_Ranked_TA {
		constexpr uintptr_t Playlists_Object = 0x0060;
		constexpr uintptr_t Playlists_Interface = 0x0068;
	}

	namespace MatchmakingViewFilter_UnrankedSports_TA {
		constexpr uintptr_t Playlists_Object = 0x0060;
		constexpr uintptr_t Playlists_Interface = 0x0068;
	}

	namespace MatchmakingViewFilter_Unranked_TA {
		constexpr uintptr_t MicroEventConfig_Object = 0x0060;
		constexpr uintptr_t MicroEventConfig_Interface = 0x0068;
		constexpr uintptr_t Playlists_Object = 0x0070;
		constexpr uintptr_t Playlists_Interface = 0x0078;
	}

	namespace MatchmakingViewFilters_TA {
		constexpr uintptr_t Filters_Object = 0x0060;
		constexpr uintptr_t Filters_Interface = 0x0068;
	}

	namespace MaterialParamsSet_TA {
		constexpr uintptr_t TextureParameters = 0x0060;
		constexpr uintptr_t VectorParameters = 0x0070;
		constexpr uintptr_t ScalarParameters = 0x0080;
	}

	namespace MaxActorsGroup_TA {
		constexpr uintptr_t FPointer = 0x0070;
		constexpr uintptr_t MaxActors = 0x0078;
		constexpr uintptr_t UpdateDelay = 0x007C;
		constexpr uintptr_t NextUpdateTime = 0x0080;
		constexpr uintptr_t Actors = 0x0088;
	}

	namespace MaxTimeComponent_TA {
		constexpr uintptr_t WarningTimeSeconds = 0x0060;
		constexpr uintptr_t TimeLimitSeconds = 0x0064;
	}

	namespace MaxTimeWarningData_TA {
		constexpr uintptr_t EndGameEpochTime = 0x0270;
		constexpr uintptr_t EndGameWarningEpochTime = 0x0278;
	}

	namespace MenuSequence_PremiumGarageReveal_TA {
		constexpr uintptr_t FName = 0x00B8;
	}

	namespace MenuSequence_PremiumGarageSnap_TA {
		constexpr uintptr_t UnknownData00 = 0x00B4;
	}

	namespace MenuSequence_PremiumGarage_TA {
		constexpr uintptr_t FadeTime = 0x00A8;
		constexpr uintptr_t FadeOutDelay = 0x00AC;
		constexpr uintptr_t TurnTableYawOffset = 0x00B0;
	}

	namespace MenuSequence_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t MenuSequenceComp = 0x0070;
	}

	namespace MenuSequencer_TA {
		constexpr uintptr_t Sequences = 0x00A8;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t CurrentSequence = 0x00C0;
		constexpr uintptr_t PendingSequence = 0x00C8;
		constexpr uintptr_t Status = 0x00D0;
		constexpr uintptr_t PendingSequenceQueue = 0x00D8;
	}

	namespace MenuTreeBranch_TA {
		constexpr uintptr_t ChildIDs = 0x0188;
		constexpr uintptr_t ChildNodes = 0x0198;
	}

	namespace MenuTreeBuilder_TA {
		constexpr uintptr_t PlaylistManager = 0x0060;
		constexpr uintptr_t AllNodes = 0x0068;
		constexpr uintptr_t PlaylistIconReferences = 0x0078;
	}

	namespace MenuTreeConfig_TA {
		constexpr uintptr_t PlaylistCacheDuration = 0x0078;
	}

	namespace MenuTreeNodeCrumbTrail_TA {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace MenuTreeNode_ExternalScreen_TA {
		constexpr uintptr_t FString = 0x0188;
	}

	namespace MenuTreeNode_GenericFolder_TA {
		constexpr uintptr_t UnnamedMember_0x01C0 = 0x01C0;
	}

	namespace MenuTreeNode_PlaylistFolder_TA {
		constexpr uintptr_t Bitfields_0x01C8 = 0x01C8;
		constexpr uintptr_t HeaderType = 0x01CC;
		constexpr uintptr_t HeaderEndTime = 0x01D0;
		constexpr uintptr_t FString = 0x01D8;
		constexpr uintptr_t FString = 0x01E8;
		constexpr uintptr_t FString = 0x01F8;
	}

	namespace MenuTreeNode_Playlist_TA {
		constexpr uintptr_t PlaylistId = 0x0188;
		constexpr uintptr_t PlaylistRowIndex = 0x018C;
		constexpr uintptr_t Playlist = 0x0190;
		constexpr uintptr_t MinCompetitiveXPLevelRequired = 0x0198;
		constexpr uintptr_t ChallengesRequired = 0x01A0;
		constexpr uintptr_t PlaylistQueue = 0x01B0;
		constexpr uintptr_t UnnamedMember_0x01B8 = 0x01B8;
		constexpr uintptr_t SpecialDisplayType = 0x01BC;
	}

	namespace MenuTreeNode_PrivateMatchJoin_TA {
		constexpr uintptr_t Party = 0x0188;
		constexpr uintptr_t FString = 0x0190;
	}

	namespace MenuTreeNode_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t GFxDataClass = 0x0088;
		constexpr uintptr_t GFxNode = 0x0090;
		constexpr uintptr_t ParentNode = 0x0098;
		constexpr uintptr_t ThumbnailImage = 0x00A0;
		constexpr uintptr_t CrumbTrail = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FName = 0x00E0;
		constexpr uintptr_t FName = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t SecondaryTitleTimeAmount = 0x0100;
		constexpr uintptr_t UnnamedMember_0x0104 = 0x0104;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t BadgeType = 0x0118;
		constexpr uintptr_t EnabledRequirements = 0x0120;
		constexpr uintptr_t SupportedEngagementEvents = 0x0130;
		constexpr uintptr_t FNodePlatformAvailability = 0x0140;
	}

	namespace MenuTreeNode_Tournaments_TA {
		constexpr uintptr_t NextTournamentStartTime = 0x0188;
	}

	namespace MenuTreePlaylistManager_TA {
		constexpr uintptr_t MenuTreeBuilder = 0x0060;
		constexpr uintptr_t ActiveAndFuturePlaylists = 0x0068;
		constexpr uintptr_t MenuTreeConfig = 0x0078;
	}

	namespace MenuTreePlaylistQueue_TA {
		constexpr uintptr_t PlaylistData = 0x0060;
		constexpr uintptr_t Queue = 0x0070;
		constexpr uintptr_t DebugPlaylistData = 0x0080;
		constexpr uintptr_t TimeProvider_Object = 0x0090;
		constexpr uintptr_t TimeProvider_Interface = 0x0098;
	}

	namespace MergePartyEvent_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t InviteeIDs = 0x00A8;
		constexpr uintptr_t ConfirmedInvitees = 0x00B8;
	}

	namespace Message_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t Sound = 0x0068;
		constexpr uintptr_t PrimaryPlayerSound = 0x0070;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t MessageLevel = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t ParamNames = 0x00B0;
		constexpr uintptr_t ParamTokens = 0x00C0;
		constexpr uintptr_t FMessagePacket = 0x00D0;
		constexpr uintptr_t FMessagePacket = 0x00E8;
	}

	namespace MicroEventConfig_TA {
		constexpr uintptr_t MicroEvents = 0x0078;
		constexpr uintptr_t Time_Object = 0x0088;
		constexpr uintptr_t Time_Interface = 0x0090;
	}

	namespace MicroEvent_TA {
		constexpr uintptr_t PlaylistId = 0x0060;
		constexpr uintptr_t StartTime = 0x0068;
		constexpr uintptr_t EndTime = 0x0070;
	}

	namespace MtxConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t MaxCurrencyWalletAmount = 0x007C;
		constexpr uintptr_t MaxCurrencyDailyAmount = 0x0080;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
	}

	namespace MtxErrors_TA {
		constexpr uintptr_t MicrotransactionFulfillmentRestrictedWallet = 0x0080;
		constexpr uintptr_t MicrotransactionFulfillmentRestrictedDaily = 0x0088;
	}

	namespace MultiItemDropConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t CrewRocketPassDropIcon = 0x0080;
	}

	namespace MultiItemDropsSave_TA {
		constexpr uintptr_t QueuedFTEDropGroups = 0x00C8;
	}

	namespace MusicMetrics_TA {
		constexpr uintptr_t FName = 0x0080;
		constexpr uintptr_t TrackStartTime = 0x0088;
		constexpr uintptr_t TrackSequence = 0x008C;
		constexpr uintptr_t PendingMusicVolume = 0x0090;
	}

	namespace MusicPlayerSave_TA {
		constexpr uintptr_t PlaylistsUpdate22 = 0x00C8;
		constexpr uintptr_t GameplayMusicSetting = 0x00D8;
		constexpr uintptr_t Bitfields_0x00DC = 0x00DC;
	}

	namespace MusicPlaylist_TA {
		constexpr uintptr_t Tracks = 0x0060;
		constexpr uintptr_t Icon = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace MusicStingersPreviewer_TA {
		constexpr uintptr_t ProductLoader = 0x0060;
		constexpr uintptr_t StingerPreviewFadeCue = 0x0068;
		constexpr uintptr_t PlayPreviewDelay = 0x0070;
		constexpr uintptr_t AnthemAsset = 0x0078;
		constexpr uintptr_t FProductInstanceID = 0x0080;
		constexpr uintptr_t Bitfields_0x0090 = 0x0090;
	}

	namespace MusicThemeConfig_TA {
		constexpr uintptr_t Theme = 0x0078;
	}

	namespace MusicTheme_TA {
		constexpr uintptr_t Playlists = 0x0060;
		constexpr uintptr_t TitleTracks = 0x0070;
		constexpr uintptr_t NeverPlayInFirstTracklist = 0x0080;
		constexpr uintptr_t FPlaylistTrack = 0x0088;
		constexpr uintptr_t FPlaylistTrack = 0x0098;
		constexpr uintptr_t DefaultIcon = 0x00A8;
		constexpr uintptr_t AdditionalTracks = 0x00B0;
	}

	namespace MusicTrack_TA {
		constexpr uintptr_t Cue = 0x0060;
		constexpr uintptr_t Icon = 0x0068;
	}

	namespace MusicTracklistBuildStep_RemoveStreamerUnsafeTracks_TA {
		constexpr uintptr_t Source_Object = 0x0060;
		constexpr uintptr_t Source_Interface = 0x0068;
		constexpr uintptr_t Config = 0x0070;
	}

	namespace MusicTracklistBuildStep_RemoveTrack_TA {
		constexpr uintptr_t Source_Object = 0x0060;
		constexpr uintptr_t Source_Interface = 0x0068;
		constexpr uintptr_t TrackToRemove = 0x0070;
	}

	namespace MusicTracklistBuildStep_ShuffleTracks_TA {
		constexpr uintptr_t Source_Object = 0x0060;
		constexpr uintptr_t Source_Interface = 0x0068;
	}

	namespace MusicTracklistFactory_TA {
		constexpr uintptr_t TracklistNull = 0x0060;
		constexpr uintptr_t TracklistBuilder_Object = 0x0068;
		constexpr uintptr_t TracklistBuilder_Interface = 0x0070;
	}

	namespace MusicTracklist_TA {
		constexpr uintptr_t Tracks = 0x0060;
	}

	namespace MusicUrlConfig_TA {
		constexpr uintptr_t Tracks = 0x0078;
	}

	namespace MutatorConfig_TA {
		constexpr uintptr_t MaxNumRowsOverride = 0x0078;
		constexpr uintptr_t MaxNumColumnsOverride = 0x007C;
		constexpr uintptr_t VisibleGameSettingCategories = 0x0080;
		constexpr uintptr_t MaxAllowedMutators = 0x0090;
		constexpr uintptr_t MaxPreviewMutators = 0x0094;
	}

	namespace MutatorGameSettingPreset_TA {
		constexpr uintptr_t Presets = 0x0068;
	}

	namespace MutatorGameSetting_TA {
		constexpr uintptr_t RequiresMutators = 0x0068;
		constexpr uintptr_t DisallowedWithMutators = 0x0078;
		constexpr uintptr_t DisallowedWithGameModes = 0x0088;
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t MutatorGroupID = 0x00A8;
	}

	namespace Mutator_Attachment_TA {
		constexpr uintptr_t AttachmentArchetype = 0x0078;
		constexpr uintptr_t Team1AttachmentArchetype = 0x0080;
	}

	namespace Mutator_Audio_TA {
		constexpr uintptr_t FName = 0x0078;
	}

	namespace Mutator_Ball_TA {
		constexpr uintptr_t SoccarGame = 0x0078;
		constexpr uintptr_t BallScale = 0x0080;
		constexpr uintptr_t BallBounciness = 0x0084;
		constexpr uintptr_t BallCarBounciness = 0x0088;
		constexpr uintptr_t TotalGameBalls = 0x008C;
		constexpr uintptr_t BallArchetype = 0x0090;
		constexpr uintptr_t BallGravityScale = 0x0098;
		constexpr uintptr_t BallSloMoDuration = 0x009C;
		constexpr uintptr_t BallSloMoDilation = 0x00A0;
		constexpr uintptr_t BallSloMoCooldown = 0x00A4;
		constexpr uintptr_t BallSloMoRadius = 0x00A8;
		constexpr uintptr_t BallSloMoDiffSpeed = 0x00AC;
		constexpr uintptr_t BallMaxLinearSpeedScale = 0x00B0;
		constexpr uintptr_t BallMaxAngularSpeed = 0x00B4;
		constexpr uintptr_t BallHitSpinScale = 0x00B8;
		constexpr uintptr_t FVector = 0x00BC;
		constexpr uintptr_t PhysMatOverride = 0x00C8;
		constexpr uintptr_t BallMagnusMinSpeed = 0x00D0;
		constexpr uintptr_t BallLiftImpulse = 0x00D4;
		constexpr uintptr_t BallLiftDelay = 0x00D8;
	}

	namespace Mutator_Booster_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t BoostStrength = 0x007C;
		constexpr uintptr_t BoostRechargeRate = 0x0080;
		constexpr uintptr_t BoostRechargeDelay = 0x0084;
		constexpr uintptr_t BoostStartAmount = 0x0088;
		constexpr uintptr_t BoostRestriction = 0x008C;
	}

	namespace Mutator_Breakout_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t LockedDamageIndex = 0x007C;
		constexpr uintptr_t StartingDamageState = 0x0080;
	}

	namespace Mutator_Car_TA {
		constexpr uintptr_t CarScale = 0x0078;
		constexpr uintptr_t JumpScale = 0x007C;
		constexpr uintptr_t CarMaxLinearSpeedScale = 0x0080;
		constexpr uintptr_t MaxTimeForDodge = 0x0084;
		constexpr uintptr_t Bitfields_0x0088 = 0x0088;
		constexpr uintptr_t MaxNumJumps = 0x008C;
	}

	namespace Mutator_Demolish_TA {
		constexpr uintptr_t DemolishTarget = 0x0078;
		constexpr uintptr_t DemolishSpeed = 0x0079;
		constexpr uintptr_t VehicleDemolishMode = 0x007A;
		constexpr uintptr_t UnnamedMember_0x007C = 0x007C;
	}

	namespace Mutator_DisableScoring_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace Mutator_Freeplay_Base_TA {
		constexpr uintptr_t CarArchetype = 0x0078;
		constexpr uintptr_t TeamArchetypes = 0x0080;
		constexpr uintptr_t SoccarGame = 0x0090;
		constexpr uintptr_t MatchTypeClass = 0x0098;
		constexpr uintptr_t FString = 0x00A0;
	}

	namespace Mutator_Freeplay_TA {
		constexpr uintptr_t PlayerRumbleItems = 0x00B0;
		constexpr uintptr_t LastResetTime = 0x00C0;
		constexpr uintptr_t ResetCooldown = 0x00C4;
		constexpr uintptr_t FreeplayConfig = 0x00C8;
		constexpr uintptr_t GoalResetType = 0x00D0;
		constexpr uintptr_t BoostFillType = 0x00D1;
		constexpr uintptr_t BoostFillDelay = 0x00D4;
		constexpr uintptr_t FreeplaySessionManager = 0x00D8;
	}

	namespace Mutator_GameEvent_TA {
		constexpr uintptr_t StatFactoryArchetype = 0x0078;
		constexpr uintptr_t BotArchetype = 0x0080;
		constexpr uintptr_t EndRoundComponentArchetype = 0x0088;
	}

	namespace Mutator_GameSpeed_TA {
		constexpr uintptr_t GameSpeed = 0x0078;
	}

	namespace Mutator_Gravity_TA {
		constexpr uintptr_t Gravity = 0x0078;
	}

	namespace Mutator_Handicap_TA {
		constexpr uintptr_t AutoBalanceDifference = 0x0078;
	}

	namespace Mutator_Input_TA {
		constexpr uintptr_t InputRestriction = 0x0078;
	}

	namespace Mutator_Loadout_TA {
		constexpr uintptr_t Products = 0x0078;
	}

	namespace Mutator_Match_TA {
		constexpr uintptr_t MatchGames = 0x0078;
		constexpr uintptr_t GameTime = 0x007C;
		constexpr uintptr_t FinishTime = 0x0080;
		constexpr uintptr_t GameScore = 0x0084;
		constexpr uintptr_t SubRules = 0x0088;
		constexpr uintptr_t UnnamedMember_0x0090 = 0x0090;
		constexpr uintptr_t ItemGiveRateOverride = 0x0094;
		constexpr uintptr_t OvertimeComponent = 0x0098;
		constexpr uintptr_t MaxTimeComponent = 0x00A0;
	}

	namespace Mutator_RespawnTime_TA {
		constexpr uintptr_t RespawnTime = 0x0078;
		constexpr uintptr_t UnnamedMember_0x007C = 0x007C;
		constexpr uintptr_t BallRespawnTime = 0x0080;
	}

	namespace Mutator_Robin_TA {
		constexpr uintptr_t FStickyForceData = 0x0060;
		constexpr uintptr_t FAutoFlipData = 0x0068;
		constexpr uintptr_t VehicleSim = 0x0070;
		constexpr uintptr_t OverrideCarComponents = 0x0078;
	}

	namespace Mutator_Score_TA {
		constexpr uintptr_t FStatEventScore = 0x0078;
		constexpr uintptr_t FStatEventScore = 0x0088;
		constexpr uintptr_t PossessionSeconds = 0x0098;
		constexpr uintptr_t PossessionScore = 0x009C;
		constexpr uintptr_t SoccarEvent = 0x00A0;
	}

	namespace Mutator_TA {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
		constexpr uintptr_t ProhitibitedDefaultMatchTypes = 0x0068;
	}

	namespace Mutator_Territory_TA {
		constexpr uintptr_t TrackerWall = 0x0078;
		constexpr uintptr_t TerritoryDemolishComponent = 0x0080;
		constexpr uintptr_t StaleBallMaxTime = 0x0088;
		constexpr uintptr_t StaleBallWarningThreshold = 0x008C;
		constexpr uintptr_t StaleBallNoTeamMaxTime = 0x0090;
		constexpr uintptr_t StaleBallNoTeamWarningThreshold = 0x0094;
		constexpr uintptr_t StaleBallYRespawnOffset = 0x0098;
	}

	namespace NameplateComponentCar_TA {
		constexpr uintptr_t Car = 0x00E0;
	}

	namespace NameplateComponent_TA {
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t Team = 0x00B8;
		constexpr uintptr_t Bitfields_0x00BC = 0x00BC;
		constexpr uintptr_t SpectatorShortcut = 0x00C0;
	}

	namespace NameplateMeshComponent_TA {
		constexpr uintptr_t FInterpCurveFloat = 0x0308;
		constexpr uintptr_t FInterpCurveFloat = 0x0320;
		constexpr uintptr_t PlayerOptionsScale = 0x0338;
	}

	namespace NameplateRenderTarget_TA {
		constexpr uintptr_t NameplatesMovie = 0x01B8;
	}

	namespace NavigationHandle_TA {
		constexpr uintptr_t FVector = 0x01A8;
	}

	namespace NetBucketRecorder_TA {
		constexpr uintptr_t PlayerData = 0x0060;
	}

	namespace NetMetricPlayerDataExport_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FNetBucketsExport = 0x00A8;
		constexpr uintptr_t FNetBucketsExport = 0x00C8;
		constexpr uintptr_t FNetBucketsExport = 0x00E8;
	}

	namespace NetMetricPlayerData_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FNetBuckets = 0x00A8;
		constexpr uintptr_t FNetBuckets = 0x00D8;
		constexpr uintptr_t FNetBuckets = 0x0108;
	}

	namespace NetMetricsConfig_TA {
		constexpr uintptr_t FNetBucketSetup = 0x0078;
		constexpr uintptr_t FNetBucketSetup = 0x0090;
		constexpr uintptr_t FNetBucketSetup = 0x00A8;
	}

	namespace NetStatGraph_TA {
		constexpr uintptr_t PacketsOut = 0x0090;
		constexpr uintptr_t PacketsIn = 0x0098;
		constexpr uintptr_t LostPacketsOut = 0x00A0;
		constexpr uintptr_t LostPacketsIn = 0x00A8;
		constexpr uintptr_t BytesOut = 0x00B0;
		constexpr uintptr_t BytesIn = 0x00B8;
		constexpr uintptr_t Latency = 0x00C0;
		constexpr uintptr_t ExpectedOutPacketRate = 0x00C8;
		constexpr uintptr_t ExpectedInPacketRate = 0x00CC;
		constexpr uintptr_t MaxBytesRate = 0x00D0;
	}

	namespace NetworkConfig_TA {
		constexpr uintptr_t FNetworkLimit = 0x0078;
		constexpr uintptr_t FNetworkLimit = 0x0088;
		constexpr uintptr_t FNetworkLimit = 0x0098;
		constexpr uintptr_t MatchFailureSecondsOriginalValue = 0x00A8;
		constexpr uintptr_t MaxClientUploadFrames = 0x00AC;
		constexpr uintptr_t Bitfields_0x00B0 = 0x00B0;
		constexpr uintptr_t ForcePacketSignificantDistance = 0x00B4;
		constexpr uintptr_t MatchFailureSeconds = 0x00B8;
		constexpr uintptr_t IgnoredActorOverflowVariables = 0x00C0;
	}

	namespace NetworkInputBuffer_CSTS_TA {
		constexpr uintptr_t Config = 0x02C8;
		constexpr uintptr_t LastPacketReceiveTime = 0x02D0;
		constexpr uintptr_t CurrentTimeDilation = 0x02D4;
		constexpr uintptr_t SequentialMissedInputs = 0x02D8;
		constexpr uintptr_t BufferLowWatermark = 0x02DC;
		constexpr uintptr_t BufferLowHistory = 0x02E0;
		constexpr uintptr_t BufferLowHistoryIndex = 0x02F0;
		constexpr uintptr_t ExtraBuffer = 0x02F4;
	}

	namespace NetworkInputBuffer_STS_TA {
		constexpr uintptr_t JitterBuffer = 0x02C8;
		constexpr uintptr_t ExtraSimTimeRemaining = 0x02D0;
		constexpr uintptr_t FSimTimeAdjustDebugData = 0x02D4;
		constexpr uintptr_t TimeLastSimTimeAdjustment = 0x02DC;
		constexpr uintptr_t TimeClientAckdAdjustSimTime = 0x02E0;
		constexpr uintptr_t ReplicatedInputBufferSize = 0x02E4;
		constexpr uintptr_t UnnamedMember_0x02E8 = 0x02E8;
		constexpr uintptr_t BufferSizeLowWatermark = 0x02EC;
		constexpr uintptr_t TimeLastMissedInput = 0x02F0;
		constexpr uintptr_t TimeLastTightenUpBufferCheck = 0x02F4;
	}

	namespace NetworkInputBuffer_ServerConsume_TA {
		constexpr uintptr_t JitterBuffer = 0x02C8;
		constexpr uintptr_t UnnamedMember_0x02D0 = 0x02D0;
	}

	namespace NetworkInputBuffer_TA {
		constexpr uintptr_t PhysicsConfig = 0x0268;
		constexpr uintptr_t JitterSettings = 0x0270;
		constexpr uintptr_t EngineShare = 0x0278;
		constexpr uintptr_t PrimaryClient = 0x0280;
		constexpr uintptr_t Clients = 0x0288;
		constexpr uintptr_t TimeSinceLastMovePacket = 0x0298;
		constexpr uintptr_t MaxInputFramesPerPacket = 0x029C;
		constexpr uintptr_t PingTimestamps = 0x02A0;
		constexpr uintptr_t LastTickTime = 0x02B0;
		constexpr uintptr_t FInputBufferStats = 0x02B4;
		constexpr uintptr_t PingEvent = 0x02C0;
	}

	namespace NetworkJitterSettings_TA {
		constexpr uintptr_t MinTimeBetweenPackets = 0x0060;
		constexpr uintptr_t MaxTimeBetweenPackets = 0x0064;
		constexpr uintptr_t BufferStdDeviations = 0x0068;
		constexpr uintptr_t MinBufferTime = 0x006C;
		constexpr uintptr_t RollingAverageTime = 0x0070;
		constexpr uintptr_t InputBufferTightenUpSizeFrequency = 0x0074;
		constexpr uintptr_t MaxSingleAdjustmentFrames = 0x0078;
	}

	namespace NetworkSave_TA {
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t IncomingPacketFrequency = 0x00CC;
		constexpr uintptr_t OutgoingPacketFrequency = 0x00CD;
		constexpr uintptr_t IncomingBandwidth = 0x00CE;
		constexpr uintptr_t NetworkInputBuffer = 0x00CF;
	}

	namespace Note_Linked_TA {
		constexpr uintptr_t NextNote = 0x0278;
		constexpr uintptr_t PrevNote = 0x0280;
	}

	namespace NotificationManager_TA {
		constexpr uintptr_t Notifications = 0x0060;
		constexpr uintptr_t CurrentNotificationID = 0x0070;
	}

	namespace NotificationSave_TA {
		constexpr uintptr_t Notifications = 0x00C8;
		constexpr uintptr_t Bitfields_0x00D8 = 0x00D8;
		constexpr uintptr_t EngagementEventNotification = 0x00E0;
	}

	namespace Notification_AchievementProgress_TA {
		constexpr uintptr_t Id = 0x0170;
		constexpr uintptr_t Icon = 0x0178;
		constexpr uintptr_t Progress = 0x0180;
		constexpr uintptr_t MaxProgress = 0x0184;
	}

	namespace Notification_AchievementUnlocked_TA {
		constexpr uintptr_t Id = 0x0170;
		constexpr uintptr_t Points = 0x0174;
		constexpr uintptr_t Icon = 0x0178;
	}

	namespace Notification_TA {
		constexpr uintptr_t NotificationID = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t Bitfields_0x0088 = 0x0088;
		constexpr uintptr_t PopUpDuration = 0x008C;
		constexpr uintptr_t Expiration = 0x0090;
		constexpr uintptr_t NotificationManager = 0x0098;
		constexpr uintptr_t GFxDataClass = 0x00A0;
		constexpr uintptr_t CrossplayConfig = 0x00A8;
	}

	namespace OnlineDLCProductCache_TA {
		constexpr uintptr_t GeneratedProducts = 0x0060;
		constexpr uintptr_t AllowedAttributes = 0x0070;
		constexpr uintptr_t PreviousGeneratedProducts = 0x0080;
	}

	namespace OnlineFreeplaySettingsSave_TA {
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t Boost = 0x0168;
		constexpr uintptr_t GoalReset = 0x0169;
		constexpr uintptr_t UnnamedMember_0x016C = 0x016C;
	}

	namespace OnlineGameDedicatedServer_TA {
		constexpr uintptr_t Tournaments = 0x03E8;
		constexpr uintptr_t LastPlaylistID = 0x03F0;
		constexpr uintptr_t AllRelevantProducts = 0x03F8;
		constexpr uintptr_t ReplayToUpload = 0x0408;
		constexpr uintptr_t FlatbufferSession = 0x0410;
		constexpr uintptr_t VoiceTokenCache = 0x0418;
		constexpr uintptr_t NetMetricsRecorder = 0x0420;
		constexpr uintptr_t ActorChannelMonitor = 0x0428;
		constexpr uintptr_t GameModesConfig = 0x0430;
	}

	namespace OnlineGameJoinGame_TA {
		constexpr uintptr_t AssetCache = 0x0448;
	}

	namespace OnlineGameParty_TA {
		constexpr uintptr_t PartyLoadouts = 0x0468;
		constexpr uintptr_t MaxPartyMessages = 0x0478;
		constexpr uintptr_t FString = 0x0480;
		constexpr uintptr_t FString = 0x0490;
		constexpr uintptr_t FString = 0x04A0;
		constexpr uintptr_t FString = 0x04B0;
		constexpr uintptr_t AssetCache = 0x04C0;
		constexpr uintptr_t ChallengesRequired = 0x04C8;
		constexpr uintptr_t UnnamedMember_0x04D8 = 0x04D8;
		constexpr uintptr_t VoiceManager = 0x04E0;
	}

	namespace OnlineGamePlayerTitles_TA {
		constexpr uintptr_t PlayerTitleCacheTime = 0x00B0;
		constexpr uintptr_t PlayerCache = 0x00B8;
		constexpr uintptr_t TitleConfig = 0x00C8;
	}

	namespace OnlineGameRegions_TA {
		constexpr uintptr_t RegionPingCache = 0x0138;
	}

	namespace OnlineGameReservations_TA {
		constexpr uintptr_t ClubsConfig = 0x01C8;
		constexpr uintptr_t Loadouts = 0x01D0;
	}

	namespace OnlineGameTourMatchmaking_TA {
		constexpr uintptr_t Tournaments = 0x0130;
		constexpr uintptr_t Config = 0x0138;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t FString = 0x0150;
		constexpr uintptr_t TourEvent = 0x0160;
		constexpr uintptr_t Error = 0x0168;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
		constexpr uintptr_t JoinServerAttemptCounter = 0x0174;
	}

	namespace OnlineGameTourServer_TA {
		constexpr uintptr_t FTourServerSettings = 0x00B0;
		constexpr uintptr_t FTourServerSettings = 0x0198;
		constexpr uintptr_t MapSet = 0x0280;
		constexpr uintptr_t GameUpdateDispatcher = 0x0288;
		constexpr uintptr_t TourServerInfo = 0x0290;
		constexpr uintptr_t TeamIDs = 0x0298;
		constexpr uintptr_t TournamentServerConfig = 0x02A8;
	}

	namespace OnlineGameTournaments_TA {
		constexpr uintptr_t Config = 0x00B0;
		constexpr uintptr_t TourEventArchetype = 0x00B8;
		constexpr uintptr_t ServiceArchetype = 0x00C0;
		constexpr uintptr_t Service = 0x00C8;
		constexpr uintptr_t Subscriptions = 0x00D0;
		constexpr uintptr_t Registration = 0x00D8;
		constexpr uintptr_t CheckIn = 0x00E0;
		constexpr uintptr_t CheckInError = 0x00E8;
		constexpr uintptr_t PartyCheckIn = 0x00F0;
		constexpr uintptr_t PartyLeaderLeave = 0x00F8;
		constexpr uintptr_t WindowWatcher = 0x0100;
		constexpr uintptr_t Rewards = 0x0108;
		constexpr uintptr_t Brackets = 0x0110;
		constexpr uintptr_t Credentials = 0x0118;
		constexpr uintptr_t Cache = 0x0120;
		constexpr uintptr_t MatchServerBrowser = 0x0128;
		constexpr uintptr_t Status = 0x0130;
		constexpr uintptr_t AutoTour = 0x0138;
		constexpr uintptr_t TourEvent = 0x0140;
	}

	namespace OnlineGameVersion_TA {
		constexpr uintptr_t UnknownData00 = 0x00B4;
	}

	namespace OnlineGame_TA {
		constexpr uintptr_t Tournaments = 0x02A0;
		constexpr uintptr_t TourMatchmaking = 0x02A8;
		constexpr uintptr_t Personas = 0x02B0;
		constexpr uintptr_t ClubPersonas = 0x02B8;
		constexpr uintptr_t MenuTreeBuilder = 0x02C0;
	}

	namespace OnlinePlayerAuthentication_TA {
		constexpr uintptr_t FreeToPlayConfig = 0x0208;
	}

	namespace OnlinePlayerFriends_TA {
		constexpr uintptr_t PersonasData = 0x03B0;
	}

	namespace OnlinePlayerMTX_TA {
		constexpr uintptr_t Bitfields_0x0060 = 0x0060;
	}

	namespace OnlinePlayer_TA {
		constexpr uintptr_t AchievementManagerArchetype = 0x0290;
		constexpr uintptr_t AchievementManager = 0x0298;
		constexpr uintptr_t NotificationManager = 0x02A0;
		constexpr uintptr_t FirstTimeManagerArchetype = 0x02A8;
		constexpr uintptr_t FTEManager = 0x02B0;
		constexpr uintptr_t TriggerManager = 0x02B8;
		constexpr uintptr_t EOSMetricHeartbeat = 0x02C0;
		constexpr uintptr_t CrumbTrailArchetype = 0x02C8;
		constexpr uintptr_t CrumbsMgr = 0x02D0;
		constexpr uintptr_t ChallengeManager = 0x02D8;
		constexpr uintptr_t WalletArchetype = 0x02E0;
		constexpr uintptr_t Wallet = 0x02E8;
		constexpr uintptr_t ShopsManagerArchetype = 0x02F0;
		constexpr uintptr_t ShopsManager = 0x02F8;
		constexpr uintptr_t ChatHistory = 0x0300;
		constexpr uintptr_t MTX = 0x0308;
		constexpr uintptr_t RewardDrops = 0x0310;
		constexpr uintptr_t AccountSettings = 0x0318;
		constexpr uintptr_t FUniqueNetId = 0x0320;
		constexpr uintptr_t EOSPermissions = 0x0368;
		constexpr uintptr_t UnnamedMember_0x0370 = 0x0370;
		constexpr uintptr_t FString = 0x0378;
		constexpr uintptr_t EpicConfig = 0x0388;
		constexpr uintptr_t ESportConfig = 0x0390;
		constexpr uintptr_t FString = 0x0398;
		constexpr uintptr_t FString = 0x03A8;
	}

	namespace OnlineProductExpirationHelper_TA {
		constexpr uintptr_t ExpirationProducts = 0x0060;
		constexpr uintptr_t ExpiredProducts = 0x0070;
		constexpr uintptr_t ExpiredProductNotificationQueue = 0x0080;
		constexpr uintptr_t ExpiredProductsSet = 0x0090;
	}

	namespace OnlineProductStoreSet_TA {
		constexpr uintptr_t Player = 0x0160;
		constexpr uintptr_t FUniqueNetId = 0x0168;
	}

	namespace OnlineProductStore_TA {
		constexpr uintptr_t Sets = 0x0070;
		constexpr uintptr_t FProductInstanceID = 0x0080;
	}

	namespace OnlineProduct_TA {
		constexpr uintptr_t ProductID = 0x0060;
		constexpr uintptr_t FProductInstanceID = 0x0068;
		constexpr uintptr_t Attributes = 0x0078;
		constexpr uintptr_t SeriesID = 0x0088;
		constexpr uintptr_t TradeHold = 0x008C;
		constexpr uintptr_t AddedTimestamp = 0x0090;
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t FProductHashID = 0x00B8;
		constexpr uintptr_t FString = 0x00C0;
	}

	namespace OnlineSaveRecord_TA {
		constexpr uintptr_t Version = 0x0060;
		constexpr uintptr_t TimeStamp = 0x0068;
		constexpr uintptr_t SaveTick = 0x0070;
		constexpr uintptr_t SaveObjects = 0x0078;
	}

	namespace OnlineSessionManager_TA {
		constexpr uintptr_t GameEvent = 0x0070;
		constexpr uintptr_t OnlineGameParty = 0x0078;
		constexpr uintptr_t OnlineGame = 0x0080;
		constexpr uintptr_t CrossplayConfig = 0x0088;
	}

	namespace OnlineStorageConfig_TA {
		constexpr uintptr_t DisabledClasses = 0x0078;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t MinSecondsBetweenCloudUploads = 0x0098;
		constexpr uintptr_t UploadRetryTime = 0x00A0;
	}

	namespace OnlineStorageSyncManager_TA {
		constexpr uintptr_t Config = 0x0060;
		constexpr uintptr_t ProductsConfig = 0x0068;
		constexpr uintptr_t EOSOnlineStorageSync = 0x0070;
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
	}

	namespace OrbitHitHandler_TA {
		constexpr uintptr_t FVector = 0x0158;
		constexpr uintptr_t CarDistanceBeforeOrbit = 0x0164;
		constexpr uintptr_t StartAffectedRadius = 0x0168;
		constexpr uintptr_t EndAffectedRadius = 0x016C;
		constexpr uintptr_t StartOrbitDistance = 0x0170;
		constexpr uintptr_t EndOrbitDistance = 0x0174;
		constexpr uintptr_t StartOrbitSpeed = 0x0178;
		constexpr uintptr_t EndOrbitSpeed = 0x017C;
		constexpr uintptr_t FarAwayOrbitSpeedMultiplier = 0x0180;
		constexpr uintptr_t MaxDeactivationVelocity = 0x0184;
		constexpr uintptr_t OrbitCenterLocation = 0x0188;
		constexpr uintptr_t OrbitAxisBehavior = 0x0189;
		constexpr uintptr_t FColor = 0x018C;
		constexpr uintptr_t FColor = 0x0190;
		constexpr uintptr_t FColor = 0x0194;
		constexpr uintptr_t OrbitingCars = 0x0198;
		constexpr uintptr_t FVector = 0x01A8;
		constexpr uintptr_t FVector = 0x01B4;
		constexpr uintptr_t AffectedRadiusSquared = 0x01C0;
		constexpr uintptr_t OrbitDistance = 0x01C4;
	}

	namespace OtherPlayerProfile_TA {
		constexpr uintptr_t PlayerBorder = 0x0070;
		constexpr uintptr_t GFxPlayerBorder = 0x0078;
		constexpr uintptr_t PlayerBanner = 0x0080;
		constexpr uintptr_t GFxPlayerBanner = 0x0088;
	}

	namespace OutOfWorldVolume_TA {
		constexpr uintptr_t TouchTypes = 0x02A8;
		constexpr uintptr_t OutOfWorldType = 0x02B8;
	}

	namespace OverrideMaterialsHitHandler_TA {
		constexpr uintptr_t OverrideMaterialMode = 0x0150;
		constexpr uintptr_t MaterialToUse = 0x0158;
		constexpr uintptr_t PaintedMaterialToUse = 0x0160;
		constexpr uintptr_t BallMaterialToUse = 0x0168;
		constexpr uintptr_t CachedSkeletalMeshes = 0x0170;
	}

	namespace OvertimeComponent_TA {
		constexpr uintptr_t TieBreaker = 0x00A8;
		constexpr uintptr_t OvertimeGameTime = 0x00AC;
		constexpr uintptr_t BallHitGroundTimeoutSeconds = 0x00B0;
		constexpr uintptr_t FirstScoreTeamIndex = 0x00B4;
		constexpr uintptr_t RandomWinningTeamIndex = 0x00B8;
	}

	namespace OvertimeSettings_TA {
		constexpr uintptr_t TieBreaker = 0x0060;
		constexpr uintptr_t OvertimeGameTime = 0x0064;
	}

	namespace PRI_KnockOut_TA {
		constexpr uintptr_t GameEvent_KO = 0x0C90;
		constexpr uintptr_t Bitfields_0x0C98 = 0x0C98;
		constexpr uintptr_t Knockouts = 0x0C9C;
		constexpr uintptr_t StackedKnockoutCount = 0x0CA0;
		constexpr uintptr_t LastKnockoutTime = 0x0CA4;
		constexpr uintptr_t MaxKnockoutStackTime = 0x0CA8;
		constexpr uintptr_t KnockoutAssists = 0x0CAC;
		constexpr uintptr_t KnockoutDeaths = 0x0CB0;
		constexpr uintptr_t DamageCaused = 0x0CB4;
		constexpr uintptr_t Hits = 0x0CB8;
		constexpr uintptr_t Grabs = 0x0CBC;
		constexpr uintptr_t Blocks = 0x0CC0;
		constexpr uintptr_t EliminationOrder = 0x0CC4;
		constexpr uintptr_t MatchPlacement = 0x0CC8;
		constexpr uintptr_t SpectateDelaySeconds = 0x0CCC;
	}

	namespace PRI_TA {
		constexpr uintptr_t MatchScore = 0x0458;
		constexpr uintptr_t MatchGoals = 0x045C;
		constexpr uintptr_t MatchOwnGoals = 0x0460;
		constexpr uintptr_t MatchAssists = 0x0464;
		constexpr uintptr_t MatchSaves = 0x0468;
		constexpr uintptr_t MatchShots = 0x046C;
		constexpr uintptr_t MatchDemolishes = 0x0470;
		constexpr uintptr_t MatchBonusXP = 0x0474;
		constexpr uintptr_t MatchBreakoutDamage = 0x0478;
		constexpr uintptr_t Bitfields_0x047C = 0x047C;
		constexpr uintptr_t GameEvent = 0x0480;
		constexpr uintptr_t ReplicatedGameEvent = 0x0488;
		constexpr uintptr_t Car = 0x0490;
		constexpr uintptr_t FullLoadouts = 0x0498;
		constexpr uintptr_t FullLoadoutAttributes = 0x0518;
		constexpr uintptr_t FullOnlineLoadout = 0x0538;
		constexpr uintptr_t DataProducts = 0x0558;
		constexpr uintptr_t DataOnlineProducts = 0x0568;
		constexpr uintptr_t MaxDataProducts = 0x0578;
		constexpr uintptr_t FClientLoadoutData = 0x0580;
		constexpr uintptr_t FClientLoadoutOnlineData = 0x0590;
		constexpr uintptr_t FClientLoadoutDatas = 0x05A0;
		constexpr uintptr_t FClientLoadoutOnlineDatas = 0x05C0;
		constexpr uintptr_t OnlineProductStats = 0x05E8;
		constexpr uintptr_t TimeLoadoutWasLocked = 0x05F8;
		constexpr uintptr_t TimeLastTeamChangeRequested = 0x05FC;
		constexpr uintptr_t FLoadoutTeamPaint = 0x0600;
		constexpr uintptr_t MatchStats = 0x0610;
		constexpr uintptr_t WaitingStartTime = 0x0620;
		constexpr uintptr_t TotalGameTimePlayed = 0x0624;
		constexpr uintptr_t PersistentCamera = 0x0628;
		constexpr uintptr_t Camera = 0x0630;
		constexpr uintptr_t FProfileCameraSettings = 0x0638;
		constexpr uintptr_t CameraPitch = 0x0654;
		constexpr uintptr_t CameraYaw = 0x0655;
		constexpr uintptr_t PawnType = 0x0656;
		constexpr uintptr_t PlayerHistoryKey = 0x0657;
		constexpr uintptr_t ReplicatedWorstNetQualityBeyondLatency = 0x0697;
		constexpr uintptr_t QuitSeverity = 0x0698;
		constexpr uintptr_t ProductStats = 0x06A0;
		constexpr uintptr_t PendingProductStatValues = 0x06B0;
		constexpr uintptr_t FUniqueNetId = 0x06C0;
		constexpr uintptr_t FName = 0x0708;
		constexpr uintptr_t FSkillTierData = 0x0710;
		constexpr uintptr_t DodgeInputThreshold = 0x0718;
		constexpr uintptr_t SteeringSensitivity = 0x071C;
		constexpr uintptr_t AirControlSensitivity = 0x0720;
		constexpr uintptr_t StatCooldowns = 0x0728;
		constexpr uintptr_t BoostPickups = 0x0738;
		constexpr uintptr_t SmallBoostsCollected = 0x073C;
		constexpr uintptr_t BigBoostsCollected = 0x0740;
		constexpr uintptr_t MaxDodgeStreak = 0x0744;
		constexpr uintptr_t BallTouches = 0x0748;
		constexpr uintptr_t CarTouches = 0x074C;
		constexpr uintptr_t ReplacingBotPRI = 0x0750;
		constexpr uintptr_t FMemberTitleStat = 0x0758;
		constexpr uintptr_t FMemberTitleStat = 0x0778;
		constexpr uintptr_t PlayerGoalExplosion = 0x0798;
		constexpr uintptr_t PlayerBanner = 0x07A0;
		constexpr uintptr_t PlayerAvatar = 0x07A8;
		constexpr uintptr_t PlayerBorder = 0x07B0;
		constexpr uintptr_t PlayerMusicStinger = 0x07B8;
		constexpr uintptr_t FName = 0x07C0;
		constexpr uintptr_t BotAvatarProductID = 0x07C8;
		constexpr uintptr_t BotBannerProductID = 0x07CC;
		constexpr uintptr_t ClubID = 0x07D0;
		constexpr uintptr_t LastTeamIndex = 0x07D8;
		constexpr uintptr_t FString = 0x07E0;
		constexpr uintptr_t SpectatorShortcut = 0x07F0;
		constexpr uintptr_t CarDistanceTracker = 0x07F8;
		constexpr uintptr_t CarGrappleTracker = 0x0800;
		constexpr uintptr_t StayAsPartyVoter = 0x0808;
		constexpr uintptr_t StayAsPartyVoteYes = 0x0810;
		constexpr uintptr_t PickupTimer = 0x0818;
		constexpr uintptr_t ViralItemActor = 0x0820;
		constexpr uintptr_t TimeTillItem = 0x0828;
		constexpr uintptr_t MaxTimeTillItem = 0x082C;
		constexpr uintptr_t ProductsConfig = 0x0830;
		constexpr uintptr_t FString = 0x0838;
		constexpr uintptr_t FServerSetLoadoutParams = 0x0848;
		constexpr uintptr_t PossessionSteals = 0x08A0;
		constexpr uintptr_t PossessionDenials = 0x08A4;
		constexpr uintptr_t PossessionClears = 0x08A8;
		constexpr uintptr_t BallDemolitionSaves = 0x08AC;
		constexpr uintptr_t CarDemolitions = 0x08B0;
		constexpr uintptr_t BallDemolitions = 0x08B4;
		constexpr uintptr_t SelfDemolitions = 0x08B8;
		constexpr uintptr_t ValidationFailedClearedSlots = 0x08C0;
	}

	namespace PSC_Constrained_TA {
		constexpr uintptr_t WorldZ = 0x03E0;
		constexpr uintptr_t UnnamedMember_0x03E4 = 0x03E4;
	}

	namespace PaintDatabase_TA {
		constexpr uintptr_t Paints = 0x0060;
		constexpr uintptr_t FMap_Mirror = 0x0070;
		constexpr uintptr_t UnnamedMember_0x00C0 = 0x00C0;
	}

	namespace ParticleSystemComponent_TA {
		constexpr uintptr_t FVector = 0x03E0;
		constexpr uintptr_t FVector = 0x03EC;
	}

	namespace PartyClubSync_TA {
		constexpr uintptr_t Party = 0x0060;
		constexpr uintptr_t Clubs = 0x0068;
		constexpr uintptr_t PsyNet = 0x0070;
		constexpr uintptr_t PlayerIds = 0x0078;
	}

	namespace PartyInviteNotification_TA {
		constexpr uintptr_t FUniqueLobbyId = 0x0170;
		constexpr uintptr_t FUniqueNetId = 0x0180;
	}

	namespace PartyJoinRequestNotification_TA {
		constexpr uintptr_t FUniqueNetId = 0x0170;
	}

	namespace PartyLeaderChangedEvent_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t NewFollowerIds = 0x00F0;
		constexpr uintptr_t VoterOwner = 0x0100;
	}

	namespace PartyMemberLoadout_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FLoadoutData = 0x00A8;
		constexpr uintptr_t OnlineLoadoutData = 0x00E8;
		constexpr uintptr_t GaragePreviewTeam = 0x00F8;
		constexpr uintptr_t LocalPlayer = 0x0100;
		constexpr uintptr_t ProductSet = 0x0108;
		constexpr uintptr_t SortWeight = 0x0110;
	}

	namespace PartyMessage_ChallengesUpdate_TA {
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00F0 = 0x00F0;
	}

	namespace PartyMessage_Chat_TA {
		constexpr uintptr_t FString = 0x00A8;
	}

	namespace PartyMessage_ClubChanged_TA {
		constexpr uintptr_t ClubID = 0x00A8;
	}

	namespace PartyMessage_CurrentVoiceRoom_TA {
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t FString = 0x00F0;
	}

	namespace PartyMessage_LevelAndChallengesUpdate_TA {
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t XpLevel = 0x00F0;
		constexpr uintptr_t UnnamedMember_0x00F4 = 0x00F4;
	}

	namespace PartyMessage_Loadout_TA {
		constexpr uintptr_t FPartyMemberLoadoutMessage = 0x00A8;
	}

	namespace PartyMessage_ProfileChange_TA {
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t ProfileProducts = 0x00F0;
	}

	namespace PartyMessage_TourCheckInError_TA {
		constexpr uintptr_t TourID = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
	}

	namespace PartyMessage_TourCheckIn_TA {
		constexpr uintptr_t TourSettings = 0x00A8;
		constexpr uintptr_t FTourTeam = 0x00B0;
		constexpr uintptr_t FTourPrivateCredentials = 0x00F8;
	}

	namespace PartyMessage_TourLeaveTournament_TA {
		constexpr uintptr_t TourID = 0x00A8;
	}

	namespace PartyMessage_TourPreCheckInError_TA {
		constexpr uintptr_t TourID = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
	}

	namespace PartyMessage_TourPreCheckIn_TA {
		constexpr uintptr_t Settings = 0x00A8;
	}

	namespace PartyMessage_UserVoiceReportingLevel_TA {
		constexpr uintptr_t VoiceReportingLevel = 0x00A8;
	}

	namespace PartyMessage_XPLevelUpdate_TA {
		constexpr uintptr_t FUniqueNetId = 0x00A8;
		constexpr uintptr_t XpLevel = 0x00F0;
	}

	namespace PerfStatGraph_TA {
		constexpr uintptr_t FPS = 0x0090;
		constexpr uintptr_t FrameTime = 0x0098;
		constexpr uintptr_t GameThreadTime = 0x00A0;
		constexpr uintptr_t RenderThreadTime = 0x00A8;
		constexpr uintptr_t GPUFrameTime = 0x00B0;
		constexpr uintptr_t FrameTimeHistories = 0x00B8;
		constexpr uintptr_t MaxFPS = 0x00C8;
		constexpr uintptr_t TargetFPS = 0x00CC;
	}

	namespace PersonaClubData {
		constexpr uintptr_t Persona = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t ClubID = 0x0078;
	}

	namespace PersonaSave_TA {
		constexpr uintptr_t RecentPlayers = 0x00C8;
		constexpr uintptr_t RecentGameIDs = 0x00D8;
		constexpr uintptr_t ObservedPlayerLoadouts = 0x00E8;
		constexpr uintptr_t PresenceState = 0x00F8;
	}

	namespace Persona_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t FUniqueNetId = 0x0080;
		constexpr uintptr_t OnlinePresenceState = 0x00C8;
		constexpr uintptr_t OnlinePresenceState_Platform = 0x00C9;
		constexpr uintptr_t OnlinePresenceState_PsyNet = 0x00CA;
		constexpr uintptr_t OnlinePresenceState_Epic = 0x00CB;
		constexpr uintptr_t Platform = 0x00CC;
		constexpr uintptr_t ClubRole = 0x00CD;
		constexpr uintptr_t SecondaryPlatform = 0x00CE;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t Bitfields_0x00E0 = 0x00E0;
		constexpr uintptr_t PresenceId = 0x00E4;
		constexpr uintptr_t LastActive = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FString = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
	}

	namespace Personas_TA {
		constexpr uintptr_t FMap_Mirror = 0x0060;
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t EpicIdRequests = 0x00C8;
		constexpr uintptr_t OnlineGame = 0x00D8;
	}

	namespace PhysicalMaterialProperty_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t GroundToleranceZ = 0x006C;
	}

	namespace PhysicsConfig_TA {
		constexpr uintptr_t EnabledFeatures = 0x0078;
		constexpr uintptr_t DisabledFeatures = 0x0088;
		constexpr uintptr_t FCarInteractionConfig = 0x0098;
		constexpr uintptr_t FSuperSonicConfig = 0x01A0;
		constexpr uintptr_t Bitfields_0x01AC = 0x01AC;
		constexpr uintptr_t JumpLeaveGroundTime = 0x01B0;
		constexpr uintptr_t FSimTimeScaleSettings = 0x01B4;
		constexpr uintptr_t FContinuousSimTimeScaleSettings = 0x01B8;
		constexpr uintptr_t PushForceConstantScale = 0x01EC;
	}

	namespace PhysicsMetrics_TA {
		constexpr uintptr_t CorrectionEvents = 0x0080;
	}

	namespace PickupTimer_TA {
		constexpr uintptr_t TimeTillItem = 0x02E0;
		constexpr uintptr_t MaxTimeTillItem = 0x02E4;
	}

	namespace PitchTekDrawingComponent_TA {
		constexpr uintptr_t FVector = 0x00A0;
		constexpr uintptr_t DecalType = 0x00AC;
		constexpr uintptr_t WheelContacts = 0x00B0;
		constexpr uintptr_t FPitchTekCarBodyContactData = 0x00C0;
	}

	namespace PlatformMetrics_TA {
		constexpr uintptr_t SoccarGame = 0x0080;
		constexpr uintptr_t Metrics = 0x0088;
	}

	namespace PlayMenuSave_TA {
		constexpr uintptr_t UnnamedMember_0x00C8 = 0x00C8;
		constexpr uintptr_t FName = 0x00CC;
		constexpr uintptr_t FocusSave = 0x00D8;
		constexpr uintptr_t FirstTimeClickedPlaylistIDs = 0x00E8;
	}

	namespace PlayerAvatarBorder_TA {
		constexpr uintptr_t Asset = 0x0198;
	}

	namespace PlayerAvatar_TA {
		constexpr uintptr_t Asset = 0x0198;
	}

	namespace PlayerBanner_TA {
		constexpr uintptr_t Asset = 0x0198;
	}

	namespace PlayerControllerBase_TA {
		constexpr uintptr_t SpectatorCameraAccel = 0x0890;
		constexpr uintptr_t FVector = 0x0894;
		constexpr uintptr_t SpectatorVelZ = 0x08A0;
		constexpr uintptr_t PostProcessManagerArchetype = 0x08A8;
		constexpr uintptr_t PostProcessManager = 0x08B0;
		constexpr uintptr_t SpectatorPitchDir = 0x08B8;
		constexpr uintptr_t SwivelPitchDir = 0x08BC;
		constexpr uintptr_t SpectatorVolume = 0x08C0;
		constexpr uintptr_t FullRotationScalar = 0x08C8;
		constexpr uintptr_t FullRotationMax = 0x08CC;
		constexpr uintptr_t VanityMgr = 0x08D0;
		constexpr uintptr_t UnnamedMember_0x08D8 = 0x08D8;
		constexpr uintptr_t PlayerBanner = 0x08E0;
		constexpr uintptr_t PlayerAvatar = 0x08E8;
		constexpr uintptr_t PlayerBorder = 0x08F0;
		constexpr uintptr_t AudioSpectatorMixComponent = 0x08F8;
		constexpr uintptr_t AudioFieldSideComponent = 0x0900;
	}

	namespace PlayerController_Cinematic_TA {
		constexpr uintptr_t PostProcessManagerArchetype = 0x0890;
	}

	namespace PlayerController_Menu_TA {
		constexpr uintptr_t InputSequences = 0x0998;
		constexpr uintptr_t UnnamedMember_0x09A8 = 0x09A8;
	}

	namespace PlayerController_Replay_TA {
		constexpr uintptr_t SplitscreenHUDArchetype = 0x0998;
		constexpr uintptr_t GameEvent = 0x09A0;
	}

	namespace PlayerController_TA {
		constexpr uintptr_t Car = 0x0998;
		constexpr uintptr_t PRI = 0x09A0;
		constexpr uintptr_t FVehicleInputs = 0x09A8;
		constexpr uintptr_t Bitfields_0x09C8 = 0x09C8;
		constexpr uintptr_t FString = 0x09D0;
		constexpr uintptr_t DeprecatedVoiceFilter = 0x09E0;
		constexpr uintptr_t QuickChatFilter = 0x09E1;
		constexpr uintptr_t MatchChatFilter = 0x09E2;
		constexpr uintptr_t RequestedInputBufferType = 0x09E3;
		constexpr uintptr_t FChatSpamData = 0x09E4;
		constexpr uintptr_t FChatSpamData = 0x09FC;
		constexpr uintptr_t LightBar = 0x0A18;
		constexpr uintptr_t MusicComponent = 0x0A20;
		constexpr uintptr_t AudioPriorityComponent = 0x0A28;
		constexpr uintptr_t AudioMixStateComponent = 0x0A30;
		constexpr uintptr_t TeamDemoAudioComponent = 0x0A38;
		constexpr uintptr_t FollowTarget = 0x0A40;
		constexpr uintptr_t SpectatorCameraArchetype = 0x0A48;
		constexpr uintptr_t SpectatorHUDArchetype = 0x0A50;
		constexpr uintptr_t SpectatorInputClass = 0x0A58;
		constexpr uintptr_t EditorCameraArchetype = 0x0A60;
		constexpr uintptr_t EditorHUDArchetype = 0x0A68;
		constexpr uintptr_t EditorInputClass = 0x0A70;
		constexpr uintptr_t MoveActor_Object = 0x0A78;
		constexpr uintptr_t MoveActor_Interface = 0x0A80;
		constexpr uintptr_t FVector = 0x0A88;
		constexpr uintptr_t MoveActorGrabIncrement = 0x0A94;
		constexpr uintptr_t MinMoveActorGrabDistance = 0x0A98;
		constexpr uintptr_t MouseIncrementSpeed = 0x0A9C;
		constexpr uintptr_t BallVelocityIncrementAmount = 0x0AA0;
		constexpr uintptr_t BallVelocityIncrementFireCount = 0x0AA4;
		constexpr uintptr_t BallVelocityIncrementFireCountMax = 0x0AA8;
		constexpr uintptr_t BallVelocityIncrementSpeedDefault = 0x0AAC;
		constexpr uintptr_t BallVelocityIncrementSpeedMax = 0x0AB0;
		constexpr uintptr_t CrosshairTraceDistance = 0x0AB4;
		constexpr uintptr_t TracedCrosshairActor = 0x0AB8;
		constexpr uintptr_t CrosshairTraceExtents = 0x0AC0;
		constexpr uintptr_t RotatedActor_Object = 0x0AD0;
		constexpr uintptr_t RotatedActor_Interface = 0x0AD8;
		constexpr uintptr_t FVector = 0x0AE0;
		constexpr uintptr_t FVector = 0x0AEC;
		constexpr uintptr_t RotateActorCameraSide = 0x0AF8;
		constexpr uintptr_t DesiredCameraSide = 0x0AFC;
		constexpr uintptr_t PawnTypeChangedTime = 0x0B00;
		constexpr uintptr_t SelectedSpawnArchetype = 0x0B04;
		constexpr uintptr_t FVehicleInputs = 0x0B08;
		constexpr uintptr_t MinClientInputRate = 0x0B28;
		constexpr uintptr_t MedianClientInputRate = 0x0B2C;
		constexpr uintptr_t MaxClientInputRate = 0x0B30;
		constexpr uintptr_t ConfiguredClientInputRate = 0x0B34;
		constexpr uintptr_t TimeSinceLastMovePacket = 0x0B38;
		constexpr uintptr_t TimeLastReplicatedMovePacket = 0x0B3C;
		constexpr uintptr_t PlatformMetrics = 0x0B40;
		constexpr uintptr_t MouseXDeadZone = 0x0B48;
		constexpr uintptr_t MouseYDeadZone = 0x0B4C;
		constexpr uintptr_t MouseXDeadZoneAir = 0x0B50;
		constexpr uintptr_t MouseYDeadZoneAir = 0x0B54;
		constexpr uintptr_t FVehicleInputs = 0x0B58;
		constexpr uintptr_t PendingViewPRI = 0x0B78;
		constexpr uintptr_t ConnectionTracker = 0x0B80;
		constexpr uintptr_t CameraSave = 0x0B88;
		constexpr uintptr_t EngineShare = 0x0B90;
		constexpr uintptr_t InputBuffer = 0x0B98;
		constexpr uintptr_t CrossplayConfig = 0x0BA0;
		constexpr uintptr_t FString = 0x0BA8;
		constexpr uintptr_t FString = 0x0BB8;
		constexpr uintptr_t FString = 0x0BC8;
		constexpr uintptr_t FVoiceRoomCredentials = 0x0BD8;
		constexpr uintptr_t EOSGameClipsControllerArchetype = 0x0C08;
		constexpr uintptr_t EOSGameClipsController = 0x0C10;
		constexpr uintptr_t FPrespawnData = 0x0C18;
		constexpr uintptr_t FreeplaySessionManager = 0x0C38;
		constexpr uintptr_t TargettedActor = 0x0C40;
		constexpr uintptr_t PickupButtonPressedSeconds = 0x0C48;
		constexpr uintptr_t PickupActivationBuffer = 0x0C4C;
	}

	namespace PlayerInputSequence_TA {
		constexpr uintptr_t Sequence = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t Timeout = 0x00F0;
		constexpr uintptr_t Bitfields_0x00F4 = 0x00F4;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t CurrentSequence = 0x0108;
	}

	namespace PlayerInput_Menu_TA {
		constexpr uintptr_t AllowedActions = 0x04C8;
	}

	namespace PlayerInput_TA {
		constexpr uintptr_t GamepadLookScale = 0x0478;
		constexpr uintptr_t aTargetSelect = 0x047C;
		constexpr uintptr_t TargetSelectDeadZone = 0x0480;
		constexpr uintptr_t Bitfields_0x0484 = 0x0484;
		constexpr uintptr_t aPositiveYaw = 0x0488;
		constexpr uintptr_t aNegativeYaw = 0x048C;
		constexpr uintptr_t aPositivePitch = 0x0490;
		constexpr uintptr_t aNegativePitch = 0x0494;
		constexpr uintptr_t aPositiveRoll = 0x0498;
		constexpr uintptr_t aNegativeRoll = 0x049C;
		constexpr uintptr_t aLookRoll = 0x04A0;
		constexpr uintptr_t bRoll = 0x04A4;
		constexpr uintptr_t bPitch = 0x04A5;
		constexpr uintptr_t aLookDown = 0x04A8;
		constexpr uintptr_t aTurnRight = 0x04AC;
		constexpr uintptr_t aTurnLeft = 0x04B0;
		constexpr uintptr_t aMouseForward = 0x04B4;
		constexpr uintptr_t aMouseStrafe = 0x04B8;
		constexpr uintptr_t aDodgeForward = 0x04BC;
		constexpr uintptr_t Profile = 0x04C0;
	}

	namespace PlayerItemDispenser_TA {
		constexpr uintptr_t ItemGiveRate = 0x0060;
		constexpr uintptr_t PreviewTimeSeconds = 0x0064;
		constexpr uintptr_t ItemPool = 0x0068;
		constexpr uintptr_t Bitfields_0x0070 = 0x0070;
		constexpr uintptr_t NextItemTime = 0x0074;
		constexpr uintptr_t NextItemPreviewTime = 0x0078;
		constexpr uintptr_t PRI = 0x0080;
	}

	namespace PlayerLegacyStatusSave_TA {
		constexpr uintptr_t LegacyStatus = 0x00C8;
		constexpr uintptr_t UnnamedMember_0x00CC = 0x00CC;
		constexpr uintptr_t OnlineProducts = 0x00D0;
	}

	namespace PlayerRemovedEvent_TA {
		constexpr uintptr_t Player = 0x0060;
	}

	namespace PlayerReportComponent_TA {
		constexpr uintptr_t ReportablePlayers = 0x00A0;
		constexpr uintptr_t ReportedPlayers = 0x00B0;
	}

	namespace PlayerReportConfig_TA {
		constexpr uintptr_t Reasons = 0x0078;
	}

	namespace PlayerSpawnConfig_TA {
		constexpr uintptr_t RespawnDelaySeconds = 0x0060;
	}

	namespace PlayerSpawnFeature_TA {
		constexpr uintptr_t RespawnDelaySeconds = 0x0060;
		constexpr uintptr_t GameEvent = 0x0068;
	}

	namespace PlayerSpawnTicket_TA {
		constexpr uintptr_t Controller = 0x0060;
		constexpr uintptr_t PRI = 0x0068;
		constexpr uintptr_t SecondsRemaining = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0074 = 0x0074;
		constexpr uintptr_t PrespawnSecondsRemaining = 0x0078;
	}

	namespace PlayerStart_Platform_TA {
		constexpr uintptr_t StaticMeshComponent = 0x0398;
		constexpr uintptr_t HideTime = 0x03A0;
		constexpr uintptr_t UnnamedMember_0x03A4 = 0x03A4;
	}

	namespace PlayerVanitySave_TA {
		constexpr uintptr_t FProductInstanceID = 0x00C8;
		constexpr uintptr_t ProductID = 0x00D8;
		constexpr uintptr_t SelectedColorValue = 0x00DC;
	}

	namespace PlayerVanity_TA {
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t ToPlayer = 0x0080;
		constexpr uintptr_t PaintableLayer = 0x0088;
		constexpr uintptr_t TintableLayer = 0x0090;
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t ColorID = 0x009C;
		constexpr uintptr_t FColor = 0x00A0;
		constexpr uintptr_t FColor = 0x00A4;
		constexpr uintptr_t FColor = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t ProductID = 0x00C0;
		constexpr uintptr_t FProductHashID = 0x00C4;
		constexpr uintptr_t FColor = 0x00C8;
		constexpr uintptr_t Attributes = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FUniqueNetId = 0x00F0;
		constexpr uintptr_t Profile = 0x0138;
		constexpr uintptr_t VanitySaveObject = 0x0140;
		constexpr uintptr_t VanityType = 0x0148;
	}

	namespace PlaylistSettings_TA {
		constexpr uintptr_t MapSkillRequirements = 0x0158;
		constexpr uintptr_t TourServerInfoClass = 0x0168;
		constexpr uintptr_t Bitfields_0x0170 = 0x0170;
		constexpr uintptr_t DetailsGroup = 0x0174;
		constexpr uintptr_t BackFillPolicy = 0x0178;
		constexpr uintptr_t TeamColors = 0x0180;
		constexpr uintptr_t FColorOverride = 0x0190;
		constexpr uintptr_t TeamNames = 0x01A8;
		constexpr uintptr_t LoadoutOverrides = 0x01B8;
	}

	namespace PlaylistSkillDataSave_TA {
		constexpr uintptr_t SkillData = 0x00C8;
	}

	namespace PointInSpace_TA {
		constexpr uintptr_t Sprite = 0x0268;
		constexpr uintptr_t Arrow = 0x0270;
	}

	namespace PostImpactModifier_TA {
		constexpr uintptr_t HitMat = 0x0060;
	}

	namespace PostMatchCelebrationPreviewer_TA {
		constexpr uintptr_t PreviewActor = 0x0070;
		constexpr uintptr_t PreviewAnims = 0x0078;
		constexpr uintptr_t PreviewAnimIdx = 0x0088;
	}

	namespace PostProcessManager_TA {
		constexpr uintptr_t PostProcessAAType = 0x00D0;
		constexpr uintptr_t DOF_DistanceLimit = 0x00D4;
		constexpr uintptr_t DOF_InnerRadiusLimit = 0x00D8;
		constexpr uintptr_t DOF_KernelDefault = 0x00DC;
		constexpr uintptr_t DOF_MaxFarDefault = 0x00E0;
		constexpr uintptr_t DOF_DistanceExtent = 0x00E4;
		constexpr uintptr_t UnnamedMember_0x00E8 = 0x00E8;
	}

	namespace PreMatchLobby_TA {
		constexpr uintptr_t SelectedFocus = 0x0060;
		constexpr uintptr_t HighlightedFocus = 0x0068;
		constexpr uintptr_t FVector = 0x0070;
	}

	namespace PremiumGaragePreviewSet_TA {
		constexpr uintptr_t PreviewActorIndices = 0x0060;
		constexpr uintptr_t CarPreviewActors = 0x0068;
		constexpr uintptr_t OnlineParty = 0x0078;
		constexpr uintptr_t CurrentCar = 0x0080;
		constexpr uintptr_t CurrentCarIdx = 0x0088;
		constexpr uintptr_t UnnamedMember_0x008C = 0x008C;
		constexpr uintptr_t QueuedSwapPack = 0x0090;
		constexpr uintptr_t QueuedSwapSubIdx = 0x0098;
	}

	namespace PremiumSkinSet_TA {
		constexpr uintptr_t Body = 0x0060;
		constexpr uintptr_t Skins = 0x0068;
	}

	namespace PremiumSkin_TA {
		constexpr uintptr_t MIC = 0x0060;
		constexpr uintptr_t Quality = 0x0068;
		constexpr uintptr_t SkinType = 0x0069;
		constexpr uintptr_t FMaterialParams = 0x0070;
		constexpr uintptr_t Thumbnail = 0x00A0;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t Attributes = 0x00B0;
		constexpr uintptr_t SkinSets = 0x00C0;
		constexpr uintptr_t AssetTemplate = 0x00D0;
		constexpr uintptr_t ProductTemplate = 0x00D8;
	}

	namespace PrespawnConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t MinRespawnDelayThreshold = 0x007C;
		constexpr uintptr_t PrespawnStateLength = 0x0080;
	}

	namespace PriAssetCache_TA {
		constexpr uintptr_t PRI = 0x0060;
		constexpr uintptr_t Products = 0x0068;
	}

	namespace PrivacyPolicyConfig_TA {
		constexpr uintptr_t Version = 0x0078;
		constexpr uintptr_t IgnoredHashIds = 0x0080;
	}

	namespace PrivacyPolicySave_TA {
		constexpr uintptr_t AcceptedPrivatePolicies = 0x00C8;
	}

	namespace PrivacyPolicy_TA {
		constexpr uintptr_t Config = 0x0090;
	}

	namespace PrivateMatchSettingsSave_TA {
		constexpr uintptr_t FString = 0x0158;
	}

	namespace ProductAssetCache_TA {
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t NewProductIDs = 0x0078;
		constexpr uintptr_t LoadedProductIDs = 0x0088;
		constexpr uintptr_t Assets = 0x0098;
	}

	namespace ProductAssetLoader_TA {
		constexpr uintptr_t Bitfields_0x0060 = 0x0060;
		constexpr uintptr_t LoadAssetQueue = 0x0068;
	}

	namespace ProductAssetReferenceBase_TA {
		constexpr uintptr_t ProductAsset = 0x0060;
		constexpr uintptr_t ProductID = 0x0068;
	}

	namespace ProductAssetReferenceBody_TA {
		constexpr uintptr_t BodyAsset = 0x0070;
	}

	namespace ProductAssetReferencePaintFinish_TA {
		constexpr uintptr_t PaintFinishAsset = 0x0070;
	}

	namespace ProductAssetReferenceSkin_TA {
		constexpr uintptr_t SkinAsset = 0x0070;
	}

	namespace ProductAssetReferenceWheel_TA {
		constexpr uintptr_t WheelAsset = 0x0070;
	}

	namespace ProductAssetReference_TA {
		constexpr uintptr_t Asset = 0x0070;
	}

	namespace ProductAsset_Attachment_TA {
		constexpr uintptr_t Attachments = 0x0100;
		constexpr uintptr_t FName = 0x0110;
	}

	namespace ProductAsset_Body_TA {
		constexpr uintptr_t Mesh = 0x0100;
		constexpr uintptr_t AnimTreeTemplate = 0x0108;
		constexpr uintptr_t AnimSets = 0x0110;
		constexpr uintptr_t PhysicsAsset = 0x0120;
		constexpr uintptr_t HandlingPreset = 0x0128;
		constexpr uintptr_t HandlingPresetZOffset = 0x0130;
		constexpr uintptr_t HandlingPresetXOffset = 0x0134;
		constexpr uintptr_t FVehicleAxleSettings = 0x0138;
		constexpr uintptr_t FVehicleAxleSettings = 0x0160;
		constexpr uintptr_t AdditionalAxles = 0x0188;
		constexpr uintptr_t SteerScale = 0x0198;
		constexpr uintptr_t FSimpleSpringSettings = 0x019C;
		constexpr uintptr_t ChassisRotationScale = 0x01EC;
		constexpr uintptr_t ChassisTranslationScale = 0x01F0;
		constexpr uintptr_t SuspensionTravelMax = 0x01F4;
		constexpr uintptr_t SuspensionTravelMin = 0x01F8;
		constexpr uintptr_t Bitfields_0x01FC = 0x01FC;
		constexpr uintptr_t EngineSound = 0x0200;
		constexpr uintptr_t ExhaustSound = 0x0208;
		constexpr uintptr_t BlowoffSound = 0x0210;
		constexpr uintptr_t EngineAudioProfile = 0x0218;
		constexpr uintptr_t EngineAudioAsset = 0x0220;
		constexpr uintptr_t EngineAudioAssets = 0x0228;
		constexpr uintptr_t EngineAudioProductID = 0x0238;
		constexpr uintptr_t EngineAudioReference = 0x0240;
		constexpr uintptr_t FXActor = 0x0248;
		constexpr uintptr_t SkinMaterialIndex = 0x0250;
		constexpr uintptr_t BrakelightMaterialIndex = 0x0254;
		constexpr uintptr_t ChassisMaterialIndex = 0x0258;
		constexpr uintptr_t BoostMaterialIndex = 0x025C;
		constexpr uintptr_t BoostEmitterSockets = 0x0260;
		constexpr uintptr_t BoostFlapsAngle = 0x0270;
		constexpr uintptr_t ForcedTeamColors = 0x0274;
		constexpr uintptr_t FLinearColor = 0x0294;
		constexpr uintptr_t FVector = 0x02A4;
		constexpr uintptr_t AdditionalUnlocks2 = 0x02B0;
		constexpr uintptr_t EquipProfile = 0x02C0;
		constexpr uintptr_t Attachments = 0x02C8;
		constexpr uintptr_t BoostParticleParameters = 0x02D8;
		constexpr uintptr_t SupersonicWheelTemplate = 0x02E8;
		constexpr uintptr_t DemolishFX = 0x02F0;
		constexpr uintptr_t SpawnFX = 0x02F8;
		constexpr uintptr_t ExitFX = 0x0300;
		constexpr uintptr_t WheelPreviewAnimTranslateScale = 0x0308;
		constexpr uintptr_t BoostAttachmentsToModify = 0x0310;
		constexpr uintptr_t FMaterialParams = 0x0320;
		constexpr uintptr_t ThumbnailWheelAsset = 0x0350;
		constexpr uintptr_t ThumbnailSkinAsset = 0x0358;
		constexpr uintptr_t ForcedThumbnailColors = 0x0360;
		constexpr uintptr_t LODDistanceInfo = 0x0368;
		constexpr uintptr_t MutatorArchetypes = 0x0378;
	}

	namespace ProductAsset_Boost_TA {
		constexpr uintptr_t FXActor = 0x0100;
		constexpr uintptr_t PaintedFXActor = 0x0108;
		constexpr uintptr_t PreviewFrontWheelSpinSpeed = 0x0110;
		constexpr uintptr_t PreviewBackWheelSpinSpeed = 0x0114;
	}

	namespace ProductAsset_Bot_TA {
		constexpr uintptr_t LoadoutProducts2 = 0x0100;
		constexpr uintptr_t BlueTeamColorID = 0x0110;
		constexpr uintptr_t OrangeTeamColorID = 0x0114;
		constexpr uintptr_t CustomColorID = 0x0118;
	}

	namespace ProductAsset_ESportsTeam_TA {
		constexpr uintptr_t FName = 0x0100;
		constexpr uintptr_t TeamLogo = 0x0108;
	}

	namespace ProductAsset_EngineAudio_TA {
		constexpr uintptr_t EngineSound = 0x0100;
		constexpr uintptr_t ExhaustSound = 0x0108;
		constexpr uintptr_t IgnitionSound = 0x0110;
		constexpr uintptr_t BlowoffSound = 0x0118;
		constexpr uintptr_t ThrottleEngageSound = 0x0120;
		constexpr uintptr_t ThrottleReleaseSound = 0x0128;
		constexpr uintptr_t GearChangeSound = 0x0130;
		constexpr uintptr_t Profile = 0x0138;
	}

	namespace ProductAsset_GoalExplosion_TA {
		constexpr uintptr_t GoalExplosionFX = 0x0100;
		constexpr uintptr_t PaintedGoalExplosionFX = 0x0108;
		constexpr uintptr_t ExplosionComponents = 0x0110;
		constexpr uintptr_t UnnamedMember_0x0120 = 0x0120;
		constexpr uintptr_t FIgnoredGoalRotations = 0x0124;
	}

	namespace ProductAsset_Logo_TA {
		constexpr uintptr_t Texture = 0x0100;
		constexpr uintptr_t FLinearColor = 0x0108;
		constexpr uintptr_t FLinearColor = 0x0118;
		constexpr uintptr_t Bots2 = 0x0128;
	}

	namespace ProductAsset_MusicStingers_TA {
		constexpr uintptr_t GoalScoredStinger = 0x0100;
		constexpr uintptr_t EpicSaveStinger = 0x0108;
		constexpr uintptr_t MVPAnthem = 0x0110;
		constexpr uintptr_t UnnamedMember_0x0118 = 0x0118;
	}

	namespace ProductAsset_PaintFinish_TA {
		constexpr uintptr_t LightCurveType = 0x0100;
		constexpr uintptr_t DetailNormal = 0x0108;
		constexpr uintptr_t SpecularTint = 0x0110;
		constexpr uintptr_t RimLightTint = 0x0114;
		constexpr uintptr_t DiffuseDetailNormalStrength = 0x0118;
		constexpr uintptr_t SpecularDetailNormalStrength = 0x011C;
		constexpr uintptr_t SpecularStrength = 0x0120;
		constexpr uintptr_t EnvironmentStrength = 0x0124;
		constexpr uintptr_t SparkleStrength = 0x0128;
		constexpr uintptr_t PearlescentStrength = 0x012C;
		constexpr uintptr_t TextureParameterValues = 0x0130;
		constexpr uintptr_t ScalarParameterValues = 0x0140;
		constexpr uintptr_t VectorParameterValues = 0x0150;
	}

	namespace ProductAsset_PlayerVanity_TA {
		constexpr uintptr_t MovieReference = 0x0100;
		constexpr uintptr_t ToPlayer = 0x0108;
		constexpr uintptr_t PaintableLayer = 0x0110;
		constexpr uintptr_t TintableLayer = 0x0118;
		constexpr uintptr_t FLinearColor = 0x0120;
	}

	namespace ProductAsset_ShopItem_TA {
		constexpr uintptr_t BackgroundImage = 0x0100;
		constexpr uintptr_t ItemLogo = 0x0108;
	}

	namespace ProductAsset_Skin_TA {
		constexpr uintptr_t Skin = 0x0100;
		constexpr uintptr_t BodySettings = 0x0108;
		constexpr uintptr_t BodyChassisOverrides = 0x0118;
		constexpr uintptr_t Attachments = 0x0128;
		constexpr uintptr_t SkinType = 0x0138;
		constexpr uintptr_t FLinearColor = 0x013C;
		constexpr uintptr_t FLinearColor = 0x014C;
		constexpr uintptr_t Bitfields_0x015C = 0x015C;
		constexpr uintptr_t FParameterInformation = 0x0160;
		constexpr uintptr_t FParameterInformation = 0x0198;
		constexpr uintptr_t ForcedTeamColors = 0x01D0;
		constexpr uintptr_t ForcedCustomColor = 0x01F0;
	}

	namespace ProductAsset_SupersonicTrail_TA {
		constexpr uintptr_t FXActor = 0x0100;
		constexpr uintptr_t LeftFXActor = 0x0108;
		constexpr uintptr_t RightFXActor = 0x0110;
		constexpr uintptr_t AkEnterSound = 0x0118;
		constexpr uintptr_t AkLoopSound = 0x0120;
	}

	namespace ProductAsset_TA {
		constexpr uintptr_t Product = 0x0060;
		constexpr uintptr_t Thumbnail = 0x0068;
		constexpr uintptr_t ThumbnailRenderer = 0x0070;
		constexpr uintptr_t ThumbnailMaterial = 0x0078;
		constexpr uintptr_t ThumbnailKeyLightBrightnessScale = 0x0080;
		constexpr uintptr_t FVector = 0x0084;
		constexpr uintptr_t FRotator = 0x0090;
		constexpr uintptr_t ThumbnailCameraFOV = 0x009C;
		constexpr uintptr_t FRotator = 0x00A0;
		constexpr uintptr_t FVector = 0x00AC;
		constexpr uintptr_t FVector = 0x00B8;
		constexpr uintptr_t ParticleWarmupTime = 0x00C4;
		constexpr uintptr_t AnimationWarmupTime = 0x00C8;
		constexpr uintptr_t FVector = 0x00CC;
		constexpr uintptr_t FVector = 0x00D8;
		constexpr uintptr_t Bitfields_0x00E4 = 0x00E4;
		constexpr uintptr_t PaintToTest = 0x00E8;
		constexpr uintptr_t Attributes = 0x00F0;
	}

	namespace ProductAsset_Wheel_TA {
		constexpr uintptr_t MeshRadius = 0x0100;
		constexpr uintptr_t MeshWidth = 0x0104;
		constexpr uintptr_t Generator = 0x0108;
		constexpr uintptr_t PrevGenerator = 0x0110;
		constexpr uintptr_t CustomWheelDriveSound = 0x0118;
		constexpr uintptr_t CustomWheelImpactSound = 0x0120;
		constexpr uintptr_t MirrorMode = 0x0128;
		constexpr uintptr_t StaticMesh = 0x0130;
		constexpr uintptr_t RearStaticMesh = 0x0138;
		constexpr uintptr_t SkeletalMesh = 0x0140;
		constexpr uintptr_t RearSkeletalMesh = 0x0148;
		constexpr uintptr_t AnimTree = 0x0150;
		constexpr uintptr_t LeftAnimTree = 0x0158;
		constexpr uintptr_t Behaviors = 0x0160;
		constexpr uintptr_t FWheelAttachment = 0x0170;
		constexpr uintptr_t Attachments = 0x01A0;
	}

	namespace ProductAttribute_AnimatedSkinLabel_TA {
		constexpr uintptr_t FString = 0x0080;
	}

	namespace ProductAttribute_BlueprintCost_TA {
		constexpr uintptr_t Cost = 0x0080;
	}

	namespace ProductAttribute_Blueprint_TA {
		constexpr uintptr_t ProductID = 0x0080;
		constexpr uintptr_t CachedBlueprintSeriesID = 0x0084;
	}

	namespace ProductAttribute_BodyCompatibility_TA {
		constexpr uintptr_t CompatibleBodies = 0x0080;
	}

	namespace ProductAttribute_Certified_TA {
		constexpr uintptr_t FName = 0x0080;
		constexpr uintptr_t CertifiedStat = 0x0088;
		constexpr uintptr_t StatId = 0x0090;
		constexpr uintptr_t StatValue = 0x0094;
	}

	namespace ProductAttribute_CompatibleProducts_TA {
		constexpr uintptr_t FPointer = 0x0080;
		constexpr uintptr_t CompatibleProducts = 0x0088;
	}

	namespace ProductAttribute_Container_TA {
		constexpr uintptr_t Bitfields_0x0080 = 0x0080;
	}

	namespace ProductAttribute_Currency_TA {
		constexpr uintptr_t CurrencyID = 0x0080;
	}

	namespace ProductAttribute_DisplayLabelSlot_TA {
		constexpr uintptr_t DisplayLabelSlot = 0x0080;
	}

	namespace ProductAttribute_EquippableSlot_TA {
		constexpr uintptr_t Slot = 0x0080;
	}

	namespace ProductAttribute_Expiration_TA {
		constexpr uintptr_t ExpirationTime = 0x0080;
	}

	namespace ProductAttribute_Indestructible_TA {
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace ProductAttribute_InheritCarSetting_TA {
		constexpr uintptr_t Parameters = 0x0080;
	}

	namespace ProductAttribute_Key_TA {
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace ProductAttribute_LevelSettings_TA {
		constexpr uintptr_t Levels = 0x0080;
	}

	namespace ProductAttribute_Level_TA {
		constexpr uintptr_t Level = 0x0080;
	}

	namespace ProductAttribute_LicenseGroup_TA {
		constexpr uintptr_t Group = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0084 = 0x0084;
	}

	namespace ProductAttribute_Licensed_TA {
		constexpr uintptr_t ReplacementProduct = 0x0080;
	}

	namespace ProductAttribute_MapProductAssetOverride_TA {
		constexpr uintptr_t MapSetsToUseDefaultProduct = 0x0060;
		constexpr uintptr_t GameTypesToUseDefaultProduct = 0x0070;
	}

	namespace ProductAttribute_ModifyTransformationPerBody_TA {
		constexpr uintptr_t FVector = 0x0080;
		constexpr uintptr_t FRotator = 0x008C;
		constexpr uintptr_t FVector = 0x0098;
		constexpr uintptr_t BodiesToApplyTo = 0x00A8;
	}

	namespace ProductAttribute_PaintSettingsUpload_TA {
		constexpr uintptr_t ExcludePaints = 0x0080;
		constexpr uintptr_t ShopExclusivePaints = 0x0090;
	}

	namespace ProductAttribute_PaintSettings_TA {
		constexpr uintptr_t MaterialGroups = 0x0060;
		constexpr uintptr_t Bitfields_0x0080 = 0x0080;
		constexpr uintptr_t FName = 0x0084;
		constexpr uintptr_t PaintType = 0x008C;
		constexpr uintptr_t PaintAdditionalParameters = 0x0090;
		constexpr uintptr_t PaintEmissiveMultiplier = 0x00A0;
		constexpr uintptr_t PaintableMaterials = 0x00A8;
		constexpr uintptr_t PaintableMaterialsMetallic = 0x00B8;
		constexpr uintptr_t IncludePaints = 0x00C8;
		constexpr uintptr_t ExcludePaints = 0x00D8;
		constexpr uintptr_t UnsupportedPaints = 0x00E8;
		constexpr uintptr_t ShopExclusivePaints = 0x00F8;
		constexpr uintptr_t PaintsToOverride = 0x0108;
	}

	namespace ProductAttribute_Painted_TA {
		constexpr uintptr_t PaintID = 0x0080;
	}

	namespace ProductAttribute_PlatformExclusive_TA {
		constexpr uintptr_t InclusiveConsoles = 0x0080;
		constexpr uintptr_t ReplacementProduct = 0x0090;
	}

	namespace ProductAttribute_PreviewWheelSpin_TA {
		constexpr uintptr_t PreviewFrontWheelSpinSpeed = 0x0080;
		constexpr uintptr_t PreviewBackWheelSpinSpeed = 0x0084;
	}

	namespace ProductAttribute_ProductLink_TA {
		constexpr uintptr_t ProductID = 0x0080;
	}

	namespace ProductAttribute_QualityProductDBOverride_TA {
		constexpr uintptr_t QualityOverride = 0x0080;
	}

	namespace ProductAttribute_Quality_TA {
		constexpr uintptr_t Quality = 0x0080;
	}

	namespace ProductAttribute_Reactive_TA {
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0090 = 0x0090;
	}

	namespace ProductAttribute_RelatedRequiredProduct_TA {
		constexpr uintptr_t RelatedRequiredProduct = 0x0080;
	}

	namespace ProductAttribute_Rental_TA {
		constexpr uintptr_t RentalLength = 0x0080;
	}

	namespace ProductAttribute_RequiresOwnedProduct_TA {
		constexpr uintptr_t Products = 0x0080;
	}

	namespace ProductAttribute_SetPreviewObjectSpeedShaderParam_TA {
		constexpr uintptr_t PreviewSpeedToUse = 0x0080;
	}

	namespace ProductAttribute_ShopItem_TA {
		constexpr uintptr_t ShopItemReference = 0x0080;
	}

	namespace ProductAttribute_SortingLabel_TA {
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t MaxReplacementSize = 0x00C0;
	}

	namespace ProductAttribute_SpecialEditionLabel_TA {
		constexpr uintptr_t SpecialEdition = 0x0080;
		constexpr uintptr_t FString = 0x0088;
	}

	namespace ProductAttribute_SpecialEditionSettings_TA {
		constexpr uintptr_t Editions = 0x0080;
		constexpr uintptr_t SupportedEditions = 0x0090;
	}

	namespace ProductAttribute_SpecialEdition_TA {
		constexpr uintptr_t EditionID = 0x0080;
	}

	namespace ProductAttribute_SwapMICParameterValues_TA {
		constexpr uintptr_t Parameters = 0x0080;
	}

	namespace ProductAttribute_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace ProductAttribute_TeamEditionUpload_TA {
		constexpr uintptr_t SupportedTeamEditions = 0x0080;
	}

	namespace ProductAttribute_TeamEdition_TA {
		constexpr uintptr_t Id = 0x0080;
	}

	namespace ProductAttribute_TeamForcedProduct_TA {
		constexpr uintptr_t Teams = 0x0080;
	}

	namespace ProductAttribute_TeamOverride_TA {
		constexpr uintptr_t Team = 0x0080;
		constexpr uintptr_t FName = 0x0084;
	}

	namespace ProductAttribute_TeamParameterOverride_TA {
		constexpr uintptr_t Team = 0x0080;
	}

	namespace ProductAttribute_Tiered_TA {
		constexpr uintptr_t TierIndex = 0x0080;
	}

	namespace ProductAttribute_TitleID_TA {
		constexpr uintptr_t FName = 0x0080;
	}

	namespace ProductAttribute_Trademark_TA {
		constexpr uintptr_t Glyph = 0x0080;
	}

	namespace ProductAttribute_UnlockForcedProducts_TA {
		constexpr uintptr_t Bitfields_0x0080 = 0x0080;
		constexpr uintptr_t SlotsToUnlock = 0x0088;
	}

	namespace ProductAttribute_UnlockMethod_TA {
		constexpr uintptr_t UnlockMethod = 0x0080;
	}

	namespace ProductAttribute_UserColor_TA {
		constexpr uintptr_t FColor = 0x0080;
	}

	namespace ProductAttribute_UserColorable_TA {
		constexpr uintptr_t FLinearColor = 0x0080;
	}

	namespace ProductBuilder_TA {
		constexpr uintptr_t ProductIndex = 0x0060;
	}

	namespace ProductDatabase_Builder_TA {
		constexpr uintptr_t Bitfields_0x0060 = 0x0060;
	}

	namespace ProductDatabase_TA {
		constexpr uintptr_t Products_New = 0x0060;
		constexpr uintptr_t Products_Pristine = 0x0070;
		constexpr uintptr_t DLCPacks = 0x0080;
		constexpr uintptr_t DLCPacks_Pristine = 0x0090;
		constexpr uintptr_t AlwaysLoadedAssets = 0x00A0;
		constexpr uintptr_t BodyToEngineAudioMap = 0x00B0;
		constexpr uintptr_t BodyToEngineAudioMap_Pristine = 0x00C0;
		constexpr uintptr_t FGarageFolderData = 0x00D0;
		constexpr uintptr_t FMap_Mirror = 0x0130;
		constexpr uintptr_t FMap_Mirror = 0x0180;
		constexpr uintptr_t FMap_Mirror = 0x01D0;
		constexpr uintptr_t TemporaryProducts = 0x0220;
		constexpr uintptr_t UnnamedMember_0x0230 = 0x0230;
	}

	namespace ProductEquipProfileSlot_Custom_TA {
		constexpr uintptr_t SlotCustomization = 0x0060;
		constexpr uintptr_t WhitelistProducts = 0x0068;
		constexpr uintptr_t BlacklistProducts = 0x0078;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
	}

	namespace ProductEquipProfileSlot_ForcedProduct_TA {
		constexpr uintptr_t ForcedProduct = 0x0060;
	}

	namespace ProductEquipProfile_TA {
		constexpr uintptr_t Skin = 0x0060;
		constexpr uintptr_t Wheel = 0x0068;
		constexpr uintptr_t Boost = 0x0070;
		constexpr uintptr_t Antenna = 0x0078;
		constexpr uintptr_t Hat = 0x0080;
		constexpr uintptr_t PaintFinish = 0x0088;
		constexpr uintptr_t CustomFinish = 0x0090;
		constexpr uintptr_t EngineAudio = 0x0098;
		constexpr uintptr_t SupersonicTrail = 0x00A0;
		constexpr uintptr_t GoalExplosion = 0x00A8;
		constexpr uintptr_t PostMatchCelebration = 0x00B0;
		constexpr uintptr_t LicenseWhitelist = 0x00B8;
		constexpr uintptr_t LicenseBlacklist = 0x00C8;
		constexpr uintptr_t UnnamedMember_0x00D8 = 0x00D8;
		constexpr uintptr_t AllSlots = 0x00E0;
	}

	namespace ProductExpirationNotification_TA {
		constexpr uintptr_t FProductHashID = 0x0170;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t OnlineProduct = 0x0198;
	}

	namespace ProductLoader_TA {
		constexpr uintptr_t RemainingProducts = 0x0070;
		constexpr uintptr_t Assets = 0x0080;
	}

	namespace ProductOverride_DisableSkelControl_TA {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace ProductOverride_MaterialParameter_TA {
		constexpr uintptr_t CopyFromMIC = 0x0060;
		constexpr uintptr_t FName = 0x0068;
		constexpr uintptr_t FontParameterValues = 0x0070;
		constexpr uintptr_t ScalarParameterValues = 0x0080;
		constexpr uintptr_t TextureParameterValues = 0x0090;
		constexpr uintptr_t VectorParameterValues = 0x00A0;
	}

	namespace ProductOverride_Materials_TA {
		constexpr uintptr_t Materials = 0x0060;
	}

	namespace ProductOverride_ParticleSystemColorParameter_TA {
		constexpr uintptr_t ParameterOverrides = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t PaintEmissiveMultiplier = 0x0074;
	}

	namespace ProductOverride_ParticleSystemComponent_TA {
		constexpr uintptr_t ParticleSystem = 0x0060;
	}

	namespace ProductOverride_ParticleSystemFloatParameter_TA {
		constexpr uintptr_t ParameterOverrides = 0x0060;
		constexpr uintptr_t FFloatParamPair = 0x0070;
	}

	namespace ProductOverride_ParticleSystemNameParameter_TA {
		constexpr uintptr_t ParameterOverrides = 0x0060;
		constexpr uintptr_t FNameParamPair = 0x0070;
	}

	namespace ProductOverride_ParticleSystemVectorParameter_TA {
		constexpr uintptr_t ParameterOverrides = 0x0060;
		constexpr uintptr_t FVectorParamPair = 0x0070;
	}

	namespace ProductOverride_SkeletalMesh_TA {
		constexpr uintptr_t Mesh = 0x0060;
	}

	namespace ProductOverride_SpecificMaterials_TA {
		constexpr uintptr_t MaterialOverrides = 0x0060;
	}

	namespace ProductOverride_StaticMesh_TA {
		constexpr uintptr_t Mesh = 0x0060;
	}

	namespace ProductOverride_StopAttachmentBehaviors_TA {
		constexpr uintptr_t BehaviorsToZeroOut = 0x0060;
	}

	namespace ProductOverride_WheelAttachment_TA {
		constexpr uintptr_t AttachmentsToOverride = 0x0060;
	}

	namespace ProductOverride_WheelOverrides_TA {
		constexpr uintptr_t WheelsToChange = 0x0060;
		constexpr uintptr_t OverridesToApply = 0x0070;
	}

	namespace ProductPaint_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t Colors = 0x0070;
		constexpr uintptr_t FinishType = 0x0130;
		constexpr uintptr_t EmissiveAmount = 0x0134;
		constexpr uintptr_t FName = 0x0138;
		constexpr uintptr_t Bitfields_0x0140 = 0x0140;
	}

	namespace ProductSlot_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t SlotIndex = 0x00A0;
		constexpr uintptr_t DefaultProduct_New = 0x00A8;
		constexpr uintptr_t ProductTemplate = 0x00B0;
		constexpr uintptr_t ProductAssetTemplate = 0x00B8;
		constexpr uintptr_t Icon = 0x00C0;
		constexpr uintptr_t IconLarge = 0x00C8;
		constexpr uintptr_t Bitfields_0x00D0 = 0x00D0;
		constexpr uintptr_t DropWeight = 0x00D4;
	}

	namespace ProductSpecialEdition_TA {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace ProductStat_BoostTime_TA {
		constexpr uintptr_t BoostComponent = 0x00B0;
		constexpr uintptr_t BoostStartTime = 0x00B8;
		constexpr uintptr_t LeftoverTime = 0x00BC;
	}

	namespace ProductStat_DistanceDriven_TA {
		constexpr uintptr_t FVector = 0x00B0;
	}

	namespace ProductStat_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t PRI = 0x0080;
		constexpr uintptr_t ProductID = 0x0088;
		constexpr uintptr_t Car = 0x0090;
		constexpr uintptr_t GameEvent = 0x0098;
		constexpr uintptr_t SoccarGame = 0x00A0;
		constexpr uintptr_t Value = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00AC = 0x00AC;
	}

	namespace ProductTemplate_TA {
		constexpr uintptr_t Slot = 0x0060;
		constexpr uintptr_t UnlockMethod = 0x0068;
		constexpr uintptr_t Quality = 0x0069;
		constexpr uintptr_t BaseXEStatus = 0x006A;
		constexpr uintptr_t Folder = 0x0070;
		constexpr uintptr_t DLC = 0x0078;
		constexpr uintptr_t StatClass = 0x0080;
		constexpr uintptr_t RequiredProduct = 0x0088;
		constexpr uintptr_t ProductIP = 0x0090;
		constexpr uintptr_t AllowedList = 0x00A0;
		constexpr uintptr_t Bitfields_0x00B0 = 0x00B0;
		constexpr uintptr_t IPWhitelist = 0x00B8;
		constexpr uintptr_t IPBlacklist = 0x00C8;
		constexpr uintptr_t FProductReplacement2 = 0x00D8;
		constexpr uintptr_t PlatformExclusive = 0x00F0;
		constexpr uintptr_t TradeRestrictions = 0x0100;
		constexpr uintptr_t Attributes = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t SortPriority = 0x0130;
	}

	namespace ProductThumbnailAsset_Blueprint_TA {
		constexpr uintptr_t RevealedThumbnail = 0x0078;
	}

	namespace ProductThumbnailAsset_TA {
		constexpr uintptr_t Thumbnail = 0x0060;
		constexpr uintptr_t ColorMaskBackground = 0x0068;
		constexpr uintptr_t ThumbnailColorMask = 0x0070;
	}

	namespace ProductThumbnailQueue_TA {
		constexpr uintptr_t FPointer = 0x0060;
		constexpr uintptr_t ThumbnailSizes = 0x0068;
		constexpr uintptr_t RenderDelay = 0x0078;
		constexpr uintptr_t RenderCountMax = 0x007C;
		constexpr uintptr_t Bitfields_0x0080 = 0x0080;
		constexpr uintptr_t SceneQue = 0x0088;
		constexpr uintptr_t Requests = 0x0098;
		constexpr uintptr_t ThumbnailsCreatedSinceLastPurge = 0x00A8;
	}

	namespace ProductThumbnail_TA {
		constexpr uintptr_t Texture = 0x0060;
		constexpr uintptr_t RenderTarget = 0x0068;
		constexpr uintptr_t RenderCount = 0x0070;
		constexpr uintptr_t FDouble = 0x0078;
	}

	namespace ProductTransactions_TA {
		constexpr uintptr_t InventoryProductSet = 0x0070;
		constexpr uintptr_t TransactionProductSet = 0x0078;
	}

	namespace Product_TA {
		constexpr uintptr_t FName = 0x0138;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t Bitfields_0x0150 = 0x0150;
		constexpr uintptr_t FString = 0x0158;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
	}

	namespace ProductsArchiveSave_TA {
		constexpr uintptr_t ArchivedHashIDs = 0x0110;
	}

	namespace ProductsConfig_TA {
		constexpr uintptr_t ProhibitedProducts = 0x0078;
		constexpr uintptr_t ItemSeries_PreventP2PTrade = 0x0088;
		constexpr uintptr_t ProductTradeHoldOverrides = 0x0098;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t MaxSecondsBetweenFullProductSyncs = 0x00AC;
	}

	namespace ProductsFavoriteSave_TA {
		constexpr uintptr_t FavoritedHashes = 0x0110;
	}

	namespace ProductsHashSave_TA {
		constexpr uintptr_t HashIDs = 0x00C8;
		constexpr uintptr_t InstanceIDs = 0x00D8;
		constexpr uintptr_t InstanceIDs128 = 0x00E8;
	}

	namespace ProductsSave_TA {
		constexpr uintptr_t OnlineProductInstanceIds = 0x00C8;
		constexpr uintptr_t NewProductIDs = 0x00D8;
		constexpr uintptr_t UnseenContainerProducts = 0x00E8;
		constexpr uintptr_t LastUnlockDisplayId = 0x00F8;
		constexpr uintptr_t OnlineProductInstanceIDs128 = 0x0100;
		constexpr uintptr_t NewProductIDs128 = 0x0110;
		constexpr uintptr_t UnseenContainerProducts128 = 0x0120;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t PreviousKeyCount = 0x0140;
		constexpr uintptr_t PreviousDecryptorCount = 0x0144;
		constexpr uintptr_t UnnamedMember_0x0148 = 0x0148;
	}

	namespace ProfileCameraSave_TA {
		constexpr uintptr_t FProfileAutoCamSettings = 0x00C8;
		constexpr uintptr_t FProfileCameraSettings = 0x00F0;
		constexpr uintptr_t Bitfields_0x010C = 0x010C;
		constexpr uintptr_t CameraSettingsPreset = 0x0110;
		constexpr uintptr_t DirectorMinChangeTeamFocusTime = 0x0114;
		constexpr uintptr_t DirectorMinSameTeamFocusTime = 0x0118;
		constexpr uintptr_t MaxProximityDistance = 0x011C;
		constexpr uintptr_t PrespawnLerpSpeed = 0x0120;
	}

	namespace ProfileControlsSave_TA {
		constexpr uintptr_t WaveformScalar = 0x00C8;
		constexpr uintptr_t ForceFeedbackType = 0x00CC;
		constexpr uintptr_t ForceFeedbackMode = 0x00CD;
		constexpr uintptr_t TargetCamSwivelMode = 0x00CE;
		constexpr uintptr_t LegacyForceFeedbackScales = 0x00D0;
		constexpr uintptr_t ForceFeedbackScale = 0x00E8;
		constexpr uintptr_t UnnamedMember_0x00EC = 0x00EC;
		constexpr uintptr_t FName = 0x00F0;
	}

	namespace ProfileGamepadSave_TA {
		constexpr uintptr_t GamepadBindings = 0x00C8;
		constexpr uintptr_t ControllerDeadzone = 0x00D8;
		constexpr uintptr_t DodgeInputThreshold = 0x00DC;
		constexpr uintptr_t SteeringSensitivity = 0x00E0;
		constexpr uintptr_t AirControlSensitivity = 0x00E4;
	}

	namespace ProfileGameplaySave_TA {
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t HUDMessageThreshold = 0x00CC;
		constexpr uintptr_t RankInfoDisplayType = 0x00CD;
		constexpr uintptr_t NameplateMode = 0x00CE;
	}

	namespace ProfileLoadoutSave_TA {
		constexpr uintptr_t LoadoutSets = 0x00C8;
		constexpr uintptr_t EquippedLoadoutSet = 0x00D8;
		constexpr uintptr_t FName = 0x00E0;
		constexpr uintptr_t PreviewTeamIndex = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x00F0;
	}

	namespace ProfilePCSave_TA {
		constexpr uintptr_t PCBindings = 0x00C8;
		constexpr uintptr_t MouseSensitivity = 0x00D8;
		constexpr uintptr_t MouseXDeadZone = 0x00DC;
		constexpr uintptr_t MouseYDeadZone = 0x00E0;
		constexpr uintptr_t MouseXDeadZoneAir = 0x00E4;
		constexpr uintptr_t MouseYDeadZoneAir = 0x00E8;
		constexpr uintptr_t KeyboardAxisBlendTime = 0x00EC;
		constexpr uintptr_t UnnamedMember_0x00F0 = 0x00F0;
	}

	namespace ProfileQuickChatSave_TA {
		constexpr uintptr_t QuickChatBindings = 0x00C8;
	}

	namespace ProfileStatsSave_TA {
		constexpr uintptr_t StatValues = 0x00C8;
		constexpr uintptr_t ProductStats = 0x00D8;
	}

	namespace Profile_TA {
		constexpr uintptr_t LocalId = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t SaveData = 0x0078;
		constexpr uintptr_t ControllerId = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0084 = 0x0084;
		constexpr uintptr_t ProfileVersion = 0x0088;
		constexpr uintptr_t EditLoadoutSetIndex = 0x008C;
		constexpr uintptr_t SaveObjectProvider = 0x0090;
		constexpr uintptr_t SaveObjects = 0x0098;
		constexpr uintptr_t LoadoutSave = 0x00A8;
	}

	namespace PsyNetService_AutoTourCompletedResultReceived_TA {
		constexpr uintptr_t FTournamentEndData = 0x0090;
	}

	namespace PsyNetService_AutoTourFound_TA {
		constexpr uintptr_t Tournament = 0x0090;
		constexpr uintptr_t FTourTeam = 0x0098;
	}

	namespace PsyNetService_AutoTourReceiveBan_TA {
		constexpr uintptr_t AutoTournamentBanSeconds = 0x0090;
		constexpr uintptr_t MatchmakingBanSeconds = 0x0094;
	}

	namespace PsyNetService_AutoTourReceiveBannedPartyMembers_TA {
		constexpr uintptr_t BannedTeamMembers = 0x0090;
	}

	namespace PsyNetService_ChallengeDefault_TA {
		constexpr uintptr_t Folders = 0x0090;
		constexpr uintptr_t Challenges = 0x00A0;
		constexpr uintptr_t ChallengeIDsToRemove = 0x00B0;
	}

	namespace PsyNetService_ChallengeProgress_TA {
		constexpr uintptr_t Challenges = 0x0090;
	}

	namespace PsyNetService_ClubsRewardsReceived_TA {
		constexpr uintptr_t Badges = 0x0090;
		constexpr uintptr_t Titles = 0x00A0;
	}

	namespace PsyNetService_ClubsUpdate_TA {
		constexpr uintptr_t ClubDetails = 0x0090;
	}

	namespace PsyNetService_CreateExternalMatch_X {
		constexpr uintptr_t Playlist = 0x00B0;
		constexpr uintptr_t FTourServerSettings = 0x00B8;
		constexpr uintptr_t FFaceItReservationMatchInfo = 0x01A0;
	}

	namespace PsyNetService_CreateTournament_X {
		constexpr uintptr_t Playlist = 0x00B0;
		constexpr uintptr_t FTourServerSettings = 0x00B8;
	}

	namespace PsyNetService_CurrencyAdded_TA {
		constexpr uintptr_t CurrencyID = 0x0090;
		constexpr uintptr_t Amount = 0x0094;
	}

	namespace PsyNetService_FaceItMatchCancelled_TA {
		constexpr uintptr_t MatchID = 0x0090;
	}

	namespace PsyNetService_FaceItMatchComplete_TA {
		constexpr uintptr_t MatchID = 0x0090;
	}

	namespace PsyNetService_FaceItReservationFound_TA {
		constexpr uintptr_t FCheckReservationResponse = 0x0090;
		constexpr uintptr_t FFaceItMatchInfo = 0x0110;
	}

	namespace PsyNetService_FaceItSearchStarted_TA {
		constexpr uintptr_t PartnerID = 0x0090;
	}

	namespace PsyNetService_RewardDropReceived_TA {
		constexpr uintptr_t FRocketPassInfo = 0x0090;
		constexpr uintptr_t ProductData = 0x00A0;
		constexpr uintptr_t RewardDrops = 0x00B0;
		constexpr uintptr_t ChallengeRewards = 0x00C0;
		constexpr uintptr_t CurrencyDrops = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
	}

	namespace PsyNetService_TourKicked_TA {
		constexpr uintptr_t TournamentID = 0x0090;
		constexpr uintptr_t Reason = 0x0098;
	}

	namespace PsyNetService_TourMatchFound_TA {
		constexpr uintptr_t FTourMatch = 0x0090;
	}

	namespace PsyNetService_TourReceivedBye_TA {
		constexpr uintptr_t TournamentID = 0x0090;
	}

	namespace PsyNetService_VoiceChatMatchToken_TA {
		constexpr uintptr_t FUniqueNetId = 0x0090;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
	}

	namespace Pylon_Soccar_TA {
		constexpr uintptr_t FRotator = 0x04A8;
		constexpr uintptr_t FVector = 0x04B4;
		constexpr uintptr_t FVector = 0x04C0;
		constexpr uintptr_t FVector = 0x04CC;
		constexpr uintptr_t Goals = 0x04D8;
		constexpr uintptr_t SpawnPoints = 0x04E8;
		constexpr uintptr_t GroundZ = 0x04F8;
		constexpr uintptr_t FVector = 0x04FC;
		constexpr uintptr_t PodiumSpotlightZ = 0x0508;
		constexpr uintptr_t UnnamedMember_0x050C = 0x050C;
	}

	namespace QuickChatTracker_TA {
		constexpr uintptr_t FMap_Mirror = 0x00A0;
	}

	namespace RBActor_TA {
		constexpr uintptr_t FPointer = 0x0558;
		constexpr uintptr_t MaxLinearSpeed = 0x0560;
		constexpr uintptr_t MaxAngularSpeed = 0x0564;
		constexpr uintptr_t RollingFriction = 0x0568;
		constexpr uintptr_t Bitfields_0x056C = 0x056C;
		constexpr uintptr_t FNetworkSyncSettingsData = 0x0570;
		constexpr uintptr_t FReplicatedRBState = 0x0590;
		constexpr uintptr_t FReplicatedRBState = 0x05D0;
		constexpr uintptr_t FReplicatedRBState = 0x0610;
		constexpr uintptr_t FReplicatedRBState = 0x0650;
		constexpr uintptr_t FWorldContactData = 0x0690;
		constexpr uintptr_t FVector = 0x06B8;
		constexpr uintptr_t SyncErrorAngle = 0x06C4;
		constexpr uintptr_t FVector = 0x06C8;
		constexpr uintptr_t Ak = 0x06D8;
		constexpr uintptr_t FXActorArchetype = 0x06E0;
		constexpr uintptr_t FXActor = 0x06E8;
		constexpr uintptr_t ImpactEffectsComponent = 0x06F0;
		constexpr uintptr_t RBCollisions = 0x06F8;
		constexpr uintptr_t RBHistoryClass = 0x0708;
		constexpr uintptr_t RBHistory = 0x0710;
		constexpr uintptr_t LastRBCollisionsFrame = 0x0718;
		constexpr uintptr_t Replay = 0x0720;
		constexpr uintptr_t FWeldingInfo = 0x0728;
		constexpr uintptr_t WeldedActor = 0x0750;
		constexpr uintptr_t WeldedTo = 0x0758;
		constexpr uintptr_t PreWeldMass = 0x0760;
		constexpr uintptr_t ReplicatedGravityScale = 0x0764;
		constexpr uintptr_t ReplicatedCollisionScale = 0x0768;
		constexpr uintptr_t FPointer = 0x0770;
		constexpr uintptr_t FPointer = 0x0778;
		constexpr uintptr_t PhysicsConfig = 0x0780;
		constexpr uintptr_t TeleportCounter = 0x0788;
	}

	namespace RBHistory_TA {
		constexpr uintptr_t FrameSnapshots = 0x0070;
		constexpr uintptr_t ServerSnapshots = 0x0080;
		constexpr uintptr_t RBPhysicsSnapshots = 0x0090;
	}

	namespace RBVehicleHistory_TA {
		constexpr uintptr_t InputFadeTime = 0x00A0;
		constexpr uintptr_t RBVehicleSnapshots = 0x00A8;
		constexpr uintptr_t ComponentHistories = 0x00B8;
		constexpr uintptr_t FVehicleInputs = 0x00C8;
	}

	namespace RLBot_SessionRecorder_TA {
		constexpr uintptr_t MaxRecordSizeMB = 0x0268;
		constexpr uintptr_t Data = 0x0270;
		constexpr uintptr_t FPointer = 0x0280;
		constexpr uintptr_t PlayerActorIDMap = 0x0288;
	}

	namespace RLBot_Util_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t PacketSendRate = 0x0080;
		constexpr uintptr_t UnnamedMember_0x0084 = 0x0084;
	}

	namespace RPC_AdsGet_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t Ads = 0x00F8;
	}

	namespace RPC_AutoTour_GetCompletedResult_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t FTournamentEndData = 0x0138;
	}

	namespace RPC_AutoTour_GetCycleData_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t CycleID = 0x0130;
		constexpr uintptr_t CycleEndTime = 0x0138;
		constexpr uintptr_t WeekID = 0x0140;
		constexpr uintptr_t WeekEndTime = 0x0148;
		constexpr uintptr_t WeeklyCurrencies = 0x0150;
		constexpr uintptr_t Weeks = 0x0160;
		constexpr uintptr_t MaxTierScores = 0x0170;
		constexpr uintptr_t TournamentCurrencyID = 0x0180;
	}

	namespace RPC_AutoTour_GetSchedule_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t Schedules = 0x0140;
	}

	namespace RPC_BanSelf_TA {
		constexpr uintptr_t DurationSeconds = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
	}

	namespace RPC_BuildBlueprint_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t ExpectedPrice = 0x0140;
		constexpr uintptr_t FOnlineProductData = 0x0148;
		constexpr uintptr_t WalletCurrencies = 0x0188;
	}

	namespace RPC_Challenge_AvailableReceived_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Id = 0x0130;
	}

	namespace RPC_Challenge_ClearNewInfo_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t ChallengeIDs = 0x0130;
	}

	namespace RPC_Challenge_CompleteReceived_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Id = 0x0130;
	}

	namespace RPC_Challenge_FTECheckpointComplete_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FName = 0x0130;
		constexpr uintptr_t FName = 0x0138;
	}

	namespace RPC_Challenge_FTEGroupComplete_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FName = 0x0130;
	}

	namespace RPC_Challenge_RequestReward_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Id = 0x0130;
	}

	namespace RPC_Challenge_ResetAllProgress_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
	}

	namespace RPC_Challenge_ResetChallengeProgress_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t ChallengeID = 0x0130;
	}

	namespace RPC_Challenge_SetProgress_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t ChallengeID = 0x0130;
		constexpr uintptr_t Count = 0x0134;
	}

	namespace RPC_Challenge_TrainingComplete_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t Score = 0x0150;
		constexpr uintptr_t TotalRounds = 0x0154;
	}

	namespace RPC_Challenge_TutorialComplete_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FString = 0x0130;
	}

	namespace RPC_ChatLog_TA {
		constexpr uintptr_t Messages = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
	}

	namespace RPC_DebugAddXP_TA {
		constexpr uintptr_t XPToAdd = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x00F0;
		constexpr uintptr_t FXPInfo = 0x0138;
	}

	namespace RPC_DebugSetXP_TA {
		constexpr uintptr_t XPToSet = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x00F0;
		constexpr uintptr_t FXPInfo = 0x0138;
	}

	namespace RPC_DebugUpdateClubStats_TA {
		constexpr uintptr_t ClubID = 0x00E8;
		constexpr uintptr_t Goal = 0x00F0;
		constexpr uintptr_t Save = 0x00F4;
		constexpr uintptr_t Assist = 0x00F8;
	}

	namespace RPC_FaceItFindMatchForPlayer_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
	}

	namespace RPC_FaceItMatchStarted_TA {
		constexpr uintptr_t MatchID = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t SeriesRoundNumber = 0x0110;
		constexpr uintptr_t Players = 0x0118;
	}

	namespace RPC_FaceItPlayerFailedJoin_TA {
		constexpr uintptr_t MatchID = 0x00E8;
		constexpr uintptr_t FailedJoinServerID = 0x00EC;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FServerReservationData = 0x0100;
		constexpr uintptr_t FFaceItMatchInfo = 0x0170;
		constexpr uintptr_t Expiration = 0x01F0;
	}

	namespace RPC_FaceItUpdateGame_TA {
		constexpr uintptr_t MatchID = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t SeriesRoundNumber = 0x0100;
		constexpr uintptr_t FTourMatchGame = 0x0108;
		constexpr uintptr_t SeriesWinner = 0x0120;
		constexpr uintptr_t PlayersStats = 0x0128;
		constexpr uintptr_t PlayersNoShow = 0x0138;
		constexpr uintptr_t PlayersLeftEarly = 0x0148;
	}

	namespace RPC_GetActivePlaylists_TA {
		constexpr uintptr_t CasualPlaylists = 0x00E8;
		constexpr uintptr_t RankedPlaylists = 0x00F8;
		constexpr uintptr_t XPLevelUnlocked = 0x0108;
		constexpr uintptr_t FRankedUnlockCondition = 0x0110;
	}

	namespace RPC_GetAllShops_TA {
		constexpr uintptr_t Shops = 0x00E8;
	}

	namespace RPC_GetBanStatus_TA {
		constexpr uintptr_t Players = 0x00E8;
		constexpr uintptr_t BanMessages = 0x00F8;
	}

	namespace RPC_GetChallengeDefault_TA {
		constexpr uintptr_t Challenges = 0x00E8;
		constexpr uintptr_t Folders = 0x00F8;
	}

	namespace RPC_GetChallengeProgress_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t ChallengeIDs = 0x0130;
		constexpr uintptr_t ProgressData = 0x0140;
	}

	namespace RPC_GetCrateShop_TA {
		constexpr uintptr_t CrateID = 0x00E8;
		constexpr uintptr_t ShopItems = 0x00F0;
		constexpr uintptr_t ShopID = 0x0100;
	}

	namespace RPC_GetCrossEntitlementProducts_TA {
		constexpr uintptr_t CrossEntitledProductIDs = 0x00E8;
		constexpr uintptr_t LockedProductIDs = 0x00F8;
	}

	namespace RPC_GetItemShopNotifications_TA {
		constexpr uintptr_t ShopNotifications = 0x00E8;
	}

	namespace RPC_GetLegacyStatus_TA {
		constexpr uintptr_t LegacyStatus = 0x00E8;
		constexpr uintptr_t Products = 0x00F0;
		constexpr uintptr_t ProcessedLegacyStatus = 0x0100;
	}

	namespace RPC_GetMatchHistory_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Matches = 0x0130;
	}

	namespace RPC_GetPersonaInfo_TA {
		constexpr uintptr_t PlayerIds = 0x00E8;
		constexpr uintptr_t PlayerData = 0x00F8;
		constexpr uintptr_t FriendsData = 0x0108;
	}

	namespace RPC_GetShopCatalogue_TA {
		constexpr uintptr_t ShopIDs = 0x00E8;
		constexpr uintptr_t Catalogues = 0x00F8;
	}

	namespace RPC_GetSpecialEventCurrencyRewards_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t EventIDs = 0x0130;
		constexpr uintptr_t EventStores = 0x0140;
	}

	namespace RPC_GetSpecialEventCurrency_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t EventID = 0x0130;
		constexpr uintptr_t FEventCurrencyData = 0x0138;
	}

	namespace RPC_GetSpecialEvents_TA {
		constexpr uintptr_t Events = 0x00E8;
	}

	namespace RPC_GetTradeInFilters_TA {
		constexpr uintptr_t TradeInFilters = 0x00E8;
	}

	namespace RPC_GetUploadUrls_TA {
		constexpr uintptr_t Match = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FString = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t FlatBufferMetaData = 0x0150;
	}

	namespace RPC_GetWallet_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Currencies = 0x0130;
	}

	namespace RPC_MatchComplete_TA {
		constexpr uintptr_t PlaylistId = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t MatchData = 0x0100;
		constexpr uintptr_t FGuid = 0x0110;
		constexpr uintptr_t FGuid = 0x0120;
		constexpr uintptr_t MaxTeamSize = 0x0130;
		constexpr uintptr_t MatchWinner = 0x0134;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t FName = 0x0148;
		constexpr uintptr_t TeamScores = 0x0150;
		constexpr uintptr_t Drops = 0x0160;
		constexpr uintptr_t StatsToSend = 0x0170;
	}

	namespace RPC_MicroTransactions_ClaimEntitlements_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t Products = 0x0140;
		constexpr uintptr_t Currencies = 0x0150;
		constexpr uintptr_t WalletCurrencies = 0x0160;
	}

	namespace RPC_MicroTransactions_FinalizePurchase_TA {
		constexpr uintptr_t OrderId = 0x00E8;
		constexpr uintptr_t UnnamedMember_0x00F0 = 0x00F0;
		constexpr uintptr_t FUniqueNetId = 0x00F8;
		constexpr uintptr_t Products = 0x0140;
		constexpr uintptr_t Currencies = 0x0150;
		constexpr uintptr_t WalletCurrencies = 0x0160;
	}

	namespace RPC_MicroTransactions_GetCatalog_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FName = 0x0130;
		constexpr uintptr_t MTXProducts = 0x0138;
		constexpr uintptr_t FString = 0x0148;
	}

	namespace RPC_MicroTransactions_GetContainerDropTable_TA {
		constexpr uintptr_t ContainerDrops = 0x00E8;
	}

	namespace RPC_MicroTransactions_StartPurchase_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x00F8;
		constexpr uintptr_t CartItems = 0x0140;
	}

	namespace RPC_MicroTransactions_UnlockContainer_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t InstanceIDs = 0x0130;
		constexpr uintptr_t KeyInstanceIDs = 0x0140;
		constexpr uintptr_t Drops = 0x0150;
	}

	namespace RPC_OnlineFreeplayComplete_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t UnnamedMember_0x0130 = 0x0130;
		constexpr uintptr_t Stats = 0x0138;
	}

	namespace RPC_PlatformAuth_TA {
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace RPC_PrivateMatchComplete_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t PlayerIds = 0x00F8;
		constexpr uintptr_t Mutators = 0x0108;
	}

	namespace RPC_ProductsClearExpired_TA {
		constexpr uintptr_t InstanceIDs = 0x00E8;
	}

	namespace RPC_ProductsDebugAddProduct_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t ProductID = 0x0130;
		constexpr uintptr_t SeriesID = 0x0134;
		constexpr uintptr_t TradeHoldTimestamp = 0x0138;
		constexpr uintptr_t Attributes = 0x0140;
		constexpr uintptr_t FOnlineProductData = 0x0150;
		constexpr uintptr_t OnlineProduct = 0x0190;
	}

	namespace RPC_ProductsDebugAddProducts_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Bitfields_0x0130 = 0x0130;
		constexpr uintptr_t Products = 0x0138;
		constexpr uintptr_t AddedProducts = 0x0148;
		constexpr uintptr_t TransactionIDs = 0x0158;
		constexpr uintptr_t AddedOnlineProducts = 0x0168;
	}

	namespace RPC_ProductsDebugAddRandom_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Count = 0x0130;
		constexpr uintptr_t SeriesID = 0x0134;
		constexpr uintptr_t Drops = 0x0138;
		constexpr uintptr_t Products = 0x0148;
	}

	namespace RPC_ProductsDebugSetCertified_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t CertifiedStatID = 0x0140;
		constexpr uintptr_t CertifiedValue = 0x0144;
		constexpr uintptr_t FOnlineProductData = 0x0148;
		constexpr uintptr_t OnlineProduct = 0x0188;
	}

	namespace RPC_ProductsDebugSetEdition_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t EditionID = 0x0140;
		constexpr uintptr_t FOnlineProductData = 0x0148;
		constexpr uintptr_t OnlineProduct = 0x0188;
	}

	namespace RPC_ProductsDebugSetPainted_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t PaintID = 0x0140;
		constexpr uintptr_t FOnlineProductData = 0x0148;
		constexpr uintptr_t OnlineProduct = 0x0188;
	}

	namespace RPC_ProductsLoadoutGet_TA {
		constexpr uintptr_t InstanceToSlotTable = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x00F8;
		constexpr uintptr_t Loadout = 0x0140;
		constexpr uintptr_t ProductData = 0x0150;
		constexpr uintptr_t Products = 0x0160;
		constexpr uintptr_t DataProductTeamIndex = 0x0170;
	}

	namespace RPC_ProductsPlayerClear_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
	}

	namespace RPC_ProductsPlayerGet_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t UpdatedTimestamp = 0x0130;
		constexpr uintptr_t ProductData = 0x0138;
	}

	namespace RPC_ProductsTradeIn_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t ProductInstances = 0x0130;
		constexpr uintptr_t Drops = 0x0140;
		constexpr uintptr_t Products = 0x0150;
	}

	namespace RPC_PsyNetGetVanities_TA {
		constexpr uintptr_t VanityTypes = 0x00E8;
		constexpr uintptr_t PlayerIds = 0x00F8;
		constexpr uintptr_t VanityLoadouts = 0x0108;
		constexpr uintptr_t VanityProducts = 0x0118;
	}

	namespace RPC_PsyNetSetVanity_TA {
		constexpr uintptr_t VanityLoadouts = 0x00E8;
	}

	namespace RPC_PurchaseItemFromShop_TA {
		constexpr uintptr_t ShopItemCostID = 0x00E8;
		constexpr uintptr_t ShopID = 0x00EC;
		constexpr uintptr_t ShopDiscountID = 0x00F0;
		constexpr uintptr_t FUniqueNetId = 0x00F8;
		constexpr uintptr_t Count = 0x0140;
		constexpr uintptr_t ExpectedPrice = 0x0148;
		constexpr uintptr_t ExpectedProductCount = 0x0158;
		constexpr uintptr_t ProductData = 0x0160;
		constexpr uintptr_t CurrencyData = 0x0170;
	}

	namespace RPC_PurchaseSpecialEventReward_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t StoreProductID = 0x0130;
		constexpr uintptr_t FRocketPassInfo = 0x0134;
		constexpr uintptr_t ProductData = 0x0140;
		constexpr uintptr_t RewardDrops = 0x0150;
		constexpr uintptr_t CurrencyData = 0x0160;
		constexpr uintptr_t WalletCurrencies = 0x0170;
	}

	namespace RPC_RedeemCode_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x00F8;
		constexpr uintptr_t Drops = 0x0140;
	}

	namespace RPC_ReportPlayer_TA {
		constexpr uintptr_t Reports = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
	}

	namespace RPC_RequestHonorDuel_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x0130;
		constexpr uintptr_t Spectators = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t BuildID = 0x0198;
	}

	namespace RPC_RequestMatchVoiceTokens_TA {
		constexpr uintptr_t RoomTokenRequests = 0x00E8;
		constexpr uintptr_t PlayerData = 0x00F8;
	}

	namespace RPC_RequestPartyVoiceToken_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x0130;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t FString = 0x0188;
		constexpr uintptr_t FString = 0x0198;
		constexpr uintptr_t BanMessage = 0x01A8;
	}

	namespace RPC_RevealBlueprint_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t FOnlineProductData = 0x0140;
	}

	namespace RPC_RocketPassGetPlayerInfo_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t RocketPassID = 0x0130;
		constexpr uintptr_t FRocketPassInfo = 0x0134;
		constexpr uintptr_t FRocketPassStore = 0x0140;
	}

	namespace RPC_RocketPassGetPlayerPrestigeRewards_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t RocketPassID = 0x0130;
		constexpr uintptr_t PrestigeRewards = 0x0138;
	}

	namespace RPC_RocketPassGetRewardContent_TA {
		constexpr uintptr_t RocketPassID = 0x00E8;
		constexpr uintptr_t TierCap = 0x00EC;
		constexpr uintptr_t FreeMaxLevel = 0x00F0;
		constexpr uintptr_t PremiumMaxLevel = 0x00F4;
		constexpr uintptr_t FreeRewards = 0x00F8;
		constexpr uintptr_t PremiumRewards = 0x0108;
	}

	namespace RPC_RocketPassPurchasePremium_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t InstanceIDs = 0x0130;
		constexpr uintptr_t PurchasableID = 0x0140;
		constexpr uintptr_t UnnamedMember_0x0144 = 0x0144;
		constexpr uintptr_t TierLevel = 0x0148;
		constexpr uintptr_t Unlocks = 0x0150;
		constexpr uintptr_t WalletCurrencies = 0x0160;
	}

	namespace RPC_RocketPassPurchaseTiers_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t InstanceIDs = 0x0130;
		constexpr uintptr_t PurchasableID = 0x0140;
		constexpr uintptr_t TierLevel = 0x0144;
		constexpr uintptr_t Unlocks = 0x0148;
		constexpr uintptr_t WalletCurrencies = 0x0158;
	}

	namespace RPC_SchematicResourcesGet_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TotalSchematicResources = 0x0130;
	}

	namespace RPC_SchematicsTradeIn_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FProductInstanceID = 0x0130;
		constexpr uintptr_t Schematics = 0x0140;
		constexpr uintptr_t Drops = 0x0150;
		constexpr uintptr_t CrateDrops = 0x0160;
		constexpr uintptr_t ConsumedInstanceIDs = 0x0170;
		constexpr uintptr_t Products = 0x0180;
	}

	namespace RPC_SubmitUserBugReport_TA {
		constexpr uintptr_t FGuid = 0x00E8;
		constexpr uintptr_t FGuid = 0x00F8;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t MatchSeconds = 0x0118;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t BugCategories = 0x0130;
		constexpr uintptr_t UnnamedMember_0x0140 = 0x0140;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t FString = 0x0158;
	}

	namespace RPC_SupportACreator_Get_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t ExpirationTime = 0x00F8;
		constexpr uintptr_t FString = 0x0100;
	}

	namespace RPC_SupportACreator_Set_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t UnnamedMember_0x00F8 = 0x00F8;
		constexpr uintptr_t ExpirationTime = 0x0100;
		constexpr uintptr_t FString = 0x0108;
	}

	namespace RPC_TourCancelCreated_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
	}

	namespace RPC_TourCheckIn_TA {
		constexpr uintptr_t TournamentID = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x00F0;
		constexpr uintptr_t FUniqueLobbyId = 0x0138;
		constexpr uintptr_t FCustomMatchTeamSettings = 0x0148;
		constexpr uintptr_t LocalTeamMembers = 0x0168;
		constexpr uintptr_t TeamMembers = 0x0178;
		constexpr uintptr_t TeamID = 0x0188;
		constexpr uintptr_t FString = 0x0190;
	}

	namespace RPC_TourCreate_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FTourCreateSettings = 0x0130;
		constexpr uintptr_t Tournament = 0x0168;
	}

	namespace RPC_TourFindPrivate_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FTourPrivateCredentials = 0x0130;
		constexpr uintptr_t Tournament = 0x0150;
	}

	namespace RPC_TourGetBracket_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t FTourBracket = 0x0138;
	}

	namespace RPC_TourGetMatchDetails_TA {
		constexpr uintptr_t TournamentID = 0x00E8;
		constexpr uintptr_t MatchID = 0x00F0;
		constexpr uintptr_t TeamStats = 0x00F8;
	}

	namespace RPC_TourGetMatchReservations_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FTourServerSettings = 0x00F8;
	}

	namespace RPC_TourGetMatchServer_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t MatchID = 0x0138;
	}

	namespace RPC_TourGetMatch_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t FTourMatch = 0x0138;
	}

	namespace RPC_TourGetPublic_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FTourSearchSettings = 0x0130;
		constexpr uintptr_t TeamMembers = 0x0190;
		constexpr uintptr_t Tournaments = 0x01A0;
	}

	namespace RPC_TourGetRewards_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t Rewards = 0x0138;
	}

	namespace RPC_TourGetScheduleRegion_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FString = 0x0130;
	}

	namespace RPC_TourGetSubscriptions_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Tournaments = 0x0130;
		constexpr uintptr_t CreatorOf = 0x0140;
		constexpr uintptr_t AdminOf = 0x0150;
		constexpr uintptr_t Registered = 0x0160;
		constexpr uintptr_t ActiveTournamentID = 0x0170;
		constexpr uintptr_t FTourTeam = 0x0178;
		constexpr uintptr_t Results = 0x01C0;
	}

	namespace RPC_TourRegister_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t FTourPrivateCredentials = 0x0138;
		constexpr uintptr_t Tournament = 0x0158;
	}

	namespace RPC_TourSetScheduleRegion_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t FString = 0x0130;
	}

	namespace RPC_TourStartMatchmaking_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
	}

	namespace RPC_TourUnsubscribe_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t TournamentID = 0x0130;
		constexpr uintptr_t UnnamedMember_0x0138 = 0x0138;
		constexpr uintptr_t TeamMembers = 0x0140;
	}

	namespace RPC_TourUpdateGame_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t TournamentID = 0x0108;
		constexpr uintptr_t MatchID = 0x0110;
		constexpr uintptr_t Game = 0x0114;
		constexpr uintptr_t FTourMatchGame = 0x0118;
		constexpr uintptr_t Winner = 0x0130;
		constexpr uintptr_t PlayersNoShow = 0x0138;
		constexpr uintptr_t PlayersLeftEarly = 0x0148;
		constexpr uintptr_t PlayersIdle = 0x0158;
		constexpr uintptr_t UnnamedMember_0x0168 = 0x0168;
		constexpr uintptr_t PlayersStats = 0x0170;
		constexpr uintptr_t Teams = 0x0180;
	}

	namespace RPC_TrainingEditor_AddTrainingData_TA {
		constexpr uintptr_t TrainingData = 0x00E8;
		constexpr uintptr_t FString = 0x00F0;
	}

	namespace RPC_TrainingEditor_BrowseTrainingData_TA {
		constexpr uintptr_t UnnamedMember_0x00E8 = 0x00E8;
		constexpr uintptr_t TrainingData = 0x00F0;
	}

	namespace RPC_TrainingEditor_DeleteTrainingData_TA {
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace RPC_TrainingEditor_GetTrainingData_TA {
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t TrainingData = 0x00F8;
	}

	namespace RPC_TrainingEditor_GetTrainingMetadata_TA {
		constexpr uintptr_t Codes = 0x00E8;
		constexpr uintptr_t TrainingData = 0x00F8;
	}

	namespace RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA {
		constexpr uintptr_t Codes = 0x00E8;
		constexpr uintptr_t TrainingData = 0x00F8;
	}

	namespace RPC_TrainingEditor_ListPlayerTrainingData_TA {
		constexpr uintptr_t Codes = 0x00E8;
	}

	namespace RPC_TrainingEditor_UpdateTrainingData_TA {
		constexpr uintptr_t TrainingData = 0x00E8;
	}

	namespace RPC_UpdateTwoFactorStatus_TA {
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace RPC_UploadXP_TA {
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t XPTotal = 0x0130;
		constexpr uintptr_t XpLevel = 0x0134;
	}

	namespace RPC_XPRequest_TA {
		constexpr uintptr_t FXPInfo = 0x00E8;
		constexpr uintptr_t FUniqueNetId = 0x0108;
	}

	namespace RankedReconnectSave_TA {
		constexpr uintptr_t FServerReservationData = 0x00C8;
		constexpr uintptr_t EpochTime = 0x0138;
	}

	namespace RecentPlayersMet_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t PendingRecentPlayers = 0x0070;
		constexpr uintptr_t PendingRecentPlayerKeys = 0x0080;
		constexpr uintptr_t WaitingForPermissionsCount = 0x0090;
	}

	namespace RecentPlayers_TA {
		constexpr uintptr_t RecentList = 0x0070;
		constexpr uintptr_t RecentGameIDs = 0x0080;
		constexpr uintptr_t ObservedLoadouts = 0x0090;
		constexpr uintptr_t PersonaSave = 0x00A0;
		constexpr uintptr_t MaxRecentPlayerCount = 0x00A8;
	}

	namespace RegionPingCache_TA {
		constexpr uintptr_t CachedRegionPings = 0x0060;
		constexpr uintptr_t OnlineGameRegionsRef = 0x0070;
	}

	namespace ReplayCompatibilityActor_TA {
		constexpr uintptr_t RenamedActors = 0x0268;
	}

	namespace ReplayComponent_TA {
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
	}

	namespace ReplayDirector_TA {
		constexpr uintptr_t SlomoPreScoreTime = 0x0268;
		constexpr uintptr_t SlomoPostScoreTime = 0x026C;
		constexpr uintptr_t SlomoDefendTime = 0x0270;
		constexpr uintptr_t SlomoDefendDistance = 0x0274;
		constexpr uintptr_t SlomoTimeDilation = 0x0278;
		constexpr uintptr_t MinReplayTime = 0x027C;
		constexpr uintptr_t MaxReplayTime = 0x0280;
		constexpr uintptr_t ReplayPadding = 0x0284;
		constexpr uintptr_t ReplayStartSound = 0x0288;
		constexpr uintptr_t SlomoStartSound = 0x0290;
		constexpr uintptr_t SlomoStopSound = 0x0298;
		constexpr uintptr_t FName = 0x02A0;
		constexpr uintptr_t FName = 0x02A8;
		constexpr uintptr_t FName = 0x02B0;
		constexpr uintptr_t FName = 0x02B8;
		constexpr uintptr_t FName = 0x02C0;
		constexpr uintptr_t HighlightReplayDuration = 0x02C8;
		constexpr uintptr_t TimeBeforeHighlightReplay = 0x02CC;
		constexpr uintptr_t LastScoredGoalTime = 0x02D0;
		constexpr uintptr_t Replay = 0x02D8;
		constexpr uintptr_t FocusCar = 0x02E0;
		constexpr uintptr_t FocusCarChangeTime = 0x02E8;
		constexpr uintptr_t FocusBall = 0x02F0;
		constexpr uintptr_t BallTouches = 0x02F8;
		constexpr uintptr_t FName = 0x0308;
		constexpr uintptr_t ScoreTime = 0x0310;
		constexpr uintptr_t ScoreHitIndex = 0x0314;
		constexpr uintptr_t FName = 0x0318;
		constexpr uintptr_t ScoredGoal = 0x0320;
		constexpr uintptr_t Bitfields_0x0328 = 0x0328;
		constexpr uintptr_t FocusHitIndex = 0x032C;
		constexpr uintptr_t FocusCars = 0x0330;
		constexpr uintptr_t FocusCarIdx = 0x0340;
		constexpr uintptr_t ReplayStartGameTime = 0x0344;
		constexpr uintptr_t BallSpawnTime = 0x0348;
		constexpr uintptr_t SoccarGame = 0x0350;
		constexpr uintptr_t ScoredOnTeam = 0x0358;
		constexpr uintptr_t FReplayScoreData = 0x0360;
		constexpr uintptr_t PreviousScores = 0x0380;
		constexpr uintptr_t ForceCutToFocusActors = 0x0388;
		constexpr uintptr_t CameraConfig = 0x0390;
	}

	namespace ReplayManager_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t ExportTasks = 0x0080;
		constexpr uintptr_t ClassTasks = 0x0090;
		constexpr uintptr_t ImportTasks = 0x00A0;
		constexpr uintptr_t FPointer = 0x00B0;
		constexpr uintptr_t HeaderLoadTasks = 0x00B8;
		constexpr uintptr_t ExportCallbacks = 0x00C8;
		constexpr uintptr_t ImportCallbacks = 0x00D8;
		constexpr uintptr_t FMap_Mirror = 0x00E8;
		constexpr uintptr_t ReplayDataMapUpdateTasks = 0x0138;
		constexpr uintptr_t UnnamedMember_0x0148 = 0x0148;
	}

	namespace ReplayPackageMap_TA {
		constexpr uintptr_t UnknownData00 = 0x0120;
		constexpr uintptr_t Replay = 0x0128;
		constexpr uintptr_t UnknownData01 = 0x0130;
		constexpr uintptr_t ObjectTable = 0x0150;
		constexpr uintptr_t UnknownData02 = 0x0160;
	}

	namespace Replay_Soccar_TA {
		constexpr uintptr_t TeamSize = 0x02F8;
		constexpr uintptr_t UnfairTeamSize = 0x02FC;
		constexpr uintptr_t Bitfields_0x0300 = 0x0300;
		constexpr uintptr_t PrimaryPlayerTeam = 0x0304;
		constexpr uintptr_t Team0Score = 0x0308;
		constexpr uintptr_t Team1Score = 0x030C;
		constexpr uintptr_t TotalSecondsPlayed = 0x0310;
		constexpr uintptr_t MatchStartEpoch = 0x0318;
		constexpr uintptr_t WinningTeam = 0x0320;
		constexpr uintptr_t Goals = 0x0328;
		constexpr uintptr_t HighLights = 0x0338;
		constexpr uintptr_t PlayerStats = 0x0348;
	}

	namespace Replay_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t EngineVersion = 0x0070;
		constexpr uintptr_t LicenseeVersion = 0x0074;
		constexpr uintptr_t NetVersion = 0x0078;
		constexpr uintptr_t ReplayVersion = 0x007C;
		constexpr uintptr_t ReplayLastSaveVersion = 0x0080;
		constexpr uintptr_t GameVersion = 0x0084;
		constexpr uintptr_t BuildID = 0x0088;
		constexpr uintptr_t Changelist = 0x008C;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t ReserveMegabytes = 0x00A0;
		constexpr uintptr_t RecordFPS = 0x00A4;
		constexpr uintptr_t KeyframeDelay = 0x00A8;
		constexpr uintptr_t MaxChannels = 0x00AC;
		constexpr uintptr_t MaxReplaySizeMB = 0x00B0;
		constexpr uintptr_t PlaybackClasses = 0x00B8;
		constexpr uintptr_t IgnoreClasses = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t Bitfields_0x0108 = 0x0108;
		constexpr uintptr_t FName = 0x010C;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t NumFrames = 0x0128;
		constexpr uintptr_t FName = 0x012C;
		constexpr uintptr_t FString = 0x0138;
		constexpr uintptr_t Data = 0x0148;
		constexpr uintptr_t KeyFrames = 0x0158;
		constexpr uintptr_t ReplayState = 0x0168;
		constexpr uintptr_t CurrentFrame = 0x016C;
		constexpr uintptr_t NextKeyframe = 0x0170;
		constexpr uintptr_t CurrentTime = 0x0174;
		constexpr uintptr_t Channels = 0x0178;
		constexpr uintptr_t FMap_Mirror = 0x0188;
		constexpr uintptr_t PackageMap = 0x01D8;
		constexpr uintptr_t Levels = 0x01E0;
		constexpr uintptr_t FreeChannels = 0x01F0;
		constexpr uintptr_t AccumulatedDeltaTime = 0x0200;
		constexpr uintptr_t TimeToSkipTo = 0x0204;
		constexpr uintptr_t FrameToSkipTo = 0x0208;
		constexpr uintptr_t PlayersOnlyTicks = 0x020C;
		constexpr uintptr_t TimePrevToSkip = 0x0210;
		constexpr uintptr_t FPointer = 0x0218;
		constexpr uintptr_t FPointer = 0x0220;
		constexpr uintptr_t Logs = 0x0228;
		constexpr uintptr_t TimelineKeyframes = 0x0238;
		constexpr uintptr_t CameraTrack = 0x0248;
	}

	namespace ReplicatedRespawnTicket_TA {
		constexpr uintptr_t SecondsRemaining = 0x0268;
		constexpr uintptr_t DisplaySeconds = 0x026C;
	}

	namespace RewardDropGroup_TA {
		constexpr uintptr_t Rewards = 0x00C0;
		constexpr uintptr_t Thresholds = 0x00D0;
	}

	namespace RewardDrop_TA {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace RewardDrop_XPMultiplier_TA {
		constexpr uintptr_t Total = 0x0068;
	}

	namespace RewardDrop_XP_TA {
		constexpr uintptr_t Total = 0x0068;
		constexpr uintptr_t Base = 0x006C;
		constexpr uintptr_t BaseLevel = 0x0070;
		constexpr uintptr_t Level = 0x0074;
		constexpr uintptr_t LevelThresholds = 0x0078;
		constexpr uintptr_t Modifiers = 0x0088;
		constexpr uintptr_t PremiumModifierNames = 0x0098;
		constexpr uintptr_t PenaltyModifierNames = 0x00A8;
		constexpr uintptr_t PromoModifierNames = 0x00B8;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FName = 0x00F0;
		constexpr uintptr_t FName = 0x00F8;
	}

	namespace RimSpinner_TA {
		constexpr uintptr_t AccelRate = 0x0078;
		constexpr uintptr_t DecelRate = 0x007C;
		constexpr uintptr_t MaxSpeed = 0x0080;
		constexpr uintptr_t FName = 0x0084;
		constexpr uintptr_t SpinScale = 0x008C;
		constexpr uintptr_t WheelIndex = 0x0090;
		constexpr uintptr_t CurrentSpeed = 0x0094;
		constexpr uintptr_t CurrentRotation = 0x0098;
		constexpr uintptr_t SkelMeshComponent = 0x00A0;
		constexpr uintptr_t SpinBoneController = 0x00A8;
		constexpr uintptr_t WheelBoneController = 0x00B0;
		constexpr uintptr_t Wheel = 0x00B8;
		constexpr uintptr_t UnnamedMember_0x00C0 = 0x00C0;
	}

	namespace RocketPassBundleContainer_TA {
		constexpr uintptr_t FName = 0x0070;
		constexpr uintptr_t FName = 0x0078;
		constexpr uintptr_t Premium = 0x0080;
		constexpr uintptr_t Tier = 0x0090;
	}

	namespace RocketPassConfig_TA {
		constexpr uintptr_t RocketPassID = 0x0078;
		constexpr uintptr_t StartTime = 0x0080;
		constexpr uintptr_t EndTime = 0x0088;
		constexpr uintptr_t StartRangeSeconds = 0x0090;
		constexpr uintptr_t FinalStartTime = 0x0098;
		constexpr uintptr_t Bitfields_0x00A0 = 0x00A0;
	}

	namespace RocketPassErrors_TA {
		constexpr uintptr_t InvalidRocketPass = 0x0080;
		constexpr uintptr_t RocketPassNotActive = 0x0088;
		constexpr uintptr_t InvalidKey = 0x0090;
		constexpr uintptr_t PlayerAlreadyPremium = 0x0098;
		constexpr uintptr_t DoesNotOwnPremium = 0x00A0;
		constexpr uintptr_t PurchasableNotFound = 0x00A8;
	}

	namespace RocketPass_TA {
		constexpr uintptr_t FreeRewards = 0x0060;
		constexpr uintptr_t PremiumRewards = 0x0070;
		constexpr uintptr_t PrestigeRewards = 0x0080;
		constexpr uintptr_t TierCap = 0x0090;
		constexpr uintptr_t PrestigeTierCap = 0x0094;
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t XPMultiplier = 0x009C;
		constexpr uintptr_t TierLevel = 0x00A0;
		constexpr uintptr_t SecondsRemaining = 0x00A4;
		constexpr uintptr_t Bundles = 0x00A8;
		constexpr uintptr_t SyncAllInfoTask = 0x00B0;
		constexpr uintptr_t PendingPlayerInfoTask = 0x00B8;
		constexpr uintptr_t PendingRewardsTask = 0x00C0;
		constexpr uintptr_t PendingPrestigeRewardsTask = 0x00C8;
		constexpr uintptr_t PurchasePremiumTask = 0x00D0;
		constexpr uintptr_t PurchaseTiersTask = 0x00D8;
		constexpr uintptr_t CodeRedemptionPurchasableID = 0x00E0;
		constexpr uintptr_t RocketPassConfig = 0x00E8;
		constexpr uintptr_t OnlineGame = 0x00F0;
		constexpr uintptr_t Wallet = 0x00F8;
	}

	namespace RotateComponent_TA {
		constexpr uintptr_t Momentum = 0x00A8;
		constexpr uintptr_t LastMomentum = 0x00AC;
		constexpr uintptr_t RotationSpeed = 0x00B0;
		constexpr uintptr_t FRotator = 0x00B4;
		constexpr uintptr_t TurntableDirection = 0x00C0;
		constexpr uintptr_t SFX_Rotating = 0x00C8;
		constexpr uintptr_t SFX_Reversing = 0x00D0;
		constexpr uintptr_t FInterpCurveFloat = 0x00D8;
		constexpr uintptr_t FInterpCurveFloat = 0x00F0;
		constexpr uintptr_t FInterpCurveFloat = 0x0108;
		constexpr uintptr_t Bitfields_0x0120 = 0x0120;
		constexpr uintptr_t FRotator = 0x0124;
		constexpr uintptr_t SnapAngle = 0x0130;
		constexpr uintptr_t TotalSnaps = 0x0134;
		constexpr uintptr_t FRotator = 0x0138;
		constexpr uintptr_t MinStopMomentum = 0x0144;
		constexpr uintptr_t SnapBlendSpeed = 0x0148;
		constexpr uintptr_t Input = 0x014C;
	}

	namespace RumblePickups_TA {
		constexpr uintptr_t FPickupInfo_TA = 0x0268;
		constexpr uintptr_t AttachedPickup = 0x0288;
		constexpr uintptr_t ConcurrentItemCount = 0x0290;
		constexpr uintptr_t SelectedIndex = 0x0294;
		constexpr uintptr_t PreviewTimeSeconds = 0x0298;
	}

	namespace SampleHistory_TA {
		constexpr uintptr_t RecordSettings = 0x0070;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t Summaries = 0x0088;
		constexpr uintptr_t YMin = 0x0098;
		constexpr uintptr_t YMax = 0x009C;
		constexpr uintptr_t GoodValue = 0x00A0;
		constexpr uintptr_t BadValue = 0x00A4;
		constexpr uintptr_t BaseValue = 0x00A8;
		constexpr uintptr_t Samples = 0x00B0;
		constexpr uintptr_t SampleIndex = 0x00C0;
		constexpr uintptr_t AccumTime = 0x00C4;
		constexpr uintptr_t FSample = 0x00C8;
		constexpr uintptr_t UnnamedMember_0x00D0 = 0x00D0;
		constexpr uintptr_t Drawer = 0x00D8;
	}

	namespace SampleRecordSettings_TA {
		constexpr uintptr_t MaxSampleAge = 0x0070;
		constexpr uintptr_t RecordRate = 0x0074;
	}

	namespace SaveData_GameEditor_TA {
		constexpr uintptr_t UnknownData00 = 0x009C;
	}

	namespace SaveData_GameEditor_Training_TA {
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t TrainingData = 0x00B0;
		constexpr uintptr_t PlayerTeamNumber = 0x00B8;
		constexpr uintptr_t Bitfields_0x00BC = 0x00BC;
		constexpr uintptr_t ShotsCompleted = 0x00C0;
		constexpr uintptr_t FString = 0x00C8;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t FString = 0x00E8;
	}

	namespace SaveData_TA {
		constexpr uintptr_t SaveManager = 0x0060;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t OnlineProducts = 0x0070;
		constexpr uintptr_t OnlineProductSet = 0x0080;
		constexpr uintptr_t MostRecentProductUpdatedTimestamp = 0x0088;
		constexpr uintptr_t LastFullProductSyncTimestamp = 0x0090;
		constexpr uintptr_t PsyNetEnvironment = 0x0098;
		constexpr uintptr_t ProductsConfig = 0x00A0;
		constexpr uintptr_t ProductTransactions = 0x00A8;
		constexpr uintptr_t Profiles = 0x00B0;
		constexpr uintptr_t XPGainPercentage = 0x00C0;
		constexpr uintptr_t CurrentLevel = 0x00D0;
		constexpr uintptr_t SchematicResources = 0x00D4;
		constexpr uintptr_t SaveDataVersion = 0x00D8;
		constexpr uintptr_t SaveObjectProvider = 0x00E0;
		constexpr uintptr_t SaveObjects = 0x00E8;
		constexpr uintptr_t SaveTick = 0x00F8;
		constexpr uintptr_t SyncOnlineStorageTask = 0x0100;
		constexpr uintptr_t StorageSyncManager = 0x0108;
		constexpr uintptr_t EOSStorageUploader = 0x0110;
		constexpr uintptr_t ExpirationHelper = 0x0118;
		constexpr uintptr_t CachedUnlockedProducts = 0x0120;
		constexpr uintptr_t OnlineDLCProductCache = 0x0128;
		constexpr uintptr_t DataProductCache = 0x0130;
		constexpr uintptr_t NewProductNotificationQueue = 0x0138;
		constexpr uintptr_t UploadDelayedTime = 0x0148;
		constexpr uintptr_t FString = 0x0150;
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t FString = 0x0180;
	}

	namespace SaveGameManager_TA {
		constexpr uintptr_t SaveObjectManager = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t Player = 0x0078;
		constexpr uintptr_t SaveData = 0x0080;
		constexpr uintptr_t SaveObjectProvider = 0x0088;
		constexpr uintptr_t MinTimeBetweenSaves = 0x0090;
		constexpr uintptr_t LastSaveTime = 0x0094;
		constexpr uintptr_t DataLoadError = 0x0098;
		constexpr uintptr_t DataSaveError = 0x00A0;
		constexpr uintptr_t Bitfields_0x00A8 = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
	}

	namespace SaveObjectManager_TA {
		constexpr uintptr_t FPointer = 0x0060;
		constexpr uintptr_t ImportTasks = 0x0068;
		constexpr uintptr_t ExportTasks = 0x0088;
		constexpr uintptr_t ListFilesTasks = 0x0098;
		constexpr uintptr_t DeleteTasks = 0x00A8;
		constexpr uintptr_t KeepNewestSaveFileCount = 0x00C8;
		constexpr uintptr_t SaveData = 0x00D0;
		constexpr uintptr_t FString = 0x00D8;
		constexpr uintptr_t ControllerId = 0x00E8;
		constexpr uintptr_t Bitfields_0x00EC = 0x00EC;
		constexpr uintptr_t InitializeTasks = 0x00F0;
	}

	namespace SaveObjectSerializer_TA {
		constexpr uintptr_t Version = 0x0060;
		constexpr uintptr_t Result = 0x0064;
	}

	namespace SaveObject_TA {
		constexpr uintptr_t Version = 0x0060;
	}

	namespace Save_TA {
		constexpr uintptr_t SaveObjectManager = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t FString = 0x0088;
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
	}

	namespace ScreenDisplayActor_TA {
		constexpr uintptr_t PC = 0x02C8;
		constexpr uintptr_t FVector = 0x02D0;
		constexpr uintptr_t FVector = 0x02DC;
		constexpr uintptr_t FRotator = 0x02E8;
		constexpr uintptr_t RotationSpeed = 0x02F4;
		constexpr uintptr_t StartRotationOffset = 0x02F8;
		constexpr uintptr_t BlendInSpeed = 0x02FC;
		constexpr uintptr_t BlendInAmount = 0x0300;
		constexpr uintptr_t CameraShakeDuration = 0x0304;
		constexpr uintptr_t CameraShakeAmplitude = 0x0308;
		constexpr uintptr_t CameraShakeFrequency = 0x030C;
		constexpr uintptr_t ParticleFX = 0x0310;
		constexpr uintptr_t ParticleComponent = 0x0318;
		constexpr uintptr_t FVector = 0x0320;
	}

	namespace ScriptedTextureComponent_TA {
		constexpr uintptr_t FVector = 0x00A8;
		constexpr uintptr_t Height = 0x00B4;
		constexpr uintptr_t UnnamedMember_0x00B8 = 0x00B8;
		constexpr uintptr_t Mesh = 0x00C0;
		constexpr uintptr_t TextureTarget = 0x00C8;
		constexpr uintptr_t Viewer = 0x00D0;
	}

	namespace SeasonSave_TA {
		constexpr uintptr_t Seasons = 0x00C8;
	}

	namespace Season_TA {
		constexpr uintptr_t NumTeams = 0x0060;
		constexpr uintptr_t TeamSize = 0x0064;
		constexpr uintptr_t Difficulty = 0x0068;
		constexpr uintptr_t NumRegularWeeks = 0x006C;
		constexpr uintptr_t NumPlayoffsWeeks = 0x0070;
		constexpr uintptr_t NumPlayoffsTeams = 0x0074;
		constexpr uintptr_t Teams = 0x0078;
		constexpr uintptr_t Players = 0x0088;
		constexpr uintptr_t PlayerStats = 0x0098;
		constexpr uintptr_t Year = 0x00A8;
		constexpr uintptr_t CurrentWeek = 0x00AC;
		constexpr uintptr_t Matches = 0x00B0;
	}

	namespace SeqAct_AddGameBall_TA {
		constexpr uintptr_t SpawnedBall = 0x0160;
		constexpr uintptr_t Instigator = 0x0168;
		constexpr uintptr_t SpawnTransform = 0x0170;
		constexpr uintptr_t PlacedBall = 0x0178;
		constexpr uintptr_t UnnamedMember_0x0180 = 0x0180;
		constexpr uintptr_t FString = 0x0188;
	}

	namespace SeqAct_AnalyzeMusicFromCsv_TA {
		constexpr uintptr_t FPointer = 0x0160;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t StartOverrideTime = 0x0178;
		constexpr uintptr_t OverrideTime = 0x017C;
		constexpr uintptr_t UnnamedMember_0x0180 = 0x0180;
	}

	namespace SeqAct_ApplyCarProducts_TA {
		constexpr uintptr_t Assets = 0x0160;
		constexpr uintptr_t FLinearColor = 0x0170;
		constexpr uintptr_t FLinearColor = 0x0180;
		constexpr uintptr_t TeamFinish = 0x0190;
		constexpr uintptr_t CustomFinish = 0x0198;
		constexpr uintptr_t CarPreviewActor = 0x01A0;
	}

	namespace SeqAct_AttachAssetToCar_TA {
		constexpr uintptr_t StaticMeshToAttach = 0x0160;
		constexpr uintptr_t SkeletalMeshToAttach = 0x0168;
		constexpr uintptr_t ParticleSystemToAttach = 0x0170;
		constexpr uintptr_t FName = 0x0178;
	}

	namespace SeqAct_AttachFX_TA {
		constexpr uintptr_t PSC = 0x0160;
	}

	namespace SeqAct_CarMatinee_TA {
		constexpr uintptr_t FString = 0x0288;
		constexpr uintptr_t Bitfields_0x0298 = 0x0298;
		constexpr uintptr_t ClassesToNotShow = 0x02A0;
	}

	namespace SeqAct_CheckRotationAngle_TA {
		constexpr uintptr_t Actor = 0x0178;
		constexpr uintptr_t CheckActor = 0x0180;
		constexpr uintptr_t RotationAngle = 0x0188;
		constexpr uintptr_t FRotator = 0x018C;
		constexpr uintptr_t LastDirection = 0x0198;
		constexpr uintptr_t FVector = 0x019C;
		constexpr uintptr_t FVector = 0x01A8;
		constexpr uintptr_t MaxRotationAngle = 0x01B4;
		constexpr uintptr_t UnnamedMember_0x01B8 = 0x01B8;
		constexpr uintptr_t AxisDirection = 0x01BC;
	}

	namespace SeqAct_CinematicIntroStartNextSeq_TA {
		constexpr uintptr_t CurrentSequenceIndex = 0x0160;
	}

	namespace SeqAct_CompleteFTECheckpoint_TA {
		constexpr uintptr_t FString = 0x0160;
	}

	namespace SeqAct_ConcatenateStrings_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t UnnamedMember_0x0180 = 0x0180;
		constexpr uintptr_t FString = 0x0188;
	}

	namespace SeqAct_ControlCarMovement_TA {
		constexpr uintptr_t Instigator = 0x0160;
	}

	namespace SeqAct_Counter_TA {
		constexpr uintptr_t MaxCount = 0x0160;
	}

	namespace SeqAct_CreateAttachComponent_TA {
		constexpr uintptr_t AttachTo = 0x0160;
		constexpr uintptr_t AttachingComponent = 0x0168;
	}

	namespace SeqAct_DisableForceInFXActor_TA {
		constexpr uintptr_t InFXActor = 0x0160;
	}

	namespace SeqAct_DisplayMessage_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t FString = 0x0168;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t Bitfields_0x0188 = 0x0188;
		constexpr uintptr_t FString = 0x0190;
		constexpr uintptr_t FString = 0x01A0;
	}

	namespace SeqAct_DriveSpline_TA {
		constexpr uintptr_t ForwardOffset = 0x0178;
		constexpr uintptr_t Spline = 0x0180;
		constexpr uintptr_t Throttle = 0x0188;
		constexpr uintptr_t UnnamedMember_0x018C = 0x018C;
		constexpr uintptr_t Cars = 0x0190;
	}

	namespace SeqAct_DynamicMapEvents_TA {
		constexpr uintptr_t FString = 0x0160;
	}

	namespace SeqAct_EndTutorial_TA {
		constexpr uintptr_t Instigator = 0x0160;
	}

	namespace SeqAct_GameURLHasOption_TA {
		constexpr uintptr_t FString = 0x0160;
	}

	namespace SeqAct_GetFTEState_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
	}

	namespace SeqAct_GetGameBall_TA {
		constexpr uintptr_t Ball = 0x0160;
	}

	namespace SeqAct_GetPlayerCar_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FoundActor = 0x0170;
	}

	namespace SeqAct_GetRarityColor_TA {
		constexpr uintptr_t RarityColorsPrime = 0x0160;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
		constexpr uintptr_t MinimumRandomQuality = 0x0174;
		constexpr uintptr_t ColorIdx = 0x0178;
		constexpr uintptr_t FVector = 0x017C;
		constexpr uintptr_t LastRandomIdx = 0x0188;
	}

	namespace SeqAct_GetSaveData_TA {
		constexpr uintptr_t SaveData = 0x0160;
	}

	namespace SeqAct_GetTeamScore_TA {
		constexpr uintptr_t TeamIndex = 0x0160;
		constexpr uintptr_t TeamScore = 0x0164;
	}

	namespace SeqAct_GiveBoost_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t BoostAmount = 0x0168;
	}

	namespace SeqAct_HideDuplicateCar_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t Bitfields_0x0170 = 0x0170;
	}

	namespace SeqAct_InstanceMaterial_TA {
		constexpr uintptr_t MaterialInstance = 0x0160;
		constexpr uintptr_t SK = 0x0168;
		constexpr uintptr_t SM = 0x0170;
		constexpr uintptr_t InstancedMaterial = 0x0178;
		constexpr uintptr_t MatIndex = 0x0180;
	}

	namespace SeqAct_IsActionPressed_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t FName = 0x0168;
	}

	namespace SeqAct_IsHumanPlayer_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t Target = 0x0168;
	}

	namespace SeqAct_IsTargetInPlayerCameraView {
		constexpr uintptr_t Instigator = 0x0178;
		constexpr uintptr_t Target = 0x0180;
		constexpr uintptr_t MaxConeAngle = 0x0188;
	}

	namespace SeqAct_LoadMap_TA {
		constexpr uintptr_t FString = 0x0160;
	}

	namespace SeqAct_LookAtActor_TA {
		constexpr uintptr_t Actor = 0x0178;
		constexpr uintptr_t ActorToLookAt = 0x0180;
		constexpr uintptr_t InterpSpeed = 0x0188;
		constexpr uintptr_t Bitfields_0x018C = 0x018C;
	}

	namespace SeqAct_MatchCountdown_TA {
		constexpr uintptr_t CountdownTime = 0x0160;
	}

	namespace SeqAct_MoveActor_TA {
		constexpr uintptr_t Actor = 0x0178;
		constexpr uintptr_t MoveTransform = 0x0180;
		constexpr uintptr_t InterpSpeed = 0x0188;
		constexpr uintptr_t Bitfields_0x018C = 0x018C;
	}

	namespace SeqAct_NotifyEventOnTutorial_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t Instigator = 0x0170;
	}

	namespace SeqAct_RegisterMapDragon_TA {
		constexpr uintptr_t PlacedActor = 0x0160;
		constexpr uintptr_t TeamIndex = 0x0168;
		constexpr uintptr_t UnnamedMember_0x016C = 0x016C;
	}

	namespace SeqAct_ReinitPhys_TA {
		constexpr uintptr_t RBObj = 0x0160;
	}

	namespace SeqAct_RotateActor_TA {
		constexpr uintptr_t Actor = 0x0178;
		constexpr uintptr_t RotateTransform = 0x0180;
		constexpr uintptr_t InterpSpeed = 0x0188;
		constexpr uintptr_t Bitfields_0x018C = 0x018C;
		constexpr uintptr_t RotateTolerance = 0x0190;
	}

	namespace SeqAct_ScreenFade {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t FColor = 0x0168;
		constexpr uintptr_t FadeTime = 0x016C;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
	}

	namespace SeqAct_ScreenFade_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t FColor = 0x0168;
		constexpr uintptr_t FadeTime = 0x016C;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
	}

	namespace SeqAct_SetBallCamTarget_TA {
		constexpr uintptr_t Target = 0x0160;
		constexpr uintptr_t Instigator = 0x0168;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
	}

	namespace SeqAct_SetBallMaterial_TA {
		constexpr uintptr_t Ball = 0x0160;
		constexpr uintptr_t Material = 0x0168;
		constexpr uintptr_t MaterialID = 0x0170;
	}

	namespace SeqAct_SetBreakoutBallCharge_TA {
		constexpr uintptr_t BallObj = 0x0160;
		constexpr uintptr_t Charge = 0x0168;
		constexpr uintptr_t Team = 0x016C;
	}

	namespace SeqAct_SetBreakoutTileDamage_TA {
		constexpr uintptr_t PlatformObj = 0x0160;
		constexpr uintptr_t Damage = 0x0168;
	}

	namespace SeqAct_SetCarTransform_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t Transform = 0x0168;
	}

	namespace SeqAct_SetGreenScreen_TA {
		constexpr uintptr_t FLinearColor = 0x0160;
	}

	namespace SeqAct_SetLoadout_TA {
		constexpr uintptr_t Products = 0x0160;
		constexpr uintptr_t ProductsWithPaint = 0x0170;
		constexpr uintptr_t TeamFinish = 0x0180;
		constexpr uintptr_t AccentFinish = 0x0188;
		constexpr uintptr_t Bitfields_0x0190 = 0x0190;
		constexpr uintptr_t FLinearColor = 0x0194;
		constexpr uintptr_t FLinearColor = 0x01A4;
		constexpr uintptr_t ForcedTeamOverride = 0x01B4;
		constexpr uintptr_t BodyPaint = 0x01B8;
		constexpr uintptr_t SkinPaint = 0x01C0;
		constexpr uintptr_t WheelPaint = 0x01C8;
		constexpr uintptr_t BoostPaint = 0x01D0;
		constexpr uintptr_t SSTrailPaint = 0x01D8;
		constexpr uintptr_t AntennaPaint = 0x01E0;
		constexpr uintptr_t HatPaint = 0x01E8;
		constexpr uintptr_t GoalExplosionPaint = 0x01F0;
		constexpr uintptr_t ParentCar = 0x01F8;
		constexpr uintptr_t CarsToUpdateOnRespawn = 0x0200;
	}

	namespace SeqAct_SetMatInstParam_Vector {
		constexpr uintptr_t FName = 0x0160;
		constexpr uintptr_t MatInstActor = 0x0168;
		constexpr uintptr_t FVector = 0x0170;
	}

	namespace SeqAct_SetMatInstVectorParam_TA {
		constexpr uintptr_t MatInst = 0x0160;
		constexpr uintptr_t FName = 0x0168;
		constexpr uintptr_t FVector = 0x0170;
	}

	namespace SeqAct_SetMeshMaterialScalarParameter_TA {
		constexpr uintptr_t MeshList = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t ScalarValue = 0x0180;
	}

	namespace SeqAct_SetNameplate_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t FString = 0x0168;
	}

	namespace SeqAct_SetPostProcess_TA {
		constexpr uintptr_t Chains = 0x0160;
		constexpr uintptr_t UnnamedMember_0x0170 = 0x0170;
	}

	namespace SeqAct_SetReplayCamera_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FVector = 0x0170;
		constexpr uintptr_t FRotator = 0x017C;
		constexpr uintptr_t FOV = 0x0188;
	}

	namespace SeqAct_SetReplayFX_TA {
		constexpr uintptr_t FocusDistance = 0x0160;
		constexpr uintptr_t FocusBlur = 0x0164;
		constexpr uintptr_t FocusStrength = 0x0168;
		constexpr uintptr_t Bitfields_0x016C = 0x016C;
		constexpr uintptr_t FLinearColor = 0x0170;
		constexpr uintptr_t ImageFilterIndex = 0x0180;
		constexpr uintptr_t ImageFilterIntensity = 0x0184;
		constexpr uintptr_t Vignette = 0x0188;
	}

	namespace SeqAct_SetSkelMATLoadout_TA {
		constexpr uintptr_t ActorMAT = 0x0160;
		constexpr uintptr_t ControllerOrPawn = 0x0168;
		constexpr uintptr_t LoadoutIndex = 0x0170;
	}

	namespace SeqAct_SetStadiumTeamColors_TA {
		constexpr uintptr_t UnnamedMember_0x0160 = 0x0160;
		constexpr uintptr_t BlueColors = 0x0168;
		constexpr uintptr_t OrangeColors = 0x0178;
	}

	namespace SeqAct_SetTimeDilation_TA {
		constexpr uintptr_t FPointer = 0x0160;
		constexpr uintptr_t Bitfields_0x0168 = 0x0168;
		constexpr uintptr_t CurrentTime = 0x016C;
		constexpr uintptr_t EndTime = 0x0170;
		constexpr uintptr_t SlomoValue = 0x0174;
		constexpr uintptr_t FRawDistributionFloat = 0x0178;
	}

	namespace SeqAct_SetTutorialGameEvent_TA {
		constexpr uintptr_t FString = 0x0160;
	}

	namespace SeqAct_SetTutorialTip_TA {
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t ActionNames = 0x0170;
	}

	namespace SeqAct_SetVehicleInput_TA {
		constexpr uintptr_t FVehicleInputs = 0x0160;
	}

	namespace SeqAct_SpawnActor_TA {
		constexpr uintptr_t ActorArchetype = 0x0160;
		constexpr uintptr_t Transform = 0x0168;
		constexpr uintptr_t SpawnedActor = 0x0170;
	}

	namespace SeqAct_SpawnBot_TA {
		constexpr uintptr_t SpawnedBot = 0x0160;
		constexpr uintptr_t SpawnTransform = 0x0168;
		constexpr uintptr_t SkillLevel = 0x0170;
		constexpr uintptr_t Bitfields_0x0174 = 0x0174;
		constexpr uintptr_t TeamIndex = 0x0178;
	}

	namespace SeqAct_SpawnCarColors_TA {
		constexpr uintptr_t FSpawnCarColorSet = 0x0160;
		constexpr uintptr_t FLinearColor = 0x0170;
		constexpr uintptr_t FSpawnCarColorSet = 0x0180;
		constexpr uintptr_t FSpawnCarColorSet = 0x0190;
		constexpr uintptr_t FLinearColor = 0x01A0;
		constexpr uintptr_t Body = 0x01B0;
		constexpr uintptr_t Skin = 0x01B8;
		constexpr uintptr_t CarYaw = 0x01C0;
		constexpr uintptr_t CarOffsetX = 0x01C4;
		constexpr uintptr_t CarOffsetY = 0x01C8;
		constexpr uintptr_t SetOffsetY = 0x01CC;
		constexpr uintptr_t BaseOffsetY = 0x01D0;
	}

	namespace SeqAct_SpawnFXActor_TA {
		constexpr uintptr_t FPointer = 0x0160;
		constexpr uintptr_t FXActor = 0x0168;
		constexpr uintptr_t Product = 0x0170;
		constexpr uintptr_t Transform = 0x0178;
		constexpr uintptr_t FVector = 0x0180;
		constexpr uintptr_t FRotator = 0x018C;
		constexpr uintptr_t ActorToSpawnOn = 0x0198;
		constexpr uintptr_t SpawnedFXActor = 0x01A0;
		constexpr uintptr_t Paint = 0x01A8;
		constexpr uintptr_t FName = 0x01B0;
		constexpr uintptr_t UnnamedMember_0x01B8 = 0x01B8;
		constexpr uintptr_t BallLocMic = 0x01C0;
	}

	namespace SeqAct_StartTutorial_TA {
		constexpr uintptr_t Instigator = 0x0160;
		constexpr uintptr_t FString = 0x0168;
	}

	namespace SeqAct_TermPhys_TA {
		constexpr uintptr_t RBObj = 0x0160;
	}

	namespace SeqAct_ToggleUIOverlay_TA {
		constexpr uintptr_t FString = 0x0160;
	}

	namespace SeqAct_UpdateAd_TA {
		constexpr uintptr_t MeshActor = 0x0160;
	}

	namespace SeqCond_CompareString_TA {
		constexpr uintptr_t UnnamedMember_0x0140 = 0x0140;
		constexpr uintptr_t FString = 0x0148;
		constexpr uintptr_t FString = 0x0158;
	}

	namespace SeqEvent_BallInRange_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_CarSelectStart_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_CarSpawned_TA {
		constexpr uintptr_t FString = 0x0180;
	}

	namespace SeqEvent_CarTouchBall_TA {
		constexpr uintptr_t UnnamedMember_0x0180 = 0x0180;
	}

	namespace SeqEvent_CinematicIntroSeqFinished_TA {
		constexpr uintptr_t SequenceIndex = 0x0180;
	}

	namespace SeqEvent_CountDownCompleted_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_CountDownStart_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_DynamicMapEvents_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_GameEventStateChanged_TA {
		constexpr uintptr_t FString = 0x0180;
	}

	namespace SeqEvent_GameTimeChanged_TA {
		constexpr uintptr_t CallTimePercent = 0x0180;
		constexpr uintptr_t UnnamedMember_0x0184 = 0x0184;
	}

	namespace SeqEvent_GoalScored_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_InputSequence_TA {
		constexpr uintptr_t FName = 0x0180;
	}

	namespace SeqEvent_IntroMenu_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_LiveReplay_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_MTXGarageBlueprintPreview_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_MTXGarageReveal_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_MainMenuSwitched_TA {
		constexpr uintptr_t PrevBackground = 0x0180;
	}

	namespace SeqEvent_PodiumStart_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_PreviewGoalExplosion_TA {
		constexpr uintptr_t FXInstance = 0x0180;
	}

	namespace SeqEvent_PreviewMusicStingerVisualizer_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_PreviewPostMatchCelebration_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_ReplayTime_TA {
		constexpr uintptr_t TimeSeconds = 0x0180;
	}

	namespace SeqEvent_RoundStart_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_ScoreChanged_TA {
		constexpr uintptr_t BlueScore = 0x0180;
		constexpr uintptr_t RedScore = 0x0184;
	}

	namespace SeqEvent_StadiumTeamColorsChanged_TA {
		constexpr uintptr_t Team = 0x0180;
		constexpr uintptr_t FVector = 0x0184;
		constexpr uintptr_t FVector = 0x0190;
	}

	namespace SeqEvent_StartHighlightReel_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_TutorialHelper_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_TutorialStarted_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace SeqEvent_UIStateChange_TA {
		constexpr uintptr_t UIState = 0x0180;
	}

	namespace SeqEvent_UserSettingChanged_TA {
		constexpr uintptr_t FName = 0x0180;
	}

	namespace SeqEvent_WeatherToggled_TA {
		constexpr uintptr_t UnknownData00 = 0x017C;
	}

	namespace ServerFormPartyEvent_TA {
		constexpr uintptr_t ConfirmedMerge = 0x0060;
	}

	namespace ServerMergeErrorEvent_TA {
		constexpr uintptr_t Vote = 0x0060;
		constexpr uintptr_t Invitees = 0x0068;
		constexpr uintptr_t FUniqueNetId = 0x0078;
		constexpr uintptr_t Reason = 0x00C0;
	}

	namespace ServerPerformanceConfig_TA {
		constexpr uintptr_t InternalLowFPS = 0x0078;
		constexpr uintptr_t InternalLowFPSTimeThreshold = 0x007C;
		constexpr uintptr_t PublicBadFPS = 0x0080;
		constexpr uintptr_t PublicMediocreFPS = 0x0084;
		constexpr uintptr_t FpsRollingAverageTime = 0x0088;
	}

	namespace ServerPerformanceTracker_TA {
		constexpr uintptr_t ServerPerformanceConfig = 0x00A8;
		constexpr uintptr_t ConnectionQualityConfig = 0x00B0;
		constexpr uintptr_t RollingFpsAverage = 0x00B8;
		constexpr uintptr_t InternalLowFpsTime = 0x00BC;
		constexpr uintptr_t ServerPerformanceLastUpdateTime = 0x00C0;
		constexpr uintptr_t UnnamedMember_0x00C4 = 0x00C4;
	}

	namespace ServerStartVoteEvent_TA {
		constexpr uintptr_t Parties = 0x0060;
		constexpr uintptr_t VoteOwner = 0x0070;
	}

	namespace ServerVoteStartedEvent_TA {
		constexpr uintptr_t Voters = 0x0060;
	}

	namespace SettingsMenuConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace ShopAdsConfig_TA {
		constexpr uintptr_t Ads = 0x0078;
	}

	namespace ShopAutoLoadHelper_TA {
		constexpr uintptr_t SyncRequestRange = 0x0060;
		constexpr uintptr_t AutoLoadDelayer = 0x0068;
		constexpr uintptr_t AutoLoadAsyncTask = 0x0070;
		constexpr uintptr_t AutoLoadedItems = 0x0078;
		constexpr uintptr_t AutoLoadExpirationHelper = 0x0088;
		constexpr uintptr_t MinEndDateOffset = 0x0090;
		constexpr uintptr_t MaxEndDateOffset = 0x0098;
		constexpr uintptr_t RandomEndDateOffset = 0x00A0;
		constexpr uintptr_t LastRequestStartTime = 0x00A8;
	}

	namespace ShopCatalogueCacheSave_TA {
		constexpr uintptr_t ViewedShopIDs = 0x00C8;
		constexpr uintptr_t ShopContentCache = 0x00D8;
	}

	namespace ShopErrors_TA {
		constexpr uintptr_t ShopItemBadData = 0x0080;
		constexpr uintptr_t ShopItemDiscountBadData = 0x0088;
		constexpr uintptr_t ShopSyncedBadData = 0x0090;
		constexpr uintptr_t ShopNotEnoughCurrency = 0x0098;
	}

	namespace ShopItemExpirationHelper_TA {
		constexpr uintptr_t ShopItemExpirations = 0x0060;
	}

	namespace ShopMetrics_TA {
		constexpr uintptr_t CurrentShopTabMetrics = 0x0080;
		constexpr uintptr_t CurrentBrowseSourceID = 0x0090;
		constexpr uintptr_t ShopNotificationsManager = 0x0098;
		constexpr uintptr_t CurrentShopNotificationIDs = 0x00A0;
		constexpr uintptr_t PastShopNotificationIDs = 0x00B0;
	}

	namespace ShopNotificationsManager_TA {
		constexpr uintptr_t ItemShopNotificationsConfig = 0x0060;
		constexpr uintptr_t Community = 0x0068;
		constexpr uintptr_t ShopNotificationsTask = 0x0070;
		constexpr uintptr_t PendingShopNotifications = 0x0078;
		constexpr uintptr_t CurrentNotification = 0x0088;
		constexpr uintptr_t ShownShopNotificationIDs = 0x0090;
		constexpr uintptr_t ValidMenus = 0x00A0;
		constexpr uintptr_t DynamicThumbnailDisabledClasses = 0x00B0;
	}

	namespace ShopTabsConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t EsportsShopValidRegions = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t DisabledTypes = 0x00C0;
		constexpr uintptr_t Time_Object = 0x00D0;
		constexpr uintptr_t Time_Interface = 0x00D8;
	}

	namespace ShopTabs_TA {
		constexpr uintptr_t Config = 0x0070;
		constexpr uintptr_t LoadedMtx = 0x0078;
		constexpr uintptr_t FString = 0x0080;
	}

	namespace ShopsConfig_TA {
		constexpr uintptr_t DebugShopID = 0x0078;
		constexpr uintptr_t Bitfields_0x007C = 0x007C;
		constexpr uintptr_t ShopTypesForOwnedTracking = 0x0080;
	}

	namespace ShopsManager_TA {
		constexpr uintptr_t ServiceArchetype = 0x0060;
		constexpr uintptr_t Service = 0x0068;
		constexpr uintptr_t ActiveShopID = 0x0070;
		constexpr uintptr_t ActiveCatalogID = 0x0074;
	}

	namespace SimilarSeasonLogos_TA {
		constexpr uintptr_t LogoGroups = 0x0060;
	}

	namespace SimpleSpringComponent_TA {
		constexpr uintptr_t FSimpleSpringSettings = 0x0070;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
		constexpr uintptr_t FVector = 0x00C4;
		constexpr uintptr_t FVector = 0x00D0;
		constexpr uintptr_t FVector = 0x00DC;
	}

	namespace SkelControlRotationSpring_TA {
		constexpr uintptr_t FRotator = 0x0130;
		constexpr uintptr_t FRotator = 0x013C;
		constexpr uintptr_t FVector = 0x0148;
		constexpr uintptr_t FVector = 0x0154;
		constexpr uintptr_t FVector = 0x0160;
		constexpr uintptr_t SpringComponent = 0x0170;
		constexpr uintptr_t FVector = 0x0178;
		constexpr uintptr_t TestSpringDelay = 0x0184;
		constexpr uintptr_t LastTestSpringTime = 0x0188;
	}

	namespace SkelControlSingleBoneCopy_TA {
		constexpr uintptr_t FName = 0x0130;
		constexpr uintptr_t FAxisConversion = 0x0138;
		constexpr uintptr_t FAxisConversion = 0x0144;
		constexpr uintptr_t FAxisConversion = 0x0150;
		constexpr uintptr_t FAxisConversion = 0x015C;
		constexpr uintptr_t FAxisConversion = 0x0168;
		constexpr uintptr_t FAxisConversion = 0x0174;
		constexpr uintptr_t FVector = 0x0180;
		constexpr uintptr_t FVector = 0x018C;
		constexpr uintptr_t UnnamedMember_0x0198 = 0x0198;
		constexpr uintptr_t ControlToCopy = 0x01A0;
	}

	namespace SkelControlSingleBoneParameterized_TA {
		constexpr uintptr_t FRawDistributionFloat = 0x0130;
		constexpr uintptr_t FRawDistributionFloat = 0x0158;
		constexpr uintptr_t FRawDistributionFloat = 0x0180;
		constexpr uintptr_t FRawDistributionFloat = 0x01A8;
		constexpr uintptr_t FRawDistributionFloat = 0x01D0;
		constexpr uintptr_t FRawDistributionFloat = 0x01F8;
	}

	namespace SkelControlTether_TA {
		constexpr uintptr_t FName = 0x0100;
		constexpr uintptr_t DistanceMin = 0x0108;
		constexpr uintptr_t DistanceMax = 0x010C;
	}

	namespace SkeletalMeshActorMAT_IntroCar_TA {
		constexpr uintptr_t ViewIndex = 0x03E8;
		constexpr uintptr_t FRotator = 0x03EC;
		constexpr uintptr_t IntroCarsTemplates = 0x03F8;
	}

	namespace SkeletalMeshActorMAT_Products_TA {
		constexpr uintptr_t BodyAsset = 0x02E0;
		constexpr uintptr_t SkinAsset = 0x02E8;
		constexpr uintptr_t TeamFinishAsset = 0x02F0;
		constexpr uintptr_t CustomFinishAsset = 0x02F8;
		constexpr uintptr_t WheelAsset = 0x0300;
		constexpr uintptr_t BoostAsset = 0x0308;
		constexpr uintptr_t AntennaAsset = 0x0310;
		constexpr uintptr_t HatAsset = 0x0318;
		constexpr uintptr_t BodyPaint = 0x0320;
		constexpr uintptr_t SkinPaint = 0x0328;
		constexpr uintptr_t WheelPaint = 0x0330;
		constexpr uintptr_t Bitfields_0x0338 = 0x0338;
		constexpr uintptr_t FLinearColor = 0x033C;
		constexpr uintptr_t FLinearColor = 0x034C;
		constexpr uintptr_t FakeBoostVelocity = 0x035C;
		constexpr uintptr_t DeactivateBoostVelocity = 0x0360;
		constexpr uintptr_t CarMeshComp = 0x0368;
		constexpr uintptr_t FLWheelSKComponent = 0x0370;
		constexpr uintptr_t FRWheelSKComponent = 0x0378;
		constexpr uintptr_t BLWheelSKComponent = 0x0380;
		constexpr uintptr_t BRWheelSKComponent = 0x0388;
		constexpr uintptr_t FLWheelSMComponent = 0x0390;
		constexpr uintptr_t FRWheelSMComponent = 0x0398;
		constexpr uintptr_t BLWheelSMComponent = 0x03A0;
		constexpr uintptr_t BRWheelSMComponent = 0x03A8;
		constexpr uintptr_t WheelMeshComponents = 0x03B0;
		constexpr uintptr_t PreviewMesh = 0x03C0;
		constexpr uintptr_t AdditionalWheels = 0x03C8;
		constexpr uintptr_t NameplateComponent = 0x03D8;
		constexpr uintptr_t ProductLoader = 0x03E0;
	}

	namespace SkeletalMeshActor_NoSlomo_TA {
		constexpr uintptr_t UnknownData00 = 0x02CC;
	}

	namespace SkeletalMeshComponent_SplitBody_TA {
		constexpr uintptr_t FName = 0x07B8;
		constexpr uintptr_t FName = 0x07C0;
		constexpr uintptr_t FName = 0x07C8;
		constexpr uintptr_t FString = 0x07D0;
		constexpr uintptr_t FString = 0x07E0;
	}

	namespace SkeletalMeshComponent_TA {
		constexpr uintptr_t FOVOverride = 0x07B0;
		constexpr uintptr_t UnnamedMember_0x07B4 = 0x07B4;
	}

	namespace SkippableProperty {
		constexpr uintptr_t UnknownData00 = 0x0070;
	}

	namespace SkyLightVolumeComponent_TA {
		constexpr uintptr_t BlendDistance = 0x01D0;
		constexpr uintptr_t LightToOverride = 0x01D8;
		constexpr uintptr_t BrushComponent = 0x01E0;
		constexpr uintptr_t UnknownData00 = 0x01E8;
		constexpr uintptr_t FMatrix = 0x01F0;
	}

	namespace SkyLightVolume_TA {
		constexpr uintptr_t SkyLight = 0x02A8;
		constexpr uintptr_t UpperPaintTeam = 0x02B0;
		constexpr uintptr_t LowerPaintTeam = 0x02B1;
	}

	namespace SoundSettingsControllerSave_TA {
		constexpr uintptr_t Volume = 0x00C8;
		constexpr uintptr_t SoundMode = 0x00CC;
	}

	namespace SoundSettingsManager_TA {
		constexpr uintptr_t SoundSave = 0x0060;
		constexpr uintptr_t SoundSaveController = 0x0068;
		constexpr uintptr_t PrimaryPlayer = 0x0070;
	}

	namespace SoundSettingsSave_TA {
		constexpr uintptr_t MasterVolume = 0x00C8;
		constexpr uintptr_t SoundVolume = 0x00CC;
		constexpr uintptr_t MusicVolume = 0x00D0;
		constexpr uintptr_t GameplayMusicVolume = 0x00D4;
		constexpr uintptr_t AmbientVolume = 0x00D8;
		constexpr uintptr_t CrowdVolume = 0x00DC;
		constexpr uintptr_t VoiceVolume = 0x00E0;
		constexpr uintptr_t Bitfields_0x00E4 = 0x00E4;
		constexpr uintptr_t OutputType = 0x00E8;
		constexpr uintptr_t DynamicRangeType = 0x00E9;
		constexpr uintptr_t MusicStingersSetting = 0x00EA;
	}

	namespace SpawnDelayConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace SpawnPointCluster_TA {
		constexpr uintptr_t SpawnTeams = 0x0060;
	}

	namespace SpawnPointGroup_TA {
		constexpr uintptr_t SpawnOffset = 0x0060;
		constexpr uintptr_t SpawnFacing = 0x0070;
		constexpr uintptr_t SpawnPoints = 0x0080;
		constexpr uintptr_t SpotPRI = 0x0090;
		constexpr uintptr_t MaxSpots = 0x00A0;
	}

	namespace SpecialAttachment_TA {
		constexpr uintptr_t FVector = 0x07A8;
		constexpr uintptr_t StaticMesh = 0x07B8;
		constexpr uintptr_t BallHitMultiplier = 0x07C0;
		constexpr uintptr_t CarHitMultiplier = 0x07C4;
		constexpr uintptr_t CarHitVerticalMultiplier = 0x07C8;
		constexpr uintptr_t CarHitTorque = 0x07CC;
		constexpr uintptr_t Bitfields_0x07D0 = 0x07D0;
		constexpr uintptr_t AttachedCar = 0x07D8;
	}

	namespace SpecialEditionDatabase_TA {
		constexpr uintptr_t SpecialEditions = 0x0060;
		constexpr uintptr_t FMap_Mirror = 0x0070;
		constexpr uintptr_t UnnamedMember_0x00C0 = 0x00C0;
	}

	namespace SpecialEventConfig_TA {
		constexpr uintptr_t StoreConfigs = 0x0078;
		constexpr uintptr_t DebugMicroEventPlaylistIDs = 0x0088;
		constexpr uintptr_t CurrencyID = 0x0098;
		constexpr uintptr_t ShopID = 0x009C;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FString = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t CurrencyColor = 0x0150;
		constexpr uintptr_t BackgroundColor = 0x0154;
		constexpr uintptr_t StartTime = 0x0158;
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t EndTime = 0x0170;
		constexpr uintptr_t FString = 0x0178;
		constexpr uintptr_t RedemptionEndTime = 0x0188;
		constexpr uintptr_t FString = 0x0190;
		constexpr uintptr_t FString = 0x01A0;
		constexpr uintptr_t BackgroundLogo = 0x01B0;
		constexpr uintptr_t BackgroundImage = 0x01B8;
		constexpr uintptr_t CurrencyImage = 0x01C0;
		constexpr uintptr_t CurrencyImageLarge = 0x01C8;
		constexpr uintptr_t LogoImage = 0x01D0;
		constexpr uintptr_t UnnamedMember_0x01D8 = 0x01D8;
	}

	namespace SpecialEventErrors_TA {
		constexpr uintptr_t EventNotFound = 0x0080;
		constexpr uintptr_t EventStoreCurrencyExpired = 0x0088;
		constexpr uintptr_t EventStorePurchaseError = 0x0090;
		constexpr uintptr_t EventStoreNotEnoughCurrency = 0x0098;
		constexpr uintptr_t EventStoreLimitReached = 0x00A0;
		constexpr uintptr_t EventStoreDisabled = 0x00A8;
	}

	namespace SpecialPickup_Attachment_TA {
		constexpr uintptr_t AttachmentArchetype = 0x0388;
		constexpr uintptr_t Attachment = 0x0390;
	}

	namespace SpecialPickup_BallCarSpring_TA {
		constexpr uintptr_t FName = 0x0568;
	}

	namespace SpecialPickup_BallFreeze_TA {
		constexpr uintptr_t FreezeBreakFXArchetype = 0x03C0;
		constexpr uintptr_t FreezeFXArchetype = 0x03C8;
		constexpr uintptr_t FreezeMIC = 0x03D0;
		constexpr uintptr_t FName = 0x03D8;
		constexpr uintptr_t FInterpCurveFloat = 0x03E0;
		constexpr uintptr_t Bitfields_0x03F8 = 0x03F8;
		constexpr uintptr_t TimeToStop = 0x03FC;
		constexpr uintptr_t StopMomentumPercentage = 0x0400;
		constexpr uintptr_t FreezeSFX = 0x0408;
		constexpr uintptr_t BreakSFX = 0x0410;
		constexpr uintptr_t CopiedBallMesh = 0x0418;
		constexpr uintptr_t Ball = 0x0420;
		constexpr uintptr_t FVector = 0x0428;
		constexpr uintptr_t FVector = 0x0434;
		constexpr uintptr_t OrigSpeed = 0x0440;
		constexpr uintptr_t RepOrigSpeed = 0x0444;
		constexpr uintptr_t FreezeMat = 0x0448;
		constexpr uintptr_t FreezeFX = 0x0450;
	}

	namespace SpecialPickup_BallGravity_TA {
		constexpr uintptr_t BallGravity = 0x0388;
		constexpr uintptr_t Range = 0x038C;
		constexpr uintptr_t FVector = 0x0390;
		constexpr uintptr_t UnnamedMember_0x039C = 0x039C;
		constexpr uintptr_t BeamPSArchetype = 0x03A0;
		constexpr uintptr_t FName = 0x03A8;
		constexpr uintptr_t RecordBallHitRate = 0x03B0;
		constexpr uintptr_t BallMIC = 0x03B8;
		constexpr uintptr_t FName = 0x03C0;
		constexpr uintptr_t BallFXArchetype = 0x03C8;
		constexpr uintptr_t FInterpCurveFloat = 0x03D0;
		constexpr uintptr_t BallSFX = 0x03E8;
		constexpr uintptr_t LastRecordedBallHitTime = 0x03F0;
		constexpr uintptr_t BeamPSC = 0x03F8;
		constexpr uintptr_t BallFX = 0x0400;
		constexpr uintptr_t CopiedBallMesh = 0x0408;
		constexpr uintptr_t BMIC = 0x0410;
		constexpr uintptr_t PrevBall = 0x0418;
	}

	namespace SpecialPickup_BallLasso_TA {
		constexpr uintptr_t FName = 0x0568;
	}

	namespace SpecialPickup_BallVelcro_TA {
		constexpr uintptr_t FVector = 0x0388;
		constexpr uintptr_t Bitfields_0x0394 = 0x0394;
		constexpr uintptr_t AfterHitDuration = 0x0398;
		constexpr uintptr_t Mesh = 0x03A0;
		constexpr uintptr_t FInterpCurveFloat = 0x03A8;
		constexpr uintptr_t FInterpCurveFloat = 0x03C0;
		constexpr uintptr_t FInterpCurveFloat = 0x03D8;
		constexpr uintptr_t PostBreakDuration = 0x03F0;
		constexpr uintptr_t BallHitSFX = 0x03F8;
		constexpr uintptr_t MinBreakForce = 0x0400;
		constexpr uintptr_t MinBreakTime = 0x0404;
		constexpr uintptr_t CheckLastTouchRate = 0x0408;
		constexpr uintptr_t SMC = 0x0410;
		constexpr uintptr_t WeldedBall = 0x0418;
		constexpr uintptr_t OldBallMass = 0x0420;
		constexpr uintptr_t AttachTime = 0x0424;
		constexpr uintptr_t LastTouchCheckTime = 0x0428;
		constexpr uintptr_t BreakTime = 0x042C;
	}

	namespace SpecialPickup_Batarang_TA {
		constexpr uintptr_t SpinSpeed = 0x0570;
		constexpr uintptr_t CurRotation = 0x0574;
	}

	namespace SpecialPickup_BoostMod_TA {
		constexpr uintptr_t UnnamedMember_0x0388 = 0x0388;
		constexpr uintptr_t BoostStrength = 0x038C;
		constexpr uintptr_t OldBoostStrength = 0x0390;
	}

	namespace SpecialPickup_BoostOverride_TA {
		constexpr uintptr_t OtherCarFXArchetype = 0x03C0;
		constexpr uintptr_t BoostSFX = 0x03C8;
		constexpr uintptr_t BeamPS = 0x03D0;
		constexpr uintptr_t AddVelocityZ = 0x03D8;
		constexpr uintptr_t BeamPSC = 0x03E0;
		constexpr uintptr_t OtherCarFX = 0x03E8;
		constexpr uintptr_t OtherCar = 0x03F0;
	}

	namespace SpecialPickup_CarFreeze_TA {
		constexpr uintptr_t OtherCarFXArchetype = 0x03C0;
		constexpr uintptr_t TireFrictionScale = 0x03C8;
		constexpr uintptr_t AddAngularVelocity = 0x03CC;
		constexpr uintptr_t OtherCarFX = 0x03D0;
		constexpr uintptr_t OtherCar = 0x03D8;
	}

	namespace SpecialPickup_CarGravity_TA {
		constexpr uintptr_t GravityScale = 0x0388;
		constexpr uintptr_t FVector = 0x038C;
		constexpr uintptr_t OrigGravityScale = 0x0398;
	}

	namespace SpecialPickup_CarLaunch_TA {
		constexpr uintptr_t LaunchVelocity = 0x0388;
	}

	namespace SpecialPickup_CarSpeed_TA {
		constexpr uintptr_t SpeedMultiplier = 0x0388;
		constexpr uintptr_t MaxLinearSpeedMultiplier = 0x038C;
		constexpr uintptr_t FInterpCurveFloat = 0x0390;
		constexpr uintptr_t OriginalTorque = 0x03A8;
		constexpr uintptr_t OriginalMaxLinearSpeed = 0x03AC;
		constexpr uintptr_t FInterpCurveFloat = 0x03B0;
	}

	namespace SpecialPickup_Demolish_TA {
		constexpr uintptr_t DemolishTarget = 0x0388;
		constexpr uintptr_t DemolishSpeed = 0x0389;
		constexpr uintptr_t OldTarget = 0x038A;
		constexpr uintptr_t OldSpeed = 0x038B;
	}

	namespace SpecialPickup_Football_TA {
		constexpr uintptr_t BallHitSFX = 0x0388;
		constexpr uintptr_t DeactivateSFX = 0x0390;
		constexpr uintptr_t AttachTime = 0x0398;
		constexpr uintptr_t DetachTime = 0x039C;
		constexpr uintptr_t ThrowSettings = 0x03A0;
		constexpr uintptr_t FVector = 0x03B0;
		constexpr uintptr_t CarFumbleForce = 0x03BC;
		constexpr uintptr_t DoubleJumpUpForce = 0x03C0;
		constexpr uintptr_t DemolishUpForce = 0x03C4;
		constexpr uintptr_t MinBreakTime = 0x03C8;
		constexpr uintptr_t MinAttachTime = 0x03CC;
		constexpr uintptr_t CheckLastTouchRate = 0x03D0;
		constexpr uintptr_t OutOfBoundsZ = 0x03D4;
		constexpr uintptr_t WeldedBall = 0x03D8;
		constexpr uintptr_t LastTouchCheckTime = 0x03E0;
		constexpr uintptr_t PendingBall = 0x03E8;
		constexpr uintptr_t FVector = 0x03F0;
	}

	namespace SpecialPickup_GrapplingHook_TA {
		constexpr uintptr_t Impulse = 0x03C0;
		constexpr uintptr_t Force = 0x03C4;
		constexpr uintptr_t MaxRopeLength = 0x03C8;
		constexpr uintptr_t PredictionSpeed = 0x03CC;
		constexpr uintptr_t Bitfields_0x03D0 = 0x03D0;
		constexpr uintptr_t FInterpCurveFloat = 0x03D8;
		constexpr uintptr_t RopeMesh = 0x03F0;
		constexpr uintptr_t FVector = 0x03F8;
		constexpr uintptr_t RopeMeshInitialSize = 0x0404;
		constexpr uintptr_t FRotator = 0x0408;
		constexpr uintptr_t FName = 0x0414;
		constexpr uintptr_t FName = 0x041C;
		constexpr uintptr_t HookMesh = 0x0428;
		constexpr uintptr_t FVector = 0x0430;
		constexpr uintptr_t FVector = 0x043C;
		constexpr uintptr_t FRotator = 0x0448;
		constexpr uintptr_t HitDistanceOffset = 0x0454;
		constexpr uintptr_t AfterAttachDuration = 0x0458;
		constexpr uintptr_t HookAnimSet = 0x0460;
		constexpr uintptr_t FName = 0x0468;
		constexpr uintptr_t FName = 0x0470;
		constexpr uintptr_t BlockedRequiredMoveDistance = 0x0478;
		constexpr uintptr_t BlockedRequiredMoveTime = 0x047C;
		constexpr uintptr_t BlockedStartTime = 0x0480;
		constexpr uintptr_t FVector = 0x0484;
		constexpr uintptr_t RMC = 0x0490;
		constexpr uintptr_t RMI = 0x0498;
		constexpr uintptr_t HMC = 0x04A0;
		constexpr uintptr_t Ball = 0x04A8;
		constexpr uintptr_t FVector = 0x04B0;
		constexpr uintptr_t RopeToTime = 0x04BC;
		constexpr uintptr_t CurrentRopeLength = 0x04C0;
		constexpr uintptr_t AttachTime = 0x04C4;
	}

	namespace SpecialPickup_HandbrakeOverride_TA {
		constexpr uintptr_t OtherCar = 0x03C0;
	}

	namespace SpecialPickup_HauntedBallBeam_TA {
		constexpr uintptr_t Bitfields_0x0420 = 0x0420;
		constexpr uintptr_t PrevHauntedBall = 0x0428;
		constexpr uintptr_t MaxSimulatedClients = 0x0430;
		constexpr uintptr_t ArrivalDistance = 0x0434;
		constexpr uintptr_t FVector = 0x0438;
		constexpr uintptr_t BeamEndSFX = 0x0448;
		constexpr uintptr_t ConnectedBeamLoopSFX = 0x0450;
		constexpr uintptr_t BeamLoopSFX = 0x0458;
	}

	namespace SpecialPickup_HitForce_TA {
		constexpr uintptr_t Bitfields_0x0388 = 0x0388;
		constexpr uintptr_t BallHitForce = 0x038C;
		constexpr uintptr_t CarHitForce = 0x0390;
		constexpr uintptr_t BallHitFXArchetype = 0x0398;
		constexpr uintptr_t CarHitFXArchetype = 0x03A0;
		constexpr uintptr_t HitSFX = 0x03A8;
		constexpr uintptr_t MinFXTime = 0x03B0;
		constexpr uintptr_t OrigBallHitForce = 0x03B4;
		constexpr uintptr_t OrigCarHitForce = 0x03B8;
		constexpr uintptr_t LastFXTime = 0x03BC;
	}

	namespace SpecialPickup_Inflate_TA {
		constexpr uintptr_t ScaleMultiplier = 0x03C0;
		constexpr uintptr_t GravityMultiplier = 0x03C4;
		constexpr uintptr_t OtherCar = 0x03C8;
	}

	namespace SpecialPickup_Rugby_TA {
		constexpr uintptr_t Mesh = 0x0388;
		constexpr uintptr_t BallHitSFX = 0x0390;
		constexpr uintptr_t DeactivateSFX = 0x0398;
		constexpr uintptr_t AttachTime = 0x03A0;
		constexpr uintptr_t MinDetachTime = 0x03A4;
		constexpr uintptr_t MinBreakTime = 0x03A8;
		constexpr uintptr_t MinBreakForce = 0x03AC;
		constexpr uintptr_t CheckLastTouchRate = 0x03B0;
		constexpr uintptr_t KickOffActivationDelay = 0x03B4;
		constexpr uintptr_t BallReleaseForce = 0x03B8;
		constexpr uintptr_t BallReleaseLift = 0x03BC;
		constexpr uintptr_t Bitfields_0x03C0 = 0x03C0;
		constexpr uintptr_t MaterialInstanceOverride = 0x03C8;
		constexpr uintptr_t FLinearColor = 0x03D0;
		constexpr uintptr_t FLinearColor = 0x03E0;
		constexpr uintptr_t FName = 0x03F0;
		constexpr uintptr_t InstantDemoSFX = 0x03F8;
		constexpr uintptr_t DodgeSFX = 0x0400;
		constexpr uintptr_t SMC = 0x0408;
		constexpr uintptr_t WeldedBall = 0x0410;
		constexpr uintptr_t LastTouchCheckTime = 0x0418;
	}

	namespace SpecialPickup_Spring_TA {
		constexpr uintptr_t Force = 0x03C0;
		constexpr uintptr_t VerticalForce = 0x03C4;
		constexpr uintptr_t FVector = 0x03C8;
		constexpr uintptr_t Bitfields_0x03D4 = 0x03D4;
		constexpr uintptr_t FInterpCurveFloat = 0x03D8;
		constexpr uintptr_t RelativeForceNormalDirection = 0x03F0;
		constexpr uintptr_t MaxSpringLength = 0x03F4;
		constexpr uintptr_t ConstantForce = 0x03F8;
		constexpr uintptr_t FInterpCurveFloat = 0x0400;
		constexpr uintptr_t FInterpCurveFloat = 0x0418;
		constexpr uintptr_t FVector = 0x0430;
		constexpr uintptr_t SpringMesh = 0x0440;
		constexpr uintptr_t FVector = 0x0448;
		constexpr uintptr_t SpringMeshInitialSize = 0x0454;
		constexpr uintptr_t FRotator = 0x0458;
		constexpr uintptr_t HittingMesh = 0x0468;
		constexpr uintptr_t FVector = 0x0470;
		constexpr uintptr_t FVector = 0x047C;
		constexpr uintptr_t FRotator = 0x0488;
		constexpr uintptr_t HitDistanceOffset = 0x0494;
		constexpr uintptr_t AfterSpringDuration = 0x0498;
		constexpr uintptr_t BallHitType = 0x049C;
		constexpr uintptr_t FInterpCurveFloat = 0x04A0;
		constexpr uintptr_t HitFXArchetype = 0x04B8;
		constexpr uintptr_t ShootFXArchetype = 0x04C0;
		constexpr uintptr_t HitSFX = 0x04C8;
		constexpr uintptr_t FName = 0x04D0;
		constexpr uintptr_t FInterpCurveFloat = 0x04D8;
		constexpr uintptr_t MinSpringLength = 0x04F0;
		constexpr uintptr_t WeldedForceScalar = 0x04F4;
		constexpr uintptr_t WeldedVerticalForce = 0x04F8;
		constexpr uintptr_t CurrentSpringLength = 0x04FC;
		constexpr uintptr_t SpringedTime = 0x0500;
		constexpr uintptr_t SMC = 0x0508;
		constexpr uintptr_t SMI = 0x0510;
		constexpr uintptr_t HMC = 0x0518;
		constexpr uintptr_t HMI = 0x0520;
		constexpr uintptr_t AfterSpringTime = 0x0530;
		constexpr uintptr_t SpringToTime = 0x0534;
		constexpr uintptr_t FVector = 0x0538;
		constexpr uintptr_t FVector = 0x0544;
		constexpr uintptr_t FVector = 0x0550;
		constexpr uintptr_t SpringedLength = 0x055C;
		constexpr uintptr_t ShootFX = 0x0560;
	}

	namespace SpecialPickup_Swapper_TA {
		constexpr uintptr_t OwnCarFX = 0x03C0;
		constexpr uintptr_t OtherCarFX = 0x03C8;
		constexpr uintptr_t AddVelocityZ = 0x03D0;
		constexpr uintptr_t OtherFX = 0x03D8;
		constexpr uintptr_t OtherCar = 0x03E0;
	}

	namespace SpecialPickup_TA {
		constexpr uintptr_t FString = 0x02E0;
		constexpr uintptr_t Bitfields_0x02F0 = 0x02F0;
		constexpr uintptr_t ActiveIcon = 0x02F8;
		constexpr uintptr_t InactiveIcon = 0x0300;
		constexpr uintptr_t ActivationDuration = 0x0308;
		constexpr uintptr_t PickupFXArchetype = 0x0310;
		constexpr uintptr_t BodyReplacements = 0x0318;
		constexpr uintptr_t ShakeComponentArchetype = 0x0328;
		constexpr uintptr_t ActivateSFX = 0x0330;
		constexpr uintptr_t LocalActivateSFX = 0x0338;
		constexpr uintptr_t PickupFX = 0x0340;
		constexpr uintptr_t ShakeComp = 0x0348;
		constexpr uintptr_t PickupSlot = 0x0350;
		constexpr uintptr_t CooldownSeconds = 0x0354;
	}

	namespace SpecialPickup_Targeted_TA {
		constexpr uintptr_t Bitfields_0x0388 = 0x0388;
		constexpr uintptr_t Range = 0x038C;
		constexpr uintptr_t DirectionalTargetingAccuracy = 0x0390;
		constexpr uintptr_t ClientTarget = 0x0398;
		constexpr uintptr_t Targeted = 0x03A0;
	}

	namespace SpecialPickup_TimeBomb_TA {
		constexpr uintptr_t Radius = 0x0388;
		constexpr uintptr_t AlmostReadyDuration = 0x038C;
		constexpr uintptr_t StartMatSpeed = 0x0390;
		constexpr uintptr_t AlmostReadyMatSpeed = 0x0394;
		constexpr uintptr_t ImpulseForce = 0x0398;
		constexpr uintptr_t CarVerticalForce = 0x039C;
		constexpr uintptr_t CarTorque = 0x03A0;
		constexpr uintptr_t Bitfields_0x03A4 = 0x03A4;
	}

	namespace SpecialPickup_Tornado_TA {
		constexpr uintptr_t Height = 0x0388;
		constexpr uintptr_t Radius = 0x038C;
		constexpr uintptr_t FVector = 0x0390;
		constexpr uintptr_t FInterpCurveFloat = 0x03A0;
		constexpr uintptr_t RotationalForce = 0x03B8;
		constexpr uintptr_t FInterpCurveFloat = 0x03C0;
		constexpr uintptr_t FInterpCurveFloat = 0x03D8;
		constexpr uintptr_t Torque = 0x03F0;
		constexpr uintptr_t FVector = 0x03F4;
		constexpr uintptr_t FVector = 0x0400;
		constexpr uintptr_t TornadoMesh = 0x0410;
		constexpr uintptr_t FVector = 0x0418;
		constexpr uintptr_t FVector = 0x0424;
		constexpr uintptr_t TornadoMIC0 = 0x0430;
		constexpr uintptr_t TornadoMIC1 = 0x0438;
		constexpr uintptr_t TornadoMIC2 = 0x0440;
		constexpr uintptr_t TornadoMIC3 = 0x0448;
		constexpr uintptr_t TornadoMIC4 = 0x0450;
		constexpr uintptr_t TornadoMIC5 = 0x0458;
		constexpr uintptr_t FInterpCurveFloat = 0x0460;
		constexpr uintptr_t MaxVelocityOffset = 0x0478;
		constexpr uintptr_t BallMultiplier = 0x047C;
		constexpr uintptr_t UnnamedMember_0x0480 = 0x0480;
		constexpr uintptr_t VelocityEase = 0x0484;
		constexpr uintptr_t BallSFX = 0x0488;
		constexpr uintptr_t CarSFX = 0x0490;
		constexpr uintptr_t SMC = 0x0498;
		constexpr uintptr_t MIC0 = 0x04A0;
		constexpr uintptr_t MIC1 = 0x04A8;
		constexpr uintptr_t MIC2 = 0x04B0;
		constexpr uintptr_t MIC3 = 0x04B8;
		constexpr uintptr_t MIC4 = 0x04C0;
		constexpr uintptr_t MIC5 = 0x04C8;
		constexpr uintptr_t FVector = 0x04D0;
		constexpr uintptr_t Affecting = 0x04E0;
	}

	namespace SpectatorVolume_TA {
		constexpr uintptr_t UnknownData00 = 0x02A4;
	}

	namespace SplineFocusTarget_TA {
		constexpr uintptr_t Spline = 0x0268;
		constexpr uintptr_t DistanceAhead = 0x0270;
	}

	namespace StasisExplosionHandler_TA {
		constexpr uintptr_t FVector = 0x0150;
		constexpr uintptr_t SlowDownTime = 0x015C;
	}

	namespace StatCategory_TA {
		constexpr uintptr_t Titles = 0x0060;
		constexpr uintptr_t Multiplier = 0x0070;
	}

	namespace StatEvent_TA {
		constexpr uintptr_t Points = 0x0060;
		constexpr uintptr_t CooldownSeconds = 0x0064;
		constexpr uintptr_t Bitfields_0x0068 = 0x0068;
		constexpr uintptr_t Group = 0x0070;
		constexpr uintptr_t Texture = 0x0078;
		constexpr uintptr_t FName = 0x0080;
		constexpr uintptr_t DisplayProductStatClass = 0x0088;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
	}

	namespace StatFactoryBase_TA {
		constexpr uintptr_t AllStatEvents = 0x0268;
	}

	namespace StatFactory_Basketball_TA {
		constexpr uintptr_t HoopsSwishGoal = 0x04F0;
		constexpr uintptr_t RedZoneHeightScale = 0x04F8;
	}

	namespace StatFactory_Breakout_TA {
		constexpr uintptr_t BreakoutDamage = 0x04F0;
		constexpr uintptr_t BreakoutDamageLarge = 0x04F8;
		constexpr uintptr_t BreakoutSaveDamageThreshold = 0x0500;
		constexpr uintptr_t BreakoutDamageLargeThreshold = 0x0504;
		constexpr uintptr_t ShotGoalTimestep = 0x0508;
		constexpr uintptr_t BreakoutEvent = 0x0510;
		constexpr uintptr_t FVector = 0x0518;
	}

	namespace StatFactory_HauntedBall_TA {
		constexpr uintptr_t EpicSaveTime = 0x04F0;
	}

	namespace StatFactory_KnockOut_TA {
		constexpr uintptr_t FStatEventCollection_KO = 0x04F0;
		constexpr uintptr_t KnockOutGame = 0x0588;
		constexpr uintptr_t AerialHitFloorDistance = 0x0590;
	}

	namespace StatFactory_TA {
		constexpr uintptr_t FStatEventCollection = 0x0278;
		constexpr uintptr_t BallCache = 0x0460;
		constexpr uintptr_t GoalSizeFudge = 0x0470;
		constexpr uintptr_t ShotMaxTime = 0x0474;
		constexpr uintptr_t ShotArriveTime = 0x0478;
		constexpr uintptr_t ShotMaxDistance = 0x047C;
		constexpr uintptr_t RedZoneDistance = 0x0480;
		constexpr uintptr_t JuggleMinSpeed = 0x0484;
		constexpr uintptr_t BulletHitSpeed = 0x0488;
		constexpr uintptr_t AerialHitHeight = 0x048C;
		constexpr uintptr_t AerialHitMinRelSpeed = 0x0490;
		constexpr uintptr_t BicycleSpinSpeed = 0x0494;
		constexpr uintptr_t LongGoalDistance = 0x0498;
		constexpr uintptr_t HatTrickThreshold = 0x049C;
		constexpr uintptr_t PlaymakerThreshold = 0x04A0;
		constexpr uintptr_t SaviorThreshold = 0x04A4;
		constexpr uintptr_t DemolitionThreshold = 0x04A8;
		constexpr uintptr_t UnnamedMember_0x04AC = 0x04AC;
		constexpr uintptr_t SoccarGame = 0x04B0;
		constexpr uintptr_t ScoringPRI = 0x04B8;
		constexpr uintptr_t CarsIssuedAnyFiveHit = 0x04C0;
		constexpr uintptr_t MinPossessionTimeForSteal = 0x04D0;
		constexpr uintptr_t CrossbarHitsCooldown = 0x04D4;
	}

	namespace StatGraphDrawer_TA {
		constexpr uintptr_t History = 0x0060;
		constexpr uintptr_t MaxSampleAge = 0x0068;
		constexpr uintptr_t Scale = 0x006C;
		constexpr uintptr_t PixelsPerSample = 0x0070;
		constexpr uintptr_t ValueStartX = 0x0074;
		constexpr uintptr_t MaxCharHeight = 0x0078;
		constexpr uintptr_t SpaceWidth = 0x007C;
		constexpr uintptr_t LabelMaxWidth = 0x0080;
		constexpr uintptr_t ValueMaxWidth = 0x0084;
		constexpr uintptr_t GridCellWidth = 0x0088;
		constexpr uintptr_t GridCellHeight = 0x008C;
		constexpr uintptr_t GraphWidth = 0x0090;
		constexpr uintptr_t GraphHeight = 0x0094;
		constexpr uintptr_t GraphStartX = 0x0098;
		constexpr uintptr_t GraphEndX = 0x009C;
		constexpr uintptr_t X = 0x00A0;
		constexpr uintptr_t Y = 0x00A4;
		constexpr uintptr_t Canvas = 0x00A8;
		constexpr uintptr_t SummaryLabels = 0x00B0;
		constexpr uintptr_t GridLines = 0x00C0;
		constexpr uintptr_t SampleLines = 0x00D0;
		constexpr uintptr_t SampleLineIndex = 0x00E0;
	}

	namespace StatGraphSystem_TA {
		constexpr uintptr_t GraphSampleTime = 0x0070;
		constexpr uintptr_t GraphLevel = 0x0074;
		constexpr uintptr_t PerfStatGraph = 0x0078;
		constexpr uintptr_t NetStatGraph = 0x0080;
		constexpr uintptr_t InputBufferGraph = 0x0088;
		constexpr uintptr_t StatGraphs = 0x0090;
		constexpr uintptr_t VisibleStatGraphs = 0x00A0;
		constexpr uintptr_t PreallocGraphLines = 0x00B0;
	}

	namespace StatGraph_TA {
		constexpr uintptr_t RecordSettings = 0x0070;
		constexpr uintptr_t FDouble = 0x0078;
		constexpr uintptr_t SampleHistories = 0x0080;
	}

	namespace StatTitle_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t Points = 0x0080;
		constexpr uintptr_t MinStatValueRequired = 0x0084;
		constexpr uintptr_t MaxStatValueAllowed = 0x0088;
		constexpr uintptr_t Stat = 0x0090;
		constexpr uintptr_t Bitfields_0x0098 = 0x0098;
		constexpr uintptr_t StatUnitType = 0x009C;
	}

	namespace StaticMeshActor_TA {
		constexpr uintptr_t StaticMeshComponent = 0x0268;
	}

	namespace StaticMeshComponent_TA {
		constexpr uintptr_t UnnamedMember_0x0300 = 0x0300;
	}

	namespace StatusObserver_FTE_TA {
		constexpr uintptr_t FName = 0x00A0;
		constexpr uintptr_t FTEManager = 0x00A8;
	}

	namespace StatusObserver_MenuStack_TA {
		constexpr uintptr_t FName = 0x00A0;
		constexpr uintptr_t FName = 0x00A8;
		constexpr uintptr_t FName = 0x00B0;
		constexpr uintptr_t FName = 0x00B8;
		constexpr uintptr_t CrumbManager = 0x00C0;
		constexpr uintptr_t CrumbSave = 0x00C8;
	}

	namespace StatusObserver_OnlineMatchEnded_TA {
		constexpr uintptr_t UnnamedMember_0x00A0 = 0x00A0;
	}

	namespace StatusObserver_Products_TA {
		constexpr uintptr_t LastEquippedProducts = 0x00A0;
		constexpr uintptr_t LastOwnedProducts = 0x00B0;
		constexpr uintptr_t LastTeamIndex = 0x00C0;
		constexpr uintptr_t SaveData = 0x00C8;
		constexpr uintptr_t ProductsSave = 0x00D0;
		constexpr uintptr_t ProfileLoadoutSave = 0x00D8;
		constexpr uintptr_t PendingChangedProductSlots = 0x00E0;
	}

	namespace StatusObserver_XPLevel_TA {
		constexpr uintptr_t LastGivenXp = 0x00A0;
		constexpr uintptr_t LastGivenLevel = 0x00A4;
	}

	namespace StatusTriggerManager_TA {
		constexpr uintptr_t Observers = 0x0060;
		constexpr uintptr_t Conditions = 0x0070;
	}

	namespace StatusTrigger_FTEGroupComplete_TA {
		constexpr uintptr_t FName = 0x0080;
	}

	namespace StatusTrigger_Named_TA {
		constexpr uintptr_t FName = 0x0080;
	}

	namespace StatusTrigger_Numerical_TA {
		constexpr uintptr_t TCNType = 0x0080;
		constexpr uintptr_t ConditionalValue = 0x0084;
	}

	namespace StatusTrigger_Product_TA {
		constexpr uintptr_t ConditionalValue = 0x0080;
	}

	namespace StayAsPartyLeader_TA {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace StayAsPartyVoteYes_TA {
		constexpr uintptr_t Voter = 0x0268;
	}

	namespace StayAsPartyVote_TA {
		constexpr uintptr_t Voters = 0x0060;
		constexpr uintptr_t VotedYes = 0x0070;
		constexpr uintptr_t PendingMerges = 0x0080;
		constexpr uintptr_t MergeRecord = 0x0090;
		constexpr uintptr_t MergeErrors = 0x00A0;
	}

	namespace StayAsPartyVoter_TA {
		constexpr uintptr_t FUniqueNetId = 0x0268;
		constexpr uintptr_t Followers = 0x02B0;
		constexpr uintptr_t YesVote = 0x02C0;
		constexpr uintptr_t UnnamedMember_0x02C8 = 0x02C8;
		constexpr uintptr_t PRI = 0x02D0;
	}

	namespace StoredChatData_TA {
		constexpr uintptr_t ChatChannel = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x0068;
		constexpr uintptr_t LastChatUpdate = 0x00B0;
		constexpr uintptr_t Messages = 0x00B8;
		constexpr uintptr_t UnnamedMember_0x00C8 = 0x00C8;
	}

	namespace StreamerSafeConfig_TA {
		constexpr uintptr_t StreamerSafeSoundCueNames = 0x0078;
		constexpr uintptr_t FallbackStreamerSafeTitleTracks = 0x0088;
		constexpr uintptr_t UnnamedMember_0x0098 = 0x0098;
	}

	namespace Stunlock_TA {
		constexpr uintptr_t Car = 0x0268;
		constexpr uintptr_t ButtonMashReduceTime = 0x0270;
		constexpr uintptr_t MinTimeBetweenMashes = 0x0274;
		constexpr uintptr_t LastMashTime = 0x0278;
		constexpr uintptr_t MaxStunTime = 0x027C;
		constexpr uintptr_t StunTimeRemaining = 0x0280;
		constexpr uintptr_t MashTime = 0x0284;
		constexpr uintptr_t UnnamedMember_0x0288 = 0x0288;
	}

	namespace SupportACreatorErrors_TA {
		constexpr uintptr_t InvalidSupportACreatorCode = 0x0080;
	}

	namespace SystemSettingsManager_TA {
		constexpr uintptr_t NumPlayers = 0x0060;
	}

	namespace TAsyncResult__PrivilegeCheck_X {
		constexpr uintptr_t Result = 0x00D0;
	}

	namespace TAsyncResult__UserBugReportUploadResult_TA {
		constexpr uintptr_t Result = 0x00D0;
	}

	namespace TargetIndicator_TA {
		constexpr uintptr_t MinTranslationX = 0x0308;
		constexpr uintptr_t MaxTranslationX = 0x030C;
		constexpr uintptr_t MinDistance = 0x0310;
		constexpr uintptr_t MaxDistance = 0x0314;
		constexpr uintptr_t ZTranslationOffset = 0x0318;
		constexpr uintptr_t MaxDisplayDistance = 0x031C;
		constexpr uintptr_t DistanceScaleMultiplier = 0x0320;
		constexpr uintptr_t TargetActor = 0x0328;
	}

	namespace Target_Knockout_TA {
		constexpr uintptr_t UnknownData00 = 0x00C4;
	}

	namespace Target_TA {
		constexpr uintptr_t FVector = 0x00A8;
		constexpr uintptr_t FVector = 0x00B4;
		constexpr uintptr_t Priority = 0x00C0;
	}

	namespace Target_World_TA {
		constexpr uintptr_t UnknownData00 = 0x00C4;
	}

	namespace TeamColorPreferences_TA {
		constexpr uintptr_t Bitfields_0x0060 = 0x0060;
	}

	namespace TeamColorScriptedTexture_TA {
		constexpr uintptr_t PixelColorList = 0x01B8;
		constexpr uintptr_t UnnamedMember_0x01C8 = 0x01C8;
	}

	namespace TeamNameComponent_TA {
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
		constexpr uintptr_t TeamIndex = 0x0084;
	}

	namespace Team_Soccar_TA {
		constexpr uintptr_t GameScore = 0x0480;
		constexpr uintptr_t PrimaryStarts = 0x0488;
		constexpr uintptr_t SecondaryStarts = 0x0498;
	}

	namespace Team_TA {
		constexpr uintptr_t CarColorSet = 0x0290;
		constexpr uintptr_t CarColorSet_v1 = 0x0298;
		constexpr uintptr_t CarColorSet_v2 = 0x02A0;
		constexpr uintptr_t FLinearColor = 0x02A8;
		constexpr uintptr_t FLinearColor = 0x02B8;
		constexpr uintptr_t Crossplay = 0x02C8;
		constexpr uintptr_t FColor = 0x02D0;
		constexpr uintptr_t FColor = 0x02D4;
		constexpr uintptr_t TeamScriptedTexture = 0x02D8;
		constexpr uintptr_t DefaultColorList = 0x02E0;
		constexpr uintptr_t ColorBlindColorList = 0x02F0;
		constexpr uintptr_t CurrentColorList = 0x0300;
		constexpr uintptr_t GameEvent = 0x0310;
		constexpr uintptr_t Members = 0x0318;
		constexpr uintptr_t FormerMembers = 0x0328;
		constexpr uintptr_t FString = 0x0338;
		constexpr uintptr_t TeamNameComponent = 0x0348;
		constexpr uintptr_t ClubID = 0x0350;
		constexpr uintptr_t Logo = 0x0358;
		constexpr uintptr_t FReplicatedLogoData = 0x0360;
		constexpr uintptr_t FClubColorSet = 0x0368;
		constexpr uintptr_t ForfeitVoteArchetype = 0x0370;
		constexpr uintptr_t ForfeitVote = 0x0378;
		constexpr uintptr_t PartyUpVote = 0x0380;
		constexpr uintptr_t UnnamedMember_0x0388 = 0x0388;
		constexpr uintptr_t TemporarySpawnSpots = 0x0390;
		constexpr uintptr_t Difficulty = 0x03A0;
	}

	namespace ThankYouMessageConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace ThrottleShakeComponent_TA {
		constexpr uintptr_t ThrottleRiseSpeed = 0x01B8;
		constexpr uintptr_t ThrottleFallSpeed = 0x01BC;
		constexpr uintptr_t Throttle = 0x01C0;
	}

	namespace ThrottleStateComponent_TA {
		constexpr uintptr_t EngageSound = 0x00A8;
		constexpr uintptr_t ReleaseSound = 0x00B0;
		constexpr uintptr_t Car = 0x00B8;
		constexpr uintptr_t PrevThrottle = 0x00C0;
		constexpr uintptr_t Bitfields_0x00C4 = 0x00C4;
	}

	namespace ThumbnailRenderer_TA {
		constexpr uintptr_t FRotator = 0x0060;
		constexpr uintptr_t FVector = 0x006C;
		constexpr uintptr_t CameraFOV = 0x0078;
		constexpr uintptr_t Bitfields_0x007C = 0x007C;
		constexpr uintptr_t FRotator = 0x0080;
		constexpr uintptr_t FVector = 0x008C;
		constexpr uintptr_t ScenePrefab = 0x0098;
		constexpr uintptr_t ScenePostProcessChain = 0x00A0;
		constexpr uintptr_t FPostProcessSettings = 0x00A8;
		constexpr uintptr_t FLinearColor = 0x0210;
		constexpr uintptr_t RenderWidth = 0x0220;
		constexpr uintptr_t RenderHeight = 0x0224;
		constexpr uintptr_t TextureWidth = 0x0228;
		constexpr uintptr_t TextureHeight = 0x022C;
		constexpr uintptr_t MipGenSettings = 0x0230;
		constexpr uintptr_t LODBias = 0x0234;
	}

	namespace ThumbnailScene_TA {
		constexpr uintptr_t SceneComponents = 0x0060;
		constexpr uintptr_t FVector = 0x0070;
		constexpr uintptr_t FRotator = 0x007C;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
		constexpr uintptr_t Background = 0x0090;
		constexpr uintptr_t FPointer = 0x0098;
		constexpr uintptr_t CameraFOV = 0x00A0;
		constexpr uintptr_t TeamID = 0x00A4;
	}

	namespace TickNotifyDelegate_TA {
		constexpr uintptr_t FPointer = 0x0060;
	}

	namespace TourBracketCache_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t Config = 0x0068;
		constexpr uintptr_t Brackets = 0x0070;
		constexpr uintptr_t Requests = 0x0080;
	}

	namespace TourBracketSync_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t PollIntervalSeconds = 0x0068;
		constexpr uintptr_t FUniqueNetId = 0x0070;
		constexpr uintptr_t Settings = 0x00B8;
		constexpr uintptr_t GetBracketTask = 0x00C0;
	}

	namespace TourCheckInError_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t Party = 0x0068;
		constexpr uintptr_t FUniqueNetId = 0x0070;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t Settings = 0x00C8;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t PartyErrorType = 0x00E0;
		constexpr uintptr_t FString = 0x00E8;
		constexpr uintptr_t ErrorType = 0x00F8;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FString = 0x0110;
	}

	namespace TourCheckInWindowWatcher_TA {
		constexpr uintptr_t Config = 0x0060;
		constexpr uintptr_t NextTournament = 0x0068;
		constexpr uintptr_t CheckInWindowSeconds = 0x0070;
		constexpr uintptr_t ActivityWindowSeconds = 0x0078;
	}

	namespace TourCheckIn_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t CheckInTask = 0x0068;
	}

	namespace TourConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t CheckInWindowMinutes = 0x007C;
		constexpr uintptr_t CreateFutureMinutes = 0x0080;
		constexpr uintptr_t ActivityWindowMinutes = 0x0084;
		constexpr uintptr_t NextMatchPollIntervalSeconds = 0x0088;
		constexpr uintptr_t NextMatchPollIntervalSecondsPushEnabled = 0x008C;
		constexpr uintptr_t FirstMatchRequestOffsetMin = 0x0090;
		constexpr uintptr_t FirstMatchRequestOffsetMax = 0x0094;
		constexpr uintptr_t PausedRpcDelaySeconds = 0x0098;
		constexpr uintptr_t CreateFutureMaxDays = 0x009C;
		constexpr uintptr_t BracketCacheSeconds = 0x00A0;
		constexpr uintptr_t AllowedTeamSizes = 0x00A8;
		constexpr uintptr_t FString = 0x00B8;
		constexpr uintptr_t MaxBracketSize = 0x00C8;
		constexpr uintptr_t TeamSizeToPlaylistMap = 0x00D0;
		constexpr uintptr_t GameModeToPlaylistMap = 0x00E0;
		constexpr uintptr_t MaxJoinServerAttempts = 0x00F0;
		constexpr uintptr_t JoinServerAttemptsMessagingLimit = 0x00F1;
		constexpr uintptr_t MatchmakingDelay = 0x00F4;
		constexpr uintptr_t MinCheckInDelaySeconds = 0x00F8;
		constexpr uintptr_t MaxCheckInDelaySeconds = 0x00FC;
		constexpr uintptr_t CheckInDelaySeconds = 0x0100;
		constexpr uintptr_t PlaylistsWithDynamicMapsets = 0x0108;
	}

	namespace TourCredentials_TA {
		constexpr uintptr_t CredentialsMap = 0x0060;
	}

	namespace TourDetailsSync_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t PollIntervalSeconds = 0x0068;
		constexpr uintptr_t FUniqueNetId = 0x0070;
		constexpr uintptr_t Settings = 0x00B8;
		constexpr uintptr_t GetBracketTask = 0x00C0;
	}

	namespace TourErrors_TA {
		constexpr uintptr_t TournamentFull = 0x0080;
		constexpr uintptr_t TournamentPaused = 0x0088;
		constexpr uintptr_t TournamentsDisabled = 0x0090;
		constexpr uintptr_t InActiveTournament = 0x0098;
		constexpr uintptr_t SplitScreenIsInActiveTournament = 0x00A0;
		constexpr uintptr_t NoMatchFound = 0x00A8;
		constexpr uintptr_t TeamEliminated = 0x00B0;
		constexpr uintptr_t AlreadyRegistered = 0x00B8;
		constexpr uintptr_t NotAdmin = 0x00C0;
		constexpr uintptr_t NotEligible = 0x00C8;
		constexpr uintptr_t AlreadyStarted = 0x00D0;
		constexpr uintptr_t InvalidTournamentState = 0x00D8;
		constexpr uintptr_t InvalidCredentials = 0x00E0;
		constexpr uintptr_t TournamentNotFound = 0x00E8;
		constexpr uintptr_t TournamentHasConcluded = 0x00F0;
		constexpr uintptr_t CheckInRankIneligible = 0x00F8;
		constexpr uintptr_t CheckInNotOpen = 0x0100;
		constexpr uintptr_t CheckInRequiresPartyLeader = 0x0108;
		constexpr uintptr_t TooManyPlayersCheckingIn = 0x0110;
		constexpr uintptr_t CannotMatchmakeIfRegistered = 0x0118;
		constexpr uintptr_t CannotCheckInWhileOnline = 0x0120;
		constexpr uintptr_t CannotCancelAfterRegistration = 0x0128;
		constexpr uintptr_t TournamentHasBeenCancelled = 0x0130;
		constexpr uintptr_t TeamSizeTooLarge = 0x0138;
		constexpr uintptr_t TeamSizeTooSmall = 0x0140;
		constexpr uintptr_t PlayerNotRegistered = 0x0148;
		constexpr uintptr_t TeamNameNotAllowed = 0x0150;
		constexpr uintptr_t TournamentNameNotAllowed = 0x0158;
		constexpr uintptr_t TournamentCreateLimitReached = 0x0160;
		constexpr uintptr_t AutoTournamentNoTeamFound = 0x0168;
		constexpr uintptr_t AutoTournamentRequiresCrossplatform = 0x0170;
		constexpr uintptr_t AutoTourmamentRequiresCrossplatformNotLeader = 0x0178;
		constexpr uintptr_t AutoTournamentBanned = 0x0180;
		constexpr uintptr_t AutoTournamentResultsRevoked = 0x0188;
		constexpr uintptr_t IneligibleForLateTournament = 0x0190;
		constexpr uintptr_t PlayerNotInTourTeam = 0x0198;
		constexpr uintptr_t PartyMembersNotInTourTeam = 0x01A0;
		constexpr uintptr_t KickedNotInPartyTour = 0x01A8;
		constexpr uintptr_t KickedPartyIsCheckingIn = 0x01B0;
		constexpr uintptr_t NoSplitscreenDuringCheckin = 0x01B8;
		constexpr uintptr_t NoInvitesWhileCheckingIn = 0x01C0;
		constexpr uintptr_t NoJoiningWhileCheckingIn = 0x01C8;
		constexpr uintptr_t SkillRequirementsNotMet = 0x01D0;
		constexpr uintptr_t PartySkillRequirementsNotMet = 0x01D8;
		constexpr uintptr_t ScheduleRegionIsLocked = 0x01E0;
		constexpr uintptr_t ScheduleRegionIsInvalid = 0x01E8;
		constexpr uintptr_t ScheduleRegionNotSet = 0x01F0;
		constexpr uintptr_t TourCreateCrossplatformDisabled = 0x01F8;
		constexpr uintptr_t CustomTourmamentRequiresCrossplatform = 0x0200;
		constexpr uintptr_t CannotSpectateWhileInParty = 0x0208;
		constexpr uintptr_t TourRankDisparity = 0x0210;
		constexpr uintptr_t TourTroubleConnectingToServer = 0x0218;
	}

	namespace TourEventMatchComplete_TA {
		constexpr uintptr_t GameEvent = 0x0060;
	}

	namespace TourEventMatch_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t Config = 0x0068;
		constexpr uintptr_t TourMatchmaking = 0x0070;
		constexpr uintptr_t PsyNet = 0x0078;
		constexpr uintptr_t FUniqueNetId = 0x0080;
		constexpr uintptr_t TournamentID = 0x00C8;
		constexpr uintptr_t TeamID = 0x00D0;
		constexpr uintptr_t FTourMatch = 0x00D8;
		constexpr uintptr_t FTourMatch = 0x0108;
		constexpr uintptr_t PrevMatchID = 0x0138;
		constexpr uintptr_t Error = 0x0140;
		constexpr uintptr_t GetMatchTask = 0x0148;
		constexpr uintptr_t FString = 0x0150;
		constexpr uintptr_t FString = 0x0160;
	}

	namespace TourEvent_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t TourMatchmaking = 0x0068;
		constexpr uintptr_t FUniqueNetId = 0x0070;
		constexpr uintptr_t ActiveTour = 0x00B8;
		constexpr uintptr_t FTourTeam = 0x00C0;
		constexpr uintptr_t EventMatch = 0x0108;
		constexpr uintptr_t MatchComplete = 0x0110;
	}

	namespace TourGameUpdateDispatcher_TA {
		constexpr uintptr_t MatchSeries = 0x0060;
		constexpr uintptr_t Reservations = 0x0068;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t TournamentID = 0x0090;
		constexpr uintptr_t MatchID = 0x0098;
		constexpr uintptr_t GameNum = 0x009C;
		constexpr uintptr_t TeamIDs = 0x00A0;
		constexpr uintptr_t FTourMatchGame = 0x00B0;
		constexpr uintptr_t ReservedPlayerIDs = 0x00C8;
		constexpr uintptr_t SeriesWinningTeamID = 0x00D8;
		constexpr uintptr_t PsyNetTeamIdOrder = 0x00E0;
		constexpr uintptr_t GameUpdate = 0x00F0;
		constexpr uintptr_t InactiveGameTimeValue = 0x00F8;
	}

	namespace TourGameUpdate_FaceIt_TA {
		constexpr uintptr_t UnknownData00 = 0x0084;
	}

	namespace TourGameUpdate_TA {
		constexpr uintptr_t JoinedPlayers = 0x0060;
		constexpr uintptr_t IdlePlayers = 0x0070;
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace TourList_TA {
		constexpr uintptr_t Tournaments = 0x0070;
		constexpr uintptr_t Results = 0x0080;
	}

	namespace TourMatchInfoMessage_TA {
		constexpr uintptr_t FTourServerSettings = 0x0070;
		constexpr uintptr_t Playlist = 0x0158;
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t FString = 0x0180;
	}

	namespace TourMatchServerBrowser_TA {
		constexpr uintptr_t GetMatchTask = 0x0060;
	}

	namespace TourPartyCheckInTransaction_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t Party = 0x0068;
		constexpr uintptr_t CheckInError = 0x0070;
		constexpr uintptr_t Settings = 0x0078;
		constexpr uintptr_t UnnamedMember_0x0080 = 0x0080;
	}

	namespace TourPartyCheckIn_TA {
		constexpr uintptr_t TourConfig = 0x0060;
		constexpr uintptr_t FString = 0x0068;
		constexpr uintptr_t Tournaments = 0x0078;
		constexpr uintptr_t Party = 0x0080;
	}

	namespace TourPartyLeaderLeave_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t Party = 0x0068;
	}

	namespace TourRegistration_TA {
		constexpr uintptr_t Tournaments = 0x0060;
		constexpr uintptr_t Subscriptions = 0x0068;
		constexpr uintptr_t RegistrationTask = 0x0070;
	}

	namespace TourRewards_TA {
		constexpr uintptr_t Results = 0x0060;
		constexpr uintptr_t Requests = 0x0070;
	}

	namespace TourServerConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t MidSeriesConnectionTimeout = 0x007C;
	}

	namespace TourServerInfo_FaceIt_TA {
		constexpr uintptr_t FFaceItReservationMatchInfo = 0x0078;
	}

	namespace TourServerInfo_TA {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t NumAllowedSpectators = 0x0068;
		constexpr uintptr_t Bitfields_0x006C = 0x006C;
		constexpr uintptr_t GameUpdateClass = 0x0070;
	}

	namespace TourSettingsCache_TA {
		constexpr uintptr_t TourLists = 0x0060;
	}

	namespace TourSettings_TA {
		constexpr uintptr_t Id = 0x0060;
		constexpr uintptr_t ScheduleID = 0x0068;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FUniqueNetId = 0x0090;
		constexpr uintptr_t StartTime = 0x00D8;
		constexpr uintptr_t GenerateBracketTime = 0x00E0;
		constexpr uintptr_t MaxBracketSize = 0x00E8;
		constexpr uintptr_t TeamsRegistered = 0x00EC;
		constexpr uintptr_t RankMin = 0x00F0;
		constexpr uintptr_t RankMax = 0x00F4;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t FString = 0x0108;
		constexpr uintptr_t FString = 0x0118;
		constexpr uintptr_t GameMode = 0x0128;
		constexpr uintptr_t TieBreaker = 0x0129;
		constexpr uintptr_t SeedingType = 0x012A;
		constexpr uintptr_t GameModes = 0x0130;
		constexpr uintptr_t TeamSize = 0x0140;
		constexpr uintptr_t DisabledMaps = 0x0148;
		constexpr uintptr_t SeriesRoundLengths = 0x0158;
		constexpr uintptr_t SeriesLength = 0x0168;
		constexpr uintptr_t FinalSeriesLength = 0x016C;
		constexpr uintptr_t Bitfields_0x0170 = 0x0170;
		constexpr uintptr_t MinPlayersPerTeam = 0x0174;
		constexpr uintptr_t MatchExpireTimestamp = 0x0178;
		constexpr uintptr_t Platforms = 0x0180;
	}

	namespace TourStatus_TA {
		constexpr uintptr_t Statuses = 0x0060;
		constexpr uintptr_t Tournaments = 0x0070;
	}

	namespace TourSubscriptions_TA {
		constexpr uintptr_t TourList = 0x0060;
		constexpr uintptr_t GFxTourList = 0x0068;
		constexpr uintptr_t Created = 0x0070;
		constexpr uintptr_t AdminOf = 0x0080;
		constexpr uintptr_t RegisteredTo = 0x0090;
		constexpr uintptr_t WindowWatcher = 0x00A0;
		constexpr uintptr_t GetSubscriptionsRPC = 0x00A8;
		constexpr uintptr_t UnnamedMember_0x00B0 = 0x00B0;
		constexpr uintptr_t SyncError = 0x00B8;
		constexpr uintptr_t LastEarlyLeaveTournamentID = 0x00C0;
		constexpr uintptr_t LastSpectatedTourID = 0x00C8;
	}

	namespace TournamentCompletedEvent_TA {
		constexpr uintptr_t TourID = 0x0060;
		constexpr uintptr_t ScheduleID = 0x0068;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
	}

	namespace TournamentSettingsSave_TA {
		constexpr uintptr_t FTourCreateSettings = 0x00C8;
		constexpr uintptr_t FTourSearchSettings = 0x0100;
		constexpr uintptr_t GameTags = 0x0160;
		constexpr uintptr_t FString = 0x0168;
	}

	namespace TraceableSpawnPoint_TA {
		constexpr uintptr_t CylinderComp = 0x0268;
	}

	namespace TradeConfig_TA {
		constexpr uintptr_t MinimumLevelToTrade = 0x0078;
	}

	namespace TradeErrors_TA {
		constexpr uintptr_t AttemptedCurrencyGifting = 0x0080;
		constexpr uintptr_t AttemptedCurrencyExchange = 0x0088;
		constexpr uintptr_t UserTradeBanned = 0x0090;
		constexpr uintptr_t TradeNotAllowed = 0x0098;
		constexpr uintptr_t OtherPlayerTradeNotAllowed = 0x00A0;
		constexpr uintptr_t OtherPlayerBanned = 0x00A8;
		constexpr uintptr_t TradeMinLevelNotReached = 0x00B0;
		constexpr uintptr_t TradeMinPlayTimeNotReached = 0x00B8;
		constexpr uintptr_t TradeDailyLimitReached = 0x00C0;
		constexpr uintptr_t TradeExceedCurrencyLimit = 0x00C8;
		constexpr uintptr_t TradePlayerNotInParty = 0x00D0;
	}

	namespace TrainingConfig_TA {
		constexpr uintptr_t MaxHistoryItems = 0x0078;
		constexpr uintptr_t Bitfields_0x007C = 0x007C;
	}

	namespace TrainingEditorData_TA {
		constexpr uintptr_t FGuid = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t Type = 0x0090;
		constexpr uintptr_t Difficulty = 0x0091;
		constexpr uintptr_t FString = 0x0098;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t Tags = 0x00B8;
		constexpr uintptr_t FName = 0x00C8;
		constexpr uintptr_t NumRounds = 0x00D0;
		constexpr uintptr_t CreatedAt = 0x00D8;
		constexpr uintptr_t UpdatedAt = 0x00E0;
		constexpr uintptr_t FUniqueNetId = 0x00E8;
		constexpr uintptr_t Rounds = 0x0130;
	}

	namespace TrainingEditorManipulationConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
	}

	namespace TrainingEditorMetrics_TA {
		constexpr uintptr_t TrainingMetricsConfig = 0x0080;
		constexpr uintptr_t NavigationCommands = 0x0088;
		constexpr uintptr_t ManipulationCommands = 0x0098;
		constexpr uintptr_t BatchThreshold = 0x00A8;
	}

	namespace TrainingEditorMirror_TA {
		constexpr uintptr_t TrainingEditor = 0x0060;
		constexpr uintptr_t CurrentRoundNumber = 0x0068;
		constexpr uintptr_t FVector = 0x006C;
		constexpr uintptr_t FVector = 0x0078;
		constexpr uintptr_t FRotator = 0x0084;
		constexpr uintptr_t Pylon = 0x0090;
		constexpr uintptr_t MirrorOverride = 0x0098;
		constexpr uintptr_t UnnamedMember_0x00A0 = 0x00A0;
	}

	namespace TrainingEditorNavigationConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
	}

	namespace TrainingEditorNavigation_TA {
		constexpr uintptr_t TrainingNavigationConfig = 0x0060;
		constexpr uintptr_t RoundStarter_Object = 0x0068;
		constexpr uintptr_t RoundStarter_Interface = 0x0070;
		constexpr uintptr_t RoundNumberGetter_Object = 0x0078;
		constexpr uintptr_t RoundNumberGetter_Interface = 0x0080;
		constexpr uintptr_t ShotAttemptGetter_Object = 0x0088;
		constexpr uintptr_t ShotAttemptGetter_Interface = 0x0090;
		constexpr uintptr_t UnshuffledPlaylist = 0x0098;
		constexpr uintptr_t ActivePlaylist = 0x00A8;
		constexpr uintptr_t CurrentActivePlaylistIndex = 0x00B8;
		constexpr uintptr_t CurrentUnshuffledPlaylistIndex = 0x00BC;
		constexpr uintptr_t Bitfields_0x00C0 = 0x00C0;
	}

	namespace TrainingMetricsConfig_TA {
		constexpr uintptr_t BatchThreshold = 0x0078;
	}

	namespace TrainingPackProgress_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t Progress = 0x0070;
		constexpr uintptr_t TimeLastPlayed = 0x0080;
	}

	namespace TrainingProgressFactory_TA {
		constexpr uintptr_t ProgressSave = 0x0060;
	}

	namespace TrainingProgressSave_TA {
		constexpr uintptr_t AllPacksProgress = 0x00C8;
	}

	namespace TrainingProgressTracker_TA {
		constexpr uintptr_t TrainingEditor = 0x0060;
		constexpr uintptr_t CurrentProgress = 0x0068;
		constexpr uintptr_t ProgressFactory = 0x0070;
	}

	namespace TravelManager_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0070 = 0x0070;
		constexpr uintptr_t FString = 0x0078;
		constexpr uintptr_t GameTags = 0x0088;
		constexpr uintptr_t Options = 0x0098;
	}

	namespace TriggerClump_TA {
		constexpr uintptr_t Triggers = 0x0060;
	}

	namespace TriggerCondition_TA {
		constexpr uintptr_t Clumps = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0088 = 0x0088;
	}

	namespace TurnTableActor_TA {
		constexpr uintptr_t RotateComponent = 0x02D0;
		constexpr uintptr_t Bitfields_0x02D8 = 0x02D8;
		constexpr uintptr_t FName = 0x02DC;
		constexpr uintptr_t FName = 0x02E4;
		constexpr uintptr_t FName = 0x02EC;
		constexpr uintptr_t FName = 0x02F4;
		constexpr uintptr_t DelayedPreviewSlot = 0x02FC;
		constexpr uintptr_t TurntableRiseDelay = 0x0300;
		constexpr uintptr_t RevealProduct = 0x0308;
	}

	namespace TutorialSave_TA {
		constexpr uintptr_t TrainingEventsPlayed = 0x00C8;
		constexpr uintptr_t TrainingEventsPerfected = 0x00D8;
		constexpr uintptr_t DetailsGroupsSeen = 0x00E8;
	}

	namespace Tutorial_Dodge_TA {
		constexpr uintptr_t Bitfields_0x0248 = 0x0248;
		constexpr uintptr_t Dodges = 0x024C;
		constexpr uintptr_t MaxDodges = 0x0250;
	}

	namespace Tutorial_HandBrake_TA {
		constexpr uintptr_t Bitfields_0x0248 = 0x0248;
		constexpr uintptr_t FVector = 0x024C;
		constexpr uintptr_t MinHandbrakeDotAngleForStart = 0x0258;
		constexpr uintptr_t MinHandbrakeDotAngleForComplete = 0x025C;
	}

	namespace Tutorial_TA {
		constexpr uintptr_t KNode_Owner = 0x0090;
		constexpr uintptr_t PC = 0x0098;
		constexpr uintptr_t GameEvent = 0x00A0;
		constexpr uintptr_t FString = 0x00A8;
		constexpr uintptr_t MessageModal = 0x00B8;
		constexpr uintptr_t Messages = 0x00C0;
		constexpr uintptr_t MessageIndex = 0x00D0;
		constexpr uintptr_t DisplayMessageStartTime = 0x00D4;
		constexpr uintptr_t Bitfields_0x00D8 = 0x00D8;
		constexpr uintptr_t Bitfields_0x00DC = 0x00DC;
		constexpr uintptr_t FMessageInfo = 0x00E0;
		constexpr uintptr_t FMessageInfo = 0x0120;
		constexpr uintptr_t StartFadeDisplayTime = 0x0160;
		constexpr uintptr_t FColor = 0x0164;
		constexpr uintptr_t FadeTime = 0x0168;
		constexpr uintptr_t Shell = 0x0170;
		constexpr uintptr_t FName = 0x0178;
		constexpr uintptr_t FailTimeAfterBallTouch = 0x0180;
		constexpr uintptr_t CountdownTime = 0x0184;
		constexpr uintptr_t BotTeam = 0x0188;
		constexpr uintptr_t TutorialFailTime = 0x018C;
		constexpr uintptr_t TutorialCompleteTime = 0x0190;
		constexpr uintptr_t BallDestroyTimeOnTouch = 0x0194;
		constexpr uintptr_t AllMessagesDisplayedTime = 0x0198;
		constexpr uintptr_t WaitTimeBeforeCheckCompleteAction = 0x019C;
		constexpr uintptr_t TutorialStatus = 0x01A0;
		constexpr uintptr_t StartTime = 0x01A4;
		constexpr uintptr_t FString = 0x01A8;
		constexpr uintptr_t UseActions = 0x01B8;
		constexpr uintptr_t IgnoreActionPressList = 0x01C8;
		constexpr uintptr_t FailedActionPressList = 0x01D8;
		constexpr uintptr_t StartActionPressList = 0x01E8;
		constexpr uintptr_t CompleteActionPressList = 0x01F8;
		constexpr uintptr_t CompleteActionIgnorePressList = 0x0208;
	}

	namespace UIConfig_TA {
		constexpr uintptr_t Bitfields_0x0078 = 0x0078;
		constexpr uintptr_t ClubInvitationLimit = 0x007C;
		constexpr uintptr_t MainMenuBG = 0x0080;
		constexpr uintptr_t MainMenuTeamColors = 0x0088;
		constexpr uintptr_t XPDataRanges = 0x0098;
		constexpr uintptr_t TradeConfirmationLockoutSeconds = 0x00A8;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t CurrentActiveSeason = 0x00C0;
	}

	namespace UISavedValues_TA {
		constexpr uintptr_t Values = 0x00C8;
	}

	namespace UIStrings_TA {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t FString = 0x0090;
		constexpr uintptr_t FString = 0x00A0;
		constexpr uintptr_t FString = 0x00B0;
		constexpr uintptr_t FString = 0x00C0;
		constexpr uintptr_t FString = 0x00D0;
		constexpr uintptr_t FString = 0x00E0;
		constexpr uintptr_t FString = 0x00F0;
		constexpr uintptr_t FString = 0x0100;
		constexpr uintptr_t FString = 0x0110;
		constexpr uintptr_t FString = 0x0120;
		constexpr uintptr_t FString = 0x0130;
		constexpr uintptr_t FString = 0x0140;
		constexpr uintptr_t FString = 0x0150;
		constexpr uintptr_t FString = 0x0160;
		constexpr uintptr_t FString = 0x0170;
		constexpr uintptr_t FString = 0x0180;
		constexpr uintptr_t FString = 0x0190;
		constexpr uintptr_t FString = 0x01A0;
		constexpr uintptr_t FString = 0x01B0;
		constexpr uintptr_t FString = 0x01C0;
		constexpr uintptr_t FString = 0x01D0;
		constexpr uintptr_t FString = 0x01E0;
	}

	namespace UpdateDistanceDrivenTimer_TA {
		constexpr uintptr_t KMDriven = 0x0060;
	}

	namespace UserBugReportBulkData_TA {
		constexpr uintptr_t VideoSettings = 0x0060;
		constexpr uintptr_t Data = 0x0070;
	}

	namespace UserBugReportComponent_TA {
		constexpr uintptr_t BulkData = 0x0060;
		constexpr uintptr_t UserData = 0x0068;
	}

	namespace UserBugReportConfig_TA {
		constexpr uintptr_t UnnamedMember_0x0078 = 0x0078;
		constexpr uintptr_t Categories = 0x0080;
		constexpr uintptr_t OnlineCategories = 0x0090;
		constexpr uintptr_t MemoryDumpIgnoreClassNames = 0x00A0;
		constexpr uintptr_t MaxPropertyStringLength = 0x00B0;
		constexpr uintptr_t MaxDataSizeKilobytes = 0x00B4;
	}

	namespace UserBugReportErrors_TA {
		constexpr uintptr_t ReportTooSoon = 0x0080;
	}

	namespace UserBugReportGeneratedData_TA {
		constexpr uintptr_t MetaData = 0x0060;
		constexpr uintptr_t BulkData = 0x0068;
	}

	namespace UserBugReportMetaData_TA {
		constexpr uintptr_t FGuid = 0x0060;
		constexpr uintptr_t FGuid = 0x0070;
		constexpr uintptr_t FString = 0x0080;
		constexpr uintptr_t MatchSeconds = 0x0090;
	}

	namespace UserBugReportSubmissionData_TA {
		constexpr uintptr_t Categories = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace UserBugReportUploadResult_TA {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace UserBugReportUploader_TA {
		constexpr uintptr_t Connection = 0x0060;
		constexpr uintptr_t BulkData = 0x0068;
		constexpr uintptr_t SubmitTask = 0x0070;
		constexpr uintptr_t SubmitReportRPC = 0x0078;
		constexpr uintptr_t Result = 0x0080;
		constexpr uintptr_t UploadReportWebRequest = 0x0088;
	}

	namespace UserSettingObserverEventCache_TA {
		constexpr uintptr_t CacheTimeout = 0x0070;
		constexpr uintptr_t Events = 0x0078;
	}

	namespace UserSettingObserver_TA {
		constexpr uintptr_t Cache = 0x0070;
		constexpr uintptr_t Metrics = 0x0078;
	}

	namespace VanityQuery_TA {
		constexpr uintptr_t MaxNumberQueriesAllowed = 0x0070;
		constexpr uintptr_t ActiveQueries = 0x0078;
		constexpr uintptr_t QueuedRequests = 0x0088;
	}

	namespace VanitySetManager_TA {
		constexpr uintptr_t OnlineGame = 0x0060;
		constexpr uintptr_t FMap_Mirror = 0x0068;
		constexpr uintptr_t VanityQuery = 0x00B8;
	}

	namespace VanitySet_TA {
		constexpr uintptr_t Avatar = 0x0060;
		constexpr uintptr_t Banner = 0x0068;
		constexpr uintptr_t Border = 0x0070;
	}

	namespace VehiclePartStaticMeshComponent_TA {
		constexpr uintptr_t BodySetupOverride = 0x0300;
	}

	namespace VehiclePickup_Boost_TA {
		constexpr uintptr_t BoostAmount = 0x02F0;
		constexpr uintptr_t LocalPickupSound = 0x02F8;
		constexpr uintptr_t BoostType = 0x0300;
	}

	namespace VehiclePickup_Item_TA {
		constexpr uintptr_t ItemArchetypes = 0x02F0;
		constexpr uintptr_t ReplicatedFXActorArchetype = 0x0300;
	}

	namespace VehiclePickup_TA {
		constexpr uintptr_t RespawnDelay = 0x0268;
		constexpr uintptr_t FXActorArchetype = 0x0270;
		constexpr uintptr_t FXActor = 0x0278;
		constexpr uintptr_t PickedUpEvent = 0x0280;
		constexpr uintptr_t LocalPickedUpEvent = 0x0288;
		constexpr uintptr_t CylinderComponent = 0x0290;
		constexpr uintptr_t FPickupData = 0x0298;
		constexpr uintptr_t FPickupData2 = 0x02A8;
		constexpr uintptr_t Bitfields_0x02B8 = 0x02B8;
	}

	namespace VehicleSim_TA {
		constexpr uintptr_t Wheels = 0x00A0;
		constexpr uintptr_t FInterpCurveFloat = 0x00B0;
		constexpr uintptr_t DriveTorque = 0x00C8;
		constexpr uintptr_t FInterpCurveFloat = 0x00D0;
		constexpr uintptr_t BrakeTorque = 0x00E8;
		constexpr uintptr_t FInterpCurveFloat = 0x00F0;
		constexpr uintptr_t FInputRate = 0x0108;
		constexpr uintptr_t StopThreshold = 0x0110;
		constexpr uintptr_t IdleBrakeFactor = 0x0114;
		constexpr uintptr_t OppositeBrakeFactor = 0x0118;
		constexpr uintptr_t Bitfields_0x011C = 0x011C;
		constexpr uintptr_t OutputThrottle = 0x0120;
		constexpr uintptr_t OutputSteer = 0x0124;
		constexpr uintptr_t OutputBrake = 0x0128;
		constexpr uintptr_t OutputHandbrake = 0x012C;
		constexpr uintptr_t Vehicle = 0x0130;
		constexpr uintptr_t Car = 0x0138;
		constexpr uintptr_t FPointer = 0x0140;
		constexpr uintptr_t SteeringSensitivity = 0x0148;
		constexpr uintptr_t TireFrictionScales = 0x0150;
		constexpr uintptr_t TireFrictionScale = 0x0160;
	}

	namespace Vehicle_TA {
		constexpr uintptr_t CarMesh = 0x07A8;
		constexpr uintptr_t VehicleSim = 0x07B0;
		constexpr uintptr_t FStickyForceData = 0x07B8;
		constexpr uintptr_t FAutoFlipData = 0x07C0;
		constexpr uintptr_t Bitfields_0x07C8 = 0x07C8;
		constexpr uintptr_t FVehicleInputs = 0x07CC;
		constexpr uintptr_t ReplicatedThrottle = 0x07EC;
		constexpr uintptr_t ReplicatedSteer = 0x07ED;
		constexpr uintptr_t InputRestriction = 0x07EE;
		constexpr uintptr_t AIController = 0x07F0;
		constexpr uintptr_t PlayerController = 0x07F8;
		constexpr uintptr_t PRI = 0x0800;
		constexpr uintptr_t VehicleUpdateTag = 0x0808;
		constexpr uintptr_t FCarInteractionData = 0x0810;
		constexpr uintptr_t FVector = 0x0820;
		constexpr uintptr_t FVector = 0x082C;
		constexpr uintptr_t LastBallTouchFrame = 0x0838;
		constexpr uintptr_t LastBallImpactFrame = 0x083C;
		constexpr uintptr_t BoostComponent = 0x0840;
		constexpr uintptr_t DodgeComponent = 0x0848;
		constexpr uintptr_t AirControlComponent = 0x0850;
		constexpr uintptr_t JumpComponent = 0x0858;
		constexpr uintptr_t DoubleJumpComponent = 0x0860;
		constexpr uintptr_t PodiumSpot = 0x0868;
		constexpr uintptr_t PMCAnimIdx = 0x086C;
		constexpr uintptr_t PitchTekComponent = 0x0870;
		constexpr uintptr_t LocalPlayerAudioParamsComponent = 0x0878;
		constexpr uintptr_t TimeBelowSupersonicSpeed = 0x0880;
		constexpr uintptr_t NetworkConfig = 0x0888;
	}

	namespace VideoSettingsSaveConsole_TA {
		constexpr uintptr_t VideoQualityMode = 0x00E0;
	}

	namespace VideoSettingsSavePC_TA {
		constexpr uintptr_t WindowMode = 0x00E0;
		constexpr uintptr_t VideoOptions = 0x00E8;
		constexpr uintptr_t FString = 0x00F8;
		constexpr uintptr_t MaxFPS = 0x0108;
	}

	namespace VideoSettingsSave_TA {
		constexpr uintptr_t Bitfields_0x00C8 = 0x00C8;
		constexpr uintptr_t HDRBrightnessScale = 0x00CC;
		constexpr uintptr_t HDRPaperWhiteScale = 0x00D0;
		constexpr uintptr_t HDRGammaScale = 0x00D4;
		constexpr uintptr_t CustomFPS = 0x00D8;
	}

	namespace ViewMetricsConfig_TA {
		constexpr uintptr_t DisabledViews = 0x0078;
	}

	namespace ViewMetrics_TA {
		constexpr uintptr_t Metrics = 0x0080;
		constexpr uintptr_t SourceID = 0x0090;
		constexpr uintptr_t FName = 0x0094;
	}

	namespace ViralItemActor_TA {
		constexpr uintptr_t InfectedStatus = 0x0268;
		constexpr uintptr_t ClientFXInfectedType = 0x0269;
		constexpr uintptr_t InfectedTypeToGive = 0x026A;
		constexpr uintptr_t CachedGameEvent = 0x0270;
		constexpr uintptr_t OwnerCar = 0x0278;
		constexpr uintptr_t OwnerPRI = 0x0280;
		constexpr uintptr_t ViralItemConfig = 0x0288;
	}

	namespace ViralItemConfig_TA {
		constexpr uintptr_t ViralPostGoalTime = 0x0078;
		constexpr uintptr_t ViralSeriesGroups = 0x0080;
	}

	namespace ViralItemFXComponent_TA {
		constexpr uintptr_t AuraFXDataList = 0x00A8;
		constexpr uintptr_t TransmissionFXDataList = 0x00B8;
		constexpr uintptr_t AuraFXGameStateVisibility = 0x00C8;
		constexpr uintptr_t InfectedAuraFX = 0x00D8;
		constexpr uintptr_t TransmissionFX = 0x00E0;
		constexpr uintptr_t CurrentAuraSFX = 0x00E8;
		constexpr uintptr_t InfectedStatus = 0x00F0;
		constexpr uintptr_t CachedPRI = 0x00F8;
		constexpr uintptr_t CachedGameEvent = 0x0100;
		constexpr uintptr_t FName = 0x0108;
		constexpr uintptr_t FName = 0x0110;
	}

	namespace VoteActor_TA {
		constexpr uintptr_t Subject = 0x0268;
		constexpr uintptr_t TimeRemaining = 0x026C;
		constexpr uintptr_t Bitfields_0x0270 = 0x0270;
		constexpr uintptr_t Voters = 0x0278;
		constexpr uintptr_t ReplicatedVoters = 0x0288;
	}

	namespace Wallet_TA {
		constexpr uintptr_t Currencies = 0x0060;
		constexpr uintptr_t CurrencyProductSet = 0x0070;
		constexpr uintptr_t RocketBucksCurrencyID = 0x0078;
		constexpr uintptr_t FName = 0x007C;
		constexpr uintptr_t SpecialEvent = 0x0088;
		constexpr uintptr_t AutoTour = 0x0090;
	}

	namespace WebBrowser_TA {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace WheelAssetGenerator_1Wheel_TA {
		constexpr uintptr_t MirrorMode = 0x0088;
		constexpr uintptr_t ParticleMirrorMode = 0x0089;
		constexpr uintptr_t FrontRight = 0x0090;
	}

	namespace WheelAssetGenerator_4Wheels_TA {
		constexpr uintptr_t FrontLeft = 0x0088;
		constexpr uintptr_t FrontRight = 0x0090;
		constexpr uintptr_t BackLeft = 0x0098;
		constexpr uintptr_t BackRight = 0x00A0;
	}

	namespace WheelAssetGenerator_FrontWheels_TA {
		constexpr uintptr_t FrontRight = 0x0088;
		constexpr uintptr_t FrontLeft = 0x0090;
	}

	namespace WheelAssetGenerator_RightWheels_TA {
		constexpr uintptr_t MirrorMode = 0x0088;
		constexpr uintptr_t ParticleMirrorMode = 0x0089;
		constexpr uintptr_t FrontRight = 0x0090;
		constexpr uintptr_t BackRight = 0x0098;
	}

	namespace WheelAssetGenerator_TA {
		constexpr uintptr_t Wheels = 0x0070;
		constexpr uintptr_t AdditionalAxleWheel = 0x0080;
	}

	namespace WheelAssetSettings_TA {
		constexpr uintptr_t StaticMesh = 0x0070;
		constexpr uintptr_t SkeletalMesh = 0x0078;
		constexpr uintptr_t AnimTree = 0x0080;
		constexpr uintptr_t Behaviors = 0x0088;
		constexpr uintptr_t Attachments = 0x0098;
		constexpr uintptr_t FVector = 0x00A8;
		constexpr uintptr_t FRotator = 0x00B4;
	}

	namespace WheelShimmy_TA {
		constexpr uintptr_t AccumDistance = 0x0078;
		constexpr uintptr_t Wave1Freq = 0x007C;
		constexpr uintptr_t Wave2Freq = 0x0080;
		constexpr uintptr_t OnOffBias = 0x0084;
		constexpr uintptr_t HighFreq = 0x0088;
		constexpr uintptr_t ShimmyMag = 0x008C;
		constexpr uintptr_t AffectedWheels = 0x0090;
		constexpr uintptr_t SkelMeshComponent = 0x00A0;
		constexpr uintptr_t Wheel = 0x00A8;
		constexpr uintptr_t RollControl = 0x00B0;
	}

	namespace WheelSpeedComponent_TA {
		constexpr uintptr_t Car = 0x00A8;
		constexpr uintptr_t WheelForwardSpeedInterpRate = 0x00B0;
		constexpr uintptr_t WheelSideSpeedInterpRate = 0x00B4;
		constexpr uintptr_t MaxWheelSpeed = 0x00B8;
		constexpr uintptr_t AvgWheelForwardSpeed = 0x00BC;
		constexpr uintptr_t AvgWheelSideSpeed = 0x00C0;
		constexpr uintptr_t AvgWheelSpinSpeed = 0x00C4;
		constexpr uintptr_t OldWheelRotation = 0x00C8;
		constexpr uintptr_t WheelTurnSpeed = 0x00CC;
	}

	namespace Wheel_TA {
		constexpr uintptr_t SteerFactor = 0x0070;
		constexpr uintptr_t WheelRadius = 0x0074;
		constexpr uintptr_t SuspensionStiffness = 0x0078;
		constexpr uintptr_t SuspensionDampingCompression = 0x007C;
		constexpr uintptr_t SuspensionDampingRelaxation = 0x0080;
		constexpr uintptr_t SuspensionTravel = 0x0084;
		constexpr uintptr_t SuspensionMaxRaise = 0x0088;
		constexpr uintptr_t ContactForceDistance = 0x008C;
		constexpr uintptr_t PushForceConstant = 0x0090;
		constexpr uintptr_t SpinSpeedDecayRate = 0x0094;
		constexpr uintptr_t FInterpCurveFloat = 0x0098;
		constexpr uintptr_t FInterpCurveFloat = 0x00B0;
		constexpr uintptr_t FInterpCurveFloat = 0x00C8;
		constexpr uintptr_t FInterpCurveFloat = 0x00E0;
		constexpr uintptr_t FInterpCurveFloat = 0x00F8;
		constexpr uintptr_t FName = 0x0110;
		constexpr uintptr_t FName = 0x0118;
		constexpr uintptr_t FVector = 0x0120;
		constexpr uintptr_t FVector = 0x012C;
		constexpr uintptr_t FVector = 0x0138;
		constexpr uintptr_t FVector = 0x0144;
		constexpr uintptr_t VehicleSim = 0x0150;
		constexpr uintptr_t WheelIndex = 0x0158;
		constexpr uintptr_t FWheelContactData = 0x0160;
		constexpr uintptr_t Bitfields_0x01B0 = 0x01B0;
		constexpr uintptr_t FrictionCurveInput = 0x01B4;
		constexpr uintptr_t AerialThrottleToVelocityFactor = 0x01B8;
		constexpr uintptr_t AerialAccelerationFactor = 0x01BC;
		constexpr uintptr_t SpinSpeed = 0x01C0;
	}

	namespace XPManager_TA {
		constexpr uintptr_t MultiplierCapLevel = 0x0060;
		constexpr uintptr_t XPPerLevelMultiplier = 0x0064;
		constexpr uintptr_t XPPerLevelCap = 0x0068;
		constexpr uintptr_t Titles = 0x0070;
	}

	namespace _TourTypes_TA {
		constexpr uintptr_t DisabledMutatorCategories = 0x0060;
		constexpr uintptr_t DisabledMutatorSettings = 0x0070;
	}

	namespace __AchievementManager_TA__HandleTradeInComplete_0x1 {
		constexpr uintptr_t PrevQuality = 0x0060;
	}

	namespace __AchievementManager_TA__HasItemQualityEquipped_0x1 {
		constexpr uintptr_t Quality = 0x0060;
	}

	namespace __AchievementManager_TA__IsPlayingWithClubmates_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __ArenaSoundConfig_TA__GetNextEvent_0x1 {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t CurrentTime = 0x0068;
	}

	namespace __ArenaSoundManager_TA__HandleMatchEnded_0x1 {
		constexpr uintptr_t InGameEvent = 0x0060;
	}

	namespace __AutoTour_TA__OnReceivedBracket_0x2 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __AutoTour_TA__UpdateIneligibleTournament_0x2 {
		constexpr uintptr_t LastAutoTournament = 0x0060;
	}

	namespace __BallPossessionComponent_TA__GetLastTouchWithTeamNum_0x1 {
		constexpr uintptr_t InTeamNum = 0x0060;
	}

	namespace __Ball_TA__Explode_0x1 {
		constexpr uintptr_t ExplosionGoal = 0x0060;
		constexpr uintptr_t Scorer = 0x0068;
	}

	namespace __BanSync_TA__GetBanMessageTypes_0x1 {
		constexpr uintptr_t BanType = 0x0060;
	}

	namespace __BanSync_TA__GetBanMessage_0x1 {
		constexpr uintptr_t BanType = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x0068;
	}

	namespace __BanSync_TA__GetPlayerBanMessages_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __BinaryUploader_TA__Upload_0x1 {
		constexpr uintptr_t Request = 0x0060;
	}

	namespace __BotConfig_TA__RefreshIDs_0x1 {
		constexpr uintptr_t ProductID = 0x0060;
	}

	namespace __CameraState_PodiumSpotlight_Knockout_TA__GetFocusCenter_0x1 {
		constexpr uintptr_t FVector = 0x0060;
	}

	namespace __CameraState_PodiumSpotlight_TA__GetFocusCenter_0x1 {
		constexpr uintptr_t FVector = 0x0060;
		constexpr uintptr_t FVector = 0x006C;
	}

	namespace __CarComponent_Boost_TA__SetUnlimitedBoostDelayed_0x1 {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace __CarMeshComponentBase_TA__AddVisualAsset_0x2 {
		constexpr uintptr_t Asset = 0x0060;
	}

	namespace __CarMeshComponentBase_TA__ApplyPaintSettings_0x1 {
		constexpr uintptr_t FAssociativeMaterialParams = 0x0060;
	}

	namespace __CarMeshComponentBase_TA__ApplyPaintToObject_0x1 {
		constexpr uintptr_t ProductPaint = 0x0060;
		constexpr uintptr_t PaintSettings = 0x0068;
		constexpr uintptr_t ObjectToPaint = 0x0070;
		constexpr uintptr_t Product = 0x0078;
	}

	namespace __CarMeshComponentBase_TA__AttachOrnament_0x1 {
		constexpr uintptr_t AprilConfig = 0x0060;
	}

	namespace __CarMeshComponentBase_TA__CreateWheelAttachment_0x1 {
		constexpr uintptr_t Asset = 0x0060;
		constexpr uintptr_t PrimComp = 0x0068;
	}

	namespace __CarMeshComponentBase_TA__CreateWheelMesh_0x1 {
		constexpr uintptr_t Asset = 0x0060;
		constexpr uintptr_t WheelMesh = 0x0068;
	}

	namespace __CarMeshComponentBase_TA__RemoveProductAttributeFromProduct_0x1 {
		constexpr uintptr_t AttributeClassToRemove = 0x0060;
	}

	namespace __CarPreviewActor_TA__UpdateTranslations_0x1 {
		constexpr uintptr_t BodyAsset = 0x0060;
	}

	namespace __Car_KnockOut_TA__AllowCarComponentActivate_0x1 {
		constexpr uintptr_t CarComponent = 0x0060;
	}

	namespace __Car_KnockOut_TA__DeactivateAttackComponents_0x1 {
		constexpr uintptr_t IgnoreComponents = 0x0060;
	}

	namespace __Car_KnockOut_TA__TookHitFrom_0x1 {
		constexpr uintptr_t Car = 0x0060;
	}

	namespace __Car_KnockOut_TA__UpdatePendingHits_0x1 {
		constexpr uintptr_t Target = 0x0060;
	}

	namespace __Car_TA__HandleTargetRemoved_0x1 {
		constexpr uintptr_t Target = 0x0060;
	}

	namespace __Car_TA__QueueDemolish_0x1 {
		constexpr uintptr_t FDemolishDataExtended = 0x0060;
		constexpr uintptr_t GoalExplosionDemoFxArchetype = 0x00A8;
	}

	namespace __Car_TA__QueueDemolish_CustomFX_0x1 {
		constexpr uintptr_t FDemolishDataExtended = 0x0060;
		constexpr uintptr_t CustomDemoFX = 0x00A8;
	}

	namespace __ChallengeDefault_TA__RequestImage_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __ChallengeManager_TA__AreChallengesComplete_0x1 {
		constexpr uintptr_t GroupIDs = 0x0060;
	}

	namespace __ChallengeManager_TA__BroadcastChallengeChanges_0x7 {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace __ChallengeManager_TA__FindChallengeIndex_0x1 {
		constexpr uintptr_t Id = 0x0060;
	}

	namespace __ChallengeReward_TA__Init_0x1 {
		constexpr uintptr_t ListenObj = 0x0060;
	}

	namespace __Challenge_TA__UpdateUnlockChallengesRewards_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __ChatFilterManager_TA__HandleLocalPlayerJoin_0x1 {
		constexpr uintptr_t JoiningPlayer = 0x0060;
	}

	namespace __CinematicIntroSequence_TA__GetActionBinding_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __CinematicIntroSequence_TA__SetTrackedBindings_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __ClubPersonas_TA__NotifyPRIClubIDChanged_0x1 {
		constexpr uintptr_t Persona = 0x0060;
	}

	namespace __ClubPersonas_TA__QueueRefresh_0x1 {
		constexpr uintptr_t Persona = 0x0060;
	}

	namespace __ClubPersonas_TA__RefreshPersona_0x1 {
		constexpr uintptr_t Persona = 0x0060;
		constexpr uintptr_t PClub = 0x0068;
		constexpr uintptr_t Club = 0x0070;
	}

	namespace __ConsecutiveMatchTracker_TA__HandleGameEnded_0x1 {
		constexpr uintptr_t GameEvent = 0x0060;
	}

	namespace __CrowdActorManager_TA__OverrideCrowdActorSounds_0x1 {
		constexpr uintptr_t NewSounds = 0x0060;
	}

	namespace __CrumbTrails_TA__GetActiveCrumbs_0x1 {
		constexpr uintptr_t Crumbs = 0x0060;
	}

	namespace __CrumbTrails_TA__HandleTrailComplete_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __CrumbTrails_TA__SetupActivationCondition_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __CrumbTrails_TA__SetupCompletionCondition_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __CrumbTrails_TA__SetupTrails_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __CurrencyProductSet_TA__GetCurrencyIndexFromHashID_0x1 {
		constexpr uintptr_t FProductHashID = 0x0060;
	}

	namespace __EOSGameClipsMetrics_TA__RecordClipInfo_0x1 {
		constexpr uintptr_t FEOSGameClipsClipInfo = 0x0060;
	}

	namespace __EOSVoiceManager_TA__ClearRoomCredentialsForPlayer_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __EOSVoiceManager_TA__GetPlayerPermissionError_0x1 {
		constexpr uintptr_t OnlinePlayer = 0x0060;
		constexpr uintptr_t VoiceChatFilter = 0x0068;
	}

	namespace __EOSVoiceManager_TA__GetPlayerVoiceRoomByEpicId_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __EOSVoiceManager_TA__GetPlayerVoiceRoom_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __EOSVoiceManager_TA__GetVoiceRoomByName_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __EOSVoiceManager_TA__HandlePlayerMatchRoomChanged_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __EOSVoiceManager_TA__HandleRemotePlayerJoinedVoiceRoom_0x1 {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace __EOSVoiceManager_TA__HandleRequestedLinkedAccounts_0x1 {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace __EOSVoiceSettingsSave_TA__GetPreferredInputDevice_0x1 {
		constexpr uintptr_t CurrentPlatform = 0x0060;
	}

	namespace __EOSVoiceSettingsSave_TA__GetPreferredOutputDevice_0x1 {
		constexpr uintptr_t CurrentPlatform = 0x0060;
	}

	namespace __EOSVoiceTokenCache_TA__ClearPlayerCachedVoiceCredentials_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FString = 0x00A8;
	}

	namespace __EOSVoiceTokenCache_TA__RequestVoiceRoomToken_0x1 {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x0070;
	}

	namespace __ESportConfig_TA__DownloadEventImage_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __ESportConfig_TA__GetNextEventTime_0x1 {
		constexpr uintptr_t CurrentTime = 0x0060;
	}

	namespace __EngagementEventsConfig_TA__GetNextEventTime_0x1 {
		constexpr uintptr_t CurrentTime = 0x0060;
	}

	namespace __EpicAccountSave_TA__GetConvertPlatformFriends_0x1 {
		constexpr uintptr_t OSS = 0x0060;
	}

	namespace __EpicAccountSave_TA__GetHasPromptedForFriendConversion_0x1 {
		constexpr uintptr_t OSS = 0x0060;
	}

	namespace __EpicAccountSave_TA__Reconcile_0x1 {
		constexpr uintptr_t Platform = 0x0060;
	}

	namespace __EpicAccountSave_TA__SetConvertPlatformFriends_0x1 {
		constexpr uintptr_t OSS = 0x0060;
	}

	namespace __EpicFriendsConverterSystem_TA__SetupEpicFriendsConverter_0x1 {
		constexpr uintptr_t Converter = 0x0060;
	}

	namespace __Eula_TA__RequiresAcceptance_0x1 {
		constexpr uintptr_t PlayerPlatform = 0x0060;
	}

	namespace __FXActor_Boost_TA__DuplicateAttachment_0x1 {
		constexpr uintptr_t ComponentsToUse = 0x0060;
		constexpr uintptr_t AttachmentIdx = 0x0070;
	}

	namespace __FXActor_SafeZone_Knockout_TA__GetActiveSafeZoneIndex_0x1 {
		constexpr uintptr_t MatchTimeActive = 0x0060;
	}

	namespace __FXActor_TA__ApplyPaintToAttachment_0x1 {
		constexpr uintptr_t PaintSettings = 0x0060;
		constexpr uintptr_t Paint = 0x0068;
	}

	namespace __FXActor_TA__ApplyPaint_0x1 {
		constexpr uintptr_t PaintSettings = 0x0060;
		constexpr uintptr_t Paint = 0x0068;
	}

	namespace __FirstTimeExperienceManager_TA__DebugSetCheckpoint_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __FirstTimeExperienceManager_TA__NotifyWhenGroupComplete_0x1 {
		constexpr uintptr_t FName = 0x0078;
	}

	namespace __FirstTimeExperienceManager_TA__SetupTrigger_0x1 {
		constexpr uintptr_t Condition = 0x0060;
		constexpr uintptr_t FFTEGroup = 0x0068;
	}

	namespace __FirstTimeExperienceSave_TA__GetGroupIndex_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __FreeplayCommands_TA__GetDefendShotBreakout_0x1 {
		constexpr uintptr_t FVector = 0x0060;
	}

	namespace __GFxData_AutoTour_TourCard_TA__HandleSubscriptionChanged_0x1 {
		constexpr uintptr_t TournamentID = 0x0060;
	}

	namespace __GFxData_CarRumble_TA__HandlePawnSet_0x1 {
		constexpr uintptr_t NewCar = 0x0060;
	}

	namespace __GFxData_Chat_TA__AddChatMessage_0x1 {
		constexpr uintptr_t FGFxChatMessage = 0x0060;
	}

	namespace __GFxData_Chat_TA__AddPresetMessage_0x1 {
		constexpr uintptr_t FGFxChatMessage = 0x0060;
	}

	namespace __GFxData_Chat_TA__GetMatchChatLog_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_ClubDetails_TA__UpdateClubMembers_0x1 {
		constexpr uintptr_t FClubMember = 0x0060;
	}

	namespace __GFxData_Clubs_TA__AcceptClubInvite_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_Clubs_TA__CreateClub_0x1 {
		constexpr uintptr_t Settings = 0x0060;
	}

	namespace __GFxData_Clubs_TA__CreateLeaveClubAction_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_Clubs_TA__EquipClubTitle_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_Clubs_TA__HandleAcceptedClubInviteConfirmation_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_Clubs_TA__HandleGetClubStatsCompleted_0x5 {
		constexpr uintptr_t CompletedRPC = 0x0060;
		constexpr uintptr_t MilestoneIndex = 0x0068;
	}

	namespace __GFxData_Clubs_TA__HandleRemoveEpicFriend_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Clubs_TA__HandleRemovePlayerFromClub_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Clubs_TA__InviteToClub_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Clubs_TA__OnLeaveClubActionComplete_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_Clubs_TA__RejectClubInviteByClubID_0x1 {
		constexpr uintptr_t ClubID = 0x0060;
		constexpr uintptr_t ClubInvite = 0x0068;
	}

	namespace __GFxData_Clubs_TA__RejectClubInvite_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_Clubs_TA__RemoveFromClub_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Clubs_TA__SetClubInvites_0x1 {
		constexpr uintptr_t Invites = 0x0060;
	}

	namespace __GFxData_Clubs_TA__SetClubOwner_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Clubs_TA__SetNewRole_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t OriginalClubRole = 0x00A8;
		constexpr uintptr_t NewClubRole = 0x00A9;
	}

	namespace __GFxData_Clubs_TA__SyncClubDetails_0x1 {
		constexpr uintptr_t ClubID = 0x0060;
	}

	namespace __GFxData_Clubs_TA__UpdateClubColors_0x1 {
		constexpr uintptr_t PrimaryColor = 0x0060;
		constexpr uintptr_t AccentColor = 0x0064;
	}

	namespace __GFxData_Clubs_TA__UpdateClubName_0x1 {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace __GFxData_Clubs_TA__UpdateGFxClubDetails_0x1 {
		constexpr uintptr_t ClubDetails = 0x0060;
	}

	namespace __GFxData_Clubs_TA__UpdateLocalClubMembers_0x1 {
		constexpr uintptr_t ClubDetails = 0x0060;
	}

	namespace __GFxData_Community_TA__HandleBlogChanged_0x1 {
		constexpr uintptr_t DateNow = 0x0060;
	}

	namespace __GFxData_ContainerDrops_TA__GetMatchingProductSeries_0x1 {
		constexpr uintptr_t SeriesID = 0x0060;
		constexpr uintptr_t SeriesProducts = 0x0068;
	}

	namespace __GFxData_Controls_TA__ClearBinding_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_Controls_TA__SetCurrentBinding_0x1 {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0068 = 0x0068;
		constexpr uintptr_t AxisSign = 0x006C;
	}

	namespace __GFxData_DLC_TA__HandleEntitlementsError_0x1 {
		constexpr uintptr_t Error = 0x0060;
	}

	namespace __GFxData_EOSVoiceManager_TA__HandleFriendsListChanged_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_EOSVoiceManager_TA__HandleUserChatPermissionsChanged_0x1 {
		constexpr uintptr_t ChangedEvent = 0x0060;
	}

	namespace __GFxData_EOSVoiceManager_TA__HandleVoiceChatSettingChanged_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_EOSVoiceRoom_TA__CanSendChatNotification_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_EOSVoiceRoom_TA__GetMemberByEpicId_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_EOSVoiceRoom_TA__GetMemberByPlayerId_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_EOSVoiceRoom_TA__HandleBlockStatusChanged_0x1 {
		constexpr uintptr_t Persona = 0x0060;
	}

	namespace __GFxData_EpicLogin_TA__RequestAccountAuthorization_0x1 {
		constexpr uintptr_t EpicLogin = 0x0060;
	}

	namespace __GFxData_ErrorModals_TA__AlertError_0x1 {
		constexpr uintptr_t Error = 0x0060;
	}

	namespace __GFxData_ErrorModals_TA__RemoveErrorType_0x1 {
		constexpr uintptr_t InErrorType = 0x0060;
	}

	namespace __GFxData_FaceIt_TA__HandleError_0x1 {
		constexpr uintptr_t InError = 0x0060;
	}

	namespace __GFxData_Friends_TA__CreateConvertPlatformFriendsPrompt_0x2 {
		constexpr uintptr_t Converter = 0x0060;
	}

	namespace __GFxData_Friends_TA__CreateEpicFriendAcceptedNotification_0x1 {
		constexpr uintptr_t InPersona = 0x0060;
	}

	namespace __GFxData_Friends_TA__CreateEpicFriendInviteNotification_0x1 {
		constexpr uintptr_t InPersona = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0068 = 0x0068;
	}

	namespace __GFxData_Friends_TA__DeleteFriendGroup_0x1 {
		constexpr uintptr_t TargetPresenceId = 0x0060;
	}

	namespace __GFxData_Friends_TA__HandleMatchGUIDChanged_0x1 {
		constexpr uintptr_t Persona = 0x0060;
	}

	namespace __GFxData_Friends_TA__HandlePartiesChanged_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t PartyObjectTA = 0x00A8;
	}

	namespace __GFxData_Friends_TA__HandlePlayerAddedToMatch_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GFxData_Friends_TA__HandlePlayerBlocked_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Friends_TA__IsFriendInParty_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Friends_TA__UnblockPlayer_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Garage_TA__SetPreviewProduct_0x1 {
		constexpr uintptr_t SlotIndex = 0x0060;
		constexpr uintptr_t FProductHashID = 0x0064;
	}

	namespace __GFxData_Leaderboards_TA__PrefetchAvatars_0x1 {
		constexpr uintptr_t OurPlatform = 0x0060;
	}

	namespace __GFxData_LocalPlayer_TA__HandleXPLoaded_0x1 {
		constexpr uintptr_t XPSave = 0x0060;
	}

	namespace __GFxData_MTXGarage_TA__HandleGetCatalogResponse_0x1 {
		constexpr uintptr_t FMTXPurchaseInfo = 0x0060;
	}

	namespace __GFxData_MTXGarage_TA__HandleUnlockContainersResponse_0x1 {
		constexpr uintptr_t PCSaveData = 0x0060;
	}

	namespace __GFxData_MTXGarage_TA__RevealContainerUnlocks_0x1 {
		constexpr uintptr_t OnlineProducts = 0x0060;
		constexpr uintptr_t ProductsSave = 0x0070;
		constexpr uintptr_t PCSaveData = 0x0078;
	}

	namespace __GFxData_MatchHistoryManager_TA__GetMatchHistoryEntryFromMatchGUID_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_MatchHistoryManager_TA__GetMatchHistoryEntryFromReplayURL_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_MenuTree_TA__EnterTreeAtRoot_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_MenuTree_TA__GetFocusedChildNodeIndex_0x2 {
		constexpr uintptr_t PlayMenuSave = 0x0060;
		constexpr uintptr_t FocusNodeMappingIndex = 0x0068;
	}

	namespace __GFxData_MenuTree_TA__GetLastPlaylistFolderTitle_0x1 {
		constexpr uintptr_t PlayMenuSave = 0x0060;
	}

	namespace __GFxData_MenuTree_TA__JumpToBranch_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_MenuTree_TA__JumpToParentBranch_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_MultiItemDrops_TA__DropItemGroup_0x1 {
		constexpr uintptr_t DropGroup = 0x0060;
	}

	namespace __GFxData_MultiItemDrops_TA__DropRewardGroup_0x1 {
		constexpr uintptr_t DropGroup = 0x0060;
	}

	namespace __GFxData_MultiItemDrops_TA__GetDropsByType_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_MultiItemDrops_TA__HandleChallengeRewardCollected_0x1 {
		constexpr uintptr_t Currency = 0x0060;
	}

	namespace __GFxData_MultiItemDrops_TA__HandleGroupSeen_0x1 {
		constexpr uintptr_t SaveData = 0x0060;
	}

	namespace __GFxData_MultiItemDrops_TA__HandleNewOnlineItem_0x1 {
		constexpr uintptr_t InSaveData = 0x0060;
		constexpr uintptr_t OnlineProduct = 0x0068;
	}

	namespace __GFxData_MultiItemDrops_TA__IsProductInGroup_0x1 {
		constexpr uintptr_t FProductInstanceID = 0x0060;
	}

	namespace __GFxData_MusicPlayer_TA__GetTitleTrackBuilder_0x1 {
		constexpr uintptr_t PreviousBuilder_Object = 0x0060;
		constexpr uintptr_t PreviousBuilder_Interface = 0x0068;
	}

	namespace __GFxData_MusicPlayer_TA__MergePlaylists_0x1 {
		constexpr uintptr_t NewPlaylists = 0x0060;
	}

	namespace __GFxData_Mutators_TA__GetMutatorsByGroupID_0x1 {
		constexpr uintptr_t GroupId = 0x0060;
	}

	namespace __GFxData_Mutators_TA__InitCustomGameSettings_0x1 {
		constexpr uintptr_t DisabledCategories = 0x0060;
	}

	namespace __GFxData_Mutators_TA__SetGameModeMutatorPresets_0x2 {
		constexpr uintptr_t Bitfields_0x0060 = 0x0060;
	}

	namespace __GFxData_Mutators_TA__UpdateNumSelectedMutaors_0x1 {
		constexpr uintptr_t FKeyValuePair = 0x0060;
	}

	namespace __GFxData_NotificationManager_TA__HandleNotificationHidden_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_NotificationManager_TA__HandleNotificationRemoved_0x1 {
		constexpr uintptr_t Notification = 0x0060;
	}

	namespace __GFxData_NotificationManager_TA__OnNotificationHidden_0x1 {
		constexpr uintptr_t NotificationID = 0x0060;
	}

	namespace __GFxData_PRI_TA__HandleOwnerChanged_0x1 {
		constexpr uintptr_t LoadoutSave = 0x0060;
	}

	namespace __GFxData_PartyInvite_TA__HandlePlayerInvitePending_0x1 {
		constexpr uintptr_t FUniqueLobbyId = 0x0060;
		constexpr uintptr_t Persona = 0x0070;
	}

	namespace __GFxData_PartyInvite_TA__InviteToPartyInternal_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_PartyInvite_TA__InviteToPartySilent_0x1 {
		constexpr uintptr_t PsyNetInterface = 0x0060;
	}

	namespace __GFxData_PartyJoinRequest_TA__HandleJoinRequestReceived_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t Persona = 0x00A8;
	}

	namespace __GFxData_PartyJoinRequest_TA__HandleNotificationAccepted_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Party_TA__ActivatePartyUp_0x3 {
		constexpr uintptr_t PartyVoter = 0x0060;
	}

	namespace __GFxData_Party_TA__HandleAcceptInviteToTrade_0x1 {
		constexpr uintptr_t Modal = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x0068;
	}

	namespace __GFxData_Party_TA__HandleInviteToTrade_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GFxData_Party_TA__HandlePartyError_0x1 {
		constexpr uintptr_t Error = 0x0060;
	}

	namespace __GFxData_Party_TA__InvitePlayerToTrade_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __GFxData_Party_TA__OnPlayerInvited_0x1 {
		constexpr uintptr_t Party = 0x0060;
		constexpr uintptr_t FUniqueLobbyId = 0x0068;
		constexpr uintptr_t FUniqueNetId = 0x0078;
	}

	namespace __GFxData_Party_TA__ProcessInvitationResponse_0x1 {
		constexpr uintptr_t FUniqueLobbyId = 0x0078;
	}

	namespace __GFxData_Party_TA__SendAllowTradeRPC_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0078;
	}

	namespace __GFxData_PlayerAvatarBorderPreview_TA__CreatePlayerAvatarBorderPreview_0x1 {
		constexpr uintptr_t AvatarBorderPreview = 0x0060;
		constexpr uintptr_t OnlineProduct = 0x0068;
		constexpr uintptr_t InColorID = 0x0070;
	}

	namespace __GFxData_PlayerAvatarPreview_TA__CreatePlayerAvatarPreview_0x1 {
		constexpr uintptr_t AvatarPreview = 0x0060;
		constexpr uintptr_t OnlineProduct = 0x0068;
		constexpr uintptr_t InColorID = 0x0070;
	}

	namespace __GFxData_PlayerBanners_TA__CreatePlayerBannerPreview_0x1 {
		constexpr uintptr_t OnlineProduct = 0x0060;
		constexpr uintptr_t InColorID = 0x0068;
		constexpr uintptr_t FProductHashID = 0x006C;
	}

	namespace __GFxData_PlayerBanners_TA__CreatePlayerBanner_0x1 {
		constexpr uintptr_t Banner = 0x0060;
		constexpr uintptr_t FProductHashSource = 0x0068;
		constexpr uintptr_t InColorID = 0x0088;
	}

	namespace __GFxData_Playlist_TA__SetPlayerCount_0x1 {
		constexpr uintptr_t Count = 0x0060;
	}

	namespace __GFxData_PossibleTradeIn_TA__GetNumHashInFilteredIDs_0x1 {
		constexpr uintptr_t FProductHashID = 0x0060;
	}

	namespace __GFxData_ProductFilter_TA__GetProductAttributeFilters_0x1 {
		constexpr uintptr_t FilterType = 0x0060;
	}

	namespace __GFxData_ProductFilter_TA__GetProductSortingFilters_0x1 {
		constexpr uintptr_t FilterType = 0x0060;
	}

	namespace __GFxData_ProductFilter_TA__InitProductAttributes_0x1 {
		constexpr uintptr_t ExcludedAttributes = 0x0060;
	}

	namespace __GFxData_ProductFilter_TA__SetProhibitedAttributeTypeSelected_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_ProductFilter_TA__UpdateProductSlotNewItems_0x1 {
		constexpr uintptr_t SlotIdx = 0x0060;
		constexpr uintptr_t Loadout = 0x0068;
	}

	namespace __GFxData_ProductTradeIn_TA__IsTradeInAllowed_0x1 {
		constexpr uintptr_t SeriesID = 0x0060;
	}

	namespace __GFxData_ProductTradeIn_TA__UpdateTradeInQuantity_0x1 {
		constexpr uintptr_t FProductHashID = 0x0060;
	}

	namespace __GFxData_Products_TA__HandlePaintedProductLoaded_0x1 {
		constexpr uintptr_t LoadingProduct = 0x0060;
	}

	namespace __GFxData_Products_TA__HandleProductThumbnailRendered_0x1 {
		constexpr uintptr_t LoadingProduct = 0x0060;
	}

	namespace __GFxData_Products_TA__InstanceAttributes_0x3 {
		constexpr uintptr_t AttributeProvider_Object = 0x0060;
		constexpr uintptr_t AttributeProvider_Interface = 0x0068;
	}

	namespace __GFxData_Products_TA__IsThumbnailReferenced_0x1 {
		constexpr uintptr_t Asset = 0x0060;
		constexpr uintptr_t OnlineProduct = 0x0068;
		constexpr uintptr_t ThumbnailSize = 0x0070;
	}

	namespace __GFxData_Products_TA__LoadAdditionalProductReferences_0x1 {
		constexpr uintptr_t LoadingProduct = 0x0060;
	}

	namespace __GFxData_Products_TA__LoadProduct_0x1 {
		constexpr uintptr_t FProductHashID = 0x0060;
		constexpr uintptr_t ThumbnailSize = 0x0064;
	}

	namespace __GFxData_Products_TA__RenderProductThumbnail_0x1 {
		constexpr uintptr_t ProductData = 0x0060;
	}

	namespace __GFxData_Products_TA__SlotContainsNewProducts_0x1 {
		constexpr uintptr_t SlotIndex = 0x0060;
	}

	namespace __GFxData_Products_TA__StartLoadingProduct_0x1 {
		constexpr uintptr_t ProductToLoad = 0x0060;
	}

	namespace __GFxData_Products_TA__UpdateProductData_0x1 {
		constexpr uintptr_t ProductData = 0x0060;
		constexpr uintptr_t Product = 0x0068;
	}

	namespace __GFxData_ReplayManager_TA__DownloadReplay_0x1 {
		constexpr uintptr_t Request = 0x0060;
	}

	namespace __GFxData_ReplayManager_TA__HandleDownload_0x1 {
		constexpr uintptr_t Request = 0x0060;
	}

	namespace __GFxData_ReplayManager_TA__HandleMatchHistoryReplayDownloaded_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_ReplayManager_TA__SimulateDownloadReplay_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GFxData_Settings_TA__CrossplayPartyValidation_0x1 {
		constexpr uintptr_t UserSetting = 0x0060;
	}

	namespace __GFxData_Settings_TA__SetDefaults_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GFxData_Settings_TA__SetTourScheduleRegion_0x1 {
		constexpr uintptr_t AutoTour = 0x0060;
		constexpr uintptr_t FString = 0x0068;
	}

	namespace __GFxData_ShopCatalogue_TA__GetOnlineProductsByCostID_0x1 {
		constexpr uintptr_t CostID = 0x0060;
	}

	namespace __GFxData_ShopCatalogue_TA__GetShopItemByCostID_0x1 {
		constexpr uintptr_t CostID = 0x0060;
	}

	namespace __GFxData_ShopCatalogue_TA__LoadCatalogueInternal_0x1 {
		constexpr uintptr_t RequestStartTime = 0x0060;
	}

	namespace __GFxData_ShopCatalogue_TA__SetOwnedDeliverableProducts_0x3 {
		constexpr uintptr_t ShopItemID = 0x0060;
		constexpr uintptr_t DeliverableProducts = 0x0068;
	}

	namespace __GFxData_ShopCatalogue_TA__SyncItemImages_0x1 {
		constexpr uintptr_t ShopItemID = 0x0060;
	}

	namespace __GFxData_Shops_TA__GetCrateShop_0x1 {
		constexpr uintptr_t CrateID = 0x0060;
	}

	namespace __GFxData_Shops_TA__HandlePurchaseSuccess_0x1 {
		constexpr uintptr_t CostID = 0x0060;
	}

	namespace __GFxData_Shops_TA__LoadAllShopCatalogues_0x1 {
		constexpr uintptr_t RequestIDs = 0x0060;
		constexpr uintptr_t RequestStartTime = 0x0070;
	}

	namespace __GFxData_Shops_TA__LoadCataloguesByIndex_0x1 {
		constexpr uintptr_t RequestIDs = 0x0060;
		constexpr uintptr_t RequestStartTime = 0x0070;
	}

	namespace __GFxData_Shops_TA__OnPurchase_0x1 {
		constexpr uintptr_t CostID = 0x0060;
		constexpr uintptr_t ShopID = 0x0064;
		constexpr uintptr_t InDiscountID = 0x0068;
		constexpr uintptr_t Count = 0x006C;
	}

	namespace __GFxData_SpecialEvents_TA__HandlePurchaseRewardFromStoreSuccess_0x1 {
		constexpr uintptr_t RPC = 0x0060;
	}

	namespace __GFxData_SpecialEvents_TA__PurchaseRewardFromStore_0x1 {
		constexpr uintptr_t SaveData = 0x0060;
		constexpr uintptr_t WalletReference = 0x0068;
	}

	namespace __GFxData_StartMenu_TA__HandleSyncOnlinePlayerStorageStarted_0x2 {
		constexpr uintptr_t OnlineStorageSyncManager = 0x0060;
	}

	namespace __GFxData_Stats_TA__SetupStatData_0x1 {
		constexpr uintptr_t EventStat = 0x0060;
	}

	namespace __GFxData_System_TA__OnShellSet_0x1 {
		constexpr uintptr_t EngineShare = 0x0060;
	}

	namespace __GFxData_TourBracketMatchDetails_TA__HandleGetMatchDetails_0x1 {
		constexpr uintptr_t FTourMatchTeamDetails = 0x0060;
	}

	namespace __GFxData_TourBracket_TA__InitTeams_0x1 {
		constexpr uintptr_t FTourTeam = 0x0060;
	}

	namespace __GFxData_TourCheckIn_TA__HandleCheckInError_0x1 {
		constexpr uintptr_t TournamentID = 0x0060;
	}

	namespace __GFxData_TourCheckIn_TA__PerformCheckIn_0x1 {
		constexpr uintptr_t Settings = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0068 = 0x0068;
	}

	namespace __GFxData_TourCheckIn_TA__Register_0x1 {
		constexpr uintptr_t Settings = 0x0060;
		constexpr uintptr_t FTourPrivateCredentials = 0x0068;
	}

	namespace __GFxData_TourCreate_TA__CreateTournament_0x1 {
		constexpr uintptr_t FTourCreateSettings = 0x0060;
	}

	namespace __GFxData_TourCreate_TA__GetDefaultDisabledMaps_0x3 {
		constexpr uintptr_t DefaultMapNames = 0x0060;
	}

	namespace __GFxData_TourDependentMatch_TA__UpdateDependentMatch_0x1 {
		constexpr uintptr_t FTourMatch = 0x0060;
	}

	namespace __GFxData_TourEvent_TA__HandleBracketRetrieved_0x1 {
		constexpr uintptr_t OpponentTeamId = 0x0060;
	}

	namespace __GFxData_TourPlatforms_TA__InitPlatformGroups_0x1 {
		constexpr uintptr_t PlayerPlatform = 0x0060;
	}

	namespace __GFxData_TourRegistration_TA__Register_0x2 {
		constexpr uintptr_t TournamentID = 0x0060;
	}

	namespace __GFxData_TourSearch_TA__FindPrivate_0x1 {
		constexpr uintptr_t FTourPrivateCredentials = 0x0060;
	}

	namespace __GFxData_TourSubscriptions_TA__Unsubscribe_0x2 {
		constexpr uintptr_t Party = 0x0060;
	}

	namespace __GFxData_TradeInFilter_TA__GetPossibleTradeInData_0x1 {
		constexpr uintptr_t Quality = 0x0060;
	}

	namespace __GFxData_TradeInFilter_TA__UpdatePossibleTradeInQuantities_0x1 {
		constexpr uintptr_t OnlineProducts = 0x0060;
	}

	namespace __GFxData_Training_TA__HandlePrimaryGameplaySettingsSave_0x1 {
		constexpr uintptr_t Settings = 0x0060;
	}

	namespace __GFxData_Training_TA__SetTrainingEditorGameEvent_0x2 {
		constexpr uintptr_t TrainingNavigator = 0x0060;
	}

	namespace __GFxData_Wallet_TA__GetCurrencyRow_0x1 {
		constexpr uintptr_t InCurrencyID = 0x0060;
	}

	namespace __GFxEngine_TA__InitOnlineSub_0x1 {
		constexpr uintptr_t OnlineX = 0x0060;
	}

	namespace __GFxHUD_TA__GetVoteBySubject_0x1 {
		constexpr uintptr_t VoteSubject = 0x0060;
	}

	namespace __GFxHUD_TA__HandlePlayerAdded_0x1 {
		constexpr uintptr_t InPRI = 0x0060;
	}

	namespace __GFxHUD_TA__HandlePlayerNameChanged_0x1 {
		constexpr uintptr_t InPRI = 0x0060;
	}

	namespace __GFxHUD_TA__HandleVoteFinished_0x1 {
		constexpr uintptr_t VoteActor = 0x0060;
	}

	namespace __GFxModal_Processing_TA__CreateAndBindNoCancel_0x1 {
		constexpr uintptr_t Modal = 0x0060;
	}

	namespace __GFxModal_Processing_TA__CreateAndBind_0x1 {
		constexpr uintptr_t Task = 0x0060;
	}

	namespace __GFxNameplatesManager_TA__HandleCameraStateChanged_0x1 {
		constexpr uintptr_t CameraTargetOwner = 0x0060;
	}

	namespace __GFxProductAttributeMap_TA__MapAttribute_0x1 {
		constexpr uintptr_t AttributeClass = 0x0060;
	}

	namespace __GFxShell_TA__SetInputActionEnabled_0x1 {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0068 = 0x0068;
	}

	namespace __GFxShell_TA__ShowRankedReconnectModal_0x1 {
		constexpr uintptr_t FServerReservationData = 0x0060;
	}

	namespace __GFxTourList_TA__HandleTournamentsChanged_0x1 {
		constexpr uintptr_t InTourList = 0x0060;
	}

	namespace __GameData_TA__GetCurrentMapData_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GameEventProductAssetCache_TA__HandleCarAssetsLoaded_0x1 {
		constexpr uintptr_t Loader = 0x0060;
	}

	namespace __GameEventProductAssetCache_TA__HandlePlayerAdded_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GameEventProductAssetCache_TA__HandlePlayerRemoved_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GameEvent_KnockOut_TA__AddPRI_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__AddPRI_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__ChallengePlayerToHonorDuel_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x00A8;
	}

	namespace __GameEvent_Soccar_TA__CommitPlayerMatchData_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__FillClubRecordStatsRPC_0x1 {
		constexpr uintptr_t RPC = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__GetClosestVehicle_0x1 {
		constexpr uintptr_t TeamNum = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__GetClubIDsRecordingCandidates_0x1 {
		constexpr uintptr_t MinClubMembersForStats = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__GetGoalByTeamIndex_0x1 {
		constexpr uintptr_t TeamIndex = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__GetShouldStart_0x1 {
		constexpr uintptr_t PlayersAbleToStart = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__HandlePlayerSkillUpdated_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FUpdatedPlayerSkillRating = 0x00A8;
	}

	namespace __GameEvent_Soccar_TA__InitClubMatch_0x2 {
		constexpr uintptr_t Cache = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__ReportFps_0x1 {
		constexpr uintptr_t TotalGameTime = 0x0060;
		constexpr uintptr_t TotalFrames = 0x0064;
	}

	namespace __GameEvent_Soccar_TA__SetGoalsEnabled_0x1 {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace __GameEvent_Soccar_TA__ShouldAutoReadyUp_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GameEvent_TA__FindPlayerPRI_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __GameEvent_TA__GetGeneratedBotName_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GameEvent_TA__HasMutatorNamed_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GameEvent_TA__HasMutatorType_0x1 {
		constexpr uintptr_t MutatorClass = 0x0060;
	}

	namespace __GameEvent_TA__HasPlayerNamed_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __GameEvent_TA__SetBotSkillByTeam_0x1 {
		constexpr uintptr_t Team = 0x0060;
		constexpr uintptr_t NewSkill = 0x0064;
		constexpr uintptr_t BoostThreshold = 0x0068;
	}

	namespace __GameEvent_TrainingEditor_TA__HandlePrimaryGameplaySettingsSave_0x1 {
		constexpr uintptr_t Settings = 0x0060;
	}

	namespace __GameEvent_Tutorial_FreePlay_TA__HandleHitGoal_0x1 {
		constexpr uintptr_t Goal = 0x0060;
	}

	namespace __GameInfo_GFxMenu_TA__Destroyed_0x1 {
		constexpr uintptr_t GFxEngine = 0x0060;
	}

	namespace __GameInfo_Soccar_TA__QueueShutdown_0x1 {
		constexpr uintptr_t DedicatedServer = 0x0060;
	}

	namespace __GameInfo_TA__RegisterCelebration_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GameInfo_TA__RollCelebrationAnim_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __GameObserver_TA__GetCarDataForPRI_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __GameTags_TA__ConvertToGameTags_0x1 {
		constexpr uintptr_t InOuter = 0x0060;
	}

	namespace __GameViewportClient_TA__AllowTournamentSplitscreen_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __InMapDragonManager_TA__IsGoalFirstByTeam_0x1 {
		constexpr uintptr_t ScoredOnTeam = 0x0060;
	}

	namespace __InMapDragonManager_TA__PlayAnimOnAll_0x1 {
		constexpr uintptr_t FName = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0068 = 0x0068;
	}

	namespace __InMapDragonManager_TA__SetAllHidden_0x1 {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace __InMapDragonManager_TA__UnregisterDragon_0x1 {
		constexpr uintptr_t InDragon = 0x0060;
	}

	namespace __LoadoutValidation_TA__CorrectDLCOwnership_0x1 {
		constexpr uintptr_t InPRI = 0x0060;
	}

	namespace __Loadout_TA__ApplyCompatibleAttributeProducts_0x1 {
		constexpr uintptr_t EquippedBodyID = 0x0060;
	}

	namespace __Loadout_TA__ValidateForcedProducts_0x1 {
		constexpr uintptr_t TeamForcedProducts = 0x0060;
		constexpr uintptr_t TeamIndex = 0x0068;
	}

	namespace __MapSet_TA__GetMap_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MapsConfig_TA__GetMapFrequencyForSet_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MapsConfig_TA__GetMapSetByName_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MatchSeries_TA__GetSeriesWinnerFromData_0x1 {
		constexpr uintptr_t HalfMatchGames = 0x0060;
	}

	namespace __MatchType_Public_TA__CanSkipPreMatchLobby_0x1 {
		constexpr uintptr_t MaxTeamSize = 0x0060;
	}

	namespace __MatchType_Tournament_TA__CanSkipPreMatchLobby_0x2 {
		constexpr uintptr_t MaxTeamSize = 0x0060;
	}

	namespace __MatchmakingViewFilter_MenuTree_TA__GetAccessiblePlaylists_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MenuSequencer_TA__GetSequence_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MenuTreeBranch_TA__OnChildNodeClicked_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MenuTreeBuilder_TA__BuildTree_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __MenuTreePlaylistManager_TA__HandlePlaylistRPCComplete_0x1 {
		constexpr uintptr_t CurrentTime = 0x0060;
		constexpr uintptr_t PlaylistNode = 0x0068;
	}

	namespace __MtxConfig_TA__CreateModalForError_0x1 {
		constexpr uintptr_t Error = 0x0060;
	}

	namespace __Mutator_Freeplay_Base_TA__HandleTeams_0x1 {
		constexpr uintptr_t SpawnSpots = 0x0060;
	}

	namespace __Mutator_Freeplay_TA__HandlePrimaryGameplaySettingsSave_0x1 {
		constexpr uintptr_t Settings = 0x0060;
	}

	namespace __Mutator_Freeplay_TA__MutateObject_0x1 {
		constexpr uintptr_t Car = 0x0060;
	}

	namespace __Mutator_Robin_TA__Construct_0x1 {
		constexpr uintptr_t Override = 0x0060;
	}

	namespace __OnlineDLCProductCache_TA__GetOldGeneratedOnlineProduct_0x1 {
		constexpr uintptr_t FProductInstanceID = 0x0060;
	}

	namespace __OnlineGameDLC_TA__GetDlcIdFromName_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __OnlineGameDedicatedServer_TA__GetNextRandomMapName_0x1 {
		constexpr uintptr_t BannedMapSet = 0x0060;
		constexpr uintptr_t ContentConfig = 0x0068;
	}

	namespace __OnlineGameDedicatedServer_TA__HandleVoiceTokenCacheError_0x1 {
		constexpr uintptr_t RequestedPlayers = 0x0060;
	}

	namespace __OnlineGameDedicatedServer_TA__HandleVoiceTokenCacheResponse_0x1 {
		constexpr uintptr_t RequestedPlayers = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x0070;
	}

	namespace __OnlineGameDedicatedServer_TA__InitFlatbufferUpload_0x1 {
		constexpr uintptr_t RPC = 0x0060;
		constexpr uintptr_t Session = 0x0068;
	}

	namespace __OnlineGameDedicatedServer_TA__InitMatchLogUpload_0x1 {
		constexpr uintptr_t Log = 0x0060;
		constexpr uintptr_t RPC = 0x0068;
	}

	namespace __OnlineGameDedicatedServer_TA__InitReplayUpload_0x1 {
		constexpr uintptr_t RPC = 0x0060;
		constexpr uintptr_t Uploader = 0x0068;
	}

	namespace __OnlineGameParty_TA__AddPlayerPartyServiceLobbyMessage_0x1 {
		constexpr uintptr_t FString = 0x0060;
	}

	namespace __OnlineGameParty_TA__GetPartyMessageError_0x3 {
		constexpr uintptr_t OnlinePlayer = 0x0060;
	}

	namespace __OnlineGameParty_TA__GetProfileProducts_0x1 {
		constexpr uintptr_t ProfileProductData = 0x0060;
		constexpr uintptr_t SlotIndex = 0x0070;
	}

	namespace __OnlineGameParty_TA__HandleCrossplayEnabledChanged_0x1 {
		constexpr uintptr_t AccountSettings = 0x0060;
	}

	namespace __OnlineGameParty_TA__HandleProfileSet_0x2 {
		constexpr uintptr_t P = 0x0060;
	}

	namespace __OnlineGameParty_TA__HandleTradingEnabledChanged_0x1 {
		constexpr uintptr_t GameplaySettings = 0x0060;
	}

	namespace __OnlineGameParty_TA__HandleVoiceSettingsChanged_0x1 {
		constexpr uintptr_t VoiceSettings = 0x0060;
	}

	namespace __OnlineGameParty_TA__IsPrimaryMemberForPlayer_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __OnlineGameParty_TA__IsProductValidAfterVerify_0x1 {
		constexpr uintptr_t FOnlineProductData = 0x0060;
	}

	namespace __OnlineGameParty_TA__RestoreArchivedAndFavoritedPendingProductOffers_0x1 {
		constexpr uintptr_t ProductsFavoriteSave = 0x0060;
		constexpr uintptr_t SaveData = 0x0068;
		constexpr uintptr_t ArchiveSave = 0x0070;
	}

	namespace __OnlineGameParty_TA__SendTradeToBackEnd_0x1 {
		constexpr uintptr_t LocalProductOffers = 0x0060;
	}

	namespace __OnlineGameTourServer_TA__AllPlayersInGame_0x2 {
		constexpr uintptr_t AllPlayers = 0x0060;
	}

	namespace __OnlineGameTourServer_TA__FilterMapData_0x1 {
		constexpr uintptr_t FilterMaps = 0x0060;
	}

	namespace __OnlineGameTourServer_TA__GetTeamScore_0x1 {
		constexpr uintptr_t TeamIndex = 0x0060;
	}

	namespace __OnlineGameTourServer_TA__IsBotOnlyTeam_0x1 {
		constexpr uintptr_t Team = 0x0060;
	}

	namespace __OnlinePlayerMTX_TA__HandleClaimSuccess_0x1 {
		constexpr uintptr_t SaveData = 0x0060;
		constexpr uintptr_t RPC = 0x0068;
	}

	namespace __OnlineProductExpirationHelper_TA__HandleNotificationSaveAdded_0x1 {
		constexpr uintptr_t OnlineProduct = 0x0060;
	}

	namespace __OnlineProductStore_TA__FindProductsFromHash_0x1 {
		constexpr uintptr_t FProductHashID = 0x0060;
	}

	namespace __OnlineProduct_TA__RemoveAttributes_0x1 {
		constexpr uintptr_t AttributeClass = 0x0060;
	}

	namespace __OnlineProduct_TA__SortOnlineProductsByQuality_0x1 {
		constexpr uintptr_t I = 0x0060;
	}

	namespace __OnlineSessionManager_TA__GetRemoteSessionPlayerIds_0x2 {
		constexpr uintptr_t PlayerIds = 0x0060;
	}

	namespace __OnlineStorageSyncManager_TA__SyncCloudData_0x1 {
		constexpr uintptr_t ProductsPlayerGet = 0x0060;
	}

	namespace __OutOfWorldVolume_TA__Touch_0x1 {
		constexpr uintptr_t Other = 0x0060;
	}

	namespace __OutOfWorldVolume_TA__UnTouch_0x1 {
		constexpr uintptr_t Other = 0x0060;
	}

	namespace __PerfStatGraph_TA__UpdateGraphRanges_0x1 {
		constexpr uintptr_t TargetMS = 0x0060;
	}

	namespace __PhysicsMetrics_TA__AddCorrection_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __PlatformMetrics_TA__DispatchAndRemove_0x1 {
		constexpr uintptr_t InPC = 0x0060;
	}

	namespace __PlatformMetrics_TA__SetType_0x1 {
		constexpr uintptr_t InPC = 0x0060;
	}

	namespace __PlayerControllerBase_TA__InitFromProfile_0x1 {
		constexpr uintptr_t Profile = 0x0060;
	}

	namespace __PlayerControllerBase_TA__Say_TA_0x3 {
		constexpr uintptr_t OnlinePlayer = 0x0060;
		constexpr uintptr_t OnlineGame = 0x0068;
		constexpr uintptr_t OnlineGameParty = 0x0070;
		constexpr uintptr_t AllowedPlayers = 0x0078;
	}

	namespace __PlayerController_TA__ClientNotifyChallengedToHonorDuel_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __PlayerController_TA__ClientNotifyHonorDuelWithPlayers_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FUniqueNetId = 0x00A8;
	}

	namespace __PlayerController_TA__HandleProfileGamepadSave_0x1 {
		constexpr uintptr_t GamepadSave = 0x0060;
	}

	namespace __PlayerController_TA__InitNetworkSave_0x1 {
		constexpr uintptr_t NetworkSave = 0x0060;
	}

	namespace __PlayerInput_TA__RemoveBindingsForKey_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __PlayerSpawnSystem_TA__CreateSpawnTicket_0x1 {
		constexpr uintptr_t GameEvent = 0x0060;
	}

	namespace __PlayerVanity_TA__EquipProduct_0x1 {
		constexpr uintptr_t FProductHashSource = 0x0060;
	}

	namespace __PlaylistSkillDataSave_TA__Reconcile_0x1 {
		constexpr uintptr_t Other = 0x0060;
	}

	namespace __PrivacyPolicySave_TA__FindPolicyIndex_0x1 {
		constexpr uintptr_t InTextHash = 0x0060;
		constexpr uintptr_t InVersion = 0x0064;
	}

	namespace __ProductAsset_Attachment_TA__ModifyThumbnailScene_0x1 {
		constexpr uintptr_t AttachSKC = 0x0060;
	}

	namespace __ProductAsset_Skin_TA__AttemptApplyChassisOverride_0x1 {
		constexpr uintptr_t ForBodyID = 0x0060;
	}

	namespace __ProductAsset_Skin_TA__GetSkinBodySettings_0x1 {
		constexpr uintptr_t ForBodyID = 0x0060;
	}

	namespace __ProductAsset_Skin_TA__GetSkinParameters_0x1 {
		constexpr uintptr_t ForBodyID = 0x0060;
	}

	namespace __ProductAttribute_MapProductAssetOverride_TA__ShouldUseDefaultProductasset_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __ProductAttribute_ModifyTransformationPerBody_TA__ApplyToObject_0x1 {
		constexpr uintptr_t BodyID = 0x0060;
	}

	namespace __ProductAttribute_Painted_TA__ApplyPaintOverridesToObject_0x1 {
		constexpr uintptr_t Paint = 0x0060;
		constexpr uintptr_t Target = 0x0068;
		constexpr uintptr_t CarMesh = 0x0070;
		constexpr uintptr_t SkinMaterial = 0x0078;
	}

	namespace __ProductAttribute_Painted_TA__ApplyToSetParameter_0x2 {
		constexpr uintptr_t Target_Object = 0x0060;
		constexpr uintptr_t Target_Interface = 0x0068;
		constexpr uintptr_t PaintSettings = 0x0070;
		constexpr uintptr_t Paint = 0x0078;
	}

	namespace __ProductAttribute_UnlockForcedProducts_TA__ContainsSlotToUnlock_0x1 {
		constexpr uintptr_t SlotToFind = 0x0060;
	}

	namespace __ProductLoader_TA__GetAssetByID_0x1 {
		constexpr uintptr_t ProductID = 0x0060;
	}

	namespace __ProductLoader_TA__GetAssetBySlot_0x1 {
		constexpr uintptr_t Slot = 0x0060;
	}

	namespace __ProductOverride_MaterialParameter_TA__ForceApplyOverrideToMIC_0x1 {
		constexpr uintptr_t MIC = 0x0060;
	}

	namespace __ProductOverride_ParticleSystemColorParameter_TA__ApplyToObject_0x1 {
		constexpr uintptr_t ParamTarget_Object = 0x0060;
		constexpr uintptr_t ParamTarget_Interface = 0x0068;
		constexpr uintptr_t PaintSetting = 0x0070;
	}

	namespace __ProductOverride_TA__ApplyOverrides_0x1 {
		constexpr uintptr_t Target = 0x0060;
	}

	namespace __ProductTransactions_TA__GetEquippedProducts_0x2 {
		constexpr uintptr_t AllEquippedInstanceIDs = 0x0060;
	}

	namespace __ProductTransactions_TA__GetUnequippedProducts_0x2 {
		constexpr uintptr_t AllEquippedInstanceIDs = 0x0060;
	}

	namespace __ProductsHashSave_TA__UpdateInstanceIDs_0x2 {
		constexpr uintptr_t Instances = 0x0060;
	}

	namespace __Profile_TA__ValidateLoadoutsWithProduct_0x1 {
		constexpr uintptr_t FProductInstanceID = 0x0060;
	}

	namespace __RPC_GetTradeInFilters_TA__OnSuccess_0x1 {
		constexpr uintptr_t Index = 0x0060;
	}

	namespace __RecentPlayersMet_TA__RecordRecentPlayers_0x2 {
		constexpr uintptr_t PlayerIds = 0x0060;
		constexpr uintptr_t Keys = 0x0070;
		constexpr uintptr_t Online = 0x0080;
		constexpr uintptr_t FString = 0x0088;
	}

	namespace __RecentPlayers_TA__AddMatchMate_0x1 {
		constexpr uintptr_t Persona = 0x0060;
	}

	namespace __RecentPlayers_TA__AddPlayerInternal_0x1 {
		constexpr uintptr_t Persona = 0x0060;
	}

	namespace __RecentPlayers_TA__FilterFriends_0x1 {
		constexpr uintptr_t PersonasData = 0x0060;
	}

	namespace __ReplayManager_TA__PlayReplayFile_0x1 {
		constexpr uintptr_t FString = 0x0060;
		constexpr uintptr_t FString = 0x0070;
	}

	namespace __SaveData_TA__FilterEquippedOnlineProducts_0x1 {
		constexpr uintptr_t EquippedInstanceIDs = 0x0060;
	}

	namespace __SaveData_TA__GetOnlineProductQuantity_0x2 {
		constexpr uintptr_t EquippedOnlineProducts = 0x0060;
		constexpr uintptr_t EquippedProfileProducts = 0x0070;
	}

	namespace __SaveData_TA__HandleOnlineProductsReceived_0x1 {
		constexpr uintptr_t ProductsSave = 0x0060;
	}

	namespace __SaveData_TA__ValidateLoadoutsWithProduct_0x1 {
		constexpr uintptr_t FProductInstanceID = 0x0060;
	}

	namespace __SeqAct_SetLoadout_TA__ApplyNewChangesToProductAssets_0x1 {
		constexpr uintptr_t Mesh = 0x0060;
		constexpr uintptr_t Paint = 0x0068;
		constexpr uintptr_t TeamEdition = 0x0070;
		constexpr uintptr_t TeamID = 0x0078;
	}

	namespace __ShopAdsConfig_TA__Apply_0x1 {
		constexpr uintptr_t FShopAdData = 0x0060;
	}

	namespace __ShopCatalogueCacheSave_TA__HasNewContent_0x1 {
		constexpr uintptr_t FShopItemCacheItem = 0x0060;
	}

	namespace __ShopNotificationsManager_TA__HandleAssetLoaded_0x1 {
		constexpr uintptr_t FItemShopNotificationData = 0x0078;
	}

	namespace __ShopNotificationsManager_TA__HandleGetItemShopNotifications_0x1 {
		constexpr uintptr_t ShopNotifications = 0x0060;
		constexpr uintptr_t NotificationManager = 0x0070;
	}

	namespace __ShopNotificationsManager_TA__LoadNotificationIcon_0x1 {
		constexpr uintptr_t FItemShopNotificationData = 0x0078;
	}

	namespace __SpecialEventConfig_TA__SyncImageForIndex_0x1 {
		constexpr uintptr_t I = 0x0060;
	}

	namespace __StatFactory_TA__OnGoalScored_0x1 {
		constexpr uintptr_t FBallHitInfo = 0x0060;
		constexpr uintptr_t Ball = 0x0170;
		constexpr uintptr_t ScoreIndex = 0x0178;
	}

	namespace __StatusObserver_Products_TA__UpdateTriggersBySlot_0x1 {
		constexpr uintptr_t InSlotIndex = 0x0060;
	}

	namespace __StatusTriggerManager_TA__AddTriggerCondition_0x1 {
		constexpr uintptr_t InCondition = 0x0060;
	}

	namespace __StatusTriggerManager_TA__Init_0x2 {
		constexpr uintptr_t LP = 0x0060;
		constexpr uintptr_t TriggerCondition = 0x0068;
	}

	namespace __StatusTriggerManager_TA__RegisterTriggers_0x1 {
		constexpr uintptr_t InCondition = 0x0060;
		constexpr uintptr_t InTriggers = 0x0068;
	}

	namespace __StatusTriggerManager_TA__RemoveTriggers_0x1 {
		constexpr uintptr_t Clump = 0x0060;
	}

	namespace __StayAsPartySystem_TA__CreateVoteStartEvent_0x1 {
		constexpr uintptr_t StartEvent = 0x0060;
		constexpr uintptr_t Team = 0x0068;
	}

	namespace __StayAsPartySystem_TA__FindHumanTeammatesOfID_0x1 {
		constexpr uintptr_t PRIs = 0x0060;
		constexpr uintptr_t PlayerIndex = 0x0070;
	}

	namespace __StayAsPartySystem_TA__GFxLeaderActive_0x1 {
		constexpr uintptr_t Voter = 0x0060;
		constexpr uintptr_t PrimaryGroup = 0x0068;
	}

	namespace __StayAsPartySystem_TA__GFxPlayerJoinedParty_0x1 {
		constexpr uintptr_t LeaderChanged = 0x0060;
	}

	namespace __StayAsPartySystem_TA__HandlePartyChanged_0x1 {
		constexpr uintptr_t PartyEvent = 0x0060;
	}

	namespace __StayAsPartySystem_TA__IsOneParty_0x1 {
		constexpr uintptr_t PRIs = 0x0060;
	}

	namespace __StayAsPartySystem_TA__MergeEventConfirmFollower_0x1 {
		constexpr uintptr_t MergeEvent = 0x0060;
	}

	namespace __StayAsPartySystem_TA__ProcessVote_0x2 {
		constexpr uintptr_t VoterIter = 0x0060;
	}

	namespace __StayAsPartySystem_TA__SetVoteActive_0x1 {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
	}

	namespace __StayAsPartyVote_TA__AddFollowerToLeader_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __StayAsPartyVote_TA__RemoveFollower_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __TAsyncResult__PrivilegeCheck_X__Copy_0x1 {
		constexpr uintptr_t Instance = 0x0060;
	}

	namespace __TAsyncResult__UserBugReportUploadResult_TA__Copy_0x1 {
		constexpr uintptr_t Instance = 0x0060;
	}

	namespace __TeamDemoAudioComponent_TA__HandlePreparingDemoFX_0x1 {
		constexpr uintptr_t FDemolishData = 0x0060;
	}

	namespace __Team_TA__GetPartyFollowerIds_0x1 {
		constexpr uintptr_t PRI = 0x0060;
	}

	namespace __Team_TA__OnPlayerMarkedAsIdleBanned_0x1 {
		constexpr uintptr_t IdlePlayer = 0x0060;
	}

	namespace __TourBracketCache_TA__RequestCached_0x2 {
		constexpr uintptr_t BracketIndex = 0x0060;
	}

	namespace __TourBracketCache_TA__Request_0x1 {
		constexpr uintptr_t TournamentID = 0x0060;
	}

	namespace __TourBracketSimulator_TA__RoundStep_0x1 {
		constexpr uintptr_t BracketRound = 0x0060;
	}

	namespace __TourCheckInError_TA__AlertSignupError_0x1 {
		constexpr uintptr_t Shell = 0x0060;
		constexpr uintptr_t TournamentID = 0x0068;
	}

	namespace __TourCheckIn_TA__CheckIn_0x1 {
		constexpr uintptr_t LocalTeamMemberIDs = 0x0060;
		constexpr uintptr_t Party = 0x0070;
		constexpr uintptr_t Settings = 0x0078;
		constexpr uintptr_t FUniqueNetId = 0x0080;
		constexpr uintptr_t AllTeamMemberIDs = 0x00C8;
	}

	namespace __TourGameUpdateDispatcher_TA__HandleUpdateGameSuccess_0x1 {
		constexpr uintptr_t TourServer = 0x0060;
	}

	namespace __TourGameUpdateDispatcher_TA__Init_0x3 {
		constexpr uintptr_t FTourServerSettings = 0x0060;
	}

	namespace __TourList_TA__AddUnique_0x1 {
		constexpr uintptr_t Tournament = 0x0060;
	}

	namespace __TourList_TA__GetTournamentResult_0x1 {
		constexpr uintptr_t TournamentID = 0x0060;
	}

	namespace __TourPartyCheckIn_TA__HandleLeaderCheckIn_0x2 {
		constexpr uintptr_t Message = 0x0060;
		constexpr uintptr_t Transaction = 0x0068;
	}

	namespace __TourService_PsyNet_TA__CheckIn_0x1 {
		constexpr uintptr_t TourSettings = 0x0078;
		constexpr uintptr_t FCustomMatchTeamSettings = 0x0080;
		constexpr uintptr_t AllTeamMemberIDs = 0x00A0;
	}

	namespace __TourStatus_TA__GetStatus_0x1 {
		constexpr uintptr_t TournamentID = 0x0060;
	}

	namespace __TourSubscriptions_TA__GetTournament_0x1 {
		constexpr uintptr_t TourID = 0x0060;
	}

	namespace __TourUtils_TA__CalcTeamWins_0x1 {
		constexpr uintptr_t TeamID = 0x0060;
	}

	namespace __TriggerCondition_TA__AddTriggers_0x1 {
		constexpr uintptr_t Clump = 0x0060;
	}

	namespace __UIConfig_TA__FindXPTier_0x1 {
		constexpr uintptr_t XPAmount = 0x0060;
	}

	namespace __UserBugReportConfig_TA__GetCategories_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __UserBugReportConfig_TA__GetCategory_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __UserSettingObserverEventCache_TA__RecordSetting_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
		constexpr uintptr_t FName = 0x00A8;
	}

	namespace __VanityQuery_TA__CompleteRequests_0x1 {
		constexpr uintptr_t I = 0x0060;
	}

	namespace __VanitySetManager_TA__RequestAvatars_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __VanitySetManager_TA__RequestBanners_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __VanitySetManager_TA__RequestsBorders_0x1 {
		constexpr uintptr_t FUniqueNetId = 0x0060;
	}

	namespace __ViralItemConfig_TA__GetSeriesInfectedType_0x1 {
		constexpr uintptr_t SeriesID = 0x0060;
	}

	namespace __ViralItemConfig_TA__SetSeriesInfected_0x1 {
		constexpr uintptr_t InInfectedType = 0x0060;
	}

	namespace __ViralItemFXComponent_TA__ShouldShowAura_0x1 {
		constexpr uintptr_t FName = 0x0060;
	}

	namespace __VoteActor_TA__GetVotes_0x1 {
		constexpr uintptr_t VoteStatus = 0x0060;
		constexpr uintptr_t UnnamedMember_0x0064 = 0x0064;
	}

	namespace __Wallet_TA__GetCurrency_0x1 {
		constexpr uintptr_t InCurrencyID = 0x0060;
	}

	namespace __Wallet_TA__GiveCurrencyDrops_0x1 {
		constexpr uintptr_t UnnamedMember_0x0060 = 0x0060;
		constexpr uintptr_t FString = 0x0068;
	}

	namespace ____ConsecutiveMatchTracker_TA__HandleGameEnded_0x1____ConsecutiveMatchTracker_TA__HandleGameEnded_0x1_0x1 {
		constexpr uintptr_t FMatchData = 0x0060;
	}

	namespace ____GFxData_Clubs_TA__SetClubInvites_0x1____GFxData_Clubs_TA__SetClubInvites_0x1_0x1 {
		constexpr uintptr_t ClubInvite = 0x0060;
	}

	namespace ____GFxData_Mutators_TA__SetGameModeMutatorPresets_0x2____GFxData_Mutators_TA__SetGameModeMutatorPresets_0x2_0x1 {
		constexpr uintptr_t FCategorySettingPair = 0x0060;
	}

	namespace ____SaveData_TA__GetOnlineProductQuantity_0x2____SaveData_TA__GetOnlineProductQuantity_0x3_0x1 {
		constexpr uintptr_t Op = 0x0060;
	}

	namespace ____ShopNotificationsManager_TA__HandleGetItemShopNotifications_0x1____ShopNotificationsManager_TA__HandleGetItemShopNotifications_0x3_0x1 {
		constexpr uintptr_t FItemShopNotificationData = 0x0060;
	}

} // namespace Offsets
