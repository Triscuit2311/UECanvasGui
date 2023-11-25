#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ReadyOrNot.EItemCategory
	 */
	enum class EItemCategory : uint8_t
	{
		IC_None              = 0,
		IC_Primary           = 1,
		IC_Secondary         = 2,
		IC_Grenade           = 3,
		IC_Gadget            = 4,
		IC_Magazine          = 5,
		IC_Helmet            = 6,
		IC_Helmet_Light      = 7,
		IC_Headset           = 8,
		IC_Goggles           = 9,
		IC_Chest             = 10,
		IC_Watch             = 11,
		IC_Radio             = 12,
		IC_NVG               = 13,
		IC_UseableWithShield = 14,
		IC_Grenade_Keybind1  = 15,
		IC_Grenade_Keybind2  = 16,
		IC_Grenade_Keybind3  = 17,
		IC_Grenade_Keybind4  = 18,
		IC_Device_Keybind1   = 19,
		IC_Device_Keybind2   = 20,
		IC_Device_Keybind3   = 21,
		IC_Device_Keybind4   = 22,
		IC_Badge_Armour      = 23,
		IC_OCSpray           = 24,
		IC_Multitool         = 25,
		IC_Zipcuffs          = 26,
		IC_Armor             = 27,
		IC_Chemlight         = 28,
		IC_Shield            = 29,
		IC_Flashbang         = 30,
		IC_Ninebang          = 31,
		IC_CSGas             = 32,
		IC_Stingball         = 33,
		IC_Optiwand          = 34,
		IC_Beanbag           = 35,
		IC_Taser             = 36,
		IC_Pepperball        = 37,
		IC_C2Explosive       = 38,
		IC_Detonator         = 39,
		IC_Doorjam           = 40,
		IC_BatteringRam      = 41,
		IC_BreachingShotgun  = 42,
		IC_Tablet            = 43,
		IC_TacticalDevice    = 44,
		IC_LongTactical      = 45,
		IC_GasMask           = 46,
		IC_Launcher          = 47,
		IC_MedicalKit        = 48,
		IC_LockpickGun       = 49,
		IC_Shotgun           = 50,
		IC_MAX               = 51
	};

	/**
	 * Enum ReadyOrNot.EBlockingAnimationExclusion
	 */
	enum class EBlockingAnimationExclusion : uint8_t
	{
		BAE_None       = 0,
		BAE_Holster    = 1,
		BAE_Draw       = 2,
		BAE_FireSelect = 3,
		BAE_MagCheck   = 4,
		BAE_PullPin    = 5,
		BAE_Throw      = 6,
		BAE_MAX        = 7
	};

	/**
	 * Enum ReadyOrNot.EActorOutlineType
	 */
	enum class EActorOutlineType : uint8_t
	{
		Outline     = 0,
		Outline01   = 1,
		Outline02   = 2,
		Outline03   = 3,
		Outline04   = 4,
		Outline05   = 5,
		Outline06   = 6,
		Outline_MAX = 7
	};

	/**
	 * Enum ReadyOrNot.EStunType
	 */
	enum class EStunType : uint8_t
	{
		ST_None          = 0,
		ST_Tased         = 1,
		ST_Gassed        = 2,
		ST_Flash         = 3,
		ST_Stung         = 4,
		ST_Peppersprayed = 5,
		ST_Beanbag       = 6,
		ST_MAX           = 7
	};

	/**
	 * Enum ReadyOrNot.EMotionBlockType
	 */
	enum class EMotionBlockType : uint8_t
	{
		MB_None      = 0,
		MB_Rifle     = 1,
		MB_Pistol    = 2,
		MB_Item      = 3,
		MB_HeavyItem = 4,
		MB_Special   = 5,
		MB_Unarmed   = 6,
		MB_MAX       = 7
	};

	/**
	 * Enum ReadyOrNot.EItemAttachment
	 */
	enum class EItemAttachment : uint8_t
	{
		IA_None       = 0,
		IA_Flashlight = 1,
		IA_NVG        = 2,
		IA_MAX        = 3
	};

	/**
	 * Enum ReadyOrNot.EWeaponType
	 */
	enum class EWeaponType : uint8_t
	{
		WT_None             = 0,
		WT_Rifles           = 1,
		WT_SubmachineGun    = 2,
		WT_Shotgun          = 3,
		WT_PistolsLethal    = 4,
		WT_PistolsNonLethal = 5,
		WT_PrimaryNonLethal = 6,
		WT_Launcher         = 7,
		WT_Special          = 8,
		WT_Unarmed          = 9,
		WT_MAX              = 10
	};

	/**
	 * Enum ReadyOrNot.EDoorDamageType
	 */
	enum class EDoorDamageType : uint8_t
	{
		DDT_None        = 0,
		DDT_Blasting    = 1,
		DDT_Shotgunning = 2,
		DDT_Ramming     = 3,
		DDT_Kicking     = 4,
		DDT_MAX         = 5
	};

	/**
	 * Enum ReadyOrNot.EItemClass
	 */
	enum class EItemClass : uint8_t
	{
		IC_NoClass        = 0,
		IC_AssaultRifle   = 1,
		IC_SMG            = 2,
		IC_LMG            = 3,
		IC_Pistol         = 4,
		IC_Sniper         = 5,
		IC_Melee          = 6,
		IC_LessLethal     = 7,
		IC_Shotgun        = 8,
		IC_Launcher       = 9,
		IC_Grenade        = 10,
		IC_Shield         = 11,
		IC_Armor          = 12,
		IC_Headgear       = 13,
		IC_TacticalDevice = 14,
		IC_LongTactical   = 15,
		IC_Officer        = 16,
		IC_Uniform        = 17,
		IC_Plates         = 18,
		IC_Patches        = 19,
		IC_MAX            = 20
	};

	/**
	 * Enum ReadyOrNot.EDLC
	 */
	enum class EDLC : uint8_t
	{
		DLC_None          = 0,
		DLC_Supporter     = 1,
		DLC_PreorderBonus = 2,
		DLC_MAX           = 3
	};

	/**
	 * Enum ReadyOrNot.EDoorInteraction
	 */
	enum class EDoorInteraction : uint8_t
	{
		None      = 0,
		Open      = 1,
		Close     = 2,
		Peek      = 3,
		Push      = 4,
		Kick      = 5,
		Kick_Fail = 6,
		Ram       = 7,
		MAX       = 8
	};

	/**
	 * Enum ReadyOrNot.EReloadAnimEvent
	 */
	enum class EReloadAnimEvent : uint8_t
	{
		RAE_MagIn           = 0,
		RAE_MagOut          = 1,
		RAE_MagInQuick      = 2,
		RAE_MagOutQuick     = 3,
		RAE_BoltClosed      = 4,
		RAE_BoltClosedQuick = 5,
		RAE_BoltOpened      = 6,
		RAE_BoltOpenedQuick = 7,
		RAE_MAX             = 8
	};

	/**
	 * Enum ReadyOrNot.EStackupGenArea
	 */
	enum class EStackupGenArea : uint8_t
	{
		SGA_None       = 0,
		SGA_FrontLeft  = 1,
		SGA_FrontRight = 2,
		SGA_BackLeft   = 3,
		SGA_BackRight  = 4,
		SGA_All        = 5,
		SGA_MAX        = 6
	};

	/**
	 * Enum ReadyOrNot.EStackupGenType
	 */
	enum class EStackupGenType : uint8_t
	{
		SG_90DegreeLine = 0,
		SG_0DegreeLine  = 1,
		SG_MAX          = 2
	};

	/**
	 * Enum ReadyOrNot.ETrapType
	 */
	enum class ETrapType : uint8_t
	{
		Alarm     = 0,
		Flashbang = 1,
		Explosive = 2,
		Unknown   = 3,
		MAX       = 4
	};

	/**
	 * Enum ReadyOrNot.ETrapSetup
	 */
	enum class ETrapSetup : uint8_t
	{
		Automatic = 0,
		Manual    = 1,
		MAX       = 2
	};

	/**
	 * Enum ReadyOrNot.EBombState
	 */
	enum class EBombState : uint8_t
	{
		BS_None     = 0,
		BS_Active   = 1,
		BS_Disabled = 2,
		BS_Exploded = 3,
		BS_MAX      = 4
	};

	/**
	 * Enum ReadyOrNot.EClueState
	 */
	enum class EClueState : uint8_t
	{
		Unclaimed = 0,
		Collected = 1,
		Dropped   = 2,
		MAX       = 3
	};

	/**
	 * Enum ReadyOrNot.ETeamType
	 */
	enum class ETeamType : uint8_t
	{
		TT_NONE      = 0,
		TT_SERT_RED  = 1,
		TT_SERT_BLUE = 2,
		TT_SUSPECT   = 3,
		TT_CIVILIAN  = 4,
		TT_SQUAD     = 5,
		TT_MAX       = 6
	};

	/**
	 * Enum ReadyOrNot.EVoiceType
	 */
	enum class EVoiceType : uint8_t
	{
		VT_Local = 0,
		VT_Team  = 1,
		VT_MAX   = 2
	};

	/**
	 * Enum ReadyOrNot.EArmourCoverage
	 */
	enum class EArmourCoverage : uint8_t
	{
		AC_None           = 0,
		AC_FrontOnly      = 1,
		AC_FrontBack      = 2,
		AC_FrontBackSides = 3,
		AC_MAX            = 4
	};

	/**
	 * Enum ReadyOrNot.ELimbType
	 */
	enum class ELimbType : uint8_t
	{
		LT_None     = 0,
		LT_RightLeg = 1,
		LT_LeftLeg  = 2,
		LT_RightArm = 3,
		LT_LeftArm  = 4,
		LT_Head     = 5,
		LT_MAX      = 6
	};

	/**
	 * Enum ReadyOrNot.EPlayerHealthStatus
	 */
	enum class EPlayerHealthStatus : uint8_t
	{
		HS_Healthy       = 0,
		HS_Injured       = 1,
		HS_Downed        = 2,
		HS_Incapacitated = 3,
		HS_Dead          = 4,
		HS_Arrested      = 5,
		HS_NotAvailable  = 6,
		HS_MAX           = 7
	};

	/**
	 * Enum ReadyOrNot.EAnimWeaponType
	 */
	enum class EAnimWeaponType : uint8_t
	{
		CWT_Unarmed     = 0,
		CWT_Pistol      = 1,
		CWT_Rifle       = 2,
		CWT_Arrested    = 3,
		CWT_Surrendered = 4,
		CWT_Any         = 5,
		CWT_MAX         = 6
	};

	/**
	 * Enum ReadyOrNot.ECharacterEmotion
	 */
	enum class ECharacterEmotion : uint8_t
	{
		None   = 0,
		Angry  = 1,
		Wince  = 2,
		Sad    = 3,
		Afraid = 4,
		Alert  = 5,
		MAX    = 6
	};

	/**
	 * Enum ReadyOrNot.ESquadPosition
	 */
	enum class ESquadPosition : uint8_t
	{
		SP_Alpha   = 0,
		SP_Beta    = 1,
		SP_Charlie = 2,
		SP_Delta   = 3,
		SP_Foxtrot = 4,
		SP_NONE    = 5,
		SP_MAX     = 6
	};

	/**
	 * Enum ReadyOrNot.ECharacterDeathReason
	 */
	enum class ECharacterDeathReason : uint8_t
	{
		None                   = 0,
		PrimaryWeapon          = 1,
		SecondaryWeapon        = 2,
		TasedToDeath           = 3,
		FellFromHighHeight     = 4,
		Suicide                = 5,
		Headshot               = 6,
		Bleedout               = 7,
		Grenade                = 8,
		Explosion              = 9,
		MultipleUnhealedWounds = 10,
		MAX                    = 11
	};

	/**
	 * Enum ReadyOrNot.EGibAreas
	 */
	enum class EGibAreas : uint8_t
	{
		GA_None     = 0,
		GA_LeftLeg  = 1,
		GA_RightLeg = 2,
		GA_LeftArm  = 3,
		GA_RightArm = 4,
		GA_Head     = 5,
		GA_MAX      = 6
	};

	/**
	 * Enum ReadyOrNot.ELedgeHeight
	 */
	enum class ELedgeHeight : uint8_t
	{
		LH_None   = 0,
		LH_Step   = 1,
		LH_Vault  = 2,
		LH_Mantle = 3,
		LH_MAX    = 4
	};

	/**
	 * Enum ReadyOrNot.ELedgeWidth
	 */
	enum class ELedgeWidth : uint8_t
	{
		LW_None  = 0,
		LW_Ledge = 1,
		LW_Rail  = 2,
		LW_Fall  = 3,
		LW_MAX   = 4
	};

	/**
	 * Enum ReadyOrNot.EHolsterAnimationType
	 */
	enum class EHolsterAnimationType : uint8_t
	{
		HAT_Normal            = 0,
		HAT_SkipHolster       = 1,
		HAT_AlwaysPlayHolster = 2,
		HAT_MAX               = 3
	};

	/**
	 * Enum ReadyOrNot.EMultitoolFunctions
	 */
	enum class EMultitoolFunctions : uint8_t
	{
		MF_None       = 0,
		MF_Lockpick   = 1,
		MF_Knife      = 2,
		MF_Wirecutter = 3,
		MF_MAX        = 4
	};

	/**
	 * Enum ReadyOrNot.ELightRadialSelection
	 */
	enum class ELightRadialSelection : uint8_t
	{
		LR_None        = 0,
		LR_NVGs        = 1,
		LR_WeaponLight = 2,
		LR_Chemlight   = 3,
		LR_MAX         = 4
	};

	/**
	 * Enum ReadyOrNot.EMatchState
	 */
	enum class EMatchState : uint8_t
	{
		MS_None             = 0,
		MS_Warmup           = 1,
		MS_Playing          = 2,
		MS_RoundEnded       = 3,
		MS_MatchEnded       = 4,
		MS_GoingToNextLevel = 5,
		MS_MAX              = 6
	};

	/**
	 * Enum ReadyOrNot.ETrapState
	 */
	enum class ETrapState : uint8_t
	{
		TS_Live      = 0,
		TS_Activated = 1,
		TS_Disabled  = 2,
		TS_MAX       = 3
	};

	/**
	 * Enum ReadyOrNot.EAIAwarenessState
	 */
	enum class EAIAwarenessState : uint8_t
	{
		Unalerted  = 0,
		Suspicious = 1,
		Alerted    = 2,
		MAX        = 3
	};

	/**
	 * Enum ReadyOrNot.ERonNavigationQueryResult
	 */
	enum class ERonNavigationQueryResult : uint8_t
	{
		Invalid = 0,
		Error   = 1,
		Fail    = 2,
		Success = 3,
		MAX     = 4
	};

	/**
	 * Enum ReadyOrNot.ESwatCommand
	 */
	enum class ESwatCommand : uint8_t
	{
		SC_None                   = 0,
		SC_MoveTo                 = 1,
		SC_FallIn                 = 2,
		SC_Cover                  = 3,
		SC_Hold                   = 4,
		SC_Resume                 = 5,
		SC_DeployFlashbang        = 6,
		SC_DeployStinger          = 7,
		SC_DeployCSGas            = 8,
		SC_DeployChemlight        = 9,
		SC_ConfirmArrest          = 10,
		SC_ConfirmCollectEvidence = 11,
		SC_ConfirmDisarmTrap      = 12,
		SC_DoArrestTarget         = 13,
		SC_DoCollectEvidence      = 14,
		SC_DoReportTarget         = 15,
		SC_DisarmStandaloneTrap   = 16,
		SC_KillMe                 = 17,
		SC_StackUp                = 18,
		SC_CheckDoor              = 19,
		SC_PickLock               = 20,
		SC_RemoveDoorJam          = 21,
		SC_DeployMirrorgun        = 22,
		SC_DeployDoorJam          = 23,
		SC_CheckForTrap           = 24,
		SC_DisarmTrap             = 25,
		SC_OpenDoor               = 26,
		SC_CloseDoor              = 27,
		SC_MoveAndClear           = 28,
		SC_MoveAndClearFlashbang  = 29,
		SC_MoveAndClearStinger    = 30,
		SC_MoveAndClearCSGas      = 31,
		SC_OpenAndClear           = 32,
		SC_OpenAndClearFlashbang  = 33,
		SC_OpenAndClearStinger    = 34,
		SC_OpenAndClearCSGas      = 35,
		SC_KickAndClear           = 36,
		SC_KickAndClearFlashbang  = 37,
		SC_KickAndClearStinger    = 38,
		SC_KickAndClearCSGas      = 39,
		SC_ShotgunClear           = 40,
		SC_ShotgunClearFlashbang  = 41,
		SC_ShotgunClearStinger    = 42,
		SC_ShotgunClearCSGas      = 43,
		SC_C2Clear                = 44,
		SC_C2ClearFlashbang       = 45,
		SC_C2ClearStinger         = 46,
		SC_C2ClearCSGas           = 47,
		SC_Execute                = 48,
		SC_Cancel                 = 49,
		SC_ProceedToNextStage     = 50,
		SC_ClearFully             = 51,
		SC_AbortClear             = 52,
		SC_DeployShield           = 53,
		SC_MAX                    = 54
	};

	/**
	 * Enum ReadyOrNot.ERespawnMode
	 */
	enum class ERespawnMode : uint8_t
	{
		NoRespawn        = 0,
		ImmediateRespawn = 1,
		DelayedRespawn   = 2,
		MAX              = 3
	};

	/**
	 * Enum ReadyOrNot.ESurrenderExitType
	 */
	enum class ESurrenderExitType : uint8_t
	{
		None    = 0,
		Default = 1,
		Gun     = 2,
		Knife   = 3,
		MAX     = 4
	};

	/**
	 * Enum ReadyOrNot.ESelectedSpawn
	 */
	enum class ESelectedSpawn : uint8_t
	{
		SS_None        = 0,
		SS_FirstSpawn  = 1,
		SS_SecondSpawn = 2,
		SS_ThirdSpawn  = 3,
		SS_FourthSpawn = 4,
		SS_MAX         = 5
	};

	/**
	 * Enum ReadyOrNot.EPlanningLineTeam
	 */
	enum class EPlanningLineTeam : uint8_t
	{
		PLT_Gold = 0,
		PLT_Red  = 1,
		PLT_Blue = 2,
		PLT_MAX  = 3
	};

	/**
	 * Enum ReadyOrNot.EVoteState
	 */
	enum class EVoteState : uint8_t
	{
		Undecided = 0,
		Yes       = 1,
		No        = 2,
		MAX       = 3
	};

	/**
	 * Enum ReadyOrNot.EFreeDrawColor
	 */
	enum class EFreeDrawColor : uint8_t
	{
		FDC_Black  = 0,
		FDC_Red    = 1,
		FDC_Blue   = 2,
		FDC_Gold   = 3,
		FDC_Green  = 4,
		FDC_Purple = 5,
		FDC_Orange = 6,
		FDC_Cyan   = 7,
		FDC_MAX    = 8
	};

	/**
	 * Enum ReadyOrNot.EWeaponUnderbarrelAnimationType
	 */
	enum class EWeaponUnderbarrelAnimationType : uint8_t
	{
		WU_None     = 0,
		WU_VFG      = 1,
		WU_AFG      = 2,
		WU_Handstop = 3,
		WU_MAX      = 4
	};

	/**
	 * Enum ReadyOrNot.EKillfeedType
	 */
	enum class EKillfeedType : uint8_t
	{
		KT_None      = 0,
		KT_Kill      = 1,
		KT_Arrest    = 2,
		KT_Free      = 3,
		KT_Recovered = 4,
		KT_Death     = 5,
		KT_MAX       = 6
	};

	/**
	 * Enum ReadyOrNot.EFireMode
	 */
	enum class EFireMode : uint8_t
	{
		FM_Single     = 0,
		FM_Auto       = 1,
		FM_Burst      = 2,
		FM_Continuous = 3,
		FM_Safe       = 4,
		FM_MAX        = 5
	};

	/**
	 * Enum ReadyOrNot.EEvidenceActorState
	 */
	enum class EEvidenceActorState : uint8_t
	{
		Unclaimed  = 0,
		Collected  = 1,
		Extraction = 2,
		Dropped    = 3,
		MAX        = 4
	};

	/**
	 * Enum ReadyOrNot.ELastMenuStateBeforeJoin
	 */
	enum class ELastMenuStateBeforeJoin : uint8_t
	{
		LM_None          = 0,
		LM_ServerBrowser = 1,
		LM_FromFriends   = 2,
		LM_SinglePlayer  = 3,
		LM_MAX           = 4
	};

	/**
	 * Enum ReadyOrNot.EPersonnel
	 */
	enum class EPersonnel : uint8_t
	{
		PERS_None               = 0,
		PERS_TruckDriver        = 1,
		PERS_NoisemakerOperator = 2,
		PERS_VentilationExpert  = 3,
		PERS_Spotter            = 4,
		PERS_Marksman           = 5,
		PERS_Sniper             = 6,
		PERS_FloodlightOperator = 7,
		PERS_PowerCrew          = 8,
		PERS_Negotiator         = 9,
		PERS_MAX                = 10
	};

	/**
	 * Enum ReadyOrNot.ELoginState
	 */
	enum class ELoginState : uint8_t
	{
		LS_None      = 0,
		LS_LoggingIn = 1,
		LS_LoggedIn  = 2,
		LS_LoggedOut = 3,
		LS_LoginFail = 4,
		LS_MAX       = 5
	};

	/**
	 * Enum ReadyOrNot.ERadialCursorBehaviour
	 */
	enum class ERadialCursorBehaviour : uint8_t
	{
		RCB_Clamped    = 0,
		RCB_Continuous = 1,
		RCB_MAX        = 2
	};

	/**
	 * Enum ReadyOrNot.ESessionType
	 */
	enum class ESessionType : uint8_t
	{
		ST_None         = 0,
		ST_SinglePlayer = 1,
		ST_Public       = 2,
		ST_Friends      = 3,
		ST_MAX          = 4
	};

	/**
	 * Enum ReadyOrNot.EToggleBoneVis
	 */
	enum class EToggleBoneVis : uint8_t
	{
		TBV_None     = 0,
		TBV_HideBone = 1,
		TBV_ShowBone = 2,
		TBV_MAX      = 3
	};

	/**
	 * Enum ReadyOrNot.EActorAnalyticsState
	 */
	enum class EActorAnalyticsState : uint8_t
	{
		AAS_None     = 0,
		AAS_Wounded  = 1,
		AAS_Dead     = 2,
		AAS_Arrested = 3,
		AAS_MAX      = 4
	};

	/**
	 * Enum ReadyOrNot.EMusicState
	 */
	enum class EMusicState : uint8_t
	{
		MS_Preplanning = 0,
		MS_Ambient     = 1,
		MS_Action      = 2,
		MS_Scripted    = 3,
		MS_MAX         = 4
	};

	/**
	 * Enum ReadyOrNot.EMirrorContactType
	 */
	enum class EMirrorContactType : uint8_t
	{
		AI     = 0,
		Trap   = 1,
		Custom = 2,
		Both   = 3,
		MAX    = 4
	};

	/**
	 * Enum ReadyOrNot.ERadialMenuCloseReason
	 */
	enum class ERadialMenuCloseReason : uint8_t
	{
		MCR_UserClosed  = 0,
		MCR_ForceClosed = 1,
		MCR_MAX         = 2
	};

	/**
	 * Enum ReadyOrNot.EScenarioImportance
	 */
	enum class EScenarioImportance : uint8_t
	{
		SI_None        = 0,
		SI_AlwaysSpawn = 1,
		SI_Pooled      = 2,
		SI_MAX         = 3
	};

	/**
	 * Enum ReadyOrNot.EMatchmakingStatus
	 */
	enum class EMatchmakingStatus : uint8_t
	{
		MS_None        = 0,
		MS_Matchmaking = 1,
		MS_Success     = 2,
		MS_Failure     = 3,
		MS_Cancelled   = 4,
		MS_MAX         = 5
	};

	/**
	 * Enum ReadyOrNot.EEquippingSwat
	 */
	enum class EEquippingSwat : uint8_t
	{
		ES_None    = 0,
		ES_BlueOne = 1,
		ES_BlueTwo = 2,
		ES_RedOne  = 3,
		ES_RedTwo  = 4,
		ES_MAX     = 5
	};

	/**
	 * Enum ReadyOrNot.EThreatLevel
	 */
	enum class EThreatLevel : uint8_t
	{
		TL_None    = 0,
		TL_Low     = 1,
		TL_Medium  = 2,
		TL_High    = 3,
		TL_Extreme = 4,
		TL_MAX     = 5
	};

	/**
	 * Enum ReadyOrNot.EPathedAwareness
	 */
	enum class EPathedAwareness : uint8_t
	{
		PA_None                   = 0,
		PA_Noise                  = 1,
		PA_LastKnownEnemyPosition = 2,
		PA_MAX                    = 3
	};

	/**
	 * Enum ReadyOrNot.EObjectiveStatus
	 */
	enum class EObjectiveStatus : uint8_t
	{
		Objective_InProgress = 0,
		Objective_Complete   = 1,
		Objective_Failed     = 2,
		Objective_MAX        = 3
	};

	/**
	 * Enum ReadyOrNot.ETrackingStage
	 */
	enum class ETrackingStage : uint8_t
	{
		TS_FindingCover            = 0,
		TS_InvestigatingPoints     = 1,
		TS_ReturningToOriginalSpot = 2,
		TS_MAX                     = 3
	};

	/**
	 * Enum ReadyOrNot.EPlanningMapTool
	 */
	enum class EPlanningMapTool : uint8_t
	{
		PMT_Draw = 0,
		PMT_Pan  = 1,
		PMT_MAX  = 2
	};

	/**
	 * Enum ReadyOrNot.ETargetingCompTracking
	 */
	enum class ETargetingCompTracking : uint8_t
	{
		TCT_None                           = 0,
		TCT_TrackingActivity               = 1,
		TCT_TrackingCombatMoveActivity     = 2,
		TCT_TrackingCoverAreaCommand       = 3,
		TCT_TrackingVisibleNeutrals        = 4,
		TCT_TrackingEnemyLastKnownPosition = 5,
		TCT_TrackingNoiseStimulus          = 6,
		TCT_TrackingThreatAwarenessActor   = 7,
		TCT_TrackingLatestStimulus         = 8,
		TCT_TrackingVisibleTarget          = 9,
		TCT_TrackingMoveVector             = 10,
		TCT_TrackScriptedFireAtActor       = 11,
		TCT_TrackNearestDoor               = 12,
		TCT_TrackUncheckedThreatAwareness  = 13,
		TCT_TrackHesitateTarget            = 14,
		TCT_TrackMontagePosition           = 15,
		TCT_TrackCustomLocation            = 16,
		TCT_MAX                            = 17
	};

	/**
	 * Enum ReadyOrNot.EItemType
	 */
	enum class EItemType : uint8_t
	{
		IT_None                    = 0,
		IT_Rifles                  = 1,
		IT_SubmachineGun           = 2,
		IT_LightMachineGun         = 3,
		IT_Shotgun                 = 4,
		IT_Sniper                  = 5,
		IT_PistolsLethal           = 6,
		IT_PistolsNonLethal        = 7,
		IT_PrimaryNonLethal        = 8,
		IT_Launcher                = 9,
		IT_Melee                   = 10,
		IT_LessLethal              = 11,
		IT_Headwear                = 12,
		IT_BodyArmor               = 13,
		IT_Grenade                 = 14,
		IT_GrenadeNonLethal        = 15,
		IT_TacticalDevice          = 16,
		IT_TacticalDeviceNonLethal = 17,
		IT_TacticalOne             = 18,
		IT_TacticalTwo             = 19,
		IT_TacticalThree           = 20,
		IT_TacticalFour            = 21,
		IT_TacticalFive            = 22,
		IT_TacticalSix             = 23,
		IT_TacticalSeven           = 24,
		IT_TacticalEight           = 25,
		IT_LongTactical            = 26,
		IT_Skins                   = 27,
		IT_Loadouts                = 28,
		IT_MAX                     = 29
	};

	/**
	 * Enum ReadyOrNot.EPlanningMapStage
	 */
	enum class EPlanningMapStage : uint8_t
	{
		PMS_Overview          = 0,
		PMS_Spawn             = 1,
		PMS_Deployables       = 2,
		PMS_PersonnelMain     = 3,
		PMS_PersonnelPoint    = 4,
		PMS_PersonnelMapZones = 5,
		PMS_FreeDraw          = 6,
		PMS_MAX               = 7
	};

	/**
	 * Enum ReadyOrNot.EPlanningStage
	 */
	enum class EPlanningStage : uint8_t
	{
		PS_None      = 0,
		PS_Planning  = 1,
		PS_Situation = 2,
		PS_Loadout   = 3,
		PS_MAX       = 4
	};

	/**
	 * Enum ReadyOrNot.ESituationPage
	 */
	enum class ESituationPage : uint8_t
	{
		SP_None       = 0,
		SP_Objectives = 1,
		SP_Suspects   = 2,
		SP_Civilians  = 3,
		SP_Timeline   = 4,
		SP_MAX        = 5
	};

	/**
	 * Enum ReadyOrNot.ESwatCommandPriority
	 */
	enum class ESwatCommandPriority : uint8_t
	{
		SCP_PrioritizeCommands = 0,
		SCP_PrioritizeThreats  = 1,
		SCP_MAX                = 2
	};

	/**
	 * Enum ReadyOrNot.ETutorialMissionType
	 */
	enum class ETutorialMissionType : uint8_t
	{
		ETM_None          = 0,
		ETM_ShootingRange = 1,
		ETM_KillHouse     = 2,
		ETM_BasicControls = 3,
		ETM_Mirrorgun     = 4,
		ETM_StackUp       = 5,
		ETM_Arrest        = 6,
		ETM_Grenades      = 7,
		ETM_Movement      = 8,
		ETM_MAX           = 9
	};

	/**
	 * Enum ReadyOrNot.EPlanningPage
	 */
	enum class EPlanningPage : uint8_t
	{
		PP_None         = 0,
		PP_Overview     = 1,
		PP_Spawn        = 2,
		PP_Deployables  = 3,
		PP_Tactics      = 4,
		PP_FreePlanning = 5,
		PP_MAX          = 6
	};

	/**
	 * Enum ReadyOrNot.EWeaponAttachmentType
	 */
	enum class EWeaponAttachmentType : uint8_t
	{
		Null         = 0,
		Optics       = 1,
		Muzzle       = 2,
		Underbarrel  = 3,
		Overbarrel   = 4,
		Stock        = 5,
		Grip         = 6,
		Illuminators = 7,
		Ammunition   = 8,
		MAX          = 9
	};

	/**
	 * Enum ReadyOrNot.EDoorCheckResult
	 */
	enum class EDoorCheckResult : uint8_t
	{
		None     = 0,
		Unlocked = 1,
		Locked   = 2,
		Jammed   = 3,
		Blocked  = 4,
		MAX      = 5
	};

	/**
	 * Enum ReadyOrNot.ECompletedActionType
	 */
	enum class ECompletedActionType : uint8_t
	{
		CAT_ArrestedTarget  = 0,
		CAT_ReportedTarget  = 1,
		CAT_FreedTarget     = 2,
		CAT_LockPicked      = 3,
		CAT_LadderRetracted = 4,
		CAT_ItemRetrieved   = 5,
		CAT_MagInserted     = 6,
		CAT_MagRemoved      = 7,
		CAT_MagChanged      = 8,
		CAT_InteractActor   = 9,
		CAT_WedgeDeployed   = 10,
		CAT_C2Deployed      = 11,
		CAT_WedgeRemoved    = 12,
		CAT_TrapDisarmed    = 13,
		CAT_C2Removed       = 14,
		CAT_MAX             = 15
	};

	/**
	 * Enum ReadyOrNot.EItemVisualizationType
	 */
	enum class EItemVisualizationType : uint8_t
	{
		IVT_None         = 0,
		IVT_Primary      = 1,
		IVT_Secondary    = 2,
		IVT_LongTactical = 3,
		IVT_Helmet       = 4,
		IVT_Equipped     = 5,
		IVT_MAX          = 6
	};

	/**
	 * Enum ReadyOrNot.EPlayerObjectiveMarkerType
	 */
	enum class EPlayerObjectiveMarkerType : uint8_t
	{
		POMT_None       = 0,
		POMT_VipRescue  = 1,
		POMT_VipExecute = 2,
		POMT_Free       = 3,
		POMT_MAX        = 4
	};

	/**
	 * Enum ReadyOrNot.EItemVisualizationStatus
	 */
	enum class EItemVisualizationStatus : uint8_t
	{
		IVS_None       = 0,
		IVS_FPEquipped = 1,
		IVS_MAX        = 2
	};

	/**
	 * Enum ReadyOrNot.EMapType
	 */
	enum class EMapType : uint8_t
	{
		Axis   = 0,
		Action = 1,
		Auto   = 2,
		MAX    = 3
	};

	/**
	 * Enum ReadyOrNot.EToggleInventoryVis
	 */
	enum class EToggleInventoryVis : uint8_t
	{
		TIV_None         = 0,
		TIV_HideAll      = 1,
		TIV_ShowAll      = 2,
		TIV_HideEquipped = 3,
		TIV_ShowEquipped = 4,
		TIV_MAX          = 5
	};

	/**
	 * Enum ReadyOrNot.EIKStateEnum
	 */
	enum class EIKStateEnum : uint8_t
	{
		IKE_None     = 0,
		IKE_Optimize = 1,
		IKE_Full     = 2,
		IKE_MAX      = 3
	};

	/**
	 * Enum ReadyOrNot.ERecoilModifierOption
	 */
	enum class ERecoilModifierOption : uint8_t
	{
		RMO_ModifyRecoil   = 0,
		RMO_AddRecoil      = 1,
		RMO_SubtractRecoil = 2,
		RMO_MAX            = 3
	};

	/**
	 * Enum ReadyOrNot.EInterfaceSoundType
	 */
	enum class EInterfaceSoundType : uint8_t
	{
		IST_None      = 0,
		IST_Checkmark = 1,
		IST_Button    = 2,
		IST_MAX       = 3
	};

	/**
	 * Enum ReadyOrNot.EPreMissionSubCategory
	 */
	enum class EPreMissionSubCategory : uint8_t
	{
		None          = 0,
		Primary       = 1,
		Secondary     = 2,
		Tactical      = 3,
		Appearance    = 4,
		Protection    = 5,
		ItemSelection = 6,
		Grenades      = 7,
		Clean         = 8,
		MAX           = 9
	};

	/**
	 * Enum ReadyOrNot.EOptiwandViewMode
	 */
	enum class EOptiwandViewMode : uint8_t
	{
		PiP        = 0,
		Fullscreen = 1,
		MAX        = 2
	};

	/**
	 * Enum ReadyOrNot.EPostProcessState
	 */
	enum class EPostProcessState : uint8_t
	{
		Hold              = 0,
		Forward           = 1,
		Reverse           = 2,
		WaitingForReverse = 3,
		Ended             = 4,
		MAX               = 5
	};

	/**
	 * Enum ReadyOrNot.ECoverQueryTestPurpose
	 */
	enum class ECoverQueryTestPurpose : uint8_t
	{
		FilterOnly     = 0,
		ScoreOnly      = 1,
		FilterAndScore = 2,
		MAX            = 3
	};

	/**
	 * Enum ReadyOrNot.EPostProcessEndOptions
	 */
	enum class EPostProcessEndOptions : uint8_t
	{
		End     = 0,
		Hold    = 1,
		Loop    = 2,
		Reverse = 3,
		MAX     = 4
	};

	/**
	 * Enum ReadyOrNot.EPostProcessStartingState
	 */
	enum class EPostProcessStartingState : uint8_t
	{
		Forward = 0,
		Reverse = 1,
		MAX     = 2
	};

	/**
	 * Enum ReadyOrNot.ECoverFireType_FirePoint
	 */
	enum class ECoverFireType_FirePoint : uint8_t
	{
		CT_Front = 0,
		CT_Left  = 1,
		CT_Right = 2,
		CT_MAX   = 3
	};

	/**
	 * Enum ReadyOrNot.EPostProcessPlayDirection
	 */
	enum class EPostProcessPlayDirection : uint8_t
	{
		Forwards  = 0,
		Backwards = 1,
		MAX       = 2
	};

	/**
	 * Enum ReadyOrNot.EMoveDirectionExt
	 */
	enum class EMoveDirectionExt : uint8_t
	{
		F   = 0,
		L   = 1,
		R   = 2,
		B   = 3,
		FL  = 4,
		FR  = 5,
		BR  = 6,
		BL  = 7,
		MAX = 8
	};

	/**
	 * Enum ReadyOrNot.EMoveDirection
	 */
	enum class EMoveDirection : uint8_t
	{
		F   = 0,
		L   = 1,
		R   = 2,
		B   = 3,
		MAX = 4
	};

	/**
	 * Enum ReadyOrNot.EHighScoreCategory
	 */
	enum class EHighScoreCategory : uint8_t
	{
		HSC_None        = 0,
		HSC_COOP_DAILY  = 1,
		HSC_COOP_SEASON = 2,
		HSC_PVP_DAILY   = 3,
		HSC_PVP_SEASON  = 4,
		HSC_MAX         = 5
	};

	/**
	 * Enum ReadyOrNot.EHUDStyle
	 */
	enum class EHUDStyle : uint8_t
	{
		Default   = 0,
		Minimal   = 1,
		Detail    = 2,
		Immersive = 3,
		MAX       = 4
	};

	/**
	 * Enum ReadyOrNot.PTTKey
	 */
	enum class EPTTKey : uint8_t
	{
		PTTKeyPTTNoChannel   = 0,
		PTTKeyPTTAreaChannel = 1,
		PTTKeyPTTTeamChannel = 2,
		PTTKeyPTTKey_MAX     = 3
	};

	/**
	 * Enum ReadyOrNot.ENVGStyle
	 */
	enum class ENVGStyle : uint8_t
	{
		GreenPhosphor = 0,
		WhitePhosphor = 1,
		MAX           = 2
	};

	/**
	 * Enum ReadyOrNot.EMaskMagState
	 */
	enum class EMaskMagState : uint8_t
	{
		Show = 0,
		Hide = 1,
		MAX  = 2
	};

	/**
	 * Enum ReadyOrNot.EScoreReadoutMode
	 */
	enum class EScoreReadoutMode : uint8_t
	{
		AllScores    = 0,
		OnlyPositive = 1,
		OnlyNegative = 2,
		Disabled     = 3,
		MAX          = 4
	};

	/**
	 * Enum ReadyOrNot.EEmptyMagReloadType
	 */
	enum class EEmptyMagReloadType : uint8_t
	{
		RegularReload = 0,
		FastReload    = 1,
		MAX           = 2
	};

	/**
	 * Enum ReadyOrNot.EShotgunReloadType
	 */
	enum class EShotgunReloadType : uint8_t
	{
		SRT_SingleLoad = 0,
		SRT_MultiLoad  = 1,
		SRT_MAX        = 2
	};

	/**
	 * Enum ReadyOrNot.EMaskMag
	 */
	enum class EMaskMag : uint8_t
	{
		Mag01 = 0,
		Mag02 = 1,
		Dummy = 2,
		MAX   = 3
	};

	/**
	 * Enum ReadyOrNot.EGrenadeThrowSettingType
	 */
	enum class EGrenadeThrowSettingType : uint8_t
	{
		GUT_QuickGrenadeThrow   = 0,
		GUT_ClassicGrenadeThrow = 1,
		GUT_MAX                 = 2
	};

	/**
	 * Enum ReadyOrNot.ECommandInterfaceType
	 */
	enum class ECommandInterfaceType : uint8_t
	{
		CI_GraphicCommandInterface = 0,
		CI_ClassicCommandInterface = 1,
		CI_MAX                     = 2
	};

	/**
	 * Enum ReadyOrNot.EAnimationType
	 */
	enum class EAnimationType : uint8_t
	{
		AT_Gun_FP  = 0,
		AT_Gun_TP  = 1,
		AT_Body_FP = 2,
		AT_Body_TP = 3,
		AT_MAX     = 4
	};

	/**
	 * Enum ReadyOrNot.ESuspectStateData
	 */
	enum class ESuspectStateData : uint8_t
	{
		SSD_NONE                        = 0,
		SSD_IS_TRACKING                 = 1,
		SSD_HAS_BEST_ACTION             = 2,
		SSD_HAS_BEST_CONTINUOUS_ACTION  = 3,
		SSD_HAS_BEST_COMBAT_MOVE_ACTION = 4,
		SSD_MAX                         = 5
	};

	/**
	 * Enum ReadyOrNot.EBaseAnimType_TP
	 */
	enum class EBaseAnimType_TP : uint8_t
	{
		IdlePose_Low_TP           = 0,
		IdlePose_Up_TP            = 1,
		IdlePose_Shld_TP          = 2,
		IdlePose_Sights_TP        = 3,
		IdlePose_Ret_TP           = 4,
		IdlePose_Ovr_TP           = 5,
		Crouch_IdlePose_Low_TP    = 6,
		Crouch_IdlePose_Up_TP     = 7,
		Crouch_IdlePose_Shld_TP   = 8,
		Crouch_IdlePose_Sights_TP = 9,
		Crouch_IdlePose_Ret_TP    = 10,
		Crouch_IdlePose_Ovr_TP    = 11,
		IdlePose_AFG_TP           = 12,
		IdlePose_VFG_TP           = 13,
		IdlePose_HSTOP_TP         = 14,
		ENone                     = 15,
		EBaseAnimType_MAX         = 16
	};

	/**
	 * Enum ReadyOrNot.EBaseBlendspaces_FP
	 */
	enum class EBaseBlendspaces_FP : uint8_t
	{
		Look_BS_FP           = 0,
		ENone                = 1,
		EBaseBlendspaces_MAX = 2
	};

	/**
	 * Enum ReadyOrNot.EBaseAnimType_FP
	 */
	enum class EBaseAnimType_FP : uint8_t
	{
		IdlePose_FP          = 0,
		Idle_FP              = 1,
		Run_FP               = 2,
		Walk_FP              = 3,
		Run_Limp_FP          = 4,
		Walk_Limp_FP         = 5,
		Lowered_Up_Pose_FP   = 6,
		Lowered_Down_Pose_FP = 7,
		ADS_Run_FP           = 8,
		ADS_Walk_FP          = 9,
		ADS_Run_Limp_FP      = 10,
		ADS_Walk_Limp_FP     = 11,
		IdlePose_AFG_FP      = 12,
		IdlePose_VFG_FP      = 13,
		IdlePose_HSTOP_FP    = 14,
		ENone                = 15,
		EBaseAnimType_MAX    = 16
	};

	/**
	 * Enum ReadyOrNot.EStrafeDirection
	 */
	enum class EStrafeDirection : uint8_t
	{
		F   = 0,
		L   = 1,
		R   = 2,
		B   = 3,
		FL  = 4,
		FR  = 5,
		BR  = 6,
		BL  = 7,
		MAX = 8
	};

	/**
	 * Enum ReadyOrNot.EItemOverrideRule
	 */
	enum class EItemOverrideRule : uint8_t
	{
		NONE             = 0,
		ADDITIVE_ONLY    = 1,
		LAYERED_ONLY     = 2,
		ADDITIVE_LAYERED = 3,
		MAX              = 4
	};

	/**
	 * Enum ReadyOrNot.ERoNGaitState
	 */
	enum class ERoNGaitState : uint8_t
	{
		RON_TURN   = 0,
		RON_WALK   = 1,
		RON_RUN    = 2,
		RON_SPRINT = 3,
		RON_MAX    = 4
	};

	/**
	 * Enum ReadyOrNot.EObjectiveLevel
	 */
	enum class EObjectiveLevel : uint8_t
	{
		PrimaryObjective   = 0,
		SecondaryObjective = 1,
		TertiaryObjective  = 2,
		MAX                = 3
	};

	/**
	 * Enum ReadyOrNot.EAbortCoverReason
	 */
	enum class EAbortCoverReason : uint8_t
	{
		Success               = 0,
		Forced                = 1,
		EnemySensed           = 2,
		SeenEnemyApproaching  = 3,
		HeardEnemyApproaching = 4,
		EnemyMovingTowardsUs  = 5,
		EnemyFiredNearUs      = 6,
		MAX                   = 7
	};

	/**
	 * Enum ReadyOrNot.ELightType
	 */
	enum class ELightType : uint8_t
	{
		LT_None  = 0,
		LT_Day   = 1,
		LT_Night = 2,
		LT_MAX   = 3
	};

	/**
	 * Enum ReadyOrNot.EGenerationType
	 */
	enum class EGenerationType : uint8_t
	{
		GT_None            = 0,
		GT_Scenarios       = 1,
		GT_RandomScenarios = 2,
		GT_MAX             = 3
	};

	/**
	 * Enum ReadyOrNot.EPVPEvent
	 */
	enum class EPVPEvent : uint8_t
	{
		None             = 0,
		PlayerKilled     = 1,
		PlayerArrested   = 2,
		PlayerFreed      = 3,
		KillConfirmed    = 4,
		ReportedEvidence = 5,
		VIPSecured       = 6,
		VIPArrested      = 7,
		VIPFreed         = 8,
		VIPKilled        = 9,
		FlagCaptured     = 10,
		FlagDropped      = 11,
		IntelCollected   = 12,
		IntelDropped     = 13,
		IntelExtracting  = 14,
		IntelExtracted   = 15,
		IncrimClueFound  = 16,
		MAX              = 17
	};

	/**
	 * Enum ReadyOrNot.EAIConsiderationScoringMethod
	 */
	enum class EAIConsiderationScoringMethod : uint8_t
	{
		Additive       = 0,
		Subtractive    = 1,
		Multiplicative = 2,
		Divisive       = 3,
		MAX            = 4
	};

	/**
	 * Enum ReadyOrNot.EAIAction
	 */
	enum class EAIAction : uint8_t
	{
		None             = 0,
		FireWeapon       = 1,
		Melee            = 2,
		HardCover        = 3,
		Hide             = 4,
		Surrender        = 5,
		FakeSurrender    = 6,
		PlayDead         = 7,
		Flee             = 8,
		Rush             = 9,
		Flank            = 10,
		Duel             = 11,
		Suppress         = 12,
		Push             = 13,
		Investigate      = 14,
		PickUpItem       = 15,
		Suicide          = 16,
		NeverFakeSuicide = 17,
		Custom           = 18,
		MAX              = 19
	};

	/**
	 * Enum ReadyOrNot.EAITeamTactic
	 */
	enum class EAITeamTactic : uint8_t
	{
		None     = 0,
		Suppress = 1,
		Cover    = 2,
		Flank    = 3,
		Push     = 4,
		Charge   = 5,
		Custom   = 6,
		MAX      = 7
	};

	/**
	 * Enum ReadyOrNot.EAnimCardinalDirection
	 */
	enum class EAnimCardinalDirection : uint8_t
	{
		North = 0,
		East  = 1,
		South = 2,
		West  = 3,
		MAX   = 4
	};

	/**
	 * Enum ReadyOrNot.EDistanceMatchingType
	 */
	enum class EDistanceMatchingType : uint8_t
	{
		Start = 0,
		Stop  = 1,
		Pivot = 2,
		Jump  = 3,
		Fall  = 4,
		None  = 5,
		MAX   = 6
	};

	/**
	 * Enum ReadyOrNot.EItemSocket
	 */
	enum class EItemSocket : uint8_t
	{
		Body = 0,
		Hand = 1,
		MAX  = 2
	};

	/**
	 * Enum ReadyOrNot.EActivityStatus
	 */
	enum class EActivityStatus : uint8_t
	{
		Uninitialized = 0,
		Initialized   = 1,
		Started       = 2,
		Paused        = 3,
		SoftComplete  = 4,
		Complete      = 5,
		MAX           = 6
	};

	/**
	 * Enum ReadyOrNot.ECombatEngagementType
	 */
	enum class ECombatEngagementType : uint8_t
	{
		FireWeapon    = 0,
		Melee         = 1,
		ExplosiveVest = 2,
		Custom        = 3,
		MAX           = 4
	};

	/**
	 * Enum ReadyOrNot.ENavLOS
	 */
	enum class ENavLOS : uint8_t
	{
		NL_Any                = 0,
		NL_BreakLOS           = 1,
		NL_RequireLOS         = 2,
		NL_RequireLOSToMyself = 3,
		NL_MAX                = 4
	};

	/**
	 * Enum ReadyOrNot.ENavType
	 */
	enum class ENavType : uint8_t
	{
		NT_SinglePoint = 0,
		NT_Circle      = 1,
		NT_Grid        = 2,
		NT_MAX         = 3
	};

	/**
	 * Enum ReadyOrNot.EStructureCastPathway
	 */
	enum class EStructureCastPathway : uint8_t
	{
		CastSuccess = 0,
		CastFailed  = 1,
		MAX         = 2
	};

	/**
	 * Enum ReadyOrNot.EBioType
	 */
	enum class EBioType : uint8_t
	{
		BT_None     = 0,
		BT_Suspect  = 1,
		BT_Civilian = 2,
		BT_MAX      = 3
	};

	/**
	 * Enum ReadyOrNot.EProjectileReaction
	 */
	enum class EProjectileReaction : uint8_t
	{
		PR_None      = 0,
		PR_Richochet = 1,
		PR_Pierce    = 2,
		PR_MAX       = 3
	};

	/**
	 * Enum ReadyOrNot.ECoverLandmarkAnimDirection
	 */
	enum class ECoverLandmarkAnimDirection : uint8_t
	{
		Forward = 0,
		Left    = 1,
		Right   = 2,
		MAX     = 3
	};

	/**
	 * Enum ReadyOrNot.ECommandStatus
	 */
	enum class ECommandStatus : uint8_t
	{
		CS_None     = 0,
		CS_Inactive = 1,
		CS_Active   = 2,
		CS_Complete = 3,
		CS_Failed   = 4,
		CS_MAX      = 5
	};

	/**
	 * Enum ReadyOrNot.EPseudoSpeedType
	 */
	enum class EPseudoSpeedType : uint8_t
	{
		Null     = 0,
		Slow     = 1,
		Walk     = 2,
		Run      = 3,
		Sprint   = 4,
		LimpWalk = 5,
		LimpRun  = 6,
		Last     = 7,
		MAX      = 8
	};

	/**
	 * Enum ReadyOrNot.EActorSenseType
	 */
	enum class EActorSenseType : uint8_t
	{
		Sight  = 0,
		Sound  = 1,
		Damage = 2,
		MAX    = 3
	};

	/**
	 * Enum ReadyOrNot.ETacticalAuthorityVoice
	 */
	enum class ETacticalAuthorityVoice : uint8_t
	{
		TAV_None                = 0,
		TAV_Surrender           = 1,
		TAV_PickUpItem          = 2,
		TAV_DropTheGun          = 3,
		TAV_GetOnTheFloor       = 4,
		TAV_ComeHere            = 5,
		TAV_Wait                = 6,
		TAV_PutHandsUp          = 7,
		TAV_MoveOverThere       = 8,
		TAV_ReportDead          = 9,
		TAV_ReportArrested      = 10,
		TAV_ReportIncapacitated = 11,
		TAV_ReportEvidence      = 12,
		TAV_MAX                 = 13
	};

	/**
	 * Enum ReadyOrNot.EDroneDamageSpeed
	 */
	enum class EDroneDamageSpeed : uint8_t
	{
		DDS_10PercentSpeed = 0,
		DDS_20PercentSpeed = 1,
		DDS_30PercentSpeed = 2,
		DDS_40PercentSpeed = 3,
		DDS_50PercentSpeed = 4,
		DDS_60PercentSpeed = 5,
		DDS_70PercentSpeed = 6,
		DDS_80PercentSpeed = 7,
		DDS_90PercentSpeed = 8,
		DDS_MAX            = 9
	};

	/**
	 * Enum ReadyOrNot.EGameEventMetric
	 */
	enum class EGameEventMetric : uint8_t
	{
		GEM_NONE                 = 0,
		GEM_GAME_STARTED         = 1,
		GEM_GAME_JOINED          = 2,
		GEM_GAME_FINISHED        = 3,
		GEM_GAME_CRASHED         = 4,
		GEM_PLAYER_GAME_FINISHED = 5,
		GEM_MAX                  = 6
	};

	/**
	 * Enum ReadyOrNot.ETutorialMessageContext
	 */
	enum class ETutorialMessageContext : uint8_t
	{
		Movement = 0,
		MAX      = 1
	};

	/**
	 * Enum ReadyOrNot.ERONBuildConfiguration
	 */
	enum class ERONBuildConfiguration : uint8_t
	{
		Unknown      = 0,
		Editor       = 1,
		Debug        = 2,
		Development  = 3,
		Shipping     = 4,
		FinalRelease = 5,
		Test         = 6,
		MAX          = 7
	};

	/**
	 * Enum ReadyOrNot.ECommWheelLockOnBehaviour
	 */
	enum class ECommWheelLockOnBehaviour : uint8_t
	{
		LB_LockOnToObstruction        = 0,
		LB_KeepLockOn                 = 1,
		LB_CancelLockOnWhenObstructed = 2,
		LB_MAX                        = 3
	};

	/**
	 * Enum ReadyOrNot.EFootConstEnum
	 */
	enum class EFootConstEnum : uint8_t
	{
		FCE_Forward = 0,
		FCE_Inverse = 1,
		FCE_MAX     = 2
	};

	/**
	 * Enum ReadyOrNot.EMedicalHealScreen
	 */
	enum class EMedicalHealScreen : uint8_t
	{
		MHS_Healer          = 0,
		MHS_Healee          = 1,
		MHS_MortallyWounded = 2,
		MHS_NoBrokenLimbs   = 3,
		MHS_MAX             = 4
	};

	/**
	 * Enum ReadyOrNot.EDoorBreachType
	 */
	enum class EDoorBreachType : uint8_t
	{
		None    = 0,
		Open    = 1,
		Move    = 2,
		Kick    = 3,
		Shotgun = 4,
		Ram     = 5,
		C2      = 6,
		Custom  = 7,
		MAX     = 8
	};

	/**
	 * Enum ReadyOrNot.EFilterMovePointGeneration
	 */
	enum class EFilterMovePointGeneration : uint8_t
	{
		FMNP_None      = 0,
		FNMP_LeftOnly  = 1,
		FNMP_RightOnly = 2,
		FNMP_HardLeft  = 3,
		FNMP_HardRight = 4,
		MAX            = 5
	};

	/**
	 * Enum ReadyOrNot.EChangeBehaviour
	 */
	enum class EChangeBehaviour : uint8_t
	{
		CB_Add    = 0,
		CB_Remove = 1,
		CB_MAX    = 2
	};

	/**
	 * Enum ReadyOrNot.ETOCPriority
	 */
	enum class ETOCPriority : uint8_t
	{
		ETP_Flush          = 0,
		ETP_HighPriority   = 1,
		ETP_MediumPriority = 2,
		ETP_LowPriority    = 3,
		ETP_MAX            = 4
	};

	/**
	 * Enum ReadyOrNot.EPlayerStatus
	 */
	enum class EPlayerStatus : uint8_t
	{
		PS_None     = 0,
		PS_NotReady = 1,
		PS_Ready    = 2,
		PS_Deployed = 3,
		PS_MAX      = 4
	};

	/**
	 * Enum ReadyOrNot.ECOOPMode
	 */
	enum class ECOOPMode : uint8_t
	{
		CM_None               = 0,
		CM_BombThreat         = 1,
		CM_ActiveShooter      = 2,
		CM_HostageRescue      = 3,
		CM_BarricadedSuspects = 4,
		CM_Raid               = 5,
		CM_MAX                = 6
	};

	/**
	 * Enum ReadyOrNot.ECombatState
	 */
	enum class ECombatState : uint8_t
	{
		CS_Unaware           = 0,
		CS_Suspicious        = 1,
		CS_Fleeing           = 2,
		CS_Hesitation        = 3,
		CS_Cover             = 4,
		CS_ArmedAndDangerous = 5,
		CS_MAX               = 6
	};

	/**
	 * Enum ReadyOrNot.EItemSelectionInterfaceType
	 */
	enum class EItemSelectionInterfaceType : uint8_t
	{
		Wheel = 0,
		Panel = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ReadyOrNot.AIActionData_NameOnly
	 * Size -> 0x0008
	 */
	struct FAIActionData_NameOnly
	{
	public:
		class FName                                                  Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIActionGateData
	 * Size -> 0x0068
	 */
	struct FAIActionGateData
	{
	public:
		class UAIActionGate*                                         Type;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNot : 1;                                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCooldown : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Cooldown;                                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLockGateOnCooldown : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bContributeToFailCount : 1;                              // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ACyberneticController*, float>                    Cooldowns;                                               // 0x0018(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIActionConsiderationData
	 * Size -> 0x0060
	 */
	struct FAIActionConsiderationData
	{
	public:
		float                                                        Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIConsiderationScoringMethod                                ScoringMethod;                                           // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIActionConsideration*                                Type;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, float>                    Scores;                                                  // 0x0010(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIActionData
	 * Size -> 0x02C8
	 */
	struct FAIActionData
	{
	public:
		class FName                                                  Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIAction                                                    ActionType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIAction*                                             CustomActionClass;                                       // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Weight;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDisallowWhenLastAlive : 1;                              // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDoOnce : 1;                                             // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDisableActionWhenFailedToConsider : 1;                  // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      DisableActionConsiderCount;                              // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCommitUntilEnd : 1;                                     // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        CommitTime;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCommitTimeFromConfig : 1;                               // 0x002C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                CommitTimeConfigKey;                                     // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIActionData_NameOnly>                        CommitInterrupts;                                        // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bUseCooldown : 1;                                        // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Cooldown;                                                // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCooldownFromConfig : 1;                                 // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                CooldownConfigKey;                                       // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIActionGateData>                             Gates;                                                   // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FAIActionConsiderationData>                    Considerations;                                          // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, float>                    Scores;                                                  // 0x0090(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, float>                    Cooldowns;                                               // 0x00E0(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, float>                    CommitTimes;                                             // 0x0130(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, int32_t>                  SuccessConsiderCount;                                    // 0x0180(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, int32_t>                  FailConsiderCount;                                       // 0x01D0(0x0050) Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, class UAIAction*>         CustomActions;                                           // 0x0220(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<class ACyberneticController*, uint32_t>                 RunCount;                                                // 0x0270(0x0050) Transient, NativeAccessSpecifierPublic
		class UAIActionPresetData*                                   Preset;                                                  // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ActivityRoute
	 * Size -> 0x0020
	 */
	struct FActivityRoute
	{
	public:
		float                                                        TimeDoingActivity;                                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWorldBuildingPlacementActor*                          WorldBuildingPlacementActor;                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAllowFemale;                                            // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorldBuildingActivityData*                            WorldBuildingActivityData;                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ActivityRouteCollection
	 * Size -> 0x0030
	 */
	struct FActivityRouteCollection
	{
	public:
		TArray<struct FActivityRoute>                                ActivityRoutes;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FColor                                   PathColor;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bReturnToOriginalSpot;                                   // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      ActivityIdx;                                             // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOnlyRunWhenCharacterRelevant;                           // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x13];                                  // 0x001D(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SpawnTweakables
	 * Size -> 0x0048
	 */
	struct FSpawnTweakables
	{
	public:
		class UBaseCombatMoveActivity*                               DefaultCombatMoveActivity;                               // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bForceNoWeapon : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseWeapon*                                           ForceWeaponOverride;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ForceBodyArmourOverride;                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamType                                                    ForceTeamTypeOverride;                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIArchetypeData*                                      ArchetypeOverride;                                       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                          SpawnWithTags;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bForceAlwaysJustified;                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDeactivated;                                            // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SuspectTweakables
	 * Size -> 0x0018
	 */
	struct FSuspectTweakables
	{
	public:
		struct FVector2D                                TimeUntilRaisingGun;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                TimeUntilDraw;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FakeSurrenderChance;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNoTaunt;                                                // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SpawnData
	 * Size -> 0x00B8
	 */
	struct FSpawnData
	{
	public:
		bool                                                         bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                   SpawnedAI;                                               // 0x0008(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FActivityRouteCollection                              ActivityRouteCollection;                                 // 0x0018(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSpawnTweakables                                      GeneralTweakables;                                       // 0x0048(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSuspectTweakables                                    SuspectTweakables;                                       // 0x0090(0x0018) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                        SpawnDistance;                                           // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScenarioGenerator*                                    LoadedFromScenario;                                      // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIMoveDataBlock
	 * Size -> 0x0098
	 */
	struct FAIMoveDataBlock
	{
	public:
		class FName                                                  UnarmedMovementStyle;                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  RifleMovementStyle;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  RifleStrafeMovementStyle;                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  RifleStrafeFastMovementStyle;                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HeavyRifleStrafeMovementStyle;                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  RifleStrafeCrouchMovementSet;                            // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  PistolMovementStyle;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  PistolStrafeMovementStyle;                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  PistolStrafeCrouchMovementStyle;                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ComplyMovementStyle;                                     // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  CuffedMovementStyle;                                     // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  StunnedMovementStyle;                                    // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  GassedMovementStyle;                                     // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  InjuredMovementStyle;                                    // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  SprintMovementStyle;                                     // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                          UnarmedCalmStyles;                                       // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                          UnarmedPanicStyles;                                      // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIMovementStyleData
	 * Size -> 0x0040
	 */
	struct FAIMovementStyleData
	{
	public:
		class FName                                                  UnarmedMoveStyle;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  StunnedMoveStyle;                                        // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  LoweredTwoHandedMoveStyle;                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  RaisedTwoHandedMoveStyle;                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HesitationMoveStyle;                                     // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HesitationRifleMoveStyle;                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  SurrenderedMoveStyle;                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ArrestedMoveStyle;                                       // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SavedLoadout
	 * Size -> 0x0178
	 */
	struct FSavedLoadout
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ActiveLoadoutPreset;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Primary;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryScope;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryMuzzle;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryUnderbarrel;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryOverbarrel;                                       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryStock;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryGrip;                                             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryIlluminator;                                      // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     PrimaryAmmunition;                                       // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                          PrimaryAmmoSlots;                                        // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      PrimaryAmmoSlotsCount;                                   // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkinComponent*                                        PrimarySkin;                                             // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Secondary;                                               // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryScope;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryMuzzle;                                         // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryUnderbarrel;                                    // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryOverbarrel;                                     // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryStock;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryGrip;                                           // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryIlluminator;                                    // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     SecondaryAmmunition;                                     // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                          SecondaryAmmoSlots;                                      // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      SecondaryAmmoSlotsCount;                                 // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkinComponent*                                        SecondarySkin;                                           // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  CharacterType;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             LongTactical;                                            // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     GrenadeSlots;                                            // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                      GrenadeSlotsCount;                                       // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseItem*>                                     TacticalSlots;                                           // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                      TacticalSlotsCount;                                      // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             Armor;                                                   // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Helmet;                                                  // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             RandomGear;                                              // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     Miscelaneous;                                            // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class USkinComponent*                                        PlayerSkin;                                              // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                CharacterLookOverride;                                   // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArmourCoverage                                              ArmourCoverage;                                          // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArmourMaterial*                                       ArmourMaterial;                                          // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AttachedMeshData
	 * Size -> 0x0018
	 */
	struct FAttachedMeshData
	{
	public:
		class UStaticMesh*                                           StaticMesh;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  Socket;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                  StaticMeshComponent;                                     // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AttachedSkeletalMeshData
	 * Size -> 0x0020
	 */
	struct FAttachedSkeletalMeshData
	{
	public:
		class USkeletalMesh*                                         SkeletalMesh;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseMasterPose;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  Socket;                                                  // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                                SkeletalMeshComponent;                                   // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterMesh
	 * Size -> 0x0070
	 */
	struct FCharacterMesh
	{
	public:
		struct FGuid                                                 Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         Body;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         Head;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                            FaceROM;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                CharacterSpeechHandle;                                   // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            Footsteps;                                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAttachedMeshData>                             AttachedMeshData;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FAttachedSkeletalMeshData>                     AttachedSkeletalMeshData;                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class FName>                                          DamageExcludedBones;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIDataLookupTable
	 * Size -> 0x0378 (FullSize[0x0380] - InheritedSize[0x0008])
	 */
	struct FAIDataLookupTable : public FTableRowBase
	{
	public:
		class UAIArchetypeData*                                      Archetype;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ECOOPMode, class UAIArchetypeData*>                     GameModeArchetypeOverride;                               // 0x0010(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                   Faction;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bIsLeaderOfFaction : 1;                                  // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIMoveDataBlock                                      DefaultMoveData;                                         // 0x0078(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FAIMovementStyleData                                  MovementStyle;                                           // 0x0110(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bUseRandomLoadout;                                       // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseItem*>                                     AIWeaponSelection;                                       // 0x0158(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FName>                                          AIAmmoTypeSelection;                                     // 0x0168(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                        ChanceToFireGunOnDeath;                                  // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                          AIBodyArmourSelection;                                   // 0x0180(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                          AIHelmetSelection;                                       // 0x0190(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class ASuspectArmour*                                        AIBodyArmourOverride;                                    // 0x01A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSavedLoadout                                         DefaultLoadout;                                          // 0x01A8(0x0178) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ETeamType                                                    SpawningTeamType;                                        // 0x0320(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACyberneticCharacter*                                  CharacterClass;                                          // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterMesh>                                RandomCharacterMesh;                                     // 0x0330(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                         bOverrideControllerClass : 1;                            // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                         ControllerClass;                                         // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                          Tags;                                                    // 0x0350(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bIsFemale;                                               // 0x0360(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsChild;                                                // 0x0361(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOverrideSurrenderWithItemChance : 1;                    // 0x0362(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bChanceToSurrenderWithItem : 1;                          // 0x0362(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x1];                                   // 0x0363(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SurrenderWithItemChance;                                 // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                        SurrenderItems;                                          // 0x0368(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bUnconsciousSpawnBleedout;                               // 0x0378(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCanEverSuicide;                                         // 0x0379(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOverrideSuicideChance;                                  // 0x037A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0006[0x1];                                   // 0x037B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SuicideChance;                                           // 0x037C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.FactionTeamTactics
	 * Size -> 0x0010
	 */
	struct FFactionTeamTactics
	{
	public:
		TArray<EAITeamTactic>                                        Tactics;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.FactionSuspectTeam
	 * Size -> 0x0020
	 */
	struct FFactionSuspectTeam
	{
	public:
		TArray<class ASuspectCharacter*>                             Suspects;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		TArray<EAITeamTactic>                                        Tactics;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ItemVisualData
	 * Size -> 0x0030
	 */
	struct FItemVisualData
	{
	public:
		class UTexture2D*                                            ItemIcon;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                            PremissionPlanningItemIcon;                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                            RadialItemIcon;                                          // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         ItemMesh;                                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                    AmmoIcons;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.WeightStunMultiplier
	 * Size -> 0x0010
	 */
	struct FWeightStunMultiplier
	{
	public:
		float                                                        MinimumWeight;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaximumWeight;                                           // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinimumWeightMultiplier;                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaximumWeightMultiplier;                                 // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.KillFeedData
	 * Size -> 0x0018
	 */
	struct FKillFeedData
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillfeedType                                                Type;                                                    // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.MapData
	 * Size -> 0x0018
	 */
	struct FMapData
	{
	public:
		TArray<struct FVector2D>                        PointData;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EFreeDrawColor                                               ColorType;                                               // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Thickness;                                               // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.FloorMapPointData
	 * Size -> 0x0010
	 */
	struct FFloorMapPointData
	{
	public:
		TArray<struct FMapData>                                      MapData;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RChatMessage
	 * Size -> 0x0068
	 */
	struct FRChatMessage
	{
	public:
		class FString                                                SenderName;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AReadyOrNotPlayerState*                                SenderPlayerState;                                       // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Message;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                          Color;                                                   // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct PCoreUObject_FDateTime                                Timestamp;                                               // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Args;                                                    // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamType                                                    AssociatedTeam;                                          // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bKillfeed;                                               // 0x0051(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCommand;                                                // 0x0052(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                     TargetPlayerController;                                  // 0x0058(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamType                                                    TargetTeam;                                              // 0x0060(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlanningMarker
	 * Size -> 0x0024 (FullSize[0x0030] - InheritedSize[0x000C])
	 */
	struct FPlanningMarker : public FFastArraySerializerItem
	{
	public:
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReadyOrNotPlayerController*                           Owner;                                                   // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                Position;                                                // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  Style;                                                   // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Rotation;                                                // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlanningMarkerArray
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	struct FPlanningMarkerArray : public FFastArraySerializer
	{
	public:
		TArray<struct FPlanningMarker>                               Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x30];                                  // 0x0118(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlanningLine
	 * Size -> 0x0024 (FullSize[0x0030] - InheritedSize[0x000C])
	 */
	struct FPlanningLine : public FFastArraySerializerItem
	{
	public:
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReadyOrNotPlayerController*                           Owner;                                                   // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                        Points;                                                  // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EPlanningLineTeam                                            PlanningLineTeam;                                        // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlanningLineArray
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	struct FPlanningLineArray : public FFastArraySerializer
	{
	public:
		TArray<struct FPlanningLine>                                 Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x30];                                  // 0x0118(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlayerDetails
	 * Size -> 0x0010
	 */
	struct FPlayerDetails
	{
	public:
		class FString                                                PlayerName;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SavedWeaponAttachmentData
	 * Size -> 0x0058
	 */
	struct FSavedWeaponAttachmentData
	{
	public:
		bool                                                         bHasSavedData;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponAttachment*                                     ScopeAttachment;                                         // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     MuzzleAttachment;                                        // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     UnderbarrelAttachment;                                   // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     OverbarrelAttachment;                                    // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     StockAttachment;                                         // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     GripAttachment;                                          // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     IlluminatorAttachment;                                   // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachment*                                     AmmunitionAttachment;                                    // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkinComponent*                                        Skin;                                                    // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      AmmoCount;                                               // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.WeaponPreset
	 * Size -> 0x0068
	 */
	struct FWeaponPreset
	{
	public:
		bool                                                         bHasSavedData : 1;                                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSelected : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  PresetName;                                              // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSavedWeaponAttachmentData                            AttachmentData;                                          // 0x0010(0x0058) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SavedWeaponPreset
	 * Size -> 0x0010
	 */
	struct FSavedWeaponPreset
	{
	public:
		TArray<struct FWeaponPreset>                                 Presets;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LoadoutPreset
	 * Size -> 0x0180
	 */
	struct FLoadoutPreset
	{
	public:
		class FName                                                  PresetName;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSavedLoadout                                         Loadout;                                                 // 0x0008(0x0178) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.BuildingFloor
	 * Size -> 0x0038
	 */
	struct FBuildingFloor
	{
	public:
		int32_t                                                      Number;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Location;                                                // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Extent;                                                  // 0x0014(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  Name;                                                    // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ArteryData
	 * Size -> 0x0014
	 */
	struct FArteryData
	{
	public:
		class FName                                                  BoneName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ZoneSize;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ZoneOffset;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DeathTime;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.GibData
	 * Size -> 0x0030
	 */
	struct FGibData
	{
	public:
		class UStaticMesh*                                           GibHead;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           GibArms;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           GibLegs;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           BoneHead;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           BoneArms;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           BoneLegs;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LimbHealthData
	 * Size -> 0x0034
	 */
	struct FLimbHealthData
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Health;                                                  // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        MaxHealth;                                               // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        MaxHealthLimit;                                          // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        LowHealthThreshold;                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        LimbDamageMultiplier;                                    // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      MaxTickets;                                              // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      Tickets;                                                 // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      MaxLimbHealthHalving;                                    // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        OriginalMaxHealth;                                       // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        LowHealth;                                               // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        PreviousHealth;                                          // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ReadyOrNot.ActorSense
	 * Size -> 0x0058
	 */
	struct FActorSense
	{
	public:
		class AActor*                                                Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ExposedToNoise
	 * Size -> 0x0020
	 */
	struct FExposedToNoise
	{
	public:
		class AReadyOrNotCharacter*                                  Instigator;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HeardAtDistance;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  StimulusLocation;                                        // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAggressive;                                             // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bFriendly;                                               // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        TimeSinceExposed;                                        // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ConversationData
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FConversationData : public FTableRowBase
	{
	public:
		class FName                                                  SpeakerId;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  LookAtSpeakerId;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseVoiceLineFromSpeechTable;                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                VoiceLineRowName;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundWave*                                            VoiceLineWav;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACyberneticCharacter*                                  Speaker;                                                 // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        AdditionalDelayAfterVoiceLineBeforeNextSpeaker;          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  RequiredTag;                                             // 0x0044(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamType                                                    TeamType;                                                // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MaxDistance;                                             // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequireLineOfSight;                                     // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOptionalSpeaker;                                        // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      SkipXAfterOptionalSpeakerNotFound;                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  GiveWorldBuildingActivityByTagOnStartConversation;       // 0x005C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  GiveWorldBuildingActivityByTagAfterConversation;         // 0x0064(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.AmmoTypeData
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FAmmoTypeData : public FTableRowBase
	{
	public:
		class FText                                                  AmmoVariety;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  AmmoCaliber;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  AmmoDescription;                                         // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                        Damage;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                    DamageOverRangeCurve;                                    // 0x0058(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		uint8_t                                                      ProjectileCount;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                SpreadPattern;                                           // 0x00E4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIgnoresArmour : 1;                                      // 0x00EC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        DurabilityDamage;                                        // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      PenetrationLevel;                                        // 0x00F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        PenetrationDistance;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RicochetChance;                                          // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SpallingDamage;                                          // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SpallingRadius;                                          // 0x0104(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DismembermentDamage;                                     // 0x0108(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ArteryHitChance;                                         // 0x010C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HitsChance;                                              // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ArmouredHitsChance;                                      // 0x0114(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WoundSize;                                               // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsUsableByPlayer : 1;                                   // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                            LoadoutIcon;                                             // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                            SmallIcon;                                               // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HeadDamageMultiplier;                                    // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        UpperBodyDamageMultiplier;                               // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LowerBodyDamageMultiplier;                               // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ArmDamageMultiplier;                                     // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HandDamageMultiplier;                                    // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LegDamageMultiplier;                                     // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FootDamageMultiplier;                                    // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DefaultRagdollImpulseStrength;                           // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HeadRagdollImpulseStrength;                              // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ArmRagdollImpulseStrength;                               // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LegRagdollImpulseStrength;                               // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        TorsoRagdollImpulseStrength;                             // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Magazine
	 * Size -> 0x0004
	 */
	struct FMagazine
	{
	public:
		uint16_t                                                     Ammo;                                                    // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                     AmmoType;                                                // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ShotgunVisuals
	 * Size -> 0x0010
	 */
	struct FShotgunVisuals
	{
	public:
		TArray<class UStaticMesh*>                                   ShellVisuals;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScriptedFireAt
	 * Size -> 0x0020
	 */
	struct FScriptedFireAt
	{
	public:
		class AActor*                                                FireAtActor;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  FireAtLocation;                                          // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        TimeRemaining;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOverrideTargetedEnemy;                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        AccuracyPenaltyMultiplier;                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverQueryTest
	 * Size -> 0x0050
	 */
	struct FCoverQueryTest
	{
	public:
		ECoverQueryTestPurpose                                       TestPurpose;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        ScoringFactor;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.GrenadeDamage
	 * Size -> 0x0028
	 */
	struct FGrenadeDamage
	{
	public:
		class UDamageType*                                           DamageType;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaxDamageOnDetonation;                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinDamageOnDetonation;                                   // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DamageInnerRadius;                                       // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DamageOuterRadius;                                       // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseSecondTrace;                                         // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SecondTraceStartDistance;                                // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SecondTraceRadiusFactor;                                 // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterLookOverride
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FCharacterLookOverride : public FTableRowBase
	{
	public:
		EDLC                                                         LockedToDLC;                                             // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  FriendlyBodyName;                                        // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                                SpeechCharacterName;                                     // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                            BodyIcon;                                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  FriendlyHeadName;                                        // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		class UTexture2D*                                            HeadIcon;                                                // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class ABaseArmour*, class USkeletalMesh*>               ArmorOverrideMap;                                        // 0x0060(0x0050) Edit, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         FPMeshOverride;                                          // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         FPBodyMeshOverride;                                      // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         FaceMeshOverride;                                        // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         BodyMeshOverride;                                        // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterDamageEvent
	 * Size -> 0x0028
	 */
	struct FCharacterDamageEvent
	{
	public:
		float                                                        RawDamage;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FinalDamage;                                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDamageEvent                                          DamageEvent;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class AController*                                           Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                                Causer;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CarryArrestedAnimState
	 * Size -> 0x0008
	 */
	struct FCarryArrestedAnimState
	{
	public:
		class UAnimSequence*                                         LoopAnim;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SuppressionData
	 * Size -> 0x0008
	 */
	struct FSuppressionData
	{
	public:
		float                                                        Strength;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Distance;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RonReplicatedAcceleration
	 * Size -> 0x0003
	 */
	struct FRonReplicatedAcceleration
	{
	public:
		uint8_t                                                      AccelXYRadians;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      AccelXYMagnitude;                                        // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                       AccelZ;                                                  // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PingData
	 * Size -> 0x00A8
	 */
	struct FPingData
	{
	public:
		struct FSlateBrush                                           IconBrush;                                               // 0x0000(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  PingText;                                                // 0x0088(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                        Duration;                                                // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.DoorChunkData
	 * Size -> 0x0020
	 */
	struct FDoorChunkData
	{
	public:
		class UStaticMesh*                                           Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsHinge;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsDoorHandleChunk;                                      // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCannotKickIfDestroyed;                                  // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                              SupportChunks;                                           // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DoorData
	 * Size -> 0x0148 (FullSize[0x0150] - InheritedSize[0x0008])
	 */
	struct FDoorData : public FTableRowBase
	{
	public:
		float                                                        DoorMaxOpenClose;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsDestructible : 1;                                     // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCanMirrorUnderDoor : 1;                                 // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDoorChunkData>                                DestructibleChunks;                                      // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UStaticMesh*                                           DoorMesh;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           DoorHandle;                                              // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCustomLockpickLocation : 1;                             // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLockable : 1;                                           // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  LockpickRelativeLocation;                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCustomDoorPeekLocation : 1;                             // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  DoorPeekRelativeLocation;                                // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDoorHandleFront : 1;                                    // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDoorHandleBack : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               DoorHandleFrontRelativeTransform;                        // 0x0060(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               DoorHandleBackRelativeTransform;                         // 0x0090(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                      NumSuccessfulKicksToBreakDown;                           // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DoorKickSuccessChance;                                   // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  C2PlacementPoint_Front;                                  // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  C2PlacementPoint_Back;                                   // 0x00D4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                       C2ExplosionParticle;                                     // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            OpenSound;                                               // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            CloseSound;                                              // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            PushOpenSound;                                           // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            PushCloseSound;                                          // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            ManipulateSound;                                         // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            LockedSound;                                             // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            RamSound;                                                // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            KickSuccessSound;                                        // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            KickFailSound;                                           // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            AlarmSound;                                              // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            KeycardSound;                                            // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            KeycardDenySound;                                        // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.TrapData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FTrapData : public FTableRowBase
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               TrapRelativeTransform;                                   // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class ATrapActorAttachedToDoor*                              TrapClass;                                               // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAttachToDoor;                                           // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrapType                                                    TrapType;                                                // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverLandmarkAnimData
	 * Size -> 0x0058
	 */
	struct FCoverLandmarkAnimData
	{
	public:
		bool                                                         bForwardOnly : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bFromTable : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                ForwardAnimRowName;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                LeftAnimRowName;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                RightAnimRowName;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          ForwardAnim;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          LeftAnim;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          RightAnim;                                               // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        AnimYawOffset;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverAnimStateMachineData
	 * Size -> 0x0018
	 */
	struct FCoverAnimStateMachineData
	{
	public:
		bool                                                         bIsInCover;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsFiring;                                               // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsReturningToIdle;                                      // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverDirection                                              ActiveCoverDirection;                                    // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                         ActiveCoverFirePose;                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         ActiveCoverIdlePose;                                     // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.HidingAnimStateMachineData
	 * Size -> 0x0010
	 */
	struct FHidingAnimStateMachineData
	{
	public:
		bool                                                         bIsHiding : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLooping : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                         LoopAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.HoleTraversalAnimStateMachineData
	 * Size -> 0x0010
	 */
	struct FHoleTraversalAnimStateMachineData
	{
	public:
		bool                                                         bIsTraversing : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLooping : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                         LoopAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.WorldBuildingAnimState
	 * Size -> 0x0010
	 */
	struct FWorldBuildingAnimState
	{
	public:
		bool                                                         bIsPlaying;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsLooping;                                              // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                         LoopAnim;                                                // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TakeHostageAnimState
	 * Size -> 0x0018
	 */
	struct FTakeHostageAnimState
	{
	public:
		bool                                                         bIsTakingHostage : 1;                                    // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsLooping : 1;                                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                         LoopAnim;                                                // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAimOffsetBlendSpace*                                  AimOffset;                                               // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Friend
	 * Size -> 0x0060
	 */
	struct FFriend
	{
	public:
		class FString                                                DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                RealName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Presence;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                StatusString;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      StatusState;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                UniqueNetId;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRunningSameGame;                                        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasVoice;                                               // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bJoinable;                                               // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_InventoryInformation
	 * Size -> 0x0020
	 */
	struct FHm_InventoryInformation
	{
	public:
		class ABaseItem*                                             Class;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMagazine>                                     Magazines;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      MagIndex;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_PlayerInformation
	 * Size -> 0x0090
	 */
	struct FHm_PlayerInformation
	{
	public:
		class FString                                                UniqueId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint8_t>                                              SaveData;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               CharacterTransform;                                      // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                 ControlRotation;                                         // 0x0050(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                        Health;                                                  // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             EquippedItemClass;                                       // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHm_InventoryInformation>                      Inventory;                                               // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      TotalGrenades;                                           // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      TotalDevices;                                            // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasBeenReported;                                        // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_CyberneticsInformation
	 * Size -> 0x00D0
	 */
	struct FHm_CyberneticsInformation
	{
	public:
		struct PCoreUObject_FTransform                               CharacterTransform;                                      // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ETeamType                                                    TeamType;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Health;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsArrested;                                             // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsSurrendered;                                          // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasBeenReported;                                        // 0x003A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                          Tags;                                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class ABaseItem*                                             EquippedItemClass;                                       // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterMesh                                        CharacterMeshData;                                       // 0x0058(0x0070) ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_DoorChunkInformation
	 * Size -> 0x0040
	 */
	struct FHm_DoorChunkInformation
	{
	public:
		struct PCoreUObject_FTransform                               Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bIsSimulating;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_DoorInformation
	 * Size -> 0x0070
	 */
	struct FHm_DoorInformation
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsBroken;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        OpenCloseAmount;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               DoorMeshTransform;                                       // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bIsSimulatingPhysics;                                    // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHm_DoorChunkInformation>                      DoorChunkInformations;                                   // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                  TrapName;                                                // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_BombInformation
	 * Size -> 0x0018
	 */
	struct FHm_BombInformation
	{
	public:
		class FString                                                BombName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBombState                                                   BombState;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        TimeRemaining;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_BaggedEvidence
	 * Size -> 0x0030
	 */
	struct FHm_BaggedEvidence
	{
	public:
		struct PCoreUObject_FTransform                               Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_DroppedEvidence
	 * Size -> 0x0040
	 */
	struct FHm_DroppedEvidence
	{
	public:
		struct PCoreUObject_FTransform                               Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class ABaseItem*                                             Class;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.Hm_Objectives
	 * Size -> 0x0018
	 */
	struct FHm_Objectives
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectiveStatus                                             ObjectiveStatus;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SuspectArmourData
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FSuspectArmourData : public FTableRowBase
	{
	public:
		TSoftClassPtr<class ASuspectArmour>                          BlueprintClass;                                          // 0x0008(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x002C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class USkeletalMesh*                                         Mesh;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsHelmet;                                               // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      ArmourLevel;                                             // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Durability;                                              // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DamageMultiplier;                                        // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SpallingChance;                                          // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MovementSpeedMultiplier;                                 // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MovementAccelerationMultiplier;                          // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                       HitParticleEffect;                                       // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            BlockedSoundEvent;                                       // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            PenetratedSoundEvent;                                    // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            Footsteps;                                               // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PlayerActionPromptSlot
	 * Size -> 0x0090
	 */
	struct FPlayerActionPromptSlot
	{
	public:
		class FName                                                  InputActionName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                  InputEvent;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ActionText;                                              // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                                ColorLabel;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCustomActionText : 1;                                // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  CustomActionPromptText;                                  // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                         bUseCustomDisallowedActionText : 1;                      // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCheckForDisallowedItems : 1;                            // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  DisallowedItemActionText;                                // 0x0060(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<EItemCategory>                                        DisallowedItems;                                         // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                         bAnimate : 1;                                            // 0x0088(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLoopAnimation : 1;                                      // 0x0088(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCondition : 1;                                          // 0x0088(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimatedIcon
	 * Size -> 0x0018
	 */
	struct FAnimatedIcon
	{
	public:
		TArray<class UTexture2D*>                                    Icons;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                        FrameRate;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.WeaponData
	 * Size -> 0x00B8
	 */
	struct FWeaponData
	{
	public:
		TArray<EWeaponType>                                          IncludedInWeaponCategories;                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                                Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Image;                                                   // 0x0020(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0044(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FText                                                  WeaponType;                                              // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EItemClass                                                   ItemClass;                                               // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseWeapon*                                           Blueprint;                                               // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PointsAvailable;                                         // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftObjectPtr<class UTexture2D>                             FactorySkinImage;                                        // 0x0078(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x4];                                   // 0x009C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<class USkinComponent*>                                AvailableSkins;                                          // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class USkinComponent*                                        CurrentSkin;                                             // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DeviceData
	 * Size -> 0x0140
	 */
	struct FDeviceData
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Image;                                                   // 0x0010(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0034(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UTexture2D>                             CarouselImage1;                                          // 0x0038(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x005C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UTexture2D>                             CarouselImage2;                                          // 0x0060(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x0084(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UTexture2D>                             CarouselImage3;                                          // 0x0088(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x4];                                   // 0x00AC(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FText                                                  EffectiveRange;                                          // 0x00B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Use;                                                     // 0x00C8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Effects;                                                 // 0x00E0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Risk;                                                    // 0x00F8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  ToMitigate;                                              // 0x0110(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EItemClass                                                   ItemClass;                                               // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      MaxInInventory;                                          // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      ItemsPerSlot;                                            // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             Blueprint;                                               // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ArmourData
	 * Size -> 0x0058
	 */
	struct FArmourData
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FText>                                          ProtectsAgainstText;                                     // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Image;                                                   // 0x0020(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0044(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemClass                                                   ItemClass;                                               // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             Blueprint;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterData
	 * Size -> 0x0090
	 */
	struct FCharacterData
	{
	public:
		class FName                                                  Handle;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Title;                                                   // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             CharacterIcon;                                           // 0x0038(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x005C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemClass                                                   ItemClass;                                               // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftObjectPtr<class UPlayableCharacterData>                 Blueprint;                                               // 0x0068(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x008C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.ItemChangeRequest
	 * Size -> 0x0028
	 */
	struct FItemChangeRequest
	{
	public:
		struct FGuid                                                 ChangeId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             FromItem;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             ToItem;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bInstant;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNoDraw;                                                 // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsComplete;                                             // 0x0022(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SpawnedGear
	 * Size -> 0x0078
	 */
	struct FSpawnedGear
	{
	public:
		struct FGuid                                                 Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Primary;                                                 // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Secondary;                                               // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Armor;                                                   // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             Helmet;                                                  // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             RandomGear;                                              // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayableCharacterData*                                Character;                                               // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseItem*                                             LongTactical;                                            // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     Grenades;                                                // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     TacticalDevices;                                         // 0x0058(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     Miscelaneous;                                            // 0x0068(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ItemSelectionGroup
	 * Size -> 0x0048
	 */
	struct FItemSelectionGroup
	{
	public:
		class FName                                                  ItemGroupName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  InputActionName;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemCategory                                                ItemCategory;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EItemCategory>                                        AdditionalItemCategories;                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     Items;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                      ItemIndex;                                               // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                            ItemGroupIcon;                                           // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ImpactFx
	 * Size -> 0x0030
	 */
	struct FImpactFx
	{
	public:
		class UParticleSystem*                                       ParticleFx;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                             SoundFx;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                    Decal;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseRandomFrame;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      FrameMax;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                                DecalMesh;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                            PaintMaterialTexture;                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AttachmentUIElements
	 * Size -> 0x0078
	 */
	struct FAttachmentUIElements
	{
	public:
		TSoftObjectPtr<class UTexture2D>                             ImageOfScope;                                            // 0x0000(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UTexture2D>                             SightPicture;                                            // 0x0028(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x004C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UTexture2D>                             AttachmentIcon;                                          // 0x0050(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x0074(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.MusicKeyframe
	 * Size -> 0x0018
	 */
	struct FMusicKeyframe
	{
	public:
		float                                                        Position;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  Label;                                                   // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTransitionExit;                                         // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                             TransitionPiece;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MusicTrack
	 * Size -> 0x0028
	 */
	struct FMusicTrack
	{
	public:
		class USoundCue*                                             MusicPiece;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTransitionMusic;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        FadeTime;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinimumTime;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMusicKeyframe>                                Keyframes;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MusicTrackFMOD
	 * Size -> 0x0010
	 */
	struct FMusicTrackFMOD
	{
	public:
		class UFMODEvent*                                            PreplanningEvent;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            LevelEvent;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ObituaryForBone
	 * Size -> 0x0010
	 */
	struct FObituaryForBone
	{
	public:
		TArray<class FText>                                          DeathMessages;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Loadout
	 * Size -> 0x0020
	 */
	struct FLoadout
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ABaseItem*>                                     Items;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CameraFreelookSetting
	 * Size -> 0x0010
	 */
	struct FCameraFreelookSetting
	{
	public:
		float                                                        PitchMin;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PitchMax;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawMin;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawMax;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MovementSound
	 * Size -> 0x0010
	 */
	struct FMovementSound
	{
	public:
		class USoundCue*                                             Sound;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ChanceToPlay;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.AnalyticsStatus
	 * Size -> 0x0070
	 */
	struct FAnalyticsStatus
	{
	public:
		unsigned char                                                UnknownData_0000[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PostProcessEffectPlayer
	 * Size -> 0x0038
	 */
	struct FPostProcessEffectPlayer
	{
	public:
		bool                                                         bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDebug : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRestartIfAlreadyPlaying : 1;                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bWantsFadeOut : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        FadeOutSpeed;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPostProcessRequirement*>                       RequirementsClasses;                                     // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FName                                                  EffectName;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPostProcessEffectData*                                PostProcess_Data;                                        // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                              PostProcess_MID;                                         // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bStarted : 1;                                            // 0x0030(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PostProcessEffect
	 * Size -> 0x0028
	 */
	struct FPostProcessEffect
	{
	public:
		bool                                                         bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCustomProcess : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDebug : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  EffectName;                                              // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPostProcessEffectPlayer>                      PostProcesses;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bStarted : 1;                                            // 0x0020(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.NVGPostProcessSettings
	 * Size -> 0x0058
	 */
	struct FNVGPostProcessSettings
	{
	public:
		TSoftObjectPtr<class UTexture2D>                             DirtMaskTexture;                                         // 0x0000(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EDepthOfFieldMethod                                          DepthOfFieldMethod;                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        BloomIntensity;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BloomThreshold;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAutoExposureMethod                                          AutoExposureMethod;                                      // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        BloomDirtMaskIntensity;                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DepthOfFieldFstop;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LensFlareIntensity;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LensFlareBokehSize;                                      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        AmbientOcclusionIntensity;                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        IndirectLightingIntensity;                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FilmSlope;                                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FilmToe;                                                 // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SpecificWeaponRecoilMod
	 * Size -> 0x0028
	 */
	struct FSpecificWeaponRecoilMod
	{
	public:
		EItemClass                                                   WeaponClass;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        RecoilFireStrength;                                      // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilFireStrengthFirst;                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilDampStrength;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilAngleStrength;                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilRandomness;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilFireADSModifier;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilBuildupADSModifier;                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilAngleADSModifier;                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilBuildupDampStrength;                               // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.BasicLevelStats
	 * Size -> 0x000C
	 */
	struct FBasicLevelStats
	{
	public:
		float                                                        BestRating;                                              // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BestTime;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      TimesCompleted;                                          // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LevelUpData
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FLevelUpData : public FTableRowBase
	{
	public:
		int32_t                                                      XPtoLvl;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftObjectPtr<class ABaseItem>                              WeaponUnlock;                                            // 0x0010(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0034(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UWeaponAttachment>                      AttachmentUnlock;                                        // 0x0038(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x005C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.MaterialPenetration
	 * Size -> 0x0018
	 */
	struct FMaterialPenetration
	{
	public:
		bool                                                         bIsPenetrable;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        PenetrationDensity;                                      // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PenetrationMultiplier;                                   // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      ArmourLevel;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCanRicochet;                                            // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        RicochetChanceMultiplier;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SpallingChance;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterTPAnim
	 * Size -> 0x0008
	 */
	struct FCharacterTPAnim
	{
	public:
		class UAnimMontage*                                          TP_Anim;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PostProcessSetting_Base
	 * Size -> 0x0080
	 */
	struct FPostProcessSetting_Base
	{
	public:
		bool                                                         bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPostProcessRequirement*>                       Requirements;                                            // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FName                                                  ParameterName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPostProcessEndOptions                                       EffectEndOption;                                         // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      StartLoopAtCurveKey;                                     // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bReverseAtAnyTime : 1;                                   // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPostProcessRequirement*>                       ReverseRequirements;                                     // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bUseCurve : 1;                                           // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEasingFunc                                                  EasingMethod;                                            // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPostProcessStartingState                                    StartingState;                                           // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        InterpSpeed;                                             // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        EffectLifetime;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        StartLoopAtTime;                                         // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PostProcessSetting_FloatParam
	 * Size -> 0x0090 (FullSize[0x0110] - InheritedSize[0x0080])
	 */
	struct FPostProcessSetting_FloatParam : public FPostProcessSetting_Base
	{
	public:
		float                                                        Start;                                                   // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        End;                                                     // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                    Curve;                                                   // 0x0088(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PostProcessSetting_VectorParam
	 * Size -> 0x0220 (FullSize[0x02A0] - InheritedSize[0x0080])
	 */
	struct FPostProcessSetting_VectorParam : public FPostProcessSetting_Base
	{
	public:
		struct FVector                                  Start;                                                   // 0x0080(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  End;                                                     // 0x008C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeCurveLinearColor                              Curve;                                                   // 0x0098(0x0208) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverDirectionalTrans
	 * Size -> 0x0030
	 */
	struct FCoverDirectionalTrans
	{
	public:
		class UAnimMontage*                                          CoverTrans_1;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  DistanceOffsetCover_1;                                   // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                          CoverTrans_91;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  DistanceOffsetCover_91;                                  // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverTrans
	 * Size -> 0x0010
	 */
	struct FCoverTrans
	{
	public:
		class UAnimMontage*                                          CoverEnterTrans;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          CoverExitTrans;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverDataMain
	 * Size -> 0x00D8
	 */
	struct FCoverDataMain
	{
	public:
		class UAnimSequence*                                         CoverIdlePose;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasVerticalExposure;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverDirectionalTrans                                CoverEnterTrans;                                         // 0x0010(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCoverDirectionalTrans                                CoverExitTrans;                                          // 0x0040(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UAnimMontage*                                          SideSwitchTrans;                                         // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoverTrans                                           AimingHTrans;                                            // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCoverTrans                                           BlindFireHTrans;                                         // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                         BlindFireHIdlePose;                                      // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         AimingHIdlePose;                                         // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoverTrans                                           AimingVTrans;                                            // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCoverTrans                                           BlindFireVTrans;                                         // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                         BlindFireVIdlePose;                                      // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         AimingVIdlePose;                                         // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LoadAdditionalLevels
	 * Size -> 0x0010
	 */
	struct FLoadAdditionalLevels
	{
	public:
		TArray<class FString>                                        SubLevelNames;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.UnlockRequirements
	 * Size -> 0x0018
	 */
	struct FUnlockRequirements
	{
	public:
		class FString                                                MapURL;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Score;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.MapLayout
	 * Size -> 0x0088
	 */
	struct FMapLayout
	{
	public:
		struct FVector2D                                MapOrigin;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MapSize;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftObjectPtr<class UTexture2D>                             MapOverviewTexture;                                      // 0x0010(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0034(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TMap<class FString, TSoftObjectPtr<class UTexture2D>>        MapCells;                                                // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LoadingScreenAnimated
	 * Size -> 0x0050
	 */
	struct FLoadingScreenAnimated
	{
	public:
		TSoftObjectPtr<class UTexture2D>                             Foreground;                                              // 0x0000(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UTexture2D>                             Background;                                              // 0x0028(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x004C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.Transcript
	 * Size -> 0x0038
	 */
	struct FTranscript
	{
	public:
		float                                                        AudioTimestamp;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  SpeakerName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Transcription;                                           // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MissionAudio
	 * Size -> 0x0058
	 */
	struct FMissionAudio
	{
	public:
		class FText                                                  AudioName;                                               // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  AudioDescription;                                        // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                                AudioInternalName;                                       // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundWave*                                            SoundFile;                                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTranscript>                                   AudioTranscript;                                         // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MissionDoc
	 * Size -> 0x0060
	 */
	struct FMissionDoc
	{
	public:
		class FText                                                  DocumentTitle;                                           // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DocumentText;                                            // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DocumentButtonText;                                      // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DocumentButtonDescriptionText;                           // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MissionPhoto
	 * Size -> 0x0058
	 */
	struct FMissionPhoto
	{
	public:
		class FText                                                  PhotoTitle;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Photo;                                                   // 0x0018(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x003C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FText                                                  PhotoCaption;                                            // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CriminalRecord
	 * Size -> 0x0038
	 */
	struct FCriminalRecord
	{
	public:
		class FString                                                Date;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  Crime;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                                CriminalCode;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterBio
	 * Size -> 0x0140
	 */
	struct FCharacterBio
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                IdNumber;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FText>                                          Aliases;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                  Bio;                                                     // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             ProfileImage;                                            // 0x0048(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x006C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FText                                                  Sex;                                                     // 0x0070(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Build;                                                   // 0x0088(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Height;                                                  // 0x00A0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Weight;                                                  // 0x00B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Hair;                                                    // 0x00D0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Eyes;                                                    // 0x00E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DateOfBirth;                                             // 0x0100(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Age;                                                     // 0x0118(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FCriminalRecord>                               CriminalRecord;                                          // 0x0130(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TimelineEvent
	 * Size -> 0x0050
	 */
	struct FTimelineEvent
	{
	public:
		class FText                                                  EventTitle;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  EventTime;                                               // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  EventDescription;                                        // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                        EventTimestamp;                                          // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        EventDuration;                                           // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MissionTimeline
	 * Size -> 0x0010
	 */
	struct FMissionTimeline
	{
	public:
		TArray<struct FTimelineEvent>                                EventsList;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LevelFloorData
	 * Size -> 0x0080
	 */
	struct FLevelFloorData
	{
	public:
		class FText                                                  FloorFullName;                                           // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  FloorShortName;                                          // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             FloorLayout;                                             // 0x0030(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0054(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TSoftObjectPtr<class UMaterialInterface>                     FloorplanMaterial;                                       // 0x0058(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x007C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.LevelDeployableData
	 * Size -> 0x0010
	 */
	struct FLevelDeployableData
	{
	public:
		class UDeployableData*                                       DeployableData;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      PtsCost;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SpawnPoints
	 * Size -> 0x0090
	 */
	struct FSpawnPoints
	{
	public:
		class FText                                                  SpawnPointName;                                          // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             SpawnImage;                                              // 0x0018(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x003C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FText                                                  SpawnDescription;                                        // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FLevelDeployableData>                          RecommendedDeployables;                                  // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      PlanningFloorNum;                                        // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PlanningZoomLevel;                                       // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                PlanningShift;                                           // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                PlanningCoordinate;                                      // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      PtsCost;                                                 // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSpawnDisabled;                                          // 0x0084(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  SpawnLabel;                                              // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIDataPick
	 * Size -> 0x0018
	 */
	struct FAIDataPick
	{
	public:
		int32_t                                                      Chance;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                AILookupTag;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIRoster
	 * Size -> 0x0028
	 */
	struct FAIRoster
	{
	public:
		int32_t                                                      MinimumSpawn;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      MaximumSpawn;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  SpawnGroup;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIDataPick>                                   SpawnAI;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bAffectedByNegotiator;                                   // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.DynamicLevelDataPick
	 * Size -> 0x000C
	 */
	struct FDynamicLevelDataPick
	{
	public:
		class FName                                                  Label;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Chance;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DynamicLevelRoster
	 * Size -> 0x0020
	 */
	struct FDynamicLevelRoster
	{
	public:
		float                                                        OverallSpawnPercent;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      MinimumPicks;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      MaximumPicks;                                            // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDynamicLevelDataPick>                         SpawnLevel;                                              // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TrapRoster
	 * Size -> 0x0010
	 */
	struct FTrapRoster
	{
	public:
		int32_t                                                      MinimumSpawn;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      MaximumSpawn;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  SpawnGroup;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PersonnelMapPoint
	 * Size -> 0x0068
	 */
	struct FPersonnelMapPoint
	{
	public:
		class FName                                                  VolumeLabel;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ActorLabel;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  MapPointName;                                            // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  MapPointDescription;                                     // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                      FloorNum;                                                // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                MapShiftPosition;                                        // 0x0044(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MapShiftZoom;                                            // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                MapCoordinates;                                          // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bMapZone;                                                // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                MapZoneSize;                                             // 0x005C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PersonnelEntry
	 * Size -> 0x0048
	 */
	struct FPersonnelEntry
	{
	public:
		EPersonnel                                                   PersonnelType;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                              AvailableMapPoints;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      PtsCost;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftObjectPtr<class UTexture2D>                             PersonnelTexture;                                        // 0x0020(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x0044(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.LevelDeployableDepot
	 * Size -> 0x0070
	 */
	struct FLevelDeployableDepot
	{
	public:
		class FName                                                  DepotLabel;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      DepotCost;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  DepotShortName;                                          // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DepotLongName;                                           // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DepotDescription;                                        // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                      MapFloorNum;                                             // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                MapCoordinates;                                          // 0x005C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                MapShiftAmount;                                          // 0x0064(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MapZoomLevel;                                            // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LevelDataLookupTable
	 * Size -> 0x0768 (FullSize[0x0770] - InheritedSize[0x0008])
	 */
	struct FLevelDataLookupTable : public FTableRowBase
	{
	public:
		class FText                                                  FriendlyLevelName;                                       // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  LevelNickname;                                           // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             LevelPicture;                                            // 0x0038(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x005C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FText                                                  LevelDesignation;                                        // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  TimeOfDayText;                                           // 0x0078(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  Description;                                             // 0x0090(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<ECOOPMode, class FString>                               COOPModesLevelMap;                                       // 0x00A8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<ECOOPMode, struct FLoadAdditionalLevels>                COOPModesLevelAdditionalMaps;                            // 0x00F8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FUnlockRequirements                                   UnlockRequirements;                                      // 0x0148(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMapLayout                                            MapLayout;                                               // 0x0160(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLoadingScreenAnimated                                LoadingScreen;                                           // 0x01E8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FNVGPostProcessSettings                               NVG_PostProcessOverride;                                 // 0x0238(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                         bHasDesignerNotes;                                       // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  DesignerNoteTitle;                                       // 0x0298(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  DesignerNoteText;                                        // 0x02B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<TSoftClassPtr<class AReadyOrNotGameMode>>             SupportedGameModes;                                      // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FText                                                  Author;                                                  // 0x02D8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  AuthorContact;                                           // 0x02F0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  RecommendedPlayerCount;                                  // 0x0308(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                         bIsTestLevel;                                            // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bVisible;                                                // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x2];                                   // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  MVPSequenceLocation;                                     // 0x0324(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TSoftClassPtr<class AObjective>>                      Objectives;                                              // 0x0330(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TSoftClassPtr<class UChallenge>>                      Challenges;                                              // 0x0340(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FText                                                  LevelLocationText;                                       // 0x0350(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  LevelMonthNum;                                           // 0x0368(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  LevelDayNum;                                             // 0x0380(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  LevelYearNum;                                            // 0x0398(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FMissionAudio                                         TocBriefingAudio;                                        // 0x03B0(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FMissionAudio>                                 MissionAudio;                                            // 0x0408(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionDoc>                                   Documents;                                               // 0x0418(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionPhoto>                                 Photos;                                                  // 0x0428(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterBio>                                 SuspectsBios;                                            // 0x0438(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterBio>                                 CiviliansBios;                                           // 0x0448(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMissionTimeline                                      MissionTimeline;                                         // 0x0458(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                      BaseSquadPts;                                            // 0x0468(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLevelFloorData>                               MapFloors;                                               // 0x0470(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSpawnPoints                                          Spawn_2;                                                 // 0x0480(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSpawnPoints                                          Spawn_3;                                                 // 0x0510(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSpawnPoints                                          Spawn_4;                                                 // 0x05A0(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSpawnPoints                                          Spawn_5;                                                 // 0x0630(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FAIRoster>                                     AISpawnRosters;                                          // 0x06C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDynamicLevelRoster>                           DynamicLevelSpawnRosters;                                // 0x06D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTrapRoster>                                   TrapRosters;                                             // 0x06E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPersonnelMapPoint>                            AllPersonnelMapPoints;                                   // 0x06F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPersonnelEntry>                               AllPersonnel;                                            // 0x0700(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLevelDeployableData>                          Deployables;                                             // 0x0710(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLevelDeployableDepot>                         DeployableDepots;                                        // 0x0720(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class AMusicSequencerBase*                                   MusicSequencerClass;                                     // 0x0730(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseMissionDispatch;                                     // 0x0738(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUnskippableDispatch;                                    // 0x0739(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x6];                                   // 0x073A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftObjectPtr<class USoundBase>                             DispatchAudio;                                           // 0x0740(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x4];                                   // 0x0764(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UUserWidget*                                           DispatchWidget;                                          // 0x0768(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ReplayEvent
	 * Size -> 0x0020
	 */
	struct FReplayEvent
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Location;                                                // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Timestamp;                                               // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MessagePromptContent
	 * Size -> 0x0050
	 */
	struct FMessagePromptContent
	{
	public:
		class FName                                                  InputActionName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                  InputEvent;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ActionText;                                              // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                         bIsAxisEvent;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      KeyIndex;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCustomActionText : 1;                                // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  CustomActionPromptText;                                  // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.VoteData
	 * Size -> 0x0030
	 */
	struct FVoteData
	{
	public:
		EVoteState                                                   CurrentVoteState;                                        // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                VoteReason;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                VoteQuestion;                                            // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bVoteEnabled : 1;                                        // 0x0028(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.MirrorReflectionSettings
	 * Size -> 0x0008
	 */
	struct FMirrorReflectionSettings
	{
	public:
		float                                                        MirrorResolutionScale;                                   // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShowAntiAliasing : 1;                                   // 0x0004(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShowDecals : 1;                                         // 0x0004(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShowDynamicShadows : 1;                                 // 0x0004(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlanningDrawing
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FPlanningDrawing : public FFastArraySerializerItem
	{
	public:
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                        Points;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlanningDrawingArray
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FPlanningDrawingArray : public FFastArraySerializer
	{
	public:
		TArray<struct FPlanningDrawing>                              Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNStyleIdleData
	 * Size -> 0x0010
	 */
	struct FRoNStyleIdleData
	{
	public:
		TArray<class UAnimSequence*>                                 BaseIdleData;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNStyleTurnData
	 * Size -> 0x0048
	 */
	struct FRoNStyleTurnData
	{
	public:
		class UAimOffsetBlendSpace*                                  AimOffset;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn45_Left;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn45_Right;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn90_Left;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn90_Right;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn180_Left;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn180_Right;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn135_Left;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Turn135_Right;                                           // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNGaitTransitionData
	 * Size -> 0x0120
	 */
	struct FRoNGaitTransitionData
	{
	public:
		class FString                                                Start_Section;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_45_Left;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_45_Right;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_90_Left;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_90_Right;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_181;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_180_Left;                                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_180_Right;                                         // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_135_Left;                                          // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Start_135_Right;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Stop_Section;                                            // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_45_Left;                                            // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_45_Right;                                           // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_90_Left;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_90_Right;                                           // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_181;                                                // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_180_Left;                                           // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_180_Right;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_135_Left;                                           // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Stop_135_Right;                                          // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Pivot_Section;                                           // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot;                                                   // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_45_Left;                                           // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_45_Right;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_90_Left;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_90_Right;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_181;                                               // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_180_Left;                                          // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_180_Right;                                         // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_135_Left;                                          // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         Pivot_135_Right;                                         // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNLeanMotion
	 * Size -> 0x0018
	 */
	struct FRoNLeanMotion
	{
	public:
		class UAnimSequence*                                         Base;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         BaseLeanLeft;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         BaseLeanRight;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNGaitLocomotionData
	 * Size -> 0x00C0
	 */
	struct FRoNGaitLocomotionData
	{
	public:
		struct FRoNLeanMotion                                        Fwd;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        FwdLeft;                                                 // 0x0018(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        FwdRight;                                                // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        Left;                                                    // 0x0048(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        Right;                                                   // 0x0060(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        Bwd;                                                     // 0x0078(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        BwdLeft;                                                 // 0x0090(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNLeanMotion                                        BwdRight;                                                // 0x00A8(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNGaitType
	 * Size -> 0x01F0
	 */
	struct FRoNGaitType
	{
	public:
		class FName                                                  Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Speed;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Acceleration;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoNGaitTransitionData                                TransitionData;                                          // 0x0010(0x0120) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRoNGaitLocomotionData                                LocomotionData;                                          // 0x0130(0x00C0) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNMovementStyle
	 * Size -> 0x0088
	 */
	struct FRoNMovementStyle
	{
	public:
		class FName                                                  Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsStrafeMovement;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsLoweredSet;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemOverrideRule                                            ItemOverrideRule;                                        // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRoNStyleIdleData                                     IdleData;                                                // 0x0010(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRoNStyleTurnData                                     TurnData;                                                // 0x0020(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FRoNGaitType>                                  GaitEntries;                                             // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UBlendSpace*                                           StrafeBS;                                                // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                           NonStrafeBS;                                             // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.WeaponSoundData
	 * Size -> 0x0020
	 */
	struct FWeaponSoundData
	{
	public:
		class USoundCue*                                             Gunshot;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                             Gunshot_Supressed;                                       // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                             GunTail;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                             GunTail_Supressed;                                       // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScoreBonus
	 * Size -> 0x0038
	 */
	struct FScoreBonus
	{
	public:
		bool                                                         bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                ScoreName;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Score;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequired : 1;                                           // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bGiven : 1;                                              // 0x001C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bWasDisplayedOnHUD : 1;                                  // 0x001C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ScoreTextOnHUD;                                          // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScorePenalty
	 * Size -> 0x0038
	 */
	struct FScorePenalty
	{
	public:
		bool                                                         bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                ScoreName;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Score;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bGiven : 1;                                              // 0x001C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bWasDisplayedOnHUD : 1;                                  // 0x001C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ScoreTextOnHUD;                                          // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScoreData
	 * Size -> 0x0030
	 */
	struct FScoreData
	{
	public:
		TArray<struct FScoreBonus>                                   Bonuses;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FScorePenalty>                                 Penalties;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bHiddenScore : 1;                                        // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScoringComponent*                                     FromScoringComponent;                                    // 0x0028(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScoreGroup
	 * Size -> 0x0038
	 */
	struct FScoreGroup
	{
	public:
		class FString                                                GroupName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectiveLevel                                              ObjectiveLevel;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequiredToClearMission : 1;                             // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequiredToSoftClearMission : 1;                         // 0x0011(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      OrderPriority;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FScoreData>                                    Scores;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FScoreData>                                    InactiveScores;                                          // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScorePenaltyData
	 * Size -> 0x0018
	 */
	struct FScorePenaltyData
	{
	public:
		class FString                                                GroupName;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Score;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      PenaltyCount;                                            // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.OptimizationAttachmentData
	 * Size -> 0x0040
	 */
	struct FOptimizationAttachmentData
	{
	public:
		class FName                                                  AttachedSocketName;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                       AttachedComponent;                                       // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               RelativeTransform;                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ObjectiveSpawn
	 * Size -> 0x0028
	 */
	struct FObjectiveSpawn
	{
	public:
		class FName                                                  Tag;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                   Type;                                                    // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class AAISpawn*>                                      Spawners;                                                // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScenarioData
	 * Size -> 0x00F0
	 */
	struct FScenarioData
	{
	public:
		struct PCoreUObject_FTransform                               SpawnTransform;                                          // 0x0000(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSpawnData                                            SpawnData;                                               // 0x0030(0x00B8) Edit, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ScenarioDataArray
	 * Size -> 0x0010
	 */
	struct FScenarioDataArray
	{
	public:
		TArray<struct FScenarioData>                                 SaveData;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SwatCommand
	 * Size -> 0x0078
	 */
	struct FSwatCommand
	{
	public:
		struct FKey                                                  InputKey;                                                // 0x0000(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  CommandText;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  CommandTextAggressive;                                   // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                            CommandIcon;                                             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESwatCommand                                                 CommandType;                                             // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x17];                                  // 0x0051(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                         bGrabContextualDataOnExecute;                            // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnabled;                                                // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                                CommandTarget;                                           // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScopeModifications
	 * Size -> 0x0048
	 */
	struct FScopeModifications
	{
	public:
		class UObject*                                               WeaponClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VerticalOffset;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HorizontalOffset;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DistanceOffset;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                         CustomWeaponMesh;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HideBone;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSupportsSecondarySights;                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  MeshSpace_ADS_SecondaryPos;                              // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                 MeshSpace_ADS_SecondaryRot;                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SequencedVOLookup
	 * Size -> 0x0010
	 */
	struct FSequencedVOLookup
	{
	public:
		TArray<int32_t>                                              LookupOrder;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.WeaponAnim
	 * Size -> 0x0020
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimMontage*                                          Body_FP;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          Body_TP;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          Gun_FP;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          Gun_TP;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverInstigatorStimulus
	 * Size -> 0x0050
	 */
	struct FCoverInstigatorStimulus
	{
	public:
		class AReadyOrNotCharacter*                                  InstigatorCharacter;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               ThreatTransform;                                         // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SWATRequestOrder
	 * Size -> 0x00C0
	 */
	struct FSWATRequestOrder
	{
	public:
		struct FGuid                                                 ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                                RequestingTarget;                                        // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASWATCharacter*                                        RequestedByCharacter;                                    // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASWATCharacter*                                        ClosestSWATUponRequest;                                  // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSwatCommand                                          Command;                                                 // 0x0028(0x0078) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                                RequestCommandString;                                    // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                SpeechString;                                            // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.QueuedSwatCommand
	 * Size -> 0x0100
	 */
	struct FQueuedSwatCommand
	{
	public:
		struct FSwatCommand                                          Command;                                                 // 0x0000(0x0078) NativeAccessSpecifierPublic
		struct FHitResult                                            ContextualData;                                          // 0x0078(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TargetData
	 * Size -> 0x0020
	 */
	struct FTargetData
	{
	public:
		class AReadyOrNotCharacter*                                  Target;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  LastKnownPosition;                                       // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        TimeSinceLastSeenTarget;                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bForceCanEngageAsSwat : 1;                               // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ExitRoute
	 * Size -> 0x0030
	 */
	struct FExitRoute
	{
	public:
		TArray<class ADoor*>                                         Doors;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class AThreatAwarenessActor*>                         ThreatsOnRoute;                                          // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		float                                                        PathCost;                                                // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Location;                                                // 0x0024(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ExitData
	 * Size -> 0x0020
	 */
	struct FExitData
	{
	public:
		TArray<struct FExitRoute>                                    PossibleRoutes;                                          // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FVector                                  Location;                                                // 0x0010(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.TableTennisGame
	 * Size -> 0x0024
	 */
	struct FTableTennisGame
	{
	public:
		float                                                        TimeToStart;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LeftPaddlePosition;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RightPaddlePosition;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                BallPosition;                                            // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                BallVelocity;                                            // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      LeftScore;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      RightScore;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TutorialMissionData
	 * Size -> 0x0190
	 */
	struct FTutorialMissionData
	{
	public:
		ETutorialMissionType                                         MissionType;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSpawnSWATTeam;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSavedLoadout                                         Loadout;                                                 // 0x0008(0x0178) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                                SpawnTag;                                                // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TOCData
	 * Size -> 0x0018
	 */
	struct FTOCData
	{
	public:
		class FString                                                TOCLine;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETOCPriority                                                 QueuePriority;                                           // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsNetworked : 1;                                        // 0x0011(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.TutorialActionPromptSlot
	 * Size -> 0x0050
	 */
	struct FTutorialActionPromptSlot
	{
	public:
		class FName                                                  InputActionName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                  InputEvent;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ActionText;                                              // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                         bIsAxisEvent;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      KeyIndex;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCustomActionText : 1;                                // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  CustomActionPromptText;                                  // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNStyleSlotData
	 * Size -> 0x0250
	 */
	struct FRoNStyleSlotData
	{
	public:
		struct FRoNStyleIdleData                                     IdleData;                                                // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRoNStyleTurnData                                     TurnData;                                                // 0x0010(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRoNGaitTransitionData                                TransitionData;                                          // 0x0058(0x0120) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRoNGaitLocomotionData                                LocomotionData;                                          // 0x0178(0x00C0) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                         IdleReference;                                           // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                           StrafeBSData;                                            // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                           NonStrafeBSData;                                         // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimTurnTransition
	 * Size -> 0x0010
	 */
	struct FAnimTurnTransition
	{
	public:
		class UAnimSequence*                                         Anim;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DelayBeforeTrigger;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimTurnInPlaceAnimSet
	 * Size -> 0x0018
	 */
	struct FAnimTurnInPlaceAnimSet
	{
	public:
		TArray<struct FAnimTurnTransition>                           TurnTransitions;                                         // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                        TurnDeadZoneAngle;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimTurnInPlaceState
	 * Size -> 0x0058
	 */
	struct FAnimTurnInPlaceState
	{
	public:
		class UAnimSequence*                                         ActiveTurnAnim;                                          // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         TurnRecoveryAnim;                                        // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RootYawOffset;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RootYawOffsetInverse;                                    // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ActiveTurnAnimTime;                                      // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        TurnRecoveryAnimStartTime;                               // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTurnTransitionRequested;                                // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTurnRecoveryRequested;                                  // 0x0021(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRK4SpringInterpolator                           YawOffsetInterpolator;                                   // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x1C];                                  // 0x002C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                         PendingTurnAnim;                                         // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                                UnknownData_0002[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ReadyOrNotAnimInstanceProxyTP
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	struct FReadyOrNotAnimInstanceProxyTP : public FAnimInstanceProxy
	{
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimCharacterMovementSnapshot
	 * Size -> 0x007C
	 */
	struct FAnimCharacterMovementSnapshot
	{
	public:
		struct FVector                                  WorldLocation;                                           // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  LastWorldLocation;                                       // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  WorldVelocity;                                           // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  LocalVelocity;                                           // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  WorldAcceleration;                                       // 0x0030(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  LocalAcceleration;                                       // 0x003C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimCardinalDirection                                       CurrentCardinalDirection;                                // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        VelocityYawAngle;                                        // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        AccelerationYawAngle;                                    // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VelocityYawDeltaNorth;                                   // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VelocityYawDeltaEast;                                    // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VelocityYawDeltaSouth;                                   // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VelocityYawDeltaWest;                                    // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Distance2DTraveledSinceLastUpdate;                       // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Speed2D;                                                 // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        AccelerationSize2D;                                      // 0x006C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsOnGround;                                             // 0x0070(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsMoving;                                               // 0x0071(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsAccelerating;                                         // 0x0072(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsMovingAndAccelerating;                                // 0x0073(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsNotMoving;                                            // 0x0074(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsNotAccelerating;                                      // 0x0075(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsNotMovingAndAccelerating;                             // 0x0076(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsMovingAndNotAccelerating;                             // 0x0077(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAccelerationOpposesVelocity;                            // 0x0078(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAccelerationEqualsVelocity;                             // 0x0079(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CardinalDirectionSnapshot
	 * Size -> 0x0018
	 */
	struct FCardinalDirectionSnapshot
	{
	public:
		EAnimCardinalDirection                                       CardinalDirection;                                       // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        YawAngle;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawAngleDeltaNorth;                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawAngleDeltaEast;                                       // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawAngleDeltaSouth;                                      // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawAngleDeltaWest;                                       // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PredictionResult
	 * Size -> 0x0020
	 */
	struct FPredictionResult
	{
	public:
		struct FVector                                  Location;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Distance;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DistanceAbsolute;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Time;                                                    // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Speed;                                                   // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        YawAngle;                                                // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SavedCullDistanceSettings
	 * Size -> 0x0050
	 */
	struct FSavedCullDistanceSettings
	{
	public:
		TMap<class FString, float>                                   CullDistanceSettingsMap;                                 // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SpawnerSavedData
	 * Size -> 0x0020
	 */
	struct FSpawnerSavedData
	{
	public:
		TArray<class FName>                                          Types;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                      MaxPerArea;                                              // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      MaxTotal;                                                // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CivilianSpawnChance;                                     // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SavedThreatAwarenessActors
	 * Size -> 0x0060
	 */
	struct FSavedThreatAwarenessActors
	{
	public:
		struct PCoreUObject_FTransform                               Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       DirectlyVisibleThreatNames;                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       PathableThreatNames;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                                LinkedToDoorName;                                        // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DoorSavedActors
	 * Size -> 0x0110
	 */
	struct FDoorSavedActors
	{
	public:
		class FString                                                DoorName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       FrontThreatAwarenessTransform;                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       BackThreatAwarenessTransform;                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       FrontLeftStackupTransform;                               // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       FrontRightStackupTransform;                              // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       BackLeftStackupTransform;                                // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       BackRightStackupTransform;                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               FrontDoorThreatLocation;                                 // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               BackDoorThreatLocation;                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       RedTeamFrontClearPoints;                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       BlueTeamFrontClearPoints;                                // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       RedTeamBackClearPoints;                                  // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct PCoreUObject_FTransform>                       BlueTeamBackClearPoints;                                 // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.TrapSpawnType
	 * Size -> 0x0010
	 */
	struct FTrapSpawnType
	{
	public:
		class ATrapActor*                                            SpawnClass;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Chance;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.MODParam
	 * Size -> 0x000C
	 */
	struct FMODParam
	{
	public:
		class FName                                                  paramName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        paramVal;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.NavGenerationParameters
	 * Size -> 0x000C
	 */
	struct FNavGenerationParameters
	{
	public:
		unsigned char                                                UnknownData_0000[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ActivityStateTransition
	 * Size -> 0x0038
	 */
	struct FActivityStateTransition
	{
	public:
		int32_t                                                      TransitionToStateID;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                TransitionToStateName;                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Priority;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                        TransitionDelegate;                                      // 0x001C(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActivityState*                                        ToState;                                                 // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DebugData
	 * Size -> 0x0030
	 */
	struct FDebugData
	{
	public:
		class FText                                                  Label;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  Value;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.LevelStreamOptions
	 * Size -> 0x0028
	 */
	struct FLevelStreamOptions
	{
	public:
		unsigned char                                                UnknownData_0000[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ReplayData
	 * Size -> 0x0060
	 */
	struct FReplayData
	{
	public:
		float                                                        ReplayLength;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                LetterScore;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      NumericalScore;                                          // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      NumPlayers;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                LevelName;                                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                GameModeName;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Timestamp;                                               // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplayEvent>                                  ReplayEvents;                                            // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RadialWidgetSpawnProperties
	 * Size -> 0x0060
	 */
	struct FRadialWidgetSpawnProperties
	{
	public:
		int32_t                                                      StartingSectorIndex;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        IconSize;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        IconPadding;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        StartingSectorAngle;                                     // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SectorInnerRadius;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SectorOuterRadius;                                       // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        GapSize;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WheelSize;                                               // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WheelCursorDistanceFromCenterWheel;                      // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHideRadialWheelCursorOnMenuOpened : 1;                  // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                          SelectedColor;                                           // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                          UnselectedColor;                                         // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                          UnselectableColor;                                       // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFont*                                                 Font;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.InGameLogMessage
	 * Size -> 0x0038
	 */
	struct FInGameLogMessage
	{
	public:
		EDebugLogType                                                LogSeverity;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAutoDetermineIcon : 1;                                  // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                            Icon;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  LogMessage;                                              // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                        DelayBetweenWords;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DelayBetweenLetters;                                     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        TimeOnScreen;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.InGameLogMessage_PVP
	 * Size -> 0x0038
	 */
	struct FInGameLogMessage_PVP
	{
	public:
		class AReadyOrNotCharacter*                                  Causer;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AReadyOrNotCharacter*                                  Victim;                                                  // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPVPEvent                                                    PVPEvent;                                                // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  CustomMessage;                                           // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		ECharacterDeathReason                                        CauseOfDeath;                                            // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        TimeOnScreen;                                            // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RepGearAttach
	 * Size -> 0x0038
	 */
	struct FRepGearAttach
	{
	public:
		bool                                                         bEquipped;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bMeshVisibleTo1P;                                        // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bMeshVisibleTo3P;                                        // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                       Attach1P;                                                // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  Socket1P;                                                // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                       Attach3P;                                                // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  Socket3P;                                                // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                       ScopeAttach;                                             // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ScopeSocket;                                             // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.HitScanInfo
	 * Size -> 0x0010
	 */
	struct FHitScanInfo
	{
	public:
		TWeakObjectPtr<class UPrimitiveComponent>                    Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SavedTransforms
	 * Size -> 0x0040
	 */
	struct FSavedTransforms
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               SavedTransform;                                          // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ModLink
	 * Size -> 0x0028
	 */
	struct FModLink
	{
	public:
		class FString                                                Text;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                URL;                                                     // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequired;                                               // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.TermsOfUse
	 * Size -> 0x00D0
	 */
	struct FTermsOfUse
	{
	public:
		class FString                                                AgreeButtonText;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                DisagreeButtonText;                                      // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModLink                                              WebsiteLink;                                             // 0x0020(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModLink                                              TermsLink;                                               // 0x0048(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModLink                                              PrivacyLink;                                             // 0x0070(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModLink                                              ManageLink;                                              // 0x0098(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CoverFirePoseTable
	 * Size -> 0x0140
	 */
	struct FCoverFirePoseTable
	{
	public:
		TMap<class UAnimMontage*, class UAnimSequence*>              Left_ExposedFire_CoverMontageToCoverPoseMap;             // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class UAnimMontage*, class UAnimSequence*>              Left_BlindFire_CoverMontageToCoverPoseMap;               // 0x0050(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class UAnimMontage*, class UAnimSequence*>              Right_ExposedFire_CoverMontageToCoverPoseMap;            // 0x00A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class UAnimMontage*, class UAnimSequence*>              Right_BlindFire_CoverMontageToCoverPoseMap;              // 0x00F0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.HostageDriverProperties
	 * Size -> 0x0004
	 */
	struct FHostageDriverProperties
	{
	public:
		float                                                        TimeToKillHostage;                                       // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ActorMemory
	 * Size -> 0x0010
	 */
	struct FActorMemory
	{
	public:
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.ItemID
	 * Size -> 0x0010
	 */
	struct FItemID
	{
	public:
		int32_t                                                      ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             Item;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.MapList
	 * Size -> 0x00A0
	 */
	struct FMapList
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                GameMode;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                LoadURL;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  Author;                                                  // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  AuthorContact;                                           // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  RecommendedPlayerCount;                                  // 0x0078(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundCue*                                             LoadingScreenMusic;                                      // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSupportsPvP;                                            // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSupportsCoop;                                           // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bVisible;                                                // 0x009A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x009B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.OutStackupData
	 * Size -> 0x0018
	 */
	struct FOutStackupData
	{
	public:
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PlayHead
	 * Size -> 0x001C
	 */
	struct FPlayHead
	{
	public:
		unsigned char                                                UnknownData_0000[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterSharedAnim
	 * Size -> 0x0010
	 */
	struct FCharacterSharedAnim
	{
	public:
		class UAnimMontage*                                          TP_Anim;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                          FP_Anim;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.WoundData
	 * Size -> 0x00A0
	 */
	struct FWoundData
	{
	public:
		float                                                        WoundSize;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  WoundOffset;                                             // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           UpperMesh;                                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               UpperMeshTranform;                                       // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UStaticMesh*                                           LowerMesh;                                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               LowerMeshTranform;                                       // 0x0060(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bBreaksBone;                                             // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterFPAnim
	 * Size -> 0x0008
	 */
	struct FCharacterFPAnim
	{
	public:
		class UAnimMontage*                                          FP_Anim;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.HealingData
	 * Size -> 0x0020
	 */
	struct FHealingData
	{
	public:
		float                                                        CurrentHealth;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinHealth;                                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaxHealth;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HealerName;                                              // 0x000C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HealeeName;                                              // 0x0014(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMedicalHealScreen                                           HealScreen;                                              // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.FootIKStruct
	 * Size -> 0x0010
	 */
	struct FFootIKStruct
	{
	public:
		float                                                        Offset;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                 FootRotation;                                            // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.Injury
	 * Size -> 0x000C
	 */
	struct FInjury
	{
	public:
		class FName                                                  BoneName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      InjuryCount;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.BoneVelocity
	 * Size -> 0x0018
	 */
	struct FBoneVelocity
	{
	public:
		class FName                                                  BoneName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  LastLocation;                                            // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CalculatedSpeed;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PairedInteractionTable
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FPairedInteractionTable : public FTableRowBase
	{
	public:
		TMap<class FName, class UInteractionsData*>                  Interactions;                                            // 0x0008(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.UniformData
	 * Size -> 0x0050
	 */
	struct FUniformData
	{
	public:
		class FText                                                  Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Image;                                                   // 0x0018(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x003C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemClass                                                   ItemClass;                                               // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             Blueprint;                                               // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.PMap
	 * Size -> 0x0050
	 */
	struct FPMap
	{
	public:
		TArray<class FString>                                        BLPN;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                        BLPHZ;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                        BLWT;                                                    // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                        BLDLLHZ;                                                 // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                        BLDLLN;                                                  // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.GrenadeData
	 * Size -> 0x0048
	 */
	struct FGrenadeData
	{
	public:
		class FString                                                Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Image;                                                   // 0x0010(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0034(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemClass                                                   ItemClass;                                               // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseGrenade*                                          Blueprint;                                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ChannelInfo
	 * Size -> 0x0018
	 */
	struct FChannelInfo
	{
	public:
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.AnalyticsSuspectState
	 * Size -> 0x0050
	 */
	struct FAnalyticsSuspectState
	{
	public:
		unsigned char                                                UnknownData_0000[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.SteamAuthenticationToken
	 * Size -> 0x0020
	 */
	struct FSteamAuthenticationToken
	{
	public:
		class FString                                                rgchTokenString;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                     unTokenLen;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                     SteamId;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RelevancyTracker
	 * Size -> 0x0004
	 */
	struct FRelevancyTracker
	{
	public:
		float                                                        TimeUntilRecheck;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RoNMoveStyleTable
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRoNMoveStyleTable : public FTableRowBase
	{
	public:
		TArray<struct FRoNMovementStyle>                             MoveStyles;                                              // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.ScoringDataTable
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FScoringDataTable : public FTableRowBase
	{
	public:
		class FString                                                Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectiveLevel                                              ObjectiveLevel;                                          // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FScoreBonus>                                   Bonuses;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FScorePenalty>                                 Penalties;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bRequiredToClearMission : 1;                             // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequiredToSoftClearMission : 1;                         // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      OrderPriority;                                           // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterCollisionTemplate
	 * Size -> 0x0090
	 */
	struct FCharacterCollisionTemplate
	{
	public:
		unsigned char                                                UnknownData_0000[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.RonKey
	 * Size -> 0x00A8
	 */
	struct FRonKey
	{
	public:
		class FString                                                InputName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                AlternativeInputName;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                           IconBrush;                                               // 0x0020(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.RonInputKeyTable
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRonInputKeyTable : public FTableRowBase
	{
	public:
		struct FRonKey                                               Key;                                                     // 0x0008(0x00A8) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.SpeedRange
	 * Size -> 0x0010
	 */
	struct FSpeedRange
	{
	public:
		float                                                        Speed;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRandomSpeed : 1;                                        // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MinSpeed;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaxSpeed;                                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DeploymentStatus
	 * Size -> 0x0028
	 */
	struct FDeploymentStatus
	{
	public:
		class FText                                                  Position;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EPlayerStatus                                                Status;                                                  // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReadyOrNotPlayerState*                                PlayerState;                                             // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.GameModeSettings
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FGameModeSettings : public FTableRowBase
	{
	public:
		int32_t                                                      MaxPlayers;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RoundStartTime;                                          // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ReinforcementTimer;                                      // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RespawnTimer;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Timelimit;                                               // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      RoundsPerMap;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        TDMScoreLimit;                                           // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  MatchStartInformationSwat;                               // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                  MatchStartInformationMlo;                                // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CharacterPersonalizationData
	 * Size -> 0x0050
	 */
	struct FCharacterPersonalizationData
	{
	public:
		EDLC                                                         LockedToDLC;                                             // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  RowName;                                                 // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  FriendlyName;                                            // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TSoftObjectPtr<class UTexture2D>                             Icon;                                                    // 0x0028(0x0024) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x004C(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct ReadyOrNot.LoadoutEquipOptions
	 * Size -> 0x0018
	 */
	struct FLoadoutEquipOptions
	{
	public:
		EItemCategory                                                EquipItemCategory;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bReplicates;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReadyOrNotPlayerState*                                OverridePlayerState;                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSanitizeLoadout;                                        // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.PromptInfo
	 * Size -> 0x0040
	 */
	struct FPromptInfo
	{
	public:
		ETutorialMessageContext                                      PromptContext;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                  ActionKey;                                               // 0x0008(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                  InputType;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ActionText;                                              // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimatedIconTable
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAnimatedIconTable : public FTableRowBase
	{
	public:
		struct FAnimatedIcon                                         AnimatedIcon;                                            // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.WidgetLookupData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FWidgetLookupData : public FTableRowBase
	{
	public:
		class UUserWidget*                                           WidgetClass;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShowMouseCursor;                                        // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bMouseUIOnly;                                            // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAddToWidgetStack;                                       // 0x0022(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCloseOnRespawn;                                         // 0x0023(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                             VisibilityUponCreation;                                  // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      ZOrder;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.InputEntry
	 * Size -> 0x0070
	 */
	struct FInputEntry
	{
	public:
		class FText                                                  DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                                Bind;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                  DefaultKeyBind1;                                         // 0x0028(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                  DefaultKeyBind2;                                         // 0x0040(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMapType                                                     MappingType;                                             // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        AxisScale;                                               // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDisplayOnScreen;                                        // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             ShowWithEquippedItem;                                    // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIActionDecisionContext
	 * Size -> 0x0010
	 */
	struct FAIActionDecisionContext
	{
	public:
		class ACyberneticController*                                 Controller;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorld*                                                World;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AIFactionTable
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAIFactionTable : public FTableRowBase
	{
	public:
		class FString                                                Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAIFactionManager*                                     Manager;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimWeaponData
	 * Size -> 0x0010
	 */
	struct FAnimWeaponData
	{
	public:
		TArray<class UAnimMontage*>                                  AnimMontages;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimStanceData
	 * Size -> 0x0020
	 */
	struct FAnimStanceData
	{
	public:
		struct FAnimWeaponData                                       StandingAnimData;                                        // 0x0000(0x0010) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAnimWeaponData                                       CrouchedAnimData;                                        // 0x0010(0x0010) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimationDataTable
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FAnimationDataTable : public FTableRowBase
	{
	public:
		TMap<EAnimWeaponType, struct FAnimStanceData>                AnimData;                                                // 0x0008(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                         bRestartIfAlreadyPlaying;                                // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MaxRandomDelay;                                          // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Cooldown;                                                // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNoCanPlayWhileStrafing;                                 // 0x0064(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNoCanPlayWhileNotStrafing;                              // 0x0065(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCanQueue;                                               // 0x0066(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCanAnimationBeInterupted;                               // 0x0067(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class ABaseItem*, class FString>                        OverrideAnimation;                                       // 0x0068(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FString>                                        CanOnlyBeInteruptedBy;                                   // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimSectionData
	 * Size -> 0x0008
	 */
	struct FAnimSectionData
	{
	public:
		float                                                        SectionStart;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SectionEnd;                                              // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimCharacterMovementPredictionSnapshot
	 * Size -> 0x0020
	 */
	struct FAnimCharacterMovementPredictionSnapshot
	{
	public:
		float                                                        GroundFriction;                                          // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BrakingFriction;                                         // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BrakingFrictionFactor;                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BrakingDecelerationWalking;                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseSeparateBrakingFriction;                             // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        GravityZ;                                                // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CapsuleRadius;                                           // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CapsuleHalfHeight;                                       // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CardinalDirectionBlendSpaceAnimSet
	 * Size -> 0x0020
	 */
	struct FCardinalDirectionBlendSpaceAnimSet
	{
	public:
		class UBlendSpace*                                           NorthAnim;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                           EastAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                           SouthAnim;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                           WestAnim;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.CardinalDirectionAnimSet
	 * Size -> 0x0020
	 */
	struct FCardinalDirectionAnimSet
	{
	public:
		class UAnimSequence*                                         NorthAnim;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         EastAnim;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         SouthAnim;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                         WestAnim;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.DistanceMatchAnimation
	 * Size -> 0x0020
	 */
	struct FDistanceMatchAnimation
	{
	public:
		class UAnimSequence*                                         Animation;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  DistanceCurveName;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableDistanceLimit;                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        DistanceLimit;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BlendoutTime;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReadyOrNot.DistanceMatchCardinalAnimSet
	 * Size -> 0x0080
	 */
	struct FDistanceMatchCardinalAnimSet
	{
	public:
		struct FDistanceMatchAnimation                               NorthAnim;                                               // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FDistanceMatchAnimation                               EastAnim;                                                // 0x0020(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FDistanceMatchAnimation                               SouthAnim;                                               // 0x0040(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FDistanceMatchAnimation                               WestAnim;                                                // 0x0060(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReadyOrNot.AnimInput_CapsuleLocomotion
	 * Size -> 0x0044
	 */
	struct FAnimInput_CapsuleLocomotion
	{
	public:
		struct FVector                                  WorldVelocity;                                           // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                  LocalVelocity;                                           // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                  WorldAcceleration;                                       // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                  LocalAcceleration;                                       // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        VelocityYawAngle;                                        // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        AccelerationYawAngle;                                    // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        Speed2D;                                                 // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        MovingThreshold;                                         // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bIsMoving2D;                                             // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bHasAcceleration2D;                                      // 0x0041(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bAccelerationOpposesVelocity;                            // 0x0042(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bIsOnGround;                                             // 0x0043(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ReadyOrNot.ItemLookupTable
	 * Size -> 0x0598 (FullSize[0x05A0] - InheritedSize[0x0008])
	 */
	struct FItemLookupTable : public FTableRowBase
	{
	public:
		class FText                                                  ItemName;                                                // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                  ItemDescription;                                         // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EDLC>                                                 LockedToDLC;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EItemCategory>                                        ItemCategories;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EItemClass                                                   ItemClass;                                               // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemType                                                    ItemType;                                                // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TSoftClassPtr<class ABaseItem>                               BlueprintClass;                                          // 0x0060(0x0024) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0084(0x0004) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         bPistolGrip;                                             // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                            ItemIcon;                                                // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ItemWeight;                                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        HolsterPlayRate;                                         // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DrawPlayRate;                                            // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseLowReady;                                            // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        PushbackRange;                                           // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LowReadyRange;                                           // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LowReadyRangeSightsModifier;                             // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LowReadyPitchThreshold;                                  // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MovementSpeedMultiplier;                                 // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LeanOffset;                                              // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ADSZoom;                                                 // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ADSZoomInSpeed;                                          // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ADSZoomOutSpeed;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AImpactEffect*                                         ImpactEffects;                                           // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AImpactEffect*                                         RicochetEffects;                                         // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                       RicochetParticleSystem;                                  // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AImpactEffect*                                         ExitEffects;                                             // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MagazineWeightFull;                                      // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MagazineWeightEmpty;                                     // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bADSCountsAsAbuse;                                       // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        HesitationBoostMultiplier;                               // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EFireMode>                                            FireModes;                                               // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                        BurstBulletCount;                                        // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0006[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                          AmmunitionTypes;                                         // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                    DamageOverRange;                                         // 0x0128(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                        Damage;                                                  // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DamageSeverityMultiplier;                                // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DamageSeverityChance;                                    // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BleedoutDamageMultiplier;                                // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BleedoutDamageChance;                                    // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0007[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageType*                                           DefaultDamageType;                                       // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageType*                                           ArmorPiercingDamageType;                                 // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MagazineCountDefault;                                    // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MagazineCountMin;                                        // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MagazineCountMax;                                        // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  MagazineLabel;                                           // 0x01E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ProjectileMovementSpeed;                                 // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PenetrationDistance;                                     // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0008[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABulletProjectile*                                     FakeBulletProjectile;                                    // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABulletProjectile*                                     BulletProjectile;                                        // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABulletProjectile*                                     ArmorPiercingBulletProjectile;                           // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      MagazineSize;                                            // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FireRate;                                                // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Range;                                                   // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Accuracy;                                                // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinFireRateAI;                                           // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaxFireRateAI;                                           // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      BulletsFiredUntilFullyAccurate;                          // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIgnoreAmmoTypeSpread;                                   // 0x022C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0009[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                 SpreadPattern;                                           // 0x0230(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                        SpreadReturnRate;                                        // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ADSSpreadMultiplier;                                     // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0010[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRotator>                         RecoilPattern;                                           // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                        RecoilReturnRate;                                        // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilInterpSpeed;                                       // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ADSRecoilMultiplier;                                     // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LockIntegrityMinDamage;                                  // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LockIntegrityMaxDamage;                                  // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BulletDrag;                                              // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHitScan;                                                // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSpawnTracer;                                            // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNoSpawnTracerForFiringPlayer;                           // 0x0272(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0011[0x1];                                   // 0x0273(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      SpawnProjectileCount;                                    // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Wobble;                                                  // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        InitialWobbleDelay;                                      // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMatineeCameraShake*                                   FireCameraShake;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FirstShotRecoil;                                         // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FirstShotSpread;                                         // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FirstShotResetTime;                                      // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilReturnInterpSpeed;                                 // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilReturnPercentage;                                  // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VelocitySpreadMultiplier;                                // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VelocityRecoilMultiplier;                                // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilMultiplierPitch;                                   // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilMultiplierYaw;                                     // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RefireDelay;                                             // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWeaponWheel_ItemStat_Base*>                    ItemStats;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                      AttachmentPoints;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAcceptsScopeAttachments;                                // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0012[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UScopedWeaponAttachment*>                       AvailableScopeAttachments;                               // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsMuzzleAttachments;                               // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0013[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableMuzzleAttachments;                              // 0x02E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsUnderbarrelAttachments;                          // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0014[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableUnderbarrelAttachments;                         // 0x02F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsOverbarrelAttachments;                           // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0015[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableOverbarrelAttachments;                          // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsStockAttachments;                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0016[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableStockAttachments;                               // 0x0328(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsGripAttachments;                                 // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0017[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableGripAttachments;                                // 0x0340(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsIlluminatorAttachments;                          // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0018[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableIlluminatorAttachments;                         // 0x0358(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bAcceptsAmmunitionAttachments;                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0019[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AvailableAmmunitionAttachments;                          // 0x0370(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                         bCalculateProcRecoil;                                    // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0020[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        RecoilDampStrength;                                      // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilFireTime;                                          // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilFireStrength;                                      // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilFireStrengthFirst;                                 // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilAngleStrength;                                     // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilRandomness;                                        // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilADSModfier;                                        // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilAngleADSModifier;                                  // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                 RecoilRotationBuildup;                                   // 0x03A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                  RecoilPositionBuildup;                                   // 0x03B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RecoilBuildupADSMultiplier;                              // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         RecoilHasBuildup;                                        // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0021[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        RecoilBuildupDampStrength;                               // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimLimit;                                            // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimLimitADS;                                         // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LazySpringStrength;                                      // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LazySpringStrengthADS;                                   // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FPADSMotionWeight;                                       // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimInterpSpeed;                                      // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimInterpADSModifier;                                // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimInterpHipModifier;                                // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimSlowMoveModifier;                                 // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FreeAimSlowMoveTolerance;                                // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDisableMeshspaceMovement;                               // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0022[0xF];                                   // 0x03F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               MeshspaceTransform_Default;                              // 0x0400(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               MeshspaceTransform_Aiming;                               // 0x0430(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               MeshspaceTransform_Back;                                 // 0x0460(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                  MovementSpeedScale;                                      // 0x0490(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                 MovementSpeedRotationScalePitchYawRoll;                  // 0x049C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                        MeshSpaceAimInterp;                                      // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0023[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               MeshspaceTransform_OnDraw;                               // 0x04B0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                        OnDrawMeshspaceInterp;                                   // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0024[0xC];                                   // 0x04E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               MeshspaceTransform_OnHolster;                            // 0x04F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                        OnHolsterMeshspaceInterp;                                // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        InertiaDragAimRotation;                                  // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        InertiaDragAimLocation;                                  // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        InertiaDragStrafeRotation;                               // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        InertiaDragStrafeLocation;                               // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  BodySocket;                                              // 0x0534(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HandsSocket;                                             // 0x053C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobScaleH;                                         // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobScaleV;                                         // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobSpeedScaleH;                                    // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobSpeedScaleV;                                    // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobAmplitudeBaseSpeed;                             // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobIntensitySprintScale;                           // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobAmplitudeWalkScale;                             // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CameraBobAmplitudeSprintScale;                           // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobScaleH;                                         // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobScaleV;                                         // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobScaleInjured;                                   // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobSpeedScaleH;                                    // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobSpeedScaleV;                                    // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobSpeedScaleInjured;                              // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobCrouchModifier;                                 // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobADSModifier;                                    // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobRotPitchScale;                                  // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobRotRollScale;                                   // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobRotPitchSpeed;                                  // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobRotRollSpeed;                                   // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobRotCrouchModifier;                              // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        WeaponBobRotADSModifier;                                 // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0025[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
