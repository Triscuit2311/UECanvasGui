#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EItemCategory : uint8
{
	IC_None                        = 0,
	IC_Primary                     = 1,
	IC_Secondary                   = 2,
	IC_Grenade                     = 3,
	IC_Gadget                      = 4,
	IC_Magazine                    = 5,
	IC_Helmet                      = 6,
	IC_Helmet_Light                = 7,
	IC_Headset                     = 8,
	IC_Goggles                     = 9,
	IC_Chest                       = 10,
	IC_Watch                       = 11,
	IC_Radio                       = 12,
	IC_NVG                         = 13,
	IC_UseableWithShield           = 14,
	IC_Grenade_Keybind1            = 15,
	IC_Grenade_Keybind2            = 16,
	IC_Grenade_Keybind3            = 17,
	IC_Grenade_Keybind4            = 18,
	IC_Device_Keybind1             = 19,
	IC_Device_Keybind2             = 20,
	IC_Device_Keybind3             = 21,
	IC_Device_Keybind4             = 22,
	IC_Badge_Armour                = 23,
	IC_OCSpray                     = 24,
	IC_Multitool                   = 25,
	IC_Zipcuffs                    = 26,
	IC_Armor                       = 27,
	IC_Chemlight                   = 28,
	IC_Shield                      = 29,
	IC_Flashbang                   = 30,
	IC_Ninebang                    = 31,
	IC_CSGas                       = 32,
	IC_Stingball                   = 33,
	IC_Optiwand                    = 34,
	IC_Beanbag                     = 35,
	IC_Taser                       = 36,
	IC_Pepperball                  = 37,
	IC_C2Explosive                 = 38,
	IC_Detonator                   = 39,
	IC_Doorjam                     = 40,
	IC_BatteringRam                = 41,
	IC_BreachingShotgun            = 42,
	IC_Tablet                      = 43,
	IC_TacticalDevice              = 44,
	IC_LongTactical                = 45,
	IC_GasMask                     = 46,
	IC_Launcher                    = 47,
	IC_MedicalKit                  = 48,
	IC_LockpickGun                 = 49,
	IC_Shotgun                     = 50,
	IC_MAX                         = 51,
};

enum class EBlockingAnimationExclusion : uint8
{
	BAE_None                       = 0,
	BAE_Holster                    = 1,
	BAE_Draw                       = 2,
	BAE_FireSelect                 = 3,
	BAE_MagCheck                   = 4,
	BAE_PullPin                    = 5,
	BAE_Throw                      = 6,
	BAE_MAX                        = 7,
};

enum class EStunType : uint8
{
	ST_None                        = 0,
	ST_Tased                       = 1,
	ST_Gassed                      = 2,
	ST_Flash                       = 3,
	ST_Stung                       = 4,
	ST_Beanbag                     = 5,
	ST_Pepperball                  = 6,
	ST_Rubberball                  = 7,
	ST_Pepperspray                 = 8,
	ST_MAX                         = 9,
};

enum class EItemAttachment : uint8
{
	IA_None                        = 0,
	IA_Flashlight                  = 1,
	IA_NVG                         = 2,
	IA_MAX                         = 3,
};

enum class EMotionBlockType : uint8
{
	MB_None                        = 0,
	MB_Rifle                       = 1,
	MB_Pistol                      = 2,
	MB_Item                        = 3,
	MB_HeavyItem                   = 4,
	MB_Special                     = 5,
	MB_Unarmed                     = 6,
	MB_MAX                         = 7,
};

enum class EWeaponType : uint8
{
	WT_None                        = 0,
	WT_Rifles                      = 1,
	WT_SubmachineGun               = 2,
	WT_Shotgun                     = 3,
	WT_PistolsLethal               = 4,
	WT_PistolsNonLethal            = 5,
	WT_PrimaryNonLethal            = 6,
	WT_Launcher                    = 7,
	WT_Special                     = 8,
	WT_Unarmed                     = 9,
	WT_MAX                         = 10,
};

enum class EGameVersionRestriction : uint8
{
	GVR_NoRestriction              = 0,
	GVR_Base                       = 1,
	GVR_Supporter                  = 2,
	GVR_PreorderBonus              = 3,
	GVR_Demo                       = 255,
	GVR_MAX                        = 256,
};

enum class EItemClass : uint8
{
	IC_NoClass                     = 0,
	IC_AssaultRifle                = 1,
	IC_SMG                         = 2,
	IC_LMG                         = 3,
	IC_Pistol                      = 4,
	IC_Sniper                      = 5,
	IC_Melee                       = 6,
	IC_LessLethal                  = 7,
	IC_Shotgun                     = 8,
	IC_Launcher                    = 9,
	IC_Grenade                     = 10,
	IC_Shield                      = 11,
	IC_Armor                       = 12,
	IC_Headgear                    = 13,
	IC_TacticalDevice              = 14,
	IC_LongTactical                = 15,
	IC_Officer                     = 16,
	IC_Uniform                     = 17,
	IC_Plates                      = 18,
	IC_Patches                     = 19,
	IC_MAX                         = 20,
};

enum class EGrenadeType : uint8
{
	None                           = 0,
	Flashbang                      = 1,
	Stinger                        = 2,
	Gas                            = 3,
	Smoke                          = 4,
	Frag                           = 5,
	Custom                         = 6,
	EGrenadeType_MAX               = 7,
};

enum class EWeaponUnderbarrelAnimationType : uint8
{
	WU_None                        = 0,
	WU_VFG                         = 1,
	WU_AFG                         = 2,
	WU_Handstop                    = 3,
	WU_MAX                         = 4,
};

enum class EFireMode : uint8
{
	FM_Single                      = 0,
	FM_Auto                        = 1,
	FM_Burst                       = 2,
	FM_Continuous                  = 3,
	FM_Safe                        = 4,
	FM_MAX                         = 5,
};

enum class EReloadAnimEvent : uint8
{
	RAE_MagIn                      = 0,
	RAE_MagOut                     = 1,
	RAE_MagInQuick                 = 2,
	RAE_MagOutQuick                = 3,
	RAE_BoltClosed                 = 4,
	RAE_BoltClosedQuick            = 5,
	RAE_BoltOpened                 = 6,
	RAE_BoltOpenedQuick            = 7,
	RAE_MAX                        = 8,
};

enum class EDoorDamageType : uint8
{
	DDT_None                       = 0,
	DDT_Blasting                   = 1,
	DDT_Shotgunning                = 2,
	DDT_Ramming                    = 3,
	DDT_Kicking                    = 4,
	DDT_Bash                       = 5,
	DDT_MAX                        = 6,
};

enum class EStackupGenArea : uint8
{
	SGA_None                       = 0,
	SGA_FrontLeft                  = 1,
	SGA_FrontRight                 = 2,
	SGA_BackLeft                   = 3,
	SGA_BackRight                  = 4,
	SGA_All                        = 5,
	SGA_MAX                        = 6,
};

enum class EActorOutlineType : uint8
{
	Outline_0                      = 0,
	Outline_1                      = 1,
	Outline_2                      = 2,
	Outline_3                      = 3,
	Outline_4                      = 4,
	Outline_5                      = 5,
	Outline_6                      = 6,
	Outline_MAX                    = 7,
};

enum class EDoorInteraction : uint8
{
	None                           = 0,
	Open                           = 1,
	Close                          = 2,
	Peek                           = 3,
	Push                           = 4,
	Kick                           = 5,
	Kick_Fail                      = 6,
	Ram                            = 7,
	EDoorInteraction_MAX           = 8,
};

enum class ETrapType : uint8
{
	Alarm                          = 0,
	Flashbang                      = 1,
	Explosive                      = 2,
	Unknown                        = 3,
	ETrapType_MAX                  = 4,
};

enum class EDoorTrapSide : uint8
{
	Front                          = 0,
	Back                           = 1,
	EDoorTrapSide_MAX              = 2,
};

enum class EDoorRoomPosition : uint8
{
	Center                         = 0,
	CornerLeft                     = 1,
	CornerRight                    = 2,
	Hallway                        = 3,
	HallwayLeft                    = 4,
	HallwayRight                   = 5,
	EDoorRoomPosition_MAX          = 6,
};

enum class EClearDirection : uint8
{
	None                           = 0,
	Right                          = 1,
	Forward                        = 2,
	EClearDirection_MAX            = 3,
};

enum class EDoorOneWayDirection : uint8
{
	Forward                        = 0,
	Backward                       = 1,
	EDoorOneWayDirection_MAX       = 2,
};

enum class ECOOPMode : uint8
{
	CM_None                        = 0,
	CM_BombThreat                  = 1,
	CM_ActiveShooter               = 2,
	CM_HostageRescue               = 3,
	CM_BarricadedSuspects          = 4,
	CM_Raid                        = 5,
	CM_MAX                         = 6,
};

enum class EBombState : uint8
{
	BS_None                        = 0,
	BS_Active                      = 1,
	BS_Disabled                    = 2,
	BS_Exploded                    = 3,
	BS_HiddenAndFullyDisabled      = 4,
	BS_MAX                         = 5,
};

enum class EClueState : uint8
{
	Unclaimed                      = 0,
	Collected                      = 1,
	Dropped                        = 2,
	EClueState_MAX                 = 3,
};

enum class ETeamType : uint8
{
	TT_NONE                        = 0,
	TT_SERT_RED                    = 1,
	TT_SERT_BLUE                   = 2,
	TT_SUSPECT                     = 3,
	TT_CIVILIAN                    = 4,
	TT_SQUAD                       = 5,
	TT_MAX                         = 6,
};

enum class EVoiceType : uint8
{
	VT_Local                       = 0,
	VT_Team                        = 1,
	VT_MAX                         = 2,
};

enum class EArmourCoverage : uint8
{
	AC_None                        = 0,
	AC_FrontOnly                   = 1,
	AC_FrontBack                   = 2,
	AC_FrontBackSides              = 3,
	AC_MAX                         = 4,
};

enum class EHUDStyle : uint8
{
	Default                        = 0,
	Minimal                        = 1,
	Detail                         = 2,
	Immersive                      = 3,
	EHUDStyle_MAX                  = 4,
};

enum class EVolumeShape : uint8
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EVolumeShape_MAX               = 3,
};

enum class ELimbType : uint8
{
	LT_None                        = 0,
	LT_RightLeg                    = 1,
	LT_LeftLeg                     = 2,
	LT_RightArm                    = 3,
	LT_LeftArm                     = 4,
	LT_Head                        = 5,
	LT_MAX                         = 6,
};

enum class EPlayerHealthStatus : uint8
{
	HS_Healthy                     = 0,
	HS_Injured                     = 1,
	HS_Downed                      = 2,
	HS_Incapacitated               = 3,
	HS_Dead                        = 4,
	HS_Arrested                    = 5,
	HS_NotAvailable                = 6,
	HS_MAX                         = 7,
};

enum class EAnimWeaponType : uint8
{
	CWT_Unarmed                    = 0,
	CWT_Pistol                     = 1,
	CWT_Rifle                      = 2,
	CWT_Arrested                   = 3,
	CWT_Surrendered                = 4,
	CWT_Any                        = 5,
	CWT_MAX                        = 6,
};

enum class ECharacterEmotion : uint8
{
	None                           = 0,
	Angry                          = 1,
	Wince                          = 2,
	Sad                            = 3,
	Afraid                         = 4,
	Alert                          = 5,
	ECharacterEmotion_MAX          = 6,
};

enum class EGibAreas : uint8
{
	GA_None                        = 0,
	GA_LeftLeg                     = 1,
	GA_RightLeg                    = 2,
	GA_LeftArm                     = 3,
	GA_RightArm                    = 4,
	GA_Head                        = 5,
	GA_MAX                         = 6,
};

enum class ETOCPriority : uint8
{
	ETP_Flush                      = 0,
	ETP_HighPriority               = 1,
	ETP_MediumPriority             = 2,
	ETP_LowPriority                = 3,
	ETP_MAX                        = 4,
};

enum class ESquadPosition : uint8
{
	SP_Alpha                       = 0,
	SP_Beta                        = 1,
	SP_Charlie                     = 2,
	SP_Delta                       = 3,
	SP_Foxtrot                     = 4,
	SP_Golf                        = 5,
	SP_Hotel                       = 6,
	SP_India                       = 7,
	SP_NONE                        = 8,
	SP_MAX                         = 9,
};

enum class ECharacterDeathReason : uint8
{
	None                           = 0,
	PrimaryWeapon                  = 1,
	SecondaryWeapon                = 2,
	TasedToDeath                   = 3,
	FellFromHighHeight             = 4,
	Suicide                        = 5,
	Headshot                       = 6,
	Bleedout                       = 7,
	Grenade                        = 8,
	Explosion                      = 9,
	MultipleUnhealedWounds         = 10,
	ECharacterDeathReason_MAX      = 11,
};

enum class ESwatCommand : uint8
{
	SC_None                        = 0,
	SC_MoveTo                      = 1,
	SC_FallIn                      = 2,
	SC_FallIn_Snake                = 3,
	SC_FallIn_HalfSnake            = 4,
	SC_FallIn_Diamond              = 5,
	SC_FallIn_Flock                = 6,
	SC_Cover                       = 7,
	SC_Hold                        = 8,
	SC_Resume                      = 9,
	SC_DeployFlashbang             = 10,
	SC_DeployStinger               = 11,
	SC_DeployCSGas                 = 12,
	SC_DeployChemlight             = 13,
	SC_DoArrestTarget              = 14,
	SC_DoCollectEvidence           = 15,
	SC_DoReportTarget              = 16,
	SC_DisarmStandaloneTrap        = 17,
	SC_KillMe                      = 18,
	SC_StackUp                     = 19,
	SC_StackUpSplit                = 20,
	SC_StackUpLeft                 = 21,
	SC_StackUpRight                = 22,
	SC_PickLock                    = 23,
	SC_RemoveDoorJam               = 24,
	SC_DeployMirrorgun             = 25,
	SC_DeployDoorJam               = 26,
	SC_CheckForTrap                = 27,
	SC_DisarmTrap                  = 28,
	SC_OpenDoor                    = 29,
	SC_CloseDoor                   = 30,
	SC_Slide                       = 31,
	SC_Slice                       = 32,
	SC_Snap                        = 33,
	SC_SearchAndSecure             = 34,
	SC_SearchAndSecureRoom         = 35,
	SC_SearchAndSecureRoom_Individual = 36,
	SC_MoveAndClear                = 37,
	SC_MoveAndClearFlashbang       = 38,
	SC_MoveAndClearStinger         = 39,
	SC_MoveAndClearCSGas           = 40,
	SC_MoveAndClearLauncher        = 41,
	SC_MoveAndClearLeader          = 42,
	SC_OpenAndClear                = 43,
	SC_OpenAndClearFlashbang       = 44,
	SC_OpenAndClearStinger         = 45,
	SC_OpenAndClearCSGas           = 46,
	SC_OpenAndClearLauncher        = 47,
	SC_OpenAndClearLeader          = 48,
	SC_KickAndClear                = 49,
	SC_KickAndClearFlashbang       = 50,
	SC_KickAndClearStinger         = 51,
	SC_KickAndClearCSGas           = 52,
	SC_KickAndClearLauncher        = 53,
	SC_KickAndClearLeader          = 54,
	SC_ShotgunClear                = 55,
	SC_ShotgunClearFlashbang       = 56,
	SC_ShotgunClearStinger         = 57,
	SC_ShotgunClearCSGas           = 58,
	SC_ShotgunClearLeader          = 59,
	SC_ShotgunClearLauncher        = 60,
	SC_RamAndClear                 = 61,
	SC_RamAndClearFlashbang        = 62,
	SC_RamAndClearStinger          = 63,
	SC_RamAndClearCSGas            = 64,
	SC_RamAndClearLauncher         = 65,
	SC_RamAndClearLeader           = 66,
	SC_C2Clear                     = 67,
	SC_C2ClearFlashbang            = 68,
	SC_C2ClearStinger              = 69,
	SC_C2ClearCSGas                = 70,
	SC_C2ClearLauncher             = 71,
	SC_C2ClearLeader               = 72,
	SC_LeaderAndClear              = 73,
	SC_LeaderAndClearFlashbang     = 74,
	SC_LeaderAndClearStinger       = 75,
	SC_LeaderAndClearCSGas         = 76,
	SC_LeaderAndClearLauncher      = 77,
	SC_LeaderAndClearLeader        = 78,
	SC_SwapWithAlpha               = 79,
	SC_SwapWithBeta                = 80,
	SC_SwapWithCharlie             = 81,
	SC_SwapWithDelta               = 82,
	SC_SwapWithAlphaOpposite       = 83,
	SC_SwapWithBetaOpposite        = 84,
	SC_SwapWithCharlieOpposite     = 85,
	SC_SwapWithDeltaOpposite       = 86,
	SC_MoveToAlpha                 = 87,
	SC_MoveToBeta                  = 88,
	SC_MoveToCharlie               = 89,
	SC_MoveToDelta                 = 90,
	SC_MoveTo_Individual           = 91,
	SC_MoveTo_MyPosition_Individual = 92,
	SC_MoveTo_Stop_Individual      = 93,
	SC_MoveTo_Exit_Individual      = 94,
	SC_MoveToAndBack_Individual    = 95,
	SC_Focus_Individual            = 96,
	SC_Focus_MyPosition_Individual = 97,
	SC_UnFocus_Individual          = 98,
	SC_FocusDoor_Individual        = 99,
	SC_FocusTarget_Individual      = 100,
	SC_TurnAround_Individual       = 101,
	SC_Execute                     = 102,
	SC_Cancel                      = 103,
	SC_DeployShield                = 104,
	SC_HolsterShield               = 105,
	SC_DeployTaser                 = 106,
	SC_DeployPepperspray           = 107,
	SC_DeployPepperball            = 108,
	SC_DeployBeanbag               = 109,
	SC_MeleeTarget                 = 110,
	SC_Roger                       = 111,
	SC_Negative                    = 112,
	PC_Deploy                      = 113,
	PC_ConfirmOrderRequest         = 114,
	PC_StackUp                     = 115,
	PC_Open                        = 116,
	PC_Move                        = 117,
	PC_Kick                        = 118,
	PC_Shotgun                     = 119,
	PC_C2                          = 120,
	PC_Breach                      = 121,
	ESwatCommand_MAX               = 122,
};

enum class EItemSelectionInterfaceType : uint8
{
	Wheel                          = 0,
	Panel                          = 1,
	EItemSelectionInterfaceType_MAX = 2,
};

enum class ELedgeHeight : uint8
{
	LH_None                        = 0,
	LH_Step                        = 1,
	LH_Vault                       = 2,
	LH_Mantle                      = 3,
	LH_MAX                         = 4,
};

enum class ELedgeWidth : uint8
{
	LW_None                        = 0,
	LW_Ledge                       = 1,
	LW_Rail                        = 2,
	LW_Fall                        = 3,
	LW_MAX                         = 4,
};

enum class EMultitoolFunctions : uint8
{
	MF_None                        = 0,
	MF_Lockpick                    = 1,
	MF_Knife                       = 2,
	MF_Wirecutter                  = 3,
	MF_MAX                         = 4,
};

enum class ELightRadialSelection : uint8
{
	LR_None                        = 0,
	LR_NVGs                        = 1,
	LR_WeaponLight                 = 2,
	LR_Chemlight                   = 3,
	LR_MAX                         = 4,
};

enum class EFootConstEnum : uint8
{
	FCE_Forward                    = 0,
	FCE_Inverse                    = 1,
	FCE_MAX                        = 2,
};

enum class ETrapState : uint8
{
	TS_Live                        = 0,
	TS_Activated                   = 1,
	TS_Disabled                    = 2,
	TS_MAX                         = 3,
};

enum class EMatchState : uint8
{
	MS_None                        = 0,
	MS_Warmup                      = 1,
	MS_Playing                     = 2,
	MS_RoundEnded                  = 3,
	MS_MatchEnded                  = 4,
	MS_GoingToNextLevel            = 5,
	MS_MAX                         = 6,
};

enum class ERespawnMode : uint8
{
	NoRespawn                      = 0,
	ImmediateRespawn               = 1,
	DelayedRespawn                 = 2,
	ERespawnMode_MAX               = 3,
};

enum class EProjectileReaction : uint8
{
	PR_None                        = 0,
	PR_Richochet                   = 1,
	PR_Pierce                      = 2,
	PR_MAX                         = 3,
};

enum class EActivityStatus : uint8
{
	Uninitialized                  = 0,
	Initialized                    = 1,
	Started                        = 2,
	Paused                         = 3,
	Complete                       = 4,
	EActivityStatus_MAX            = 5,
};

enum class ERonNavigationQueryResult : uint8
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ERonNavigationQueryResult_MAX  = 4,
};

enum class EAIAwarenessState : uint8
{
	Unalerted                      = 0,
	Suspicious                     = 1,
	Alerted                        = 2,
	EAIAwarenessState_MAX          = 3,
};

enum class ESurrenderExitType : uint8
{
	None                           = 0,
	Default                        = 1,
	Gun                            = 2,
	Knife                          = 3,
	ESurrenderExitType_MAX         = 4,
};

enum class ECombatState : uint8
{
	CS_Unaware                     = 0,
	CS_Suspicious                  = 1,
	CS_Fleeing                     = 2,
	CS_Hesitation                  = 3,
	CS_Cover                       = 4,
	CS_ArmedAndDangerous           = 5,
	CS_MAX                         = 6,
};

enum class EPlayerStatus : uint8
{
	PS_None                        = 0,
	PS_NotReady                    = 1,
	PS_Ready                       = 2,
	PS_Deployed                    = 3,
	PS_MAX                         = 4,
};

enum class EFreeDrawColor : uint8
{
	FDC_Black                      = 0,
	FDC_Red                        = 1,
	FDC_Blue                       = 2,
	FDC_Gold                       = 3,
	FDC_Green                      = 4,
	FDC_Purple                     = 5,
	FDC_Orange                     = 6,
	FDC_Cyan                       = 7,
	FDC_MAX                        = 8,
};

enum class EKillfeedType : uint8
{
	KT_None                        = 0,
	KT_Kill                        = 1,
	KT_Arrest                      = 2,
	KT_Free                        = 3,
	KT_Recovered                   = 4,
	KT_Death                       = 5,
	KT_MAX                         = 6,
};

enum class EVoteState : uint8
{
	Undecided                      = 0,
	Yes                            = 1,
	No                             = 2,
	EVoteState_MAX                 = 3,
};

enum class ESelectedSpawn : uint8
{
	SS_None                        = 0,
	SS_FirstSpawn                  = 1,
	SS_SecondSpawn                 = 2,
	SS_ThirdSpawn                  = 3,
	SS_FourthSpawn                 = 4,
	SS_MAX                         = 5,
};

enum class EServerValidationState : uint8
{
	Unvalidated                    = 0,
	Validated                      = 1,
	Invalid                        = 2,
	EServerValidationState_MAX     = 3,
};

enum class EPlanningLineTeam : uint8
{
	PLT_Gold                       = 0,
	PLT_Red                        = 1,
	PLT_Blue                       = 2,
	PLT_MAX                        = 3,
};

enum class ERadialMenuCloseReason : uint8
{
	MCR_UserClosed                 = 0,
	MCR_ForceClosed                = 1,
	MCR_MAX                        = 2,
};

enum class ERadialCursorBehaviour : uint8
{
	RCB_Clamped                    = 0,
	RCB_Continuous                 = 1,
	RCB_MAX                        = 2,
};

enum class EEquippingSwat : uint8
{
	ES_None                        = 0,
	ES_BlueOne                     = 1,
	ES_BlueTwo                     = 2,
	ES_RedOne                      = 3,
	ES_RedTwo                      = 4,
	ES_MAX                         = 5,
};

enum class EItemType : uint8
{
	IT_None                        = 0,
	IT_Rifles                      = 1,
	IT_SubmachineGun               = 2,
	IT_LightMachineGun             = 3,
	IT_Shotgun                     = 4,
	IT_Sniper                      = 5,
	IT_PistolsLethal               = 6,
	IT_PistolsNonLethal            = 7,
	IT_PrimaryNonLethal            = 8,
	IT_Launcher                    = 9,
	IT_Melee                       = 10,
	IT_LessLethal                  = 11,
	IT_Headwear                    = 12,
	IT_BodyArmor                   = 13,
	IT_Grenade                     = 14,
	IT_GrenadeNonLethal            = 15,
	IT_TacticalDevice              = 16,
	IT_TacticalDeviceNonLethal     = 17,
	IT_TacticalOne                 = 18,
	IT_TacticalTwo                 = 19,
	IT_TacticalThree               = 20,
	IT_TacticalFour                = 21,
	IT_TacticalFive                = 22,
	IT_TacticalSix                 = 23,
	IT_TacticalSeven               = 24,
	IT_TacticalEight               = 25,
	IT_LongTactical                = 26,
	IT_Skins                       = 27,
	IT_Loadouts                    = 28,
	IT_MAX                         = 29,
};

enum class EPreMissionSubCategory : uint8
{
	None                           = 0,
	Primary                        = 1,
	Secondary                      = 2,
	Tactical                       = 3,
	Appearance                     = 4,
	Protection                     = 5,
	ItemSelection                  = 6,
	Grenades                       = 7,
	Clean                          = 8,
	EPreMissionSubCategory_MAX     = 9,
};

enum class EEvidenceActorState : uint8
{
	Unclaimed                      = 0,
	Collected                      = 1,
	Extraction                     = 2,
	Dropped                        = 3,
	EEvidenceActorState_MAX        = 4,
};

enum class EWeaponAttachmentType : uint8
{
	Null                           = 0,
	Optics                         = 1,
	Muzzle                         = 2,
	Underbarrel                    = 3,
	Overbarrel                     = 4,
	Stock                          = 5,
	Grip                           = 6,
	Illuminators                   = 7,
	Ammunition                     = 8,
	EWeaponAttachmentType_MAX      = 9,
};

enum class ELoadoutCategory : uint8
{
	None                           = 0,
	Primary                        = 1,
	Secondary                      = 2,
	LongTactical                   = 8,
	TacticalDevice                 = 16,
	ELoadoutCategory_MAX           = 17,
};

enum class ELoginState : uint8
{
	LS_None                        = 0,
	LS_LoggingIn                   = 1,
	LS_LoggedIn                    = 2,
	LS_LoggedOut                   = 3,
	LS_LoginFail                   = 4,
	LS_MAX                         = 5,
};

enum class EReplayEventType : uint8
{
	PlayerKilled                   = 0,
	SwatKilled                     = 1,
	SuspectKilled                  = 2,
	CivilianArrested               = 3,
	EvidenceCollected              = 4,
	EReplayEventType_MAX           = 5,
};

enum class ELastMenuStateBeforeJoin : uint8
{
	LM_None                        = 0,
	LM_ServerBrowser               = 1,
	LM_FromFriends                 = 2,
	LM_SinglePlayer                = 3,
	LM_MAX                         = 4,
};

enum class EPersonnel : uint8
{
	PERS_None                      = 0,
	PERS_TruckDriver               = 1,
	PERS_NoisemakerOperator        = 2,
	PERS_VentilationExpert         = 3,
	PERS_Spotter                   = 4,
	PERS_Marksman                  = 5,
	PERS_Sniper                    = 6,
	PERS_FloodlightOperator        = 7,
	PERS_PowerCrew                 = 8,
	PERS_Negotiator                = 9,
	PERS_MAX                       = 10,
};

enum class ESessionType : uint8
{
	ST_None                        = 0,
	ST_SinglePlayer                = 1,
	ST_Public                      = 2,
	ST_Friends                     = 3,
	ST_MAX                         = 4,
};

enum class ELightType : uint8
{
	LT_None                        = 0,
	LT_Day                         = 1,
	LT_Night                       = 2,
	LT_MAX                         = 3,
};

enum class EGenerationType : uint8
{
	GT_None                        = 0,
	GT_RandomScenarios             = 1,
	GT_MAX                         = 2,
};

enum class EPVPEvent : uint8
{
	None                           = 0,
	PlayerKilled                   = 1,
	PlayerArrested                 = 2,
	PlayerFreed                    = 3,
	KillConfirmed                  = 4,
	ReportedEvidence               = 5,
	VIPSecured                     = 6,
	VIPArrested                    = 7,
	VIPFreed                       = 8,
	VIPKilled                      = 9,
	FlagCaptured                   = 10,
	FlagDropped                    = 11,
	IntelCollected                 = 12,
	IntelDropped                   = 13,
	IntelExtracting                = 14,
	IntelExtracted                 = 15,
	IncrimClueFound                = 16,
	EPVPEvent_MAX                  = 17,
};

enum class EAchievementStats : uint8
{
	SCORE_GAS                      = 0,
	SCORE_COYOTE                   = 1,
	SCORE_METH                     = 2,
	SCORE_CAMPUS                   = 3,
	SCORE_HOSPITAL                 = 4,
	SCORE_CLUB                     = 5,
	SCORE_FARM                     = 6,
	SCORE_SINS                     = 7,
	SCORE_PENTHOUSE                = 8,
	SCORE_RIDGELINE                = 9,
	SCORE_DEALER                   = 10,
	SCORE_PORT                     = 11,
	SCORE_BEACHFRONT               = 12,
	SCORE_IMPORTER                 = 13,
	SCORE_AGENCY                   = 14,
	SCORE_VALLEY                   = 15,
	SCORE_DATACENTER               = 16,
	SCORE_STREAMER                 = 17,
	PROGRESS_A1                    = 18,
	PROGRESS_A2                    = 19,
	PROGRESS_A3                    = 20,
	PROGRESS_A4                    = 21,
	PROGRESS_A5                    = 22,
	PROGRESS_A6                    = 23,
	EAchievementStats_MAX          = 24,
};

enum class EAchievement : uint8
{
	THE_WAR                        = 0,
	THE_DECAYING_CITY              = 1,
	THE_LEFT_BEHIND                = 2,
	THE_ABDUCTED                   = 3,
	THE_EXPLOITED                  = 4,
	MEDAL_OF_VALOR                 = 5,
	THE_WORLD                      = 6,
	THE_HERMIT                     = 7,
	THE_HANGED_MAN                 = 8,
	WAY_OUT_WEST                   = 9,
	THE_DEVIL                      = 10,
	THE_MAGICIAN                   = 11,
	THE_FOOL                       = 12,
	FIRST_ARREST                   = 13,
	DUE_PROCESS                    = 14,
	EAchievement_MAX               = 15,
};

enum class EUniversalStatType : uint8
{
	STAT_INT                       = 0,
	STAT_FLOAT                     = 1,
	STAT_AVGRATE                   = 2,
	STAT_MAX                       = 3,
};

enum class EAIConsiderationScoringMethod : uint8
{
	Additive                       = 0,
	Subtractive                    = 1,
	Multiplicative                 = 2,
	EAIConsiderationScoringMethod_MAX = 3,
};

enum class EAIAction : uint8
{
	None                           = 0,
	FireWeapon                     = 1,
	Melee                          = 2,
	HardCover                      = 3,
	Hide                           = 4,
	HideExit                       = 5,
	Surrender                      = 6,
	FakeSurrender                  = 7,
	PlayDead                       = 8,
	Flee                           = 9,
	Rush                           = 10,
	Flank                          = 11,
	Duel                           = 12,
	Suppress                       = 13,
	Push                           = 14,
	Reposition                     = 15,
	TraverseHole                   = 16,
	Investigate                    = 17,
	PickUpItem                     = 18,
	Suicide                        = 19,
	NeverFakeSuicide               = 20,
	Custom                         = 21,
	EAIAction_MAX                  = 22,
};

enum class EComparisonOp : uint8
{
	Equals                         = 0,
	NotEquals                      = 1,
	GreaterThan                    = 2,
	GreaterThanEquals              = 3,
	LessThan                       = 4,
	LessThanEquals                 = 5,
	EComparisonOp_MAX              = 6,
};

enum class EAITeamTactic : uint8
{
	None                           = 0,
	Suppress                       = 1,
	Cover                          = 2,
	Flank                          = 3,
	Push                           = 4,
	Charge                         = 5,
	Custom                         = 6,
	EAITeamTactic_MAX              = 7,
};

enum class EAnimCardinalDirection : uint8
{
	North                          = 0,
	East                           = 1,
	South                          = 2,
	West                           = 3,
	EAnimCardinalDirection_MAX     = 4,
};

enum class ETransitionAnimationType : uint8
{
	Start                          = 0,
	Stop                           = 1,
	Pivot                          = 2,
	None                           = 3,
	ETransitionAnimationType_MAX   = 4,
};

enum class EDistanceMatchingType : uint8
{
	Start                          = 0,
	Stop                           = 1,
	Pivot                          = 2,
	Jump                           = 3,
	Fall                           = 4,
	None                           = 5,
	EDistanceMatchingType_MAX      = 6,
};

enum class EItemSocket : uint8
{
	Body                           = 0,
	Hand                           = 1,
	EItemSocket_MAX                = 2,
};

enum class ECombatEngagementType : uint8
{
	FireWeapon                     = 0,
	Melee                          = 1,
	ExplosiveVest                  = 2,
	Custom                         = 3,
	ECombatEngagementType_MAX      = 4,
};

enum class ENavLOS : uint8
{
	NL_Any                         = 0,
	NL_BreakLOS                    = 1,
	NL_RequireLOS                  = 2,
	NL_RequireLOSToMyself          = 3,
	NL_MAX                         = 4,
};

enum class ENavType : uint8
{
	NT_SinglePoint                 = 0,
	NT_Circle                      = 1,
	NT_Grid                        = 2,
	NT_MAX                         = 3,
};

enum class EShellType : uint8
{
	Bullet                         = 0,
	Shotgun                        = 1,
	EShellType_MAX                 = 2,
};

enum class EStructureCastPathway : uint8
{
	CastSuccess                    = 0,
	CastFailed                     = 1,
	EStructureCastPathway_MAX      = 2,
};

enum class EBioType : uint8
{
	BT_None                        = 0,
	BT_Suspect                     = 1,
	BT_Civilian                    = 2,
	BT_MAX                         = 3,
};

enum class EConsoleHotkeysLayout : uint8
{
	DefaultLayout                  = 0,
	CommandLayout                  = 1,
	ItemWheelLayout                = 2,
	EConsoleHotkeysLayout_MAX      = 3,
};

enum class ELobbyPrivacy : uint8
{
	LP_Public                      = 0,
	LP_Private                     = 1,
	LP_Invite                      = 2,
	LP_MAX                         = 3,
};

enum class EMissionEndVoteState : uint8
{
	VS_NotStarted                  = 0,
	VS_InProgress                  = 1,
	VS_MajorityYes                 = 2,
	VS_MajorityNo                  = 3,
	VS_MAX                         = 4,
};

enum class ECoverLandmarkType : uint8
{
	None                           = 0,
	Closet                         = 1,
	Bed                            = 2,
	Table                          = 3,
	Corner                         = 4,
	Custom                         = 5,
	ECoverLandmarkType_MAX         = 6,
};

enum class ECoverLandmarkAnimDirection : uint8
{
	Forward                        = 0,
	Left                           = 1,
	Right                          = 2,
	ECoverLandmarkAnimDirection_MAX = 3,
};

enum class ECustomizationAssetCookRule : uint8
{
	EditorOnly                     = 0,
	DevelopmentOnly                = 1,
	AlwaysCook                     = 2,
	ECustomizationAssetCookRule_MAX = 3,
};

enum class ECustomizationType : uint8
{
	None                           = 0,
	Character                      = 1,
	Voice                          = 2,
	Helmet                         = 3,
	Shirt                          = 4,
	Pants                          = 5,
	Shoes                          = 6,
	Eyewear                        = 7,
	Belt                           = 8,
	Gloves                         = 9,
	Watch                          = 10,
	Tattoo                         = 11,
	PrimarySkin                    = 12,
	SecondarySkin                  = 13,
	ArmorSkin                      = 14,
	HeadwearSkin                   = 15,
	Any                            = 16,
	ECustomizationType_MAX         = 17,
};

enum class EPseudoSpeedType : uint8
{
	Null                           = 0,
	Slow                           = 1,
	Walk                           = 2,
	Run                            = 3,
	Sprint                         = 4,
	LimpWalk                       = 5,
	LimpRun                        = 6,
	Last                           = 7,
	EPseudoSpeedType_MAX           = 8,
};

enum class EAITargetType : uint8
{
	None                           = 0,
	Enemy                          = 1,
	Neutral                        = 2,
	Friendly                       = 4,
	EAITargetType_MAX              = 5,
};

enum class EActorSenseType : uint8
{
	Sight                          = 0,
	Sound                          = 1,
	Damage                         = 2,
	EActorSenseType_MAX            = 3,
};

enum class ETacticalAuthorityVoice : uint8
{
	TAV_None                       = 0,
	TAV_Surrender                  = 1,
	TAV_PickUpItem                 = 2,
	TAV_DropTheGun                 = 3,
	TAV_GetOnTheFloor              = 4,
	TAV_ComeHere                   = 5,
	TAV_Wait                       = 6,
	TAV_PutHandsUp                 = 7,
	TAV_MoveOverThere              = 8,
	TAV_ReportDead                 = 9,
	TAV_ReportArrested             = 10,
	TAV_ReportIncapacitated        = 11,
	TAV_ReportEvidence             = 12,
	TAV_MAX                        = 13,
};

enum class EDefusalMatchSate : uint8
{
	DMS_Warmup                     = 0,
	DMS_PreRoundTimer              = 1,
	DMS_Playing                    = 2,
	DMS_HalfTime                   = 3,
	DMS_MatchFinished              = 4,
	DMS_MAX                        = 5,
};

enum class ETrapSetup : uint8
{
	Automatic                      = 0,
	Manual                         = 1,
	ETrapSetup_MAX                 = 2,
};

enum class ESubDoorPosition : uint8
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	ESubDoorPosition_MAX           = 3,
};

enum class EDroneDamageSpeed : uint8
{
	DDS_10PercentSpeed             = 0,
	DDS_20PercentSpeed             = 1,
	DDS_30PercentSpeed             = 2,
	DDS_40PercentSpeed             = 3,
	DDS_50PercentSpeed             = 4,
	DDS_60PercentSpeed             = 5,
	DDS_70PercentSpeed             = 6,
	DDS_80PercentSpeed             = 7,
	DDS_90PercentSpeed             = 8,
	DDS_MAX                        = 9,
};

enum class ETargetEvent : uint8
{
	E_None                         = 0,
	E_LockDoor                     = 1,
	E_UnlockDoor                   = 2,
	E_DisableDoor                  = 3,
	E_EnableDoor                   = 4,
	E_DisableDoorInteraction       = 5,
	E_EnableDoorInteraction        = 6,
	E_EnableDoorOpen               = 7,
	E_EnableDoorPeek               = 8,
	E_EnableDoorKick               = 9,
	E_EnableDoorOptiwand           = 10,
	E_ActivateTriggerable          = 11,
	E_DeactivateTriggerable        = 12,
	E_SpawnAi                      = 13,
	E_SetPlayerSpawn               = 14,
	E_MAX                          = 15,
};

enum class EStandaloneEvent : uint8
{
	E_None                         = 0,
	E_LockPlayerMovement           = 1,
	E_UnlockPlayerMovement         = 2,
	E_LockPlayerItemSelection      = 3,
	E_UnlockPlayerItemSelection    = 4,
	E_LockAllPlayerActions         = 5,
	E_UnlockAllPlayerActions       = 6,
	E_LockPlayerCommandMenu        = 7,
	E_UnlockPlayerCommandMenu      = 8,
	E_LockWeaponAttachments        = 9,
	E_UnlockWeaponAttachments      = 10,
	E_LockCantedSights             = 11,
	E_UnlockCantedSights           = 12,
	E_SetPlayerLowReady            = 13,
	E_SetPlayerNotLowReady         = 14,
	E_SpawnPolice                  = 15,
	E_SpawnPoliceAtPlayer          = 16,
	E_HidePlayerWeapon             = 17,
	E_EquipTrainingLoadout         = 18,
	E_RemoveAmmoFromLoadout        = 19,
	E_AddAmmoToLoadout             = 20,
	E_AddGrenadesToLoadout         = 21,
	E_AddChemlightsToLoadout       = 22,
	E_AddEmptyMagPrimary           = 23,
	E_MAX                          = 24,
};

enum class EEventType : uint8
{
	E_Standalone                   = 0,
	E_Target                       = 1,
	E_FmodAudio                    = 2,
	E_UnrealAudio                  = 3,
	E_MAX                          = 4,
};

enum class EActivity : uint8
{
	A_GoToLocation                 = 0,
	A_Delay                        = 1,
	A_UIOnly                       = 2,
	A_MoveForward                  = 3,
	A_MoveBackward                 = 4,
	A_MoveRight                    = 5,
	A_MoveLeft                     = 6,
	A_MoveForwardLowReady          = 7,
	A_Interact                     = 8,
	A_InteractTriggerable          = 9,
	A_OpenDoor                     = 10,
	A_SecureEvidence               = 11,
	A_EquipPrimary                 = 12,
	A_EquipSecondary               = 13,
	A_ShootPrimaryHip              = 14,
	A_ShootPrimaryADS              = 15,
	A_ShootSecondaryHip            = 16,
	A_ShootSecondaryADS            = 17,
	A_Reload                       = 18,
	A_ReloadEmpty                  = 19,
	A_ReloadAiming                 = 20,
	A_ReloadQuick                  = 21,
	A_SwitchAmmoType               = 22,
	A_SwitchFireMode               = 23,
	A_ToggleTacticalLight          = 24,
	A_ToggleCantedSight            = 25,
	A_ThrowFlashbangGrenade        = 26,
	A_ThrowCSGasGrenade            = 27,
	A_ThrowStingerGrenade          = 28,
	A_ThrowNineBangerGrenade       = 29,
	A_UseChemlight                 = 30,
	A_UseOptiwand                  = 31,
	A_UseDoorjam                   = 32,
	A_UseBatteringRam              = 33,
	A_UseC2Explosive               = 34,
	A_UseLockpick                  = 35,
	A_UseNVGs                      = 36,
	A_IssueSwatCommand             = 37,
	A_ArrestOrKillAi               = 38,
	A_ShootTarget                  = 39,
	A_ShootTargetADS               = 40,
	A_ShootTargetCanted            = 41,
	A_ShootTargetLaser             = 42,
	A_GrenadeTarget                = 43,
	A_SwitchTeamCamera             = 44,
	A_SwitchSwatElement            = 45,
	A_Exfiltrate                   = 46,
	A_MAX                          = 47,
};

enum class ETutorialWidgetLocation : uint8
{
	TWL_Bottom                     = 0,
	TWL_Right                      = 1,
	TWL_Left                       = 2,
	TWL_MAX                        = 3,
};

enum class ETrainingState : uint8
{
	TS_Invalid                     = 0,
	TS_Spawned                     = 1,
	TS_PickupWeapon                = 2,
	TS_MoveToShooting              = 3,
	TS_ReloadWeapon                = 4,
	TS_TargetShooting1             = 5,
	TS_TargetShooting2             = 6,
	TS_EquipSecondary              = 7,
	TS_ShootingChallenge1          = 8,
	TS_ShootingChallenge2          = 9,
	TS_UseLoadout                  = 10,
	TS_TargetGrenades              = 11,
	TS_MoveToTraining              = 12,
	TS_OpenDoor                    = 13,
	TS_KickDoor                    = 14,
	TS_MeetTheTeam                 = 15,
	TS_EnterTraining               = 16,
	TS_ClearRoom1                  = 17,
	TS_ClearRoom2                  = 18,
	TS_ClearRoom3                  = 19,
	TS_ClearRoom4                  = 20,
	TS_Exfiltrate                  = 21,
	TS_Completed                   = 22,
	TS_Start                       = 1,
	TS_Finish                      = 22,
	TS_MAX                         = 23,
};

enum class EGameEventMetric : uint8
{
	GEM_NONE                       = 0,
	GEM_GAME_STARTED               = 1,
	GEM_GAME_JOINED                = 2,
	GEM_GAME_FINISHED              = 3,
	GEM_GAME_CRASHED               = 4,
	GEM_PLAYER_GAME_FINISHED       = 5,
	GEM_MAX                        = 6,
};

enum class ETutorialMessageContext : uint8
{
	Movement                       = 0,
	ETutorialMessageContext_MAX    = 1,
};

enum class ERONBuildConfiguration : uint8
{
	Unknown                        = 0,
	Editor                         = 1,
	Debug                          = 2,
	Development                    = 3,
	Shipping                       = 4,
	FinalRelease                   = 5,
	Test                           = 6,
	ERONBuildConfiguration_MAX     = 7,
};

enum class ECommWheelLockOnBehaviour : uint8
{
	LB_LockOnToObstruction         = 0,
	LB_KeepLockOn                  = 1,
	LB_CancelLockOnWhenObstructed  = 2,
	LB_MAX                         = 3,
};

enum class EMedicalHealScreen : uint8
{
	MHS_Healer                     = 0,
	MHS_Healee                     = 1,
	MHS_MortallyWounded            = 2,
	MHS_NoBrokenLimbs              = 3,
	MHS_MAX                        = 4,
};

enum class EFallInPattern : uint8
{
	Snake                          = 0,
	HalfSnake                      = 1,
	Diamond                        = 2,
	Flock                          = 3,
	EFallInPattern_MAX             = 4,
};

enum class EDoorBreachType : uint8
{
	None                           = 0,
	Open                           = 1,
	Move                           = 2,
	Kick                           = 3,
	Shotgun                        = 4,
	Ram                            = 5,
	C2                             = 6,
	Leader                         = 7,
	Custom                         = 8,
	EDoorBreachType_MAX            = 9,
};

enum class EFilterMovePointGeneration : uint8
{
	FMNP_None                      = 0,
	FNMP_LeftOnly                  = 1,
	FNMP_RightOnly                 = 2,
	FNMP_HardLeft                  = 3,
	FNMP_HardRight                 = 4,
	EFilterMovePointGeneration_MAX = 5,
};

enum class EChangeBehaviour : uint8
{
	CB_Add                         = 0,
	CB_Remove                      = 1,
	CB_MAX                         = 2,
};

enum class EToggleBoneVis : uint8
{
	TBV_None                       = 0,
	TBV_HideBone                   = 1,
	TBV_ShowBone                   = 2,
	TBV_MAX                        = 3,
};

enum class EScenarioImportance : uint8
{
	SI_None                        = 0,
	SI_AlwaysSpawn                 = 1,
	SI_Pooled                      = 2,
	SI_MAX                         = 3,
};

enum class EPathedAwareness : uint8
{
	PA_None                        = 0,
	PA_Noise                       = 1,
	PA_LastKnownEnemyPosition      = 2,
	PA_ActivityLocation            = 3,
	PA_MAX                         = 4,
};

enum class ETargetingCompTracking : uint8
{
	TCT_None                       = 0,
	TCT_TrackingActivity           = 1,
	TCT_TrackingCombatMoveActivity = 2,
	TCT_TrackingVisibleNeutrals    = 3,
	TCT_TrackingEnemyLastKnownPosition = 4,
	TCT_TrackingNoiseStimulus      = 5,
	TCT_TrackingOverrideInterests  = 6,
	TCT_TrackingStairThreatAwarenessActor = 7,
	TCT_TrackingThreatAwarenessActor = 8,
	TCT_TrackingLatestStimulus     = 9,
	TCT_TrackingVisibleTarget      = 10,
	TCT_TrackingMoveVector         = 11,
	TCT_TrackScriptedFireAtActor   = 12,
	TCT_TrackNearestDoor           = 13,
	TCT_TrackUncheckedThreatAwareness = 14,
	TCT_TrackMontagePosition       = 15,
	TCT_TrackCustomLocation        = 16,
	TCT_MAX                        = 17,
};

enum class EDoorCheckResult : uint8
{
	None                           = 0,
	Unlocked                       = 1,
	Locked                         = 2,
	Jammed                         = 3,
	Blocked                        = 4,
	EDoorCheckResult_MAX           = 5,
};

enum class EClearingStyle : uint8
{
	None                           = 0,
	StrongWall                     = 1,
	PointsOfDomination             = 2,
	RunningTheRabbit               = 3,
	EClearingStyle_MAX             = 4,
};

enum class EEntryMethod : uint8
{
	Flow                           = 0,
	ButtonHook                     = 1,
	EEntryMethod_MAX               = 2,
};

enum class EThresholdAssessment : uint8
{
	None                           = 0,
	Pie                            = 1,
	CenterCheck                    = 2,
	EThresholdAssessment_MAX       = 3,
};

enum class EStackUpStyle : uint8
{
	Auto                           = 0,
	Split                          = 1,
	Left                           = 2,
	Right                          = 3,
	EStackUpStyle_MAX              = 4,
};

enum class EItemVisualizationType : uint8
{
	IVT_None                       = 0,
	IVT_Primary                    = 1,
	IVT_Secondary                  = 2,
	IVT_LongTactical               = 3,
	IVT_Helmet                     = 4,
	IVT_Armor                      = 5,
	IVT_Equipped                   = 6,
	IVT_MAX                        = 7,
};

enum class EItemVisualizationStatus : uint8
{
	IVS_None                       = 0,
	IVS_FPEquipped                 = 1,
	IVS_MAX                        = 2,
};

enum class EToggleInventoryVis : uint8
{
	TIV_None                       = 0,
	TIV_HideAll                    = 1,
	TIV_ShowAll                    = 2,
	TIV_HideEquipped               = 3,
	TIV_ShowEquipped               = 4,
	TIV_MAX                        = 5,
};

enum class EOptiwandViewMode : uint8
{
	PiP                            = 0,
	Fullscreen                     = 1,
	EOptiwandViewMode_MAX          = 2,
};

enum class EGameFeature : uint8
{
	GF_None                        = 0,
	GF_Practice                    = 1,
	GF_Training                    = 2,
	GF_Commander                   = 3,
	GF_Mulitplayer                 = 4,
	GF_ModSupport                  = 5,
	MAX                            = 6,
};

enum class ECoverQueryTestPurpose : uint8
{
	FilterOnly                     = 0,
	ScoreOnly                      = 1,
	FilterAndScore                 = 2,
	ECoverQueryTestPurpose_MAX     = 3,
};

enum class EFleeType : uint8
{
	FT_None                        = 0,
	FT_Regular                     = 1,
	FT_Gas                         = 2,
	FT_MAX                         = 3,
};

enum class EGraphNodeType : uint8
{
	Portal                         = 0,
	Listener                       = 1,
	SoundSource                    = 2,
	EGraphNodeType_MAX             = 3,
};

enum class EImpactEffectType : uint8
{
	Default                        = 0,
	Rifle                          = 1,
	Pistol                         = 2,
	Shotgun                        = 3,
	Ricochet                       = 4,
	Beanbag                        = 5,
	Pepperball                     = 6,
	Flare                          = 7,
	EImpactEffectType_MAX          = 8,
};

enum class EObjectiveDoorInteractions : uint8
{
	ODI_Open                       = 0,
	ODI_Close                      = 1,
	ODI_Kick                       = 2,
	ODI_MAX                        = 3,
};

enum class EInterestPointType : uint8
{
	Manual                         = 0,
	Threat                         = 1,
	Door                           = 2,
	Spawner                        = 3,
	CustomActor                    = 4,
	EInterestPointType_MAX         = 5,
};

enum class ELoadoutTacticalSlotType : uint8
{
	TacticalSlot                   = 0,
	PrimaryAmmunition              = 1,
	SecondaryAmmunition            = 2,
	GrenadeSlot                    = 3,
	ELoadoutTacticalSlotType_MAX   = 4,
};

enum class EMaskMagState : uint8
{
	Show                           = 0,
	Hide                           = 1,
	EMaskMagState_MAX              = 2,
};

enum class EMaskMag : uint8
{
	Mag01                          = 0,
	Mag02                          = 1,
	Dummy                          = 2,
	EMaskMag_MAX                   = 3,
};

enum class ESuspectStateData : uint8
{
	SSD_NONE                       = 0,
	SSD_IS_TRACKING                = 1,
	SSD_HAS_BEST_ACTION            = 2,
	SSD_HAS_BEST_CONTINUOUS_ACTION = 4,
	SSD_HAS_BEST_COMBAT_MOVE_ACTION = 8,
	SSD_MAX                        = 9,
};

enum class EActorAnalyticsState : uint8
{
	AAS_None                       = 0,
	AAS_Wounded                    = 1,
	AAS_Dead                       = 2,
	AAS_Arrested                   = 3,
	AAS_MAX                        = 4,
};

enum class EMirrorContactType : uint8
{
	AI                             = 0,
	Trap                           = 1,
	Custom                         = 2,
	Both                           = 3,
	EMirrorContactType_MAX         = 4,
};

enum class EReadyState : uint8
{
	RS_None                        = 0,
	RS_Minority                    = 1,
	RS_Majority                    = 2,
	RS_All                         = 3,
	RS_MAX                         = 4,
};

enum class EModStatus : uint8
{
	Unsubscribed                   = 0,
	Installing                     = 1,
	Updating                       = 2,
	Installed                      = 3,
	Disabled                       = 4,
	Uninstalling                   = 5,
	Error                          = 6,
	EModStatus_MAX                 = 7,
};

enum class EMusicState : uint8
{
	MS_Preplanning                 = 0,
	MS_Ambient                     = 1,
	MS_Action                      = 2,
	MS_Scripted                    = 3,
	MS_MAX                         = 4,
};

enum class EHiddenObjectiveUnlockMethod : uint8
{
	Unlock_None                    = 0,
	Unlock_Reportable              = 1,
	Unlock_Objective               = 2,
	Unlock_Self                    = 3,
	Unlock_MAX                     = 4,
};

enum class EObjectiveStatus : uint8
{
	Objective_InProgress           = 0,
	Objective_Complete             = 1,
	Objective_Failed               = 2,
	Objective_MAX                  = 3,
};

enum class EInputExclusiveType : uint8
{
	AllInputs                      = 0,
	MouseAndKeyboard               = 1,
	Gamepad                        = 2,
	Touch                          = 3,
	EInputExclusiveType_MAX        = 4,
};

enum class EPlanningMapTool : uint8
{
	PMT_Draw                       = 0,
	PMT_Pan                        = 1,
	PMT_MAX                        = 2,
};

enum class EPlanningMapStage : uint8
{
	PMS_Overview                   = 0,
	PMS_Spawn                      = 1,
	PMS_Deployables                = 2,
	PMS_PersonnelMain              = 3,
	PMS_PersonnelPoint             = 4,
	PMS_PersonnelMapZones          = 5,
	PMS_FreeDraw                   = 6,
	PMS_MAX                        = 7,
};

enum class EPlanningStage : uint8
{
	PS_None                        = 0,
	PS_Planning                    = 1,
	PS_Situation                   = 2,
	PS_Loadout                     = 3,
	PS_MAX                         = 4,
};

enum class ESituationPage : uint8
{
	SP_None                        = 0,
	SP_Objectives                  = 1,
	SP_Suspects                    = 2,
	SP_Civilians                   = 3,
	SP_Timeline                    = 4,
	SP_MAX                         = 5,
};

enum class EPlanningPage : uint8
{
	PP_None                        = 0,
	PP_Overview                    = 1,
	PP_Spawn                       = 2,
	PP_Deployables                 = 3,
	PP_Tactics                     = 4,
	PP_FreePlanning                = 5,
	PP_MAX                         = 6,
};

enum class EIKStateEnum : uint8
{
	IKE_None                       = 0,
	IKE_Optimize                   = 1,
	IKE_Full                       = 2,
	IKE_MAX                        = 3,
};

enum class EHolsterAnimationType : uint8
{
	HAT_Normal                     = 0,
	HAT_SkipHolster                = 1,
	HAT_AlwaysPlayHolster          = 2,
	HAT_MAX                        = 3,
};

enum class ERecoilModifierOption : uint8
{
	RMO_ModifyRecoil               = 0,
	RMO_AddRecoil                  = 1,
	RMO_SubtractRecoil             = 2,
	RMO_MAX                        = 3,
};

enum class EPortalType : uint8
{
	Vertical                       = 0,
	Horizontal                     = 1,
	EPortalType_MAX                = 2,
};

enum class EPostProcessState : uint8
{
	Hold                           = 0,
	Forward                        = 1,
	Reverse                        = 2,
	WaitingForReverse              = 3,
	Ended                          = 4,
	EPostProcessState_MAX          = 5,
};

enum class EPostProcessEndOptions : uint8
{
	End                            = 0,
	Hold                           = 1,
	Loop                           = 2,
	Reverse                        = 3,
	EPostProcessEndOptions_MAX     = 4,
};

enum class EPostProcessStartingState : uint8
{
	Forward                        = 0,
	Reverse                        = 1,
	EPostProcessStartingState_MAX  = 2,
};

enum class EPostProcessPlayDirection : uint8
{
	Forwards                       = 0,
	Backwards                      = 1,
	EPostProcessPlayDirection_MAX  = 2,
};

enum class ELevelGrade : int32
{
	S                              = 0,
	APlus                          = 1,
	A                              = 2,
	B                              = 3,
	C                              = 4,
	D                              = 5,
	E                              = 6,
	F                              = 7,
	ELevelGrade_MAX                = 8,
};

enum class EMoveDirectionExt : uint8
{
	F                              = 0,
	L                              = 1,
	R                              = 2,
	B                              = 3,
	FL                             = 4,
	FR                             = 5,
	BR                             = 6,
	BL                             = 7,
	EMoveDirectionExt_MAX          = 8,
};

enum class EMoveDirection : uint8
{
	F                              = 0,
	L                              = 1,
	R                              = 2,
	B                              = 3,
	EMoveDirection_MAX             = 4,
};

enum class ERuntimeDevice : uint8
{
	PS4                            = 0,
	PS4_Pro                        = 1,
	PS4_Pro_4K                     = 2,
	PS5                            = 3,
	XBoxOne                        = 4,
	XBoxOneS                       = 5,
	XBoxOneX                       = 6,
	XBoxSeriesX                    = 7,
	XBoxSeriesS                    = 8,
	PC                             = 9,
	ERuntimeDevice_MAX             = 10,
};

enum class EHighScoreCategory : uint8
{
	HSC_None                       = 0,
	HSC_COOP_DAILY                 = 1,
	HSC_COOP_SEASON                = 2,
	HSC_PVP_DAILY                  = 3,
	HSC_PVP_SEASON                 = 4,
	HSC_MAX                        = 5,
};

enum class EPTTKey : uint8
{
	PTTNoChannel                   = 0,
	PTTAreaChannel                 = 1,
	PTTTeamChannel                 = 2,
	PTTKey_MAX                     = 3,
};

enum class ESubtitlesSize : uint8
{
	Small                          = 0,
	Normal                         = 1,
	Large                          = 2,
	ExtraLarge                     = 3,
	ESubtitlesSize_MAX             = 4,
};

enum class ENVGStyle : uint8
{
	GreenPhosphor                  = 0,
	WhitePhosphor                  = 1,
	ENVGStyle_MAX                  = 2,
};

enum class EScoreReadoutMode : uint8
{
	AllScores                      = 0,
	OnlyPositive                   = 1,
	OnlyNegative                   = 2,
	Disabled                       = 3,
	EScoreReadoutMode_MAX          = 4,
};

enum class EEmptyMagReloadType : uint8
{
	RegularReload                  = 0,
	FastReload                     = 1,
	EEmptyMagReloadType_MAX        = 2,
};

enum class EShotgunReloadType : uint8
{
	SRT_SingleLoad                 = 0,
	SRT_MultiLoad                  = 1,
	SRT_MAX                        = 2,
};

enum class EGrenadeThrowSettingType : uint8
{
	GUT_QuickGrenadeThrow          = 0,
	GUT_ClassicGrenadeThrow        = 1,
	GUT_MAX                        = 2,
};

enum class ECommandInterfaceType : uint8
{
	CI_GraphicCommandInterface     = 0,
	CI_ClassicCommandInterface     = 1,
	CI_MAX                         = 2,
};

enum class ELoadoutMunitionSlotType : uint8
{
	TacticalSlot                   = 0,
	PrimaryAmmunition              = 1,
	SecondaryAmmunition            = 2,
	GrenadeSlot                    = 3,
	ELoadoutMunitionSlotType_MAX   = 4,
};

enum class EAnimationType : uint8
{
	AT_Gun_FP                      = 0,
	AT_Gun_TP                      = 1,
	AT_Body_FP                     = 2,
	AT_Body_TP                     = 3,
	AT_MAX                         = 4,
};

enum class EBaseAnimType_TP : uint8
{
	IdlePose_Low_TP                = 0,
	IdlePose_Up_TP                 = 1,
	IdlePose_Shld_TP               = 2,
	IdlePose_Sights_TP             = 3,
	IdlePose_Ret_TP                = 4,
	IdlePose_Ovr_TP                = 5,
	Crouch_IdlePose_Low_TP         = 6,
	Crouch_IdlePose_Up_TP          = 7,
	Crouch_IdlePose_Shld_TP        = 8,
	Crouch_IdlePose_Sights_TP      = 9,
	Crouch_IdlePose_Ret_TP         = 10,
	Crouch_IdlePose_Ovr_TP         = 11,
	IdlePose_AFG_TP                = 12,
	IdlePose_VFG_TP                = 13,
	IdlePose_HSTOP_TP              = 14,
	ENone                          = 15,
	EBaseAnimType_MAX              = 16,
};

enum class EBaseBlendspaces_FP : uint8
{
	Look_BS_FP                     = 0,
	ENone                          = 1,
	EBaseBlendspaces_MAX           = 2,
};

enum class EBaseAnimType_FP : uint8
{
	IdlePose_FP                    = 0,
	Idle_FP                        = 1,
	Run_FP                         = 2,
	Walk_FP                        = 3,
	Run_Limp_FP                    = 4,
	Walk_Limp_FP                   = 5,
	Lowered_Up_Pose_FP             = 6,
	Lowered_Down_Pose_FP           = 7,
	ADS_Run_FP                     = 8,
	ADS_Walk_FP                    = 9,
	ADS_Run_Limp_FP                = 10,
	ADS_Walk_Limp_FP               = 11,
	IdlePose_AFG_FP                = 12,
	IdlePose_VFG_FP                = 13,
	IdlePose_HSTOP_FP              = 14,
	ENone                          = 15,
	EBaseAnimType_MAX              = 16,
};

enum class ESplineRotation : uint8
{
	IntoPath                       = 0,
	Default                        = 1,
	Free                           = 2,
	ESplineRotation_MAX            = 3,
};

enum class ECameraState : uint8
{
	Freecam                        = 0,
	Orbit                          = 1,
	Mounted                        = 2,
	ECameraState_MAX               = 3,
};

enum class EStrafeDirection : uint8
{
	F                              = 0,
	L                              = 1,
	R                              = 2,
	B                              = 3,
	FL                             = 4,
	FR                             = 5,
	BR                             = 6,
	BL                             = 7,
	EStrafeDirection_MAX           = 8,
};

enum class EItemOverrideRule : uint8
{
	NONE                           = 0,
	ADDITIVE_ONLY                  = 1,
	LAYERED_ONLY                   = 2,
	ADDITIVE_LAYERED               = 3,
	EItemOverrideRule_MAX          = 4,
};

enum class ERoNGaitState : uint8
{
	RON_TURN                       = 0,
	RON_WALK                       = 1,
	RON_RUN                        = 2,
	RON_SPRINT                     = 3,
	RON_MAX                        = 4,
};

enum class ERoomSize : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Corridor                       = 3,
	ERoomSize_MAX                  = 4,
};

enum class ERosterRemovalReason : uint8
{
	None                           = 0,
	Deceased                       = 1,
	Overstressed                   = 2,
	Fired                          = 3,
	ERosterRemovalReason_MAX       = 4,
};

enum class ERosterSquadPosition : uint8
{
	Unassigned                     = 0,
	RedOne                         = 1,
	RedTwo                         = 2,
	BlueOne                        = 3,
	BlueTwo                        = 4,
	ERosterSquadPosition_MAX       = 5,
};

enum class ERosterCharacterState : uint8
{
	Available                      = 0,
	Incapacitated                  = 1,
	InTherapy                      = 2,
	Deceased                       = 3,
	ERosterCharacterState_MAX      = 4,
};

enum class ERosterPortalType : uint8
{
	Roster                         = 0,
	Therapist                      = 1,
	Loadout                        = 2,
	Training                       = 3,
	ERosterPortalType_MAX          = 4,
};

enum class EDoorScanMethod : uint8
{
	None                           = 0,
	Slide                          = 1,
	Slice                          = 2,
	Snap                           = 3,
	CenterCheck                    = 4,
	EDoorScanMethod_MAX            = 5,
};

enum class EObjectiveLevel : uint8
{
	PrimaryObjective               = 0,
	SecondaryObjective             = 1,
	TertiaryObjective              = 2,
	EObjectiveLevel_MAX            = 3,
};

enum class EInputKeyCategoryV2 : uint8
{
	KE_Shared                      = 0,
	KE_Character                   = 1,
	KE_Drone                       = 2,
	KE_MAX                         = 3,
};

enum class EHierarchyType : uint8
{
	HT_Default                     = 0,
	HT_Parent                      = 1,
	HT_Child                       = 2,
	HT_MAX                         = 3,
};

enum class EPropagationType : uint8
{
	PT_None                        = 0,
	PT_Portal                      = 1,
	PT_MAX                         = 2,
};

enum class EOcclusionType : uint8
{
	OT_None                        = 0,
	OT_Depth                       = 1,
	OT_Angular                     = 2,
	OT_MAX                         = 3,
};

enum class ESoundSourceType : uint8
{
	SST_FirstPerson                = 0,
	SST_ThirdPerson                = 1,
	SST_MAX                        = 2,
};

enum class EPriorityOfLife : uint8
{
	Hostages                       = 0,
	Civilians                      = 1,
	EmergencyPersonnel             = 2,
	Suspects                       = 3,
	Evidence                       = 4,
	EPriorityOfLife_MAX            = 5,
};

enum class EAbortCoverReason : uint8
{
	Success                        = 0,
	Forced                         = 1,
	EnemySensed                    = 2,
	SeenEnemyApproaching           = 3,
	HeardEnemyApproaching          = 4,
	EnemyMovingTowardsUs           = 5,
	EnemyBehindUs                  = 6,
	EnemyFiredNearUs               = 7,
	EAbortCoverReason_MAX          = 8,
};

enum class EThreatLevel : uint8
{
	TL_None                        = 0,
	TL_Low                         = 1,
	TL_Medium                      = 2,
	TL_High                        = 3,
	TL_Extreme                     = 4,
	TL_Stairs                      = 5,
	TL_MAX                         = 6,
};

enum class ETutorialMissionType : uint8
{
	ETM_None                       = 0,
	ETM_ShootingRange              = 1,
	ETM_KillHouse                  = 2,
	ETM_BasicControls              = 3,
	ETM_Mirrorgun                  = 4,
	ETM_StackUp                    = 5,
	ETM_Arrest                     = 6,
	ETM_Grenades                   = 7,
	ETM_Movement                   = 8,
	ETM_MAX                        = 9,
};

enum class ECompletedActionType : uint8
{
	CAT_ArrestedTarget             = 0,
	CAT_ReportedTarget             = 1,
	CAT_FreedTarget                = 2,
	CAT_LockPicked                 = 3,
	CAT_LadderRetracted            = 4,
	CAT_ItemRetrieved              = 5,
	CAT_MagInserted                = 6,
	CAT_MagRemoved                 = 7,
	CAT_MagChanged                 = 8,
	CAT_InteractActor              = 9,
	CAT_WedgeDeployed              = 10,
	CAT_C2Deployed                 = 11,
	CAT_WedgeRemoved               = 12,
	CAT_TrapDisarmed               = 13,
	CAT_C2Removed                  = 14,
	CAT_MAX                        = 15,
};

enum class EPlayerObjectiveMarkerType : uint8
{
	POMT_None                      = 0,
	POMT_VipRescue                 = 1,
	POMT_VipExecute                = 2,
	POMT_Free                      = 3,
	POMT_MAX                       = 4,
};

enum class EMapType : uint8
{
	Axis                           = 0,
	Action                         = 1,
	Auto                           = 2,
	EMapType_MAX                   = 3,
};

enum class EInterfaceSoundType : uint8
{
	IST_None                       = 0,
	IST_Checkmark                  = 1,
	IST_Button                     = 2,
	IST_MAX                        = 3,
};

enum class EScreenspaceMarkerType : uint8
{
	SMT_InActivationArea           = 0,
	SMT_TutorialClosed             = 1,
	SMT_MAX                        = 2,
};

enum class ETooltipActivationType : uint8
{
	TAT_EnterArea                  = 0,
	TAT_DirectLook                 = 1,
	TAT_LineOfSight                = 2,
	TAT_MAX                        = 3,
};

enum class EMatchmakingStatus : uint8
{
	MS_None                        = 0,
	MS_Matchmaking                 = 1,
	MS_Success                     = 2,
	MS_Failure                     = 3,
	MS_Cancelled                   = 4,
	MS_MAX                         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.WeaponAnim
struct FWeaponAnim
{
public:
	class UAnimMontage*                          Body_FP;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Body_TP;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Gun_FP;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Gun_TP;                                            // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.MeshFOVMaterials
struct FMeshFOVMaterials
{
public:
	TArray<class UMaterialInstanceDynamic*>      FovMats;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.WeightStunMultiplier
struct FWeightStunMultiplier
{
public:
	float                                        MinimumWeight;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumWeight;                                     // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumWeightMultiplier;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumWeightMultiplier;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.ItemVisualData
struct FItemVisualData
{
public:
	class UTexture2D*                            ItemIcon;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PremissionPlanningItemIcon;                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            RadialItemIcon;                                    // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         ItemMesh;                                          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    AmmoIcons;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.GrenadeDamage
struct FGrenadeDamage
{
public:
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDamageOnDetonation;                             // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDamageOnDetonation;                             // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageInnerRadius;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageOuterRadius;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSecondTrace;                                   // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondTraceStartDistance;                          // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondTraceRadiusFactor;                           // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ReadyOrNot.AmmoTypeData
struct FAmmoTypeData : public FTableRowBase
{
public:
	class FText                                  AmmoVariety;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AmmoCaliber;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AmmoDescription;                                   // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    DamageOverRangeCurve;                              // 0x58(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        ProjectileCount;                                   // 0xE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SpreadPattern;                                     // 0xE4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoresArmour : 1;                                // Mask: 0x1, PropSize: 0x10xEC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_279 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurabilityDamage;                                  // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PenetrationLevel;                                  // 0xF4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PenetrationDistance;                               // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetChance;                                    // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpallingDamage;                                    // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpallingRadius;                                    // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DismembermentDamage;                               // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArteryHitChance;                                   // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitsChance;                                        // 0x110(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmouredHitsChance;                                // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WoundSize;                                         // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUsableByPlayer : 1;                             // Mask: 0x1, PropSize: 0x10x11C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            LoadoutIcon;                                       // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            SmallIcon;                                         // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadDamageMultiplier;                              // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperBodyDamageMultiplier;                         // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerBodyDamageMultiplier;                         // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmDamageMultiplier;                               // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandDamageMultiplier;                              // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegDamageMultiplier;                               // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootDamageMultiplier;                              // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRagdollImpulseStrength;                     // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadRagdollImpulseStrength;                        // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmRagdollImpulseStrength;                         // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegRagdollImpulseStrength;                         // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TorsoRagdollImpulseStrength;                       // 0x15C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ReadyOrNot.Magazine
struct FMagazine
{
public:
	uint16                                       Ammo;                                              // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       AmmoType;                                          // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ReadyOrNot.HitscanShot
struct FHitscanShot
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.MODParam
struct FMODParam
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParamVal;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ReadyOrNot.TrapData
struct FTrapData : public FTableRowBase
{
public:
	uint8                                        Pad_3300[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TrapRelativeTransform;                             // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ATrapActorAttachedToDoor>  TrapClass;                                         // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToDoor;                                     // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrapType                         TrapType;                                          // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3301[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InvertOffset;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.DoorChunkData
struct FDoorChunkData
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHinge;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDoorHandleChunk;                                // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCannotKickIfDestroyed;                            // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3302[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SupportChunks;                                     // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct ReadyOrNot.DoorData
struct FDoorData : public FTableRowBase
{
public:
	float                                        DoorMaxOpenClose;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsDestructible : 1;                               // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanMirrorUnderDoor : 1;                           // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBreakOffWithKick : 1;                          // Mask: 0x4, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBreakOffOneWayDoorWithKick : 1;                // Mask: 0x8, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27B : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3303[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDoorChunkData>                DestructibleChunks;                                // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DoorMesh;                                          // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DoorHandle;                                        // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DoorwayOffset;                                     // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DoorwayOffsetScale;                                // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockable : 1;                                     // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomLockpickLocation : 1;                       // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27C : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3304[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LockpickRelativeLocation;                          // 0x4C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomDoorPeekLocation : 1;                       // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3305[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DoorPeekRelativeLocation;                          // 0x5C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoorHandleFront : 1;                              // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoorHandleBack : 1;                               // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27E : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3306[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DoorHandleFrontRelativeTransform;                  // 0x70(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            DoorHandleBackRelativeTransform;                   // 0xA0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumSuccessfulKicksToBreakDown;                     // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DoorKickSuccessChance;                             // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3307[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            KickParticleTransform;                             // 0xE0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        KickedParticleSystem;                              // 0x110(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        LockBrokenParticleSystem;                          // 0x138(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               C2PlacementPoint_Front;                            // 0x160(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               C2PlacementPoint_Back;                             // 0x16C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       C2ExplosionParticle;                               // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            C2ExplosionEvent;                                  // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            OpenSound;                                         // 0x188(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            CloseSound;                                        // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            PushOpenSound;                                     // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            PushCloseSound;                                    // 0x1A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            ManipulateSound;                                   // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            BashSound;                                         // 0x1B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            LockedSound;                                       // 0x1B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            RamSound;                                          // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            KickSuccessSound;                                  // 0x1C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            KickFailSound;                                     // 0x1D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            AlarmSound;                                        // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            KeycardSound;                                      // 0x1E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            KeycardDenySound;                                  // 0x1E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.ClearPoint
struct FClearPoint
{
public:
	struct FVector                               Location_Relative;                                 // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Stage;                                             // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClearDirection                   Direction;                                         // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3308[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACoverLandmark*>                CoverLandmarks;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHasLineOfSightToDoor;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3309[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x188 (0x188 - 0x0)
// ScriptStruct ReadyOrNot.SavedLoadout
struct FSavedLoadout
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PresetName;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActiveLoadoutPreset;                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 Primary;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryScope;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryMuzzle;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryUnderbarrel;                                // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryOverbarrel;                                 // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryStock;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryGrip;                                       // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryIlluminator;                                // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         PrimaryAmmunition;                                 // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PrimaryAmmoSlots;                                  // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PrimaryAmmoSlotsCount;                             // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USkinComponent>            PrimarySkin;                                       // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 Secondary;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryScope;                                    // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryMuzzle;                                   // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryUnderbarrel;                              // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryOverbarrel;                               // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryStock;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryGrip;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryIlluminator;                              // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         SecondaryAmmunition;                               // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SecondaryAmmoSlots;                                // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SecondaryAmmoSlotsCount;                           // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USkinComponent>            SecondarySkin;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CharacterType;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 LongTactical;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABaseItem>>         GrenadeSlots;                                      // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        GrenadeSlotsCount;                                 // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ABaseItem>>         TacticalSlots;                                     // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        TacticalSlotsCount;                                // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 Armor;                                             // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 Helmet;                                            // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 RandomGear;                                        // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABaseItem>>         Miscelaneous;                                      // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class USkinComponent>            PlayerSkin;                                        // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterLookOverride;                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EArmourCoverage                   ArmourCoverage;                                    // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArmourMaterial*                       ArmourMaterial;                                    // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ReadyOrNot.SavedCustomization
struct FSavedCustomization
{
public:
	class UCustomizationDataBase*                Character;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Voice;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Helmet;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Shirt;                                             // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Pants;                                             // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Shoes;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Eyewear;                                           // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Belt;                                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Gloves;                                            // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Watch;                                             // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                Tattoo;                                            // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                PrimarySkin;                                       // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                SecondarySkin;                                     // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                ArmorSkin;                                         // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationDataBase*                HeadwearSkin;                                      // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasHelmet;                                        // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class ABaseItem>, class UCustomizationDataBase*> PreviousSkinsMap;                                  // 0x80(0x50)(RepSkip, NativeAccessSpecifierPublic)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct ReadyOrNot.PlanningDrawing
struct FPlanningDrawing : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3310[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     Points;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Floor;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct ReadyOrNot.PlanningDrawingArray
struct FPlanningDrawingArray : public FFastArraySerializer
{
public:
	TArray<struct FPlanningDrawing>              Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.BuildingFloor
struct FBuildingFloor
{
public:
	int32                                        Number;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extent;                                            // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct ReadyOrNot.LimbHealthData
struct FLimbHealthData
{
public:
	uint8                                        Pad_3311[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxHealth;                                         // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxHealthLimit;                                    // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowHealthThreshold;                                // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LimbDamageMultiplier;                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxTickets;                                        // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Tickets;                                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLimbHealthHalving;                              // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OriginalMaxHealth;                                 // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowHealth;                                         // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PreviousHealth;                                    // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.ItemChangeRequest
struct FItemChangeRequest
{
public:
	struct FGuid                                 ChangeId;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             FromItem;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             ToItem;                                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstant;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoDraw;                                           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsComplete;                                       // 0x22(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3312[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.ItemSelectionGroup
struct FItemSelectionGroup
{
public:
	class FName                                  ItemGroupName;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InputActionName;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemCategory                     ItemCategory;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             AdditionalItemCategories;                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABaseItem>>         Items;                                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        ItemIndex;                                         // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3314[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ItemGroupIcon;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ReadyOrNot.SpawnedGear
struct FSpawnedGear
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             Primary;                                           // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             Secondary;                                         // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             Armor;                                             // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             Helmet;                                            // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             RandomGear;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayableCharacterData*                Character;                                         // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseItem*                             LongTactical;                                      // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ABaseItem*>                     Grenades;                                          // 0x48(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABaseItem*>                     TacticalDevices;                                   // 0x58(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABaseItem*>                     Miscelaneous;                                      // 0x68(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.SuppressionData
struct FSuppressionData
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AReadyOrNotCharacter*                  Instigator;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.CharacterSnapshot
struct FCharacterSnapshot
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  BoundingBox;                                       // 0x4(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct ReadyOrNot.RonReplicatedAcceleration
struct FRonReplicatedAcceleration
{
public:
	uint8                                        AccelXYRadians;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AccelXYMagnitude;                                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         AccelZ;                                            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ReadyOrNot.CharacterLookOverride
struct FCharacterLookOverride : public FTableRowBase
{
public:
	enum class EGameVersionRestriction           LockedToDLC;                                       // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FriendlyBodyName;                                  // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                SpeechCharacterName;                               // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            BodyIcon;                                          // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FriendlyHeadName;                                  // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	class UTexture2D*                            HeadIcon;                                          // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ABaseArmour>, class USkeletalMesh*> ArmorOverrideMap;                                  // 0x60(0x50)(Edit, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FPMeshOverride;                                    // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FPBodyMeshOverride;                                // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FaceMeshOverride;                                  // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         BodyMeshOverride;                                  // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.CarryArrestedAnimState
struct FCarryArrestedAnimState
{
public:
	class UAnimSequence*                         LoopAnim;                                          // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.CharacterDamageEvent
struct FCharacterDamageEvent
{
public:
	float                                        RawDamage;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinalDamage;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                          DamageEvent;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class AController*                           Instigator;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Causer;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.CameraFreelookSetting
struct FCameraFreelookSetting
{
public:
	float                                        PitchMin;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMax;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawMin;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawMax;                                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.MovementSound
struct FMovementSound
{
public:
	class USoundCue*                             Sound;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3318[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.Loadout
struct FLoadout
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABaseItem>>         Items;                                             // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.CoverInstigatorStimulus
struct FCoverInstigatorStimulus
{
public:
	class AReadyOrNotCharacter*                  InstigatorCharacter;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3319[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ThreatTransform;                                   // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_331A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.NavGenerationParameters
struct FNavGenerationParameters
{
public:
	uint8                                        Pad_331B[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.ExposedToNoise
struct FExposedToNoise
{
public:
	class AReadyOrNotCharacter*                  Instigator;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeardAtDistance;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StimulusLocation;                                  // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAggressive;                                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFriendly;                                         // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeSinceExposed;                                  // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpiryTime;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.ActorSense
struct FActorSense
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331E[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.DebugData
struct FDebugData
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.AttachedMeshData
struct FAttachedMeshData
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.AttachedSkeletalMeshData
struct FAttachedSkeletalMeshData
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMasterPose;                                    // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3320[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ReadyOrNot.CharacterMesh
struct FCharacterMesh
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         Body;                                              // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         Head;                                              // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                            FaceROM;                                           // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFemale;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsChild;                                          // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3321[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CharacterSpeechHandle;                             // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Footsteps;                                         // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            MovementFoley;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MovementFoleySocket;                               // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedMeshData>             AttachedMeshData;                                  // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FAttachedSkeletalMeshData>     AttachedSkeletalMeshData;                          // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                          DamageExcludedBones;                               // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.TakeHostageAnimState
struct FTakeHostageAnimState
{
public:
	uint8                                        bIsTakingHostage : 1;                              // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsLooping : 1;                                    // Mask: 0x2, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27F : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3322[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         LoopAnim;                                          // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAimOffsetBlendSpace*                  AimOffset;                                         // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.WorldBuildingAnimState
struct FWorldBuildingAnimState
{
public:
	bool                                         bIsPlaying;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLooping;                                        // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3323[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         LoopAnim;                                          // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ReadyOrNot.AIMovementStyleData
struct FAIMovementStyleData
{
public:
	class FName                                  UnarmedMoveStyle;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StunnedMoveStyle;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LoweredTwoHandedMoveStyle;                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RaisedTwoHandedMoveStyle;                          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HesitationMoveStyle;                               // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HesitationRifleMoveStyle;                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SurrenderedMoveStyle;                              // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ArrestedMoveStyle;                                 // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ReadyOrNot.AIMoveDataBlock
struct FAIMoveDataBlock
{
public:
	class FName                                  UnarmedMovementStyle;                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RifleMovementStyle;                                // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RifleStrafeMovementStyle;                          // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RifleStrafeFastMovementStyle;                      // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeavyRifleStrafeMovementStyle;                     // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RifleStrafeCrouchMovementSet;                      // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PistolMovementStyle;                               // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PistolStrafeMovementStyle;                         // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PistolStrafeCrouchMovementStyle;                   // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComplyMovementStyle;                               // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CuffedMovementStyle;                               // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StunnedMovementStyle;                              // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GassedMovementStyle;                               // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InjuredMovementStyle;                              // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SprintMovementStyle;                               // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          UnarmedCalmStyles;                                 // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UnarmedPanicStyles;                                // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.ActivityRoute
struct FActivityRoute
{
public:
	float                                        TimeDoingActivity;                                 // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3324[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldBuildingPlacementActor*          WorldBuildingPlacementActor;                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFemale;                                      // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3325[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.ActivityRouteCollection
struct FActivityRouteCollection
{
public:
	TArray<struct FActivityRoute>                ActivityRoutes;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bReturnToOriginalSpot;                             // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnAtFirstRoute;                                // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3326[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ActivityIdx;                                       // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3327[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.HoleTraversalAnimStateMachineData
struct FHoleTraversalAnimStateMachineData
{
public:
	uint8                                        bIsTraversing : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLooping : 1;                                      // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_280 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3328[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         LoopAnim;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.HidingAnimStateMachineData
struct FHidingAnimStateMachineData
{
public:
	uint8                                        bIsHiding : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLooping : 1;                                      // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_281 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3329[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         LoopAnim;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.CoverAnimStateMachineData
struct FCoverAnimStateMachineData
{
public:
	bool                                         bIsInCover;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFiring;                                         // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReturningToIdle;                                // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverDirection                   ActiveCoverDirection;                              // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         ActiveCoverFirePose;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         ActiveCoverIdlePose;                               // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.DeploymentStatus
struct FDeploymentStatus
{
public:
	class FText                                  Position;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EPlayerStatus                     Status;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                PlayerState;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ReadyOrNot.GameModeSettings
struct FGameModeSettings : public FTableRowBase
{
public:
	int32                                        MaxPlayers;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoundStartTime;                                    // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReinforcementTimer;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RespawnTimer;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timelimit;                                         // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoundsPerMap;                                      // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TDMScoreLimit;                                     // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MatchStartInformationSwat;                         // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MatchStartInformationMlo;                          // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ReadyOrNot.RChatMessage
struct FRChatMessage
{
public:
	class FString                                SenderName;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AReadyOrNotPlayerState*                SenderPlayerState;                                 // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x28(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x38(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Args;                                              // 0x40(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamType                         AssociatedTeam;                                    // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillfeed;                                         // 0x51(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCommand;                                          // 0x52(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     TargetPlayerController;                            // 0x58(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamType                         TargetTeam;                                        // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.MapData
struct FMapData
{
public:
	TArray<struct FVector2D>                     PointData;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFreeDrawColor                    ColorType;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.FloorMapPointData
struct FFloorMapPointData
{
public:
	TArray<struct FMapData>                      MapData;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.KillFeedData
struct FKillFeedData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKillfeedType                     Type;                                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3330[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.VoteData
struct FVoteData
{
public:
	enum class EVoteState                        CurrentVoteState;                                  // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3331[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VoteReason;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VoteQuestion;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVoteEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanVoteNo : 1;                                    // Mask: 0x2, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3332[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x28 - 0xC)
// ScriptStruct ReadyOrNot.PlanningLine
struct FPlanningLine : public FFastArraySerializerItem
{
public:
	int32                                        PlayerNumber;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     Points;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Floor;                                             // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlanningLineTeam                 PlanningLineTeam;                                  // 0x24(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3333[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x28 - 0xC)
// ScriptStruct ReadyOrNot.PlanningMarker
struct FPlanningMarker : public FFastArraySerializerItem
{
public:
	int32                                        PlayerNumber;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Floor;                                             // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Style;                                             // 0x1C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.LevelStreamOptions
struct FLevelStreamOptions
{
public:
	uint8                                        Pad_3334[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.ProjectileData
struct FProjectileData
{
public:
	TArray<class ABulletProjectile*>             Projectiles;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.RadialWidgetSpawnProperties
struct FRadialWidgetSpawnProperties
{
public:
	int32                                        StartingSectorIndex;                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconSize;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconPadding;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingSectorAngle;                               // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectorInnerRadius;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectorOuterRadius;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GapSize;                                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelSize;                                         // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelCursorDistanceFromCenterWheel;                // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideRadialWheelCursorOnMenuOpened : 1;            // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_282 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3335[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SelectedColor;                                     // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UnselectedColor;                                   // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UnselectableColor;                                 // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 Font;                                              // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.SavedWeaponAttachmentData
struct FSavedWeaponAttachmentData
{
public:
	bool                                         bHasSavedData;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3336[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         ScopeAttachment;                                   // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         MuzzleAttachment;                                  // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         UnderbarrelAttachment;                             // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         OverbarrelAttachment;                              // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         StockAttachment;                                   // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         GripAttachment;                                    // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         IlluminatorAttachment;                             // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         AmmunitionAttachment;                              // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USkinComponent>            Skin;                                              // 0x48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmmoCount;                                         // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3337[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ReadyOrNot.WeaponPreset
struct FWeaponPreset
{
public:
	uint8                                        bHasSavedData : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSelected : 1;                                     // Mask: 0x2, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_283 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3338[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PresetName;                                        // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3339[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedWeaponAttachmentData            AttachmentData;                                    // 0x10(0x58)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.SavedWeaponPreset
struct FSavedWeaponPreset
{
public:
	TArray<struct FWeaponPreset>                 Presets;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ReadyOrNot.WeaponData
struct FWeaponData
{
public:
	TArray<enum class EWeaponType>               IncludedInWeaponCategories;                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  WeaponType;                                        // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseWeapon>               Blueprint;                                         // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointsAvailable;                                   // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             FactorySkinImage;                                  // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USkinComponent>>    AvailableSkins;                                    // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class USkinComponent>            CurrentSkin;                                       // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct ReadyOrNot.LoadoutPreset
struct FLoadoutPreset
{
public:
	class FName                                  PresetName;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSavedLoadout                         Loadout;                                           // 0x8(0x188)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.RosterLoadout
struct FRosterLoadout
{
public:
	TSubclassOf<class ABaseItem>                 Primary;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 Secondary;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 LongTactical;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABaseItem>>         GrenadeSlots;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABaseItem>>         TacticalSlots;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.LobbyPlayer
struct FLobbyPlayer
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RealName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Presence;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatusString;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueNetId;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVoice;                                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMuted;                                          // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.Friend
struct FFriend
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RealName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Presence;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatusString;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatusState;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UniqueNetId;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunningSameGame;                                  // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVoice;                                         // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJoinable;                                         // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.StoredWeaponAttachments
struct FStoredWeaponAttachments
{
public:
	TSubclassOf<class UWeaponAttachment>         ScopeAttachment;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         MuzzleAttachment;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         UnderbarrelAttachment;                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         OverbarrelAttachment;                              // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         StockAttachment;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         GripAttachment;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         IlluminatorAttachment;                             // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWeaponAttachment>         AmmunitionAttachment;                              // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEmpty;                                          // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.SwatCommand
struct FSwatCommand
{
public:
	struct FKey                                  InputKey;                                          // 0x0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CommandText;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESwatCommand                      CommandType;                                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGrabContextualDataOnExecute;                      // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSecondaryContextData;                          // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoldPageUntilExecute;                             // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCommandTextAsIssuedText;                          // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3340[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CommandTarget;                                     // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                CommandTarget2;                                    // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3341[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct ReadyOrNot.QueuedSwatCommand
struct FQueuedSwatCommand
{
public:
	struct FSwatCommand                          Command;                                           // 0x0(0x60)(NativeAccessSpecifierPublic)
	struct FHitResult                            ContextualData;                                    // 0x60(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.ScriptedLookAt
struct FScriptedLookAt
{
public:
	class AActor*                                LookAtActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRemaining;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.ScriptedFireAt
struct FScriptedFireAt
{
public:
	class AActor*                                FireAtActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FireAtLocation;                                    // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRemaining;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideTargetedEnemy;                            // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3342[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AccuracyPenaltyMultiplier;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireAngleThreshold;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteAmmo;                                     // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3343[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ReadyOrNot.ConversationData
struct FConversationData : public FTableRowBase
{
public:
	class FName                                  SpeakerId;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LookAtSpeakerId;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVoiceLineFromSpeechTable;                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3344[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VoiceLineRowName;                                  // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            VoiceLineWav;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACyberneticCharacter*                  Speaker;                                           // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalDelayAfterVoiceLineBeforeNextSpeaker;    // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RequiredTag;                                       // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamType                         TeamType;                                          // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3345[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireLineOfSight;                               // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptionalSpeaker;                                  // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3346[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SkipXAfterOptionalSpeakerNotFound;                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GiveWorldBuildingActivityByTagOnStartConversation; // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GiveWorldBuildingActivityByTagAfterConversation;   // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3347[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ReadyOrNot.OptimizationAttachmentData
struct FOptimizationAttachmentData
{
public:
	class FName                                  AttachedSocketName;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachedComponent;                                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            RelativeTransform;                                 // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.ReplayEvent
struct FReplayEvent
{
public:
	enum class EReplayEventType                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3348[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdditionalInformation;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3349[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ReadyOrNot.ReplayData
struct FReplayData
{
public:
	float                                        ReplayLength;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LetterScore;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumericalScore;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPlayers;                                        // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelName;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelRowName;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameModeName;                                      // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameVersion;                                       // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplayEvent>                  ReplayEvents;                                      // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.LoadingScreenAnimated
struct FLoadingScreenAnimated
{
public:
	TSoftObjectPtr<class UTexture2D>             Foreground;                                        // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Background;                                        // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.NVGPostProcessSettings
struct FNVGPostProcessSettings
{
public:
	TSoftObjectPtr<class UTexture2D>             DirtMaskTexture;                                   // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDepthOfFieldMethod               DepthOfFieldMethod;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BloomIntensity;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BloomThreshold;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAutoExposureMethod               AutoExposureMethod;                                // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BloomDirtMaskIntensity;                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldFstop;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LensFlareIntensity;                                // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LensFlareBokehSize;                                // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionIntensity;                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IndirectLightingIntensity;                         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmSlope;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmToe;                                           // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ReadyOrNot.EntryPoint
struct FEntryPoint
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECOOPMode>                 ExcludedGameModes;                                 // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ReadyOrNot.LevelFloor
struct FLevelFloor
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Number;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             FloorMap;                                          // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEntryPoint>                   EntryPoints;                                       // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ECOOPMode>                 ExcludedGameModes;                                 // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ReadyOrNot.PersonnelMapPoint
struct FPersonnelMapPoint
{
public:
	class FName                                  VolumeLabel;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorLabel;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MapPointName;                                      // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MapPointDescription;                               // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        FloorNum;                                          // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapShiftPosition;                                  // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapShiftZoom;                                      // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapCoordinates;                                    // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapZone;                                          // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MapZoneSize;                                       // 0x5C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3350[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.LoadAdditionalLevels
struct FLoadAdditionalLevels
{
public:
	TArray<class FString>                        SubLevelNames;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.UnlockRequirements
struct FUnlockRequirements
{
public:
	class FString                                MapURL;                                            // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3351[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ReadyOrNot.MapLayout
struct FMapLayout
{
public:
	struct FVector2D                             MapOrigin;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapSize;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3352[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             MapOverviewTexture;                                // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UTexture2D>> MapCells;                                          // 0x38(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.MissionAudio
struct FMissionAudio
{
public:
	class FText                                  AudioName;                                         // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AudioDescription;                                  // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                AudioInternalName;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            SoundFile;                                         // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AudioTranscript;                                   // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.MissionDoc
struct FMissionDoc
{
public:
	class FText                                  DocumentTitle;                                     // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DocumentText;                                      // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DocumentButtonText;                                // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DocumentButtonDescriptionText;                     // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.MissionPhoto
struct FMissionPhoto
{
public:
	class FText                                  PhotoTitle;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Photo;                                             // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PhotoCaption;                                      // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.CriminalRecord
struct FCriminalRecord
{
public:
	class FString                                Date;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Crime;                                             // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                CriminalCode;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ReadyOrNot.CharacterBio
struct FCharacterBio
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdNumber;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          Aliases;                                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  Bio;                                               // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ProfileImage;                                      // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Sex;                                               // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Build;                                             // 0x88(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Height;                                            // 0xA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Weight;                                            // 0xB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Hair;                                              // 0xD0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Eyes;                                              // 0xE8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DateOfBirth;                                       // 0x100(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Age;                                               // 0x118(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FCriminalRecord>               CriminalRecord;                                    // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.TimelineEvent
struct FTimelineEvent
{
public:
	class FText                                  EventTitle;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  EventTime;                                         // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  EventDescription;                                  // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        EventTimestamp;                                    // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventDuration;                                     // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.MissionTimeline
struct FMissionTimeline
{
public:
	TArray<struct FTimelineEvent>                EventsList;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ReadyOrNot.LevelFloorData
struct FLevelFloorData
{
public:
	class FText                                  FloorFullName;                                     // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  FloorShortName;                                    // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FloorLayout;                                       // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     FloorplanMaterial;                                 // 0x58(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.LevelDeployableData
struct FLevelDeployableData
{
public:
	class UDeployableData*                       DeployableData;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PtsCost;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3353[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ReadyOrNot.SpawnPoints
struct FSpawnPoints
{
public:
	class FText                                  SpawnPointName;                                    // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SpawnImage;                                        // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SpawnDescription;                                  // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FLevelDeployableData>          RecommendedDeployables;                            // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PlanningFloorNum;                                  // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlanningZoomLevel;                                 // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PlanningShift;                                     // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PlanningCoordinate;                                // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PtsCost;                                           // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnDisabled;                                    // 0x84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3354[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpawnLabel;                                        // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.AIDataPick
struct FAIDataPick
{
public:
	int32                                        Chance;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3355[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AILookupTag;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.AIRoster
struct FAIRoster
{
public:
	int32                                        MinimumSpawn;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumSpawn;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpawnGroup;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIDataPick>                   SpawnAI;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAffectedByNegotiator;                             // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3356[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.DynamicLevelDataPick
struct FDynamicLevelDataPick
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Chance;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.DynamicLevelRoster
struct FDynamicLevelRoster
{
public:
	float                                        OverallSpawnPercent;                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumPicks;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumPicks;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3357[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDynamicLevelDataPick>         SpawnLevel;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.TrapRoster
struct FTrapRoster
{
public:
	int32                                        MinimumSpawn;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumSpawn;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpawnGroup;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.PersonnelEntry
struct FPersonnelEntry
{
public:
	enum class EPersonnel                        PersonnelType;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3358[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AvailableMapPoints;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PtsCost;                                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3359[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             PersonnelTexture;                                  // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ReadyOrNot.LevelDeployableDepot
struct FLevelDeployableDepot
{
public:
	class FName                                  DepotLabel;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DepotCost;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DepotShortName;                                    // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DepotLongName;                                     // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DepotDescription;                                  // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MapFloorNum;                                       // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapCoordinates;                                    // 0x5C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapShiftAmount;                                    // 0x64(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapZoomLevel;                                      // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x780 (0x788 - 0x8)
// ScriptStruct ReadyOrNot.LevelDataLookupTable
struct FLevelDataLookupTable : public FTableRowBase
{
public:
	class FText                                  FriendlyLevelName;                                 // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LevelNickname;                                     // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LevelPicture;                                      // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LevelDesignation;                                  // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TimeOfDayText;                                     // 0x78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x90(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ProgressionTagPrefix;                              // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 MissionSelectMap;                                  // 0xB0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultFloorIndex;                                 // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLevelFloor>                   Floors;                                            // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEntryPoint>                   EntryPoints;                                       // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TabletScreenBrightness;                            // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseFixedExposureWhenViewingTablet : 1;            // Mask: 0x1, PropSize: 0x10x104(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_284 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_335C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinEV100;                                          // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEV100;                                          // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ECOOPMode, class FString>    COOPModesLevelMap;                                 // 0x110(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class ECOOPMode, struct FLoadAdditionalLevels> COOPModesLevelAdditionalMaps;                      // 0x160(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUnlockRequirements                   UnlockRequirements;                                // 0x1B0(0x18)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FMapLayout                            MapLayout;                                         // 0x1C8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLoadingScreenAnimated                LoadingScreen;                                     // 0x250(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class AReadyOrNotGameMode>> SupportedGameModes;                                // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  Author;                                            // 0x2B0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  AuthorContact;                                     // 0x2C8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  RecommendedPlayerCount;                            // 0x2E0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsTestLevel;                                      // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNVGPostProcessSettings               NVG_PostProcessOverride;                           // 0x300(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               MVPSequenceLocation;                               // 0x358(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AObjective>>      Objectives;                                        // 0x368(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UChallenge>>      Challenges;                                        // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  LevelLocationText;                                 // 0x388(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LevelMonthNum;                                     // 0x3A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LevelDayNum;                                       // 0x3B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LevelYearNum;                                      // 0x3D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMissionAudio                         TocBriefingAudio;                                  // 0x3E8(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FMissionAudio>                 MissionAudio;                                      // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMissionDoc>                   Documents;                                         // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMissionPhoto>                 Photos;                                            // 0x468(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  MissionStartTocVoiceLine;                          // 0x478(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterBio>                 SuspectsBios;                                      // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharacterBio>                 CiviliansBios;                                     // 0x490(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMissionTimeline                      MissionTimeline;                                   // 0x4A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        BaseSquadPts;                                      // 0x4B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLevelFloorData>               MapFloors;                                         // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FSpawnPoints                          Spawn_1;                                           // 0x4C8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FSpawnPoints                          Spawn_2;                                           // 0x558(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FSpawnPoints                          Spawn_3;                                           // 0x5E8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FSpawnPoints                          Spawn_4;                                           // 0x678(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIRoster>                     AISpawnRosters;                                    // 0x708(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FDynamicLevelRoster>           DynamicLevelSpawnRosters;                          // 0x718(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTrapRoster>                   TrapRosters;                                       // 0x728(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPersonnelMapPoint>            AllPersonnelMapPoints;                             // 0x738(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPersonnelEntry>               AllPersonnel;                                      // 0x748(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FLevelDeployableData>          Deployables;                                       // 0x758(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FLevelDeployableDepot>         DeployableDepots;                                  // 0x768(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   PropHuntMeshes;                                    // 0x778(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.InGameLogMessage
struct FInGameLogMessage
{
public:
	enum class EDebugLogType                     LogSeverity;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoDetermineIcon : 1;                            // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_285 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3360[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LogMessage;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DelayBetweenWords;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBetweenLetters;                               // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeOnScreen;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3361[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.InGameLogMessage_PVP
struct FInGameLogMessage_PVP
{
public:
	class AReadyOrNotCharacter*                  Causer;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AReadyOrNotCharacter*                  Victim;                                            // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPVPEvent                         PVPEvent;                                          // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomMessage;                                     // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ECharacterDeathReason             CauseOfDeath;                                      // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeOnScreen;                                      // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.UniversalStat
struct FUniversalStat
{
public:
	enum class EUniversalStatType                StatType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3390[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntegerValue;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.SwatCommandData
struct FSwatCommandData
{
public:
	enum class ESwatCommand                      Command;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamType                         Team;                                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3394[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 Target;                                            // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQueue;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3395[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.ActivityStateTransition
struct FActivityStateTransition
{
public:
	int32                                        TransitionToStateID;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3397[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TransitionToStateName;                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_339B[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UActivityState*                        ToState;                                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.ActivityEvent
struct FActivityEvent
{
public:
	enum class EEventType                        EventType;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStandaloneEvent                  StandaloneEvent;                                   // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETargetEvent                      TargetEvent;                                       // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33A1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 TargetActor;                                       // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            FmodAudioEvent;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             UnrealAudioEvent;                                  // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerOnlyOnce;                                  // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ReadyOrNot.AIActionGateData
struct FAIActionGateData
{
public:
	class UAIActionGate*                         Type;                                              // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNot;                                              // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCooldown;                                      // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockGateOnCooldown;                               // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContributeToFailCount;                            // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class ACyberneticController*, float>    Cooldowns;                                         // 0x18(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.AIActionData_NameOnly
struct FAIActionData_NameOnly
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.AIActionConsiderationData
struct FAIActionConsiderationData
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIConsiderationScoringMethod     ScoringMethod;                                     // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIActionConsideration*                Type;                                              // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, float>    Scores;                                            // 0x10(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x2D0 - 0x0)
// ScriptStruct ReadyOrNot.AIActionData
struct FAIActionData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIAction                         ActionType;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAIAction>                 CustomActionClass;                                 // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreThreshold;                                    // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisallowWhenLastAlive : 1;                        // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoOnce : 1;                                       // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysActive : 1;                                 // Mask: 0x4, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContinueBetweenAwarenessStates : 1;               // Mask: 0x8, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableActionWhenFailedToConsider : 1;            // Mask: 0x10, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_286 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DisableActionConsiderCount;                        // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCommitUntilEnd : 1;                               // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_287 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CommitTime;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCommitTimeFromConfig : 1;                         // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_288 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CommitTimeConfigKey;                               // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanInterruptAnyAction : 1;                        // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_289 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAIActionData_NameOnly>        CommitInterrupts;                                  // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bUseCooldown : 1;                                  // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCooldownFromConfig : 1;                           // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CooldownConfigKey;                                 // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIActionGateData>             Gates;                                             // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FAIActionConsiderationData>    Considerations;                                    // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, float>    Scores;                                            // 0xA0(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, float>    Cooldowns;                                         // 0xF0(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, float>    CommitTimes;                                       // 0x140(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, int32>    SuccessConsiderCount;                              // 0x190(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, int32>    FailConsiderCount;                                 // 0x1E0(0x50)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, class UAIAction*> CustomActions;                                     // 0x230(0x50)(Transient, NativeAccessSpecifierPublic)
	TMap<class ACyberneticController*, uint32>   RunCount;                                          // 0x280(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x2E0 (0x2E0 - 0x0)
// ScriptStruct ReadyOrNot.AIActionDataContainer
struct FAIActionDataContainer
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIActionData                         Data;                                              // 0x8(0x2D0)(Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAIActionPresetData*                   Preset;                                            // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.AITraitActionData
struct FAITraitActionData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EAIAwarenessState>         AllowedInAwarenessState;                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIActionDataContainer>        Actions;                                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.AIActionDecisionContext
struct FAIActionDecisionContext
{
public:
	class ACyberneticController*                 Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                World;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x390 (0x398 - 0x8)
// ScriptStruct ReadyOrNot.AIDataLookupTable
struct FAIDataLookupTable : public FTableRowBase
{
public:
	class UAIArchetypeData*                      Archetype;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ECOOPMode, class UAIArchetypeData*> GameModeArchetypeOverride;                         // 0x10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Faction;                                           // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bIsLeaderOfFaction : 1;                            // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIMoveDataBlock                      DefaultMoveData;                                   // 0x78(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAIMovementStyleData                  MovementStyle;                                     // 0x110(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseRandomLoadout;                                 // 0x150(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ABaseItem>>         AIWeaponSelection;                                 // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          AIAmmoTypeSelection;                               // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ChanceToFireGunOnDeath;                            // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AIBodyArmourSelection;                             // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          AIHelmetSelection;                                 // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ASuspectArmour>            AIBodyArmourOverride;                              // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSavedLoadout                         DefaultLoadout;                                    // 0x1A8(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ETeamType                         SpawningTeamType;                                  // 0x330(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACyberneticCharacter>      CharacterClass;                                    // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterMesh>                RandomCharacterMesh;                               // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bOverrideControllerClass : 1;                      // Mask: 0x1, PropSize: 0x10x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AAIController>             ControllerClass;                                   // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x360(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bChanceToSurrenderWithItem : 1;                    // Mask: 0x1, PropSize: 0x10x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSurrenderWithItemChance : 1;              // Mask: 0x2, PropSize: 0x10x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28E : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_33F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SurrenderWithItemChance;                           // 0x374(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SurrenderItems;                                    // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCanEverSuicide;                                   // 0x388(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSuicideChance;                            // 0x389(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SuicideChance;                                     // 0x38C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmuneToGas;                                      // 0x390(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33F8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ReadyOrNot.AIFactionTable
struct FAIFactionTable : public FTableRowBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AAIFactionManager>         Manager;                                           // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.FactionTeamTactics
struct FFactionTeamTactics
{
public:
	TArray<enum class EAITeamTactic>             Tactics;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.FactionSuspectTeam
struct FFactionSuspectTeam
{
public:
	TArray<class ASuspectCharacter*>             Suspects;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<enum class EAITeamTactic>             Tactics;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ReadyOrNot.SpawnData
struct FSpawnData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   SpawnedAI;                                         // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bForceNoWeapon;                                    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivated;                                      // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3402[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseWeapon>               ForceWeaponOverride;                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ForceBodyArmourOverride;                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SpawnWithTags;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FActivityRouteCollection              ActivityRouteCollection;                           // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ACoverLandmark>         SpawnInLandmark;                                   // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.AnimWeaponData
struct FAnimWeaponData
{
public:
	TArray<class UAnimMontage*>                  AnimMontages;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.AnimStanceData
struct FAnimStanceData
{
public:
	struct FAnimWeaponData                       StandingAnimData;                                  // 0x0(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAnimWeaponData                       CrouchedAnimData;                                  // 0x10(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct ReadyOrNot.AnimationDataTable
struct FAnimationDataTable : public FTableRowBase
{
public:
	TMap<enum class EAnimWeaponType, struct FAnimStanceData> AnimData;                                          // 0x8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bRestartIfAlreadyPlaying;                          // 0x58(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3409[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxRandomDelay;                                    // 0x5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoCanPlayWhileStrafing;                           // 0x64(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoCanPlayWhileNotStrafing;                        // 0x65(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanQueue;                                         // 0x66(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAnimationBeInterupted;                         // 0x67(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ABaseItem>, class FString> OverrideAnimation;                                 // 0x68(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FString>                        CanOnlyBeInteruptedBy;                             // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.AnimSectionData
struct FAnimSectionData
{
public:
	float                                        SectionStart;                                      // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectionEnd;                                        // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.PredictionResult
struct FPredictionResult
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceAbsolute;                                  // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawAngle;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// ScriptStruct ReadyOrNot.AnimCharacterMovementSnapshot
struct FAnimCharacterMovementSnapshot
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastWorldLocation;                                 // 0xC(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldVelocity;                                     // 0x18(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalVelocity;                                     // 0x24(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldAcceleration;                                 // 0x30(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalAcceleration;                                 // 0x3C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalVelocityDirection;                            // 0x48(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalAccelerationDirection;                        // 0x54(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimCardinalDirection            CurrentCardinalDirection;                          // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3416[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VelocityYawAngle;                                  // 0x64(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationYawAngle;                              // 0x68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityYawDeltaNorth;                             // 0x6C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityYawDeltaEast;                              // 0x70(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityYawDeltaSouth;                             // 0x74(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityYawDeltaWest;                              // 0x78(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance2DTraveledSinceLastUpdate;                 // 0x7C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed2D;                                           // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationSize2D;                                // 0x84(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnGround;                                       // 0x88(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x89(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAccelerating;                                   // 0x8A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingAndAccelerating;                          // 0x8B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingOrAccelerating;                           // 0x8C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNotMovingOrAccelerating;                        // 0x8D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNotMoving;                                      // 0x8E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNotAccelerating;                                // 0x8F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNotMovingAndAccelerating;                       // 0x90(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingAndNotAccelerating;                       // 0x91(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAccelerationOpposesVelocity;                      // 0x92(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAccelerationEqualsVelocity;                       // 0x93(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.CardinalDirectionSnapshot
struct FCardinalDirectionSnapshot
{
public:
	enum class EAnimCardinalDirection            CardinalDirection;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3422[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawAngle;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawAngleDeltaNorth;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawAngleDeltaEast;                                 // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawAngleDeltaSouth;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawAngleDeltaWest;                                 // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.AnimCharacterMovementPredictionSnapshot
struct FAnimCharacterMovementPredictionSnapshot
{
public:
	float                                        GroundFriction;                                    // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingFriction;                                   // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingFrictionFactor;                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingDecelerationWalking;                        // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSeparateBrakingFriction;                       // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_342E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GravityZ;                                          // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleRadius;                                     // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleHalfHeight;                                 // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.CardinalDirectionBlendSpaceAnimSet
struct FCardinalDirectionBlendSpaceAnimSet
{
public:
	class UBlendSpace*                           NorthAnim;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           EastAnim;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           SouthAnim;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           WestAnim;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.CardinalDirectionAnimSet
struct FCardinalDirectionAnimSet
{
public:
	class UAnimSequence*                         NorthAnim;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         EastAnim;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         SouthAnim;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         WestAnim;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.DistanceMatchAnimation
struct FDistanceMatchAnimation
{
public:
	class UAnimSequence*                         Animation;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DistanceCurveName;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDistanceLimit;                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3435[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceLimit;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendoutTime;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3437[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ReadyOrNot.DistanceMatchCardinalAnimSet
struct FDistanceMatchCardinalAnimSet
{
public:
	struct FDistanceMatchAnimation               NorthAnim;                                         // 0x0(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDistanceMatchAnimation               EastAnim;                                          // 0x20(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDistanceMatchAnimation               SouthAnim;                                         // 0x40(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDistanceMatchAnimation               WestAnim;                                          // 0x60(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct ReadyOrNot.AnimInput_CapsuleLocomotion
struct FAnimInput_CapsuleLocomotion
{
public:
	struct FVector                               WorldVelocity;                                     // 0x0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LocalVelocity;                                     // 0xC(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               WorldAcceleration;                                 // 0x18(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LocalAcceleration;                                 // 0x24(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VelocityYawAngle;                                  // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AccelerationYawAngle;                              // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Speed2D;                                           // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MovingThreshold;                                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsMoving2D;                                       // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasAcceleration2D;                                // 0x41(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAccelerationOpposesVelocity;                      // 0x42(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOnGround;                                       // 0x43(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.AnimTurnInPlaceState
struct FAnimTurnInPlaceState
{
public:
	class UAnimSequence*                         ActiveTurnAnim;                                    // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         TurnRecoveryAnim;                                  // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootYawOffset;                                     // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootYawOffsetInverse;                              // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveTurnAnimTime;                                // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnRecoveryAnimStartTime;                         // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurnTransitionRequested;                          // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurnRecoveryRequested;                            // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_343F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatRK4SpringInterpolator           YawOffsetInterpolator;                             // 0x24(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3441[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         PendingTurnAnim;                                   // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3442[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.AnimTurnTransition
struct FAnimTurnTransition
{
public:
	class UAnimSequence*                         Anim;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBeforeTrigger;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3443[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.AnimTurnInPlaceAnimSet
struct FAnimTurnInPlaceAnimSet
{
public:
	TArray<struct FAnimTurnTransition>           TurnTransitions;                                   // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TurnDeadZoneAngle;                                 // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3447[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x598 (0x5A0 - 0x8)
// ScriptStruct ReadyOrNot.ItemLookupTable
struct FItemLookupTable : public FTableRowBase
{
public:
	class FText                                  ItemName;                                          // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemDescription;                                   // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class EGameVersionRestriction>   LockedToDLC;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EItemCategory>             ItemCategories;                                    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemType                         ItemType;                                          // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_344B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ABaseItem>               BlueprintClass;                                    // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPistolGrip;                                       // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_344C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ItemIcon;                                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemWeight;                                        // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HolsterPlayRate;                                   // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawPlayRate;                                      // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLowReady;                                      // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_344D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PushbackRange;                                     // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowReadyRange;                                     // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowReadyRangeSightsModifier;                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowReadyPitchThreshold;                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSpeedMultiplier;                           // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanOffset;                                        // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ADSZoom;                                           // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ADSZoomInSpeed;                                    // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ADSZoomOutSpeed;                                   // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_344E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AImpactEffect>             ImpactEffects;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AImpactEffect>             RicochetEffects;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       RicochetParticleSystem;                            // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AImpactEffect>             ExitEffects;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MagazineWeightFull;                                // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MagazineWeightEmpty;                               // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bADSCountsAsAbuse;                                 // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_344F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HesitationBoostMultiplier;                         // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EFireMode>                 FireModes;                                         // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        BurstBulletCount;                                  // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3450[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AmmunitionTypes;                                   // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    DamageOverRange;                                   // 0x128(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSeverityMultiplier;                          // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSeverityChance;                              // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedoutDamageMultiplier;                          // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedoutDamageChance;                              // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3451[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               DefaultDamageType;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageType>               ArmorPiercingDamageType;                           // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MagazineCountDefault;                              // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MagazineCountMin;                                  // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MagazineCountMax;                                  // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MagazineLabel;                                     // 0x1E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileMovementSpeed;                           // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationDistance;                               // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABulletProjectile>         FakeBulletProjectile;                              // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABulletProjectile>         BulletProjectile;                                  // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABulletProjectile>         ArmorPiercingBulletProjectile;                     // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MagazineSize;                                      // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireRate;                                          // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Accuracy;                                          // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFireRateAI;                                     // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFireRateAI;                                     // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BulletsFiredUntilFullyAccurate;                    // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreAmmoTypeSpread;                             // 0x22C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              SpreadPattern;                                     // 0x230(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpreadReturnRate;                                  // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ADSSpreadMultiplier;                               // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3454[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      RecoilPattern;                                     // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        RecoilReturnRate;                                  // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilInterpSpeed;                                 // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ADSRecoilMultiplier;                               // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockIntegrityMinDamage;                            // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockIntegrityMaxDamage;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BulletDrag;                                        // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitScan;                                          // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnTracer;                                      // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoSpawnTracerForFiringPlayer;                     // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3455[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnProjectileCount;                              // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Wobble;                                            // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialWobbleDelay;                                // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       FireCameraShake;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstShotRecoil;                                   // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstShotSpread;                                   // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstShotResetTime;                                // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilReturnInterpSpeed;                           // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilReturnPercentage;                            // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocitySpreadMultiplier;                          // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityRecoilMultiplier;                          // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilMultiplierPitch;                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilMultiplierYaw;                               // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RefireDelay;                                       // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UWeaponWheel_ItemStat_Base>> ItemStats;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        AttachmentPoints;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAcceptsScopeAttachments;                          // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3456[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UScopedWeaponAttachment>> AvailableScopeAttachments;                         // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsMuzzleAttachments;                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3457[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableMuzzleAttachments;                        // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsUnderbarrelAttachments;                    // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3458[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableUnderbarrelAttachments;                   // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsOverbarrelAttachments;                     // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3459[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableOverbarrelAttachments;                    // 0x310(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsStockAttachments;                          // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableStockAttachments;                         // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsGripAttachments;                           // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableGripAttachments;                          // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsIlluminatorAttachments;                    // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableIlluminatorAttachments;                   // 0x358(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAcceptsAmmunitionAttachments;                     // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> AvailableAmmunitionAttachments;                    // 0x370(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bCalculateProcRecoil;                              // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecoilDampStrength;                                // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilFireTime;                                    // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilFireStrength;                                // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilFireStrengthFirst;                           // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilAngleStrength;                               // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilRandomness;                                  // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilADSModfier;                                  // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilAngleADSModifier;                            // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RecoilRotationBuildup;                             // 0x3A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RecoilPositionBuildup;                             // 0x3B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilBuildupADSMultiplier;                        // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RecoilHasBuildup;                                  // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecoilBuildupDampStrength;                         // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimLimit;                                      // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimLimitADS;                                   // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazySpringStrength;                                // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazySpringStrengthADS;                             // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FPADSMotionWeight;                                 // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimInterpSpeed;                                // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimInterpADSModifier;                          // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimInterpHipModifier;                          // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimSlowMoveModifier;                           // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreeAimSlowMoveTolerance;                          // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableMeshspaceMovement;                         // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3460[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MeshspaceTransform_Default;                        // 0x400(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MeshspaceTransform_Aiming;                         // 0x430(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MeshspaceTransform_Back;                           // 0x460(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               MovementSpeedScale;                                // 0x490(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MovementSpeedRotationScalePitchYawRoll;            // 0x49C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MeshSpaceAimInterp;                                // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3461[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MeshspaceTransform_OnDraw;                         // 0x4B0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OnDrawMeshspaceInterp;                             // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3462[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MeshspaceTransform_OnHolster;                      // 0x4F0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OnHolsterMeshspaceInterp;                          // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InertiaDragAimRotation;                            // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InertiaDragAimLocation;                            // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InertiaDragStrafeRotation;                         // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InertiaDragStrafeLocation;                         // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BodySocket;                                        // 0x534(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandsSocket;                                       // 0x53C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobScaleH;                                   // 0x544(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobScaleV;                                   // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobSpeedScaleH;                              // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobSpeedScaleV;                              // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobAmplitudeBaseSpeed;                       // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobIntensitySprintScale;                     // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobAmplitudeWalkScale;                       // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBobAmplitudeSprintScale;                     // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobScaleH;                                   // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobScaleV;                                   // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobScaleInjured;                             // 0x56C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobSpeedScaleH;                              // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobSpeedScaleV;                              // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobSpeedScaleInjured;                        // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobCrouchModifier;                           // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobADSModifier;                              // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobRotPitchScale;                            // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobRotRollScale;                             // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobRotPitchSpeed;                            // 0x58C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobRotRollSpeed;                             // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobRotCrouchModifier;                        // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponBobRotADSModifier;                           // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3463[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.RepGearAttach
struct FRepGearAttach
{
public:
	bool                                         bEquipped;                                         // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshVisibleTo1P;                                  // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshVisibleTo3P;                                  // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3464[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Attach1P;                                          // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket1P;                                          // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Attach3P;                                          // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket3P;                                          // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ScopeAttach;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ScopeSocket;                                       // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.HitscanCharacterHit
struct FHitscanCharacterHit
{
public:
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3465[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.Ricochet
struct FRicochet
{
public:
	uint8                                        Pad_3466[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.GibData
struct FGibData
{
public:
	class UStaticMesh*                           GibHead;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           GibArms;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           GibLegs;                                           // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           BoneHead;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           BoneArms;                                          // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           BoneLegs;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ReadyOrNot.ArteryData
struct FArteryData
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoneSize;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoneOffset;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeathTime;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ReadyOrNot.SavedTransforms
struct FSavedTransforms
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            SavedTransform;                                    // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct ReadyOrNot.ExfiltrationData
struct FExfiltrationData
{
public:
	uint8                                        Pad_346A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.LobbySaveData
struct FLobbySaveData
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerTransformSet;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_346B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlayerLocation;                                    // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PlayerRotation;                                    // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              PlayerCameraRotation;                              // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.RosterCharacterSaveData
struct FRosterCharacterSaveData
{
public:
	TArray<uint8>                                ObjectBytes;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ReadyOrNot.RosterSaveData
struct FRosterSaveData
{
public:
	bool                                         bGenerateRoster;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_346D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRosterCharacterSaveData>      Characters;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRosterCharacterSaveData>      PreviousCharacters;                                // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RosterSeed;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FiredCount;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<int32>                                  UsedSerialNumbers;                                 // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.CoverLandmarkAnimData
struct FCoverLandmarkAnimData
{
public:
	uint8                                        bForwardOnly : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFromTable : 1;                                    // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28F : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_346E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ForwardAnimRowName;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeftAnimRowName;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RightAnimRowName;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ForwardAnim;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          LeftAnim;                                          // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          RightAnim;                                         // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimYawOffset;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_346F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.CustomizationMaterialSlot
struct FCustomizationMaterialSlot
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3470[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.CompatibleSkinsArray
struct FCompatibleSkinsArray
{
public:
	TArray<class ULoadoutCustomization*>         CompatibleSkins;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.ActorMemory
struct FActorMemory
{
public:
	uint8                                        Pad_3471[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.ItemID
struct FItemID
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3472[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ReadyOrNot.MapList
struct FMapList
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameMode;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LoadURL;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Author;                                            // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  AuthorContact;                                     // 0x60(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  RecommendedPlayerCount;                            // 0x78(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundCue*                             LoadingScreenMusic;                                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsPvP;                                      // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsCoop;                                     // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x9A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3473[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.OutStackupData
struct FOutStackupData
{
public:
	uint8                                        Pad_3474[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.CoverQueryTest
struct FCoverQueryTest
{
public:
	enum class ECoverQueryTestPurpose            TestPurpose;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3475[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScoringFactor;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3476[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.GraphNode
struct FGraphNode
{
public:
	uint8                                        Pad_3477[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Object;                                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3478[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.Hm_Objectives
struct FHm_Objectives
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveStatus                  ObjectiveStatus;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3479[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ReadyOrNot.Hm_DroppedEvidence
struct FHm_DroppedEvidence
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 Class;                                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_347A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.Hm_BaggedEvidence
struct FHm_BaggedEvidence
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.Hm_BombInformation
struct FHm_BombInformation
{
public:
	class FString                                BombName;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBombState                        BombState;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_347C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeRemaining;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ReadyOrNot.Hm_DoorChunkInformation
struct FHm_DoorChunkInformation
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsSimulating;                                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_347E[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ReadyOrNot.Hm_DoorInformation
struct FHm_DoorInformation
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBroken;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3481[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpenCloseAmount;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3482[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DoorMeshTransform;                                 // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsSimulatingPhysics;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3483[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHm_DoorChunkInformation>      DoorChunkInformations;                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  TrapName;                                          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ReadyOrNot.Hm_CyberneticsInformation
struct FHm_CyberneticsInformation
{
public:
	struct FTransform                            CharacterTransform;                                // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETeamType                         TeamType;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3486[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health;                                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArrested;                                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSurrendered;                                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenReported;                                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3488[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 EquippedItemClass;                                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterMesh                        CharacterMeshData;                                 // 0x58(0x88)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.Hm_InventoryInformation
struct FHm_InventoryInformation
{
public:
	TSubclassOf<class ABaseItem>                 Class;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagazine>                     Magazines;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MagIndex;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3489[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ReadyOrNot.Hm_PlayerInformation
struct FHm_PlayerInformation
{
public:
	class FString                                UniqueId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SaveData;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            CharacterTransform;                                // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ControlRotation;                                   // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 EquippedItemClass;                                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHm_InventoryInformation>      Inventory;                                         // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TotalGrenades;                                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalDevices;                                      // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenReported;                                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_348D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.ImpactFx
struct FImpactFx
{
public:
	class UParticleSystem*                       ParticleFx;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SoundFx;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Decal;                                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRandomFrame;                                   // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3491[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameMax;                                          // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    DecalMesh;                                         // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PaintMaterialTexture;                              // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ReadyOrNot.PlayerActionPromptSlot
struct FPlayerActionPromptSlot
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputEvent;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3495[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionText;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                ColorLabel;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCustomActionText : 1;                          // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_290 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3496[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomActionPromptText;                            // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        bCheckForDisallowedItems : 1;                      // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCustomDisallowedActionText : 1;                // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_291 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3497[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisallowedItemActionText;                          // 0x60(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<enum class EItemCategory>             DisallowedItems;                                   // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        bAnimate : 1;                                      // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoopAnimation : 1;                                // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCondition : 1;                                    // Mask: 0x4, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3498[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ReadyOrNot.PairedInteractionTable
struct FPairedInteractionTable : public FTableRowBase
{
public:
	TMap<class FName, class UInteractionsData*>  Interactions;                                      // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.InterestStationPoint
struct FInterestStationPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredTimeStationing;                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class ACyberneticCharacter*, float>     TimeStationing;                                    // 0x10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ReadyOrNot.InterestPoint
struct FInterestPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterestPointType                Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AThreatAwarenessActor>  Threat;                                            // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ADoor>                  Door;                                              // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AAISpawn>               Spawner;                                           // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 CustomActor;                                       // 0x88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredTimeFocusing;                              // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class ACyberneticCharacter*, float>     TimeFocusing;                                      // 0xB8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.DefaultCharacterCustomization
struct FDefaultCharacterCustomization
{
public:
	class UCustomizationCharacter*               Character;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationVoice*                   Voice;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizationSkin*                    ArmorSkin;                                         // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ReadyOrNot.CharacterData
struct FCharacterData
{
public:
	class FName                                  Handle;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CharacterIcon;                                     // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UPlayableCharacterData> Blueprint;                                         // 0x68(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.UniformData
struct FUniformData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 Blueprint;                                         // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.ArmourData
struct FArmourData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          ProtectsAgainstText;                               // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 Blueprint;                                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ReadyOrNot.DeviceData
struct FDeviceData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CarouselImage1;                                    // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CarouselImage2;                                    // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CarouselImage3;                                    // 0x88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  EffectiveRange;                                    // 0xB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Use;                                               // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Effects;                                           // 0xE0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Risk;                                              // 0xF8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ToMitigate;                                        // 0x110(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxInInventory;                                    // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemsPerSlot;                                      // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 Blueprint;                                         // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.GrenadeData
struct FGrenadeData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemClass                        ItemClass;                                         // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseGrenade>              Blueprint;                                         // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.Transcript
struct FTranscript
{
public:
	float                                        AudioTimestamp;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SpeakerName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Transcription;                                     // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.EffectsMultiplierStruct
struct FEffectsMultiplierStruct
{
public:
	bool                                         bShouldReverse;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Multiplier;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.AttachmentEffects
struct FAttachmentEffects
{
public:
	class FText                                  EffectText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bEffectIsPos;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ReadyOrNot.LoadoutCategory
// struct FLoadoutCategory
// {
// public:
// 	uint8                                        Pad_34AF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
// };


// 0x70 (0x70 - 0x0)
// ScriptStruct ReadyOrNot.AnalyticsStatus
struct FAnalyticsStatus
{
public:
	uint8                                        Pad_34B0[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.AnalyticsSuspectState
struct FAnalyticsSuspectState
{
public:
	uint8                                        Pad_34B2[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.MessagePromptContent
struct FMessagePromptContent
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputEvent;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionText;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsAxisEvent;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KeyIndex;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCustomActionText : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_292 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomActionPromptText;                            // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ReadyOrNot.MetaGameProfileTemporaryData
struct FMetaGameProfileTemporaryData
{
public:
	TArray<class FString>                        NewCompletedLevels;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class FName>                            NewProgressionTags;                                // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FExfiltrationData                     ExfilData;                                         // 0x60(0x3)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B6[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.PlanningDrawingUpdate
struct FPlanningDrawingUpdate
{
public:
	TArray<struct FVector2D>                     NewPoints;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct ReadyOrNot.PlanningLineArray
struct FPlanningLineArray : public FFastArraySerializer
{
public:
	TArray<struct FPlanningLine>                 Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B7[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x148 - 0x108)
// ScriptStruct ReadyOrNot.PlanningMarkerArray
struct FPlanningMarkerArray : public FFastArraySerializer
{
public:
	TArray<struct FPlanningMarker>               Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.MoraleChangeInfo
struct FMoraleChangeInfo
{
public:
	uint8                                        Pad_34B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.MoraleDamageTraceParameters
struct FMoraleDamageTraceParameters
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        IgnoredActors;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>           IgnoredComponents;                                 // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.MusicTrackFMOD
struct FMusicTrackFMOD
{
public:
	class UFMODEvent*                            PreplanningEvent;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            LevelEvent;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.MusicKeyframe
struct FMusicKeyframe
{
public:
	float                                        Position;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Label;                                             // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransitionExit;                                   // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             TransitionPiece;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.MusicTrack
struct FMusicTrack
{
public:
	class USoundCue*                             MusicPiece;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransitionMusic;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTime;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumTime;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMusicKeyframe>                Keyframes;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.ObituaryForBone
struct FObituaryForBone
{
public:
	TArray<class FText>                          DeathMessages;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.ScreenFooterEntry
struct FScreenFooterEntry
{
public:
	enum class EInputExclusiveType               OnlyDisplayWithInput;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Alignment;                                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsButton;                                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34BF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonLabel;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   InputAction;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.PatrolPoint
struct FPatrolPoint
{
public:
	uint8                                        Pad_34C0[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.MaterialPenetration
struct FMaterialPenetration
{
public:
	bool                                         bIsPenetrable;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PenetrationDensity;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationMultiplier;                             // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ArmourLevel;                                       // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanRicochet;                                      // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RicochetChanceMultiplier;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpallingChance;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ReadyOrNot.PingData
struct FPingData
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  PingText;                                          // 0x88(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ReadyOrNot.WoundData
struct FWoundData
{
public:
	float                                        WoundSize;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WoundOffset;                                       // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           UpperMesh;                                         // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            UpperMeshTranform;                                 // 0x20(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                           LowerMesh;                                         // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LowerMeshTranform;                                 // 0x60(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBreaksBone;                                       // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C7[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.HealingData
struct FHealingData
{
public:
	float                                        CurrentHealth;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHealth;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHealth;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HealerName;                                        // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HealeeName;                                        // 0x14(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMedicalHealScreen                HealScreen;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.FootIKStruct
struct FFootIKStruct
{
public:
	float                                        Offset;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FootRotation;                                      // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.Injury
struct FInjury
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InjuryCount;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.BoneVelocity
struct FBoneVelocity
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastLocation;                                      // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CalculatedSpeed;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.SpecificWeaponRecoilMod
struct FSpecificWeaponRecoilMod
{
public:
	enum class EItemClass                        WeaponClass;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecoilFireStrength;                                // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilFireStrengthFirst;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilDampStrength;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilAngleStrength;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilRandomness;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilFireADSModifier;                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilBuildupADSModifier;                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilAngleADSModifier;                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilBuildupDampStrength;                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.PostProcessEffectPlayer
struct FPostProcessEffectPlayer
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebug : 1;                                        // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRestartIfAlreadyPlaying : 1;                      // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWantsFadeOut : 1;                                 // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_293 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutSpeed;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UPostProcessRequirement>> RequirementsClasses;                               // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  EffectName;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostProcessEffectData*                PostProcess_Data;                                  // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              PostProcess_MID;                                   // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStarted : 1;                                      // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34CC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.PostProcessEffect
struct FPostProcessEffect
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomProcess : 1;                                // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebug : 1;                                        // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_294 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EffectName;                                        // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPostProcessEffectPlayer>      PostProcesses;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bStarted : 1;                                      // Mask: 0x1, PropSize: 0x10x20(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ReadyOrNot.PostProcessSetting_Base
struct FPostProcessSetting_Base
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_295 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UPostProcessRequirement>> Requirements;                                      // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPostProcessEndOptions            EffectEndOption;                                   // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartLoopAtCurveKey;                               // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverseAtAnyTime : 1;                             // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_296 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UPostProcessRequirement>> ReverseRequirements;                               // 0x30(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseCurve : 1;                                     // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_297 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EEasingFunc                       EasingMethod;                                      // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPostProcessStartingState         StartingState;                                     // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeed;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectLifetime;                                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartLoopAtTime;                                   // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D7[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x2A0 - 0x80)
// ScriptStruct ReadyOrNot.PostProcessSetting_VectorParam
struct FPostProcessSetting_VectorParam : public FPostProcessSetting_Base
{
public:
	struct FVector                               Start;                                             // 0x80(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x8C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeCurveLinearColor              Curve;                                             // 0x98(0x208)(Edit, NativeAccessSpecifierPublic)
};

// 0x90 (0x110 - 0x80)
// ScriptStruct ReadyOrNot.PostProcessSetting_FloatParam
struct FPostProcessSetting_FloatParam : public FPostProcessSetting_Base
{
public:
	float                                        Start;                                             // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        End;                                               // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Curve;                                             // 0x88(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ReadyOrNot.PlayHead
struct FPlayHead
{
public:
	uint8                                        Pad_34D8[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.BasicLevelStats
struct FBasicLevelStats
{
public:
	float                                        BestRating;                                        // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BestTime;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimesCompleted;                                    // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.CharacterSharedAnim
struct FCharacterSharedAnim
{
public:
	class UAnimMontage*                          TP_Anim;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FP_Anim;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.CharacterFPAnim
struct FCharacterFPAnim
{
public:
	class UAnimMontage*                          FP_Anim;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.CharacterTPAnim
struct FCharacterTPAnim
{
public:
	class UAnimMontage*                          TP_Anim;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.CoverDirectionalTrans
struct FCoverDirectionalTrans
{
public:
	class UAnimMontage*                          CoverTrans_0;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DistanceOffsetCover_0;                             // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CoverTrans_90;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DistanceOffsetCover_90;                            // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.CoverTrans
struct FCoverTrans
{
public:
	class UAnimMontage*                          CoverEnterTrans;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          CoverExitTrans;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ReadyOrNot.CoverDataMain
struct FCoverDataMain
{
public:
	class UAnimSequence*                         CoverIdlePose;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVerticalExposure;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverDirectionalTrans                CoverEnterTrans;                                   // 0x10(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverDirectionalTrans                CoverExitTrans;                                    // 0x40(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                          SideSwitchTrans;                                   // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverTrans                           AimingHTrans;                                      // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverTrans                           BlindFireHTrans;                                   // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                         BlindFireHIdlePose;                                // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AimingHIdlePose;                                   // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverTrans                           AimingVTrans;                                      // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverTrans                           BlindFireVTrans;                                   // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                         BlindFireVIdlePose;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AimingVIdlePose;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.PMap
struct FPMap
{
public:
	TArray<class FString>                        BLPN;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        BLPHZ;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        BLWT;                                              // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        BLDLLHZ;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        BLDLLN;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.ChannelInfo
struct FChannelInfo
{
public:
	uint8                                        Pad_34DC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.MirrorReflectionSettings
struct FMirrorReflectionSettings
{
public:
	float                                        MirrorResolutionScale;                             // 0x0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowAntiAliasing : 1;                             // Mask: 0x1, PropSize: 0x10x4(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDecals : 1;                                   // Mask: 0x2, PropSize: 0x10x4(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDynamicShadows : 1;                           // Mask: 0x4, PropSize: 0x10x4(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.SteamAuthenticationToken
struct FSteamAuthenticationToken
{
public:
	class FString                                RgchTokenString;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UnTokenLen;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       SteamId;                                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ReadyOrNot.RelevancyTracker
struct FRelevancyTracker
{
public:
	float                                        TimeUntilRecheck;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.SequencedVOLookup
struct FSequencedVOLookup
{
public:
	TArray<int32>                                LookupOrder;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.ReplaySocket
struct FReplaySocket
{
public:
	class FString                                SocketName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendlySocketName;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.ReplaySubMesh
struct FReplaySubMesh
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendlyMeshName;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplaySocket>                 ReplaySockets;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x770 - 0x770)
// ScriptStruct ReadyOrNot.ReadyOrNotAnimInstanceProxyTP
struct FReadyOrNotAnimInstanceProxyTP : public FAnimInstanceProxy
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.RoNStyleIdleData
struct FRoNStyleIdleData
{
public:
	TArray<class UAnimSequence*>                 BaseIdleData;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.RoNStyleTurnData
struct FRoNStyleTurnData
{
public:
	class UAimOffsetBlendSpace*                  AimOffset;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn45_Left;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn45_Right;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn90_Left;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn90_Right;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn180_Left;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn180_Right;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn135_Left;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Turn135_Right;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ReadyOrNot.RoNGaitTransitionData
struct FRoNGaitTransitionData
{
public:
	class FString                                Start_Section;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_45_Left;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_45_Right;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_90_Left;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_90_Right;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_180;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_180_Left;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_180_Right;                                   // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_135_Left;                                    // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Start_135_Right;                                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Stop_Section;                                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop;                                              // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_45_Left;                                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_45_Right;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_90_Left;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_90_Right;                                     // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_180;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_180_Left;                                     // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_180_Right;                                    // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_135_Left;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Stop_135_Right;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Pivot_Section;                                     // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot;                                             // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_45_Left;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_45_Right;                                    // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_90_Left;                                     // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_90_Right;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_180;                                         // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_180_Left;                                    // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_180_Right;                                   // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_135_Left;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Pivot_135_Right;                                   // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.RoNLeanMotion
struct FRoNLeanMotion
{
public:
	class UAnimSequence*                         Base;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         BaseLeanLeft;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         BaseLeanRight;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ReadyOrNot.RoNGaitLocomotionData
struct FRoNGaitLocomotionData
{
public:
	struct FRoNLeanMotion                        Fwd;                                               // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        FwdLeft;                                           // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        FwdRight;                                          // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        Left;                                              // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        Right;                                             // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        Bwd;                                               // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        BwdLeft;                                           // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNLeanMotion                        BwdRight;                                          // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct ReadyOrNot.RoNGaitType
struct FRoNGaitType
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoNGaitTransitionData                TransitionData;                                    // 0x10(0x120)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRoNGaitLocomotionData                LocomotionData;                                    // 0x130(0xC0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ReadyOrNot.RoNMovementStyle
struct FRoNMovementStyle
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStrafeMovement;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLoweredSet;                                     // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemOverrideRule                 ItemOverrideRule;                                  // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRoNStyleIdleData                     IdleData;                                          // 0x10(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRoNStyleTurnData                     TurnData;                                          // 0x20(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FRoNGaitType>                  GaitEntries;                                       // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBlendSpace*                           StrafeBS;                                          // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           NonStrafeBS;                                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x250 (0x250 - 0x0)
// ScriptStruct ReadyOrNot.RoNStyleSlotData
struct FRoNStyleSlotData
{
public:
	struct FRoNStyleIdleData                     IdleData;                                          // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRoNStyleTurnData                     TurnData;                                          // 0x10(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRoNGaitTransitionData                TransitionData;                                    // 0x58(0x120)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRoNGaitLocomotionData                LocomotionData;                                    // 0x178(0xC0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                         IdleReference;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           StrafeBSData;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           NonStrafeBSData;                                   // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ReadyOrNot.RoNMoveStyleTable
struct FRoNMoveStyleTable : public FTableRowBase
{
public:
	TArray<struct FRoNMovementStyle>             MoveStyles;                                        // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.WeaponSoundData
struct FWeaponSoundData
{
public:
	class USoundCue*                             Gunshot;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Gunshot_Supressed;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GunTail;                                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GunTail_Supressed;                                 // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.TherapistReminderEvent
struct FTherapistReminderEvent
{
public:
	float                                        SquadAverageStressRequired;                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EventText;                                         // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.RosterTraitEntry
struct FRosterTraitEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class URosterTrait>           Trait;                                             // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.ObjectiveSpawn
struct FObjectiveSpawn
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Type;                                              // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class AAISpawn*>                      Spawners;                                          // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.RosterActiveTraitInfo
struct FRosterActiveTraitInfo
{
public:
	class URosterTrait*                          Trait;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.ScopeModifications
struct FScopeModifications
{
public:
	class UClass*                                WeaponClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalOffset;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalOffset;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceOffset;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CustomWeaponMesh;                                  // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HideBone;                                          // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsSecondarySights;                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MeshSpace_ADS_SecondaryPos;                        // 0x2C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MeshSpace_ADS_SecondaryRot;                        // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.ScoreBonus
struct FScoreBonus
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_298 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ScoreName;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequired : 1;                                     // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGiven : 1;                                        // Mask: 0x2, PropSize: 0x10x1C(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWasDisplayedOnHUD : 1;                            // Mask: 0x4, PropSize: 0x10x1C(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_299 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ScoreTextOnHUD;                                    // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.ScorePenalty
struct FScorePenalty
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ScoreName;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGiven : 1;                                        // Mask: 0x1, PropSize: 0x10x1C(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWasDisplayedOnHUD : 1;                            // Mask: 0x2, PropSize: 0x10x1C(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29B : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ScoreTextOnHUD;                                    // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ReadyOrNot.ScoringDataTable
struct FScoringDataTable : public FTableRowBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveLevel                   ObjectiveLevel;                                    // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FScoreBonus>                   Bonuses;                                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FScorePenalty>                 Penalties;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bRequiredToClearMission : 1;                       // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiredToSoftClearMission : 1;                   // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29C : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OrderPriority;                                     // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.ScoreData
struct FScoreData
{
public:
	TArray<struct FScoreBonus>                   Bonuses;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FScorePenalty>                 Penalties;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bHiddenScore : 1;                                  // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScoringComponent*                     FromScoringComponent;                              // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.ScoreGroup
struct FScoreGroup
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveLevel                   ObjectiveLevel;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiredToClearMission : 1;                       // Mask: 0x1, PropSize: 0x10x11(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiredToSoftClearMission : 1;                   // Mask: 0x2, PropSize: 0x10x11(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29E : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OrderPriority;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FScoreData>                    Scores;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FScoreData>                    InactiveScores;                                    // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.ScorePenaltyData
struct FScorePenaltyData
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PenaltyCount;                                      // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ReadyOrNot.KeyBinding
struct FKeyBinding
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Axis;                                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BindingName;                                       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FriendlyName;                                      // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputKeyCategoryV2               InputKeyCategory;                                  // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CannotBeUnbindable;                                // 0x45(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x46(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34EF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.ShotgunVisuals
struct FShotgunVisuals
{
public:
	TArray<class UStaticMesh*>                   ShellVisuals;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.NodePath
struct FNodePath
{
public:
	uint8                                        Pad_34F0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReadyOrNot.NodePair
struct FNodePair
{
public:
	uint8                                        Pad_34F1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ReadyOrNot.PathAwarenessInfo
struct FPathAwarenessInfo
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SensedFrom;                                        // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Age;                                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ReadyOrNot.SharedTeamData
struct FSharedTeamData
{
public:
	uint8                                        Pad_34F3[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CommandLocation;                                   // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousCommandLocation;                           // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamType                         CommandTeam;                                       // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumInTeam;                                         // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F4[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x64 (0x90 - 0x2C)
// ScriptStruct ReadyOrNot.SharedStackUpData
struct FSharedStackUpData : public FSharedTeamData
{
public:
	uint8                                        Pad_34F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADoor*                                 StackUpDoor;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACyberneticCharacter*                  DoorChecker;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASWATCharacter*>                StackUpSortedSwat;                                 // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class ADoor*                                 DoorToClose;                                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F6[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x108 - 0x90)
// ScriptStruct ReadyOrNot.SharedBreachData
struct FSharedBreachData : public FSharedStackUpData
{
public:
	class ACyberneticCharacter*                  DoorUser;                                          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACyberneticCharacter*                  DoorBreacher;                                      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACyberneticCharacter*                  DoorScanner;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACyberneticCharacter*                  ShieldUser;                                        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACyberneticCharacter*                  BreachCaller;                                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 DoorBreachItemClass;                               // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABaseItem>                 DoorUseItemClass;                                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDoorBreachActivity*                   DoorUseActivity;                                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDoorBreachActivity*                   DoorBreachActivity;                                // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScanDoorActivity*                     DoorScanActivity;                                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASWATCharacter*>                ClearingSortedSwat;                                // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x30 - 0x2C)
// ScriptStruct ReadyOrNot.SharedFallInData
struct FSharedFallInData : public FSharedTeamData
{
public:
	uint8                                        Pad_34F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ReadyOrNot.Room
struct FRoom
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            Location;                                          // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADoor*                                 RootDoor;                                          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AThreatAwarenessActor*>         Threats;                                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<class ADoor*>                         AdditionalRootDoors;                               // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<class FName>                          ConnectingRooms;                                   // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	bool                                         bClearedBySwat;                                    // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearedByTrailers;                                // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.RoomGenData
struct FRoomGenData
{
public:
	TArray<struct FRoom>                         Rooms;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ReadyOrNot.TutorialDescriptionInput
struct FTutorialDescriptionInput
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeyIndex;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ReadyOrNot.TutorialWidgetData
struct FTutorialWidgetData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTutorialDescriptionInput>     DescriptionInputs;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bGamepadDescription;                               // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GamepadDescription;                                // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTutorialDescriptionInput>     GamepadDescriptionInputs;                          // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            Media;                                             // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ReadyOrNot.CharacterCollisionTemplate
struct FCharacterCollisionTemplate
{
public:
	uint8                                        Pad_34FD[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x118 - 0x8)
// ScriptStruct ReadyOrNot.RonInputKeyGamePadIconTable
struct FRonInputKeyGamePadIconTable : public FTableRowBase
{
public:
	struct FSlateBrush                           PS5;                                               // 0x8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           XSX;                                               // 0x90(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ReadyOrNot.RonKey
struct FRonKey
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AlternativeInputName;                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconBrush;                                         // 0x20(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ReadyOrNot.RonInputKeyTable
struct FRonInputKeyTable : public FTableRowBase
{
public:
	struct FRonKey                               Key;                                               // 0x8(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReadyOrNot.SpeedRange
struct FSpeedRange
{
public:
	float                                        Speed;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomSpeed : 1;                                  // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_34FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.CharacterPersonalizationData
struct FCharacterPersonalizationData
{
public:
	enum class EGameVersionRestriction           LockedToDLC;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowName;                                           // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3500[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FriendlyName;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.LoadoutEquipOptions
struct FLoadoutEquipOptions
{
public:
	enum class EItemCategory                     EquipItemCategory;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicates;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3501[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                OverridePlayerState;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSanitizeLoadout;                                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3502[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.SubtitleParameters
struct FSubtitleParameters
{
public:
	uint8                                        Pad_3503[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.SubtitleData
struct FSubtitleData
{
public:
	class FString                                Speaker;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpeakerTag;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dialogue;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3504[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ReadyOrNot.SuspectArmourData
struct FSuspectArmourData : public FTableRowBase
{
public:
	TSoftClassPtr<class ASuspectArmour>          BlueprintClass;                                    // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         Mesh;                                              // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHelmet;                                         // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ArmourLevel;                                       // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3505[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Durability;                                        // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplier;                                  // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpallingChance;                                    // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSpeedMultiplier;                           // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementAccelerationMultiplier;                    // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       HitParticleEffect;                                 // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            BlockedSoundEvent;                                 // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            PenetratedSoundEvent;                              // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Footsteps;                                         // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ReadyOrNot.ClearQueueInfo
struct FClearQueueInfo
{
public:
	TMap<class ADoor*, class AThreatAwarenessActor*> Data;                                              // 0x0(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3506[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct ReadyOrNot.TableTennisGame
struct FTableTennisGame
{
public:
	float                                        TimeToStart;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GameOverPauseTime;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftPaddlePosition;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightPaddlePosition;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BallPosition;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BallVelocity;                                      // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LeftScore;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RightScore;                                        // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3507[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.LookAtPoint
struct FLookAtPoint
{
public:
	struct FIntVector                            Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3508[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADoor*                                 LinkedDoor;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.ExitRoute
struct FExitRoute
{
public:
	TArray<class ADoor*>                         Doors;                                             // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class AThreatAwarenessActor*>         ThreatsOnRoute;                                    // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	float                                        PathCost;                                          // 0x20(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x24(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.ExitData
struct FExitData
{
public:
	TArray<struct FExitRoute>                    PossibleRoutes;                                    // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3509[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.TOCData
struct FTOCData
{
public:
	class FString                                TOCLine;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETOCPriority                      QueuePriority;                                     // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsNetworked : 1;                                  // Mask: 0x1, PropSize: 0x10x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct ReadyOrNot.TutorialMissionData
struct FTutorialMissionData
{
public:
	enum class ETutorialMissionType              MissionType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnSWATTeam;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         Loadout;                                           // 0x8(0x188)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                SpawnTag;                                          // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.TutorialActionPromptSlot
struct FTutorialActionPromptSlot
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputEvent;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionText;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsAxisEvent;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KeyIndex;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCustomActionText : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2A0 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_350E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomActionPromptText;                            // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ReadyOrNot.PromptInfo
struct FPromptInfo
{
public:
	enum class ETutorialMessageContext           PromptContext;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  ActionKey;                                         // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputType;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionText;                                        // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.AnimatedIcon
struct FAnimatedIcon
{
public:
	TArray<class UTexture2D*>                    Icons;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3511[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ReadyOrNot.AnimatedIconTable
struct FAnimatedIconTable : public FTableRowBase
{
public:
	struct FAnimatedIcon                         AnimatedIcon;                                      // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ReadyOrNot.AttachmentUIElements
struct FAttachmentUIElements
{
public:
	TSoftObjectPtr<class UTexture2D>             ImageOfScope;                                      // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SightPicture;                                      // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             AttachmentIcon;                                    // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ReadyOrNot.WidgetLookupData
struct FWidgetLookupData : public FTableRowBase
{
public:
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowMouseCursor;                                  // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMouseUIOnly;                                      // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToWidgetStack;                                 // 0x22(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseOnRespawn;                                   // 0x23(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibilityUponCreation;                            // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3512[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZOrder;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3513[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ReadyOrNot.InputEntry
struct FInputEntry
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Bind;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  DefaultKeyBind1;                                   // 0x28(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  DefaultKeyBind2;                                   // 0x40(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMapType                          MappingType;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AxisScale;                                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayOnScreen;                                  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 ShowWithEquippedItem;                              // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ReadyOrNot.SavedRoomData
struct FSavedRoomData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RootDoorID;                                        // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Threats;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       AdditionalRootDoors;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ConnectingRooms;                                   // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ReadyOrNot.SavedCoverActor
struct FSavedCoverActor
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                CoverObjectName;                                   // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverRail                            CoverRail;                                         // 0x50(0x38)(NativeAccessSpecifierPublic)
	enum class EStandCoverType                   StandCoverType;                                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrouchCoverType                  CrouchCoverType;                                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3516[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverDirection                       StandCoverDirection;                               // 0x8C(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverDirection                       CrouchCoverDirection;                              // 0xA4(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCrouchOnlyCover;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCoverType;                                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3517[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ReadyOrNot.SavedExitRoute
struct FSavedExitRoute
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PathCost;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Doors;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ThreatsOnRoute;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ReadyOrNot.SavedExitData
struct FSavedExitData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3518[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavedExitRoute>               PossibleRoutes;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReadyOrNot.SavedSwatLookAtPoint
struct FSavedSwatLookAtPoint
{
public:
	struct FIntVector                            Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinkedDoorID;                                      // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ReadyOrNot.SavedThreatAwarenessActor
struct FSavedThreatAwarenessActor
{
public:
	struct FVector                               UniqueId;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EThreatLevel                      ThreatLevel;                                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3519[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavedExitData>                Exits;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       UniqueExits;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                OwningRoom;                                        // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Door;                                              // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFrontDoorThreat;                                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOutside;                                        // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavedSwatLookAtPoint>         SwatLookAtPoints;                                  // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PathableThreats;                                   // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReadyOrNot.SavedClearPoint
struct FSavedClearPoint
{
public:
	struct FVector                               Location_Relative;                                 // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Stage;                                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClearDirection                   Direction;                                         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CoverLandmarks;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHasLineOfSightToDoor;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ReadyOrNot.SavedStackUpActor
struct FSavedStackUpActor
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Depth;                                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESquadPosition                    StackUpPosition;                                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinkedDoorID;                                      // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct ReadyOrNot.SavedDoorActor
struct FSavedDoorActor
{
public:
	struct FVector                               UniqueId;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedThreatAwarenessActor            FrontDoorThreat;                                   // 0x10(0x80)(NativeAccessSpecifierPublic)
	struct FSavedThreatAwarenessActor            BackDoorThreat;                                    // 0x90(0x80)(NativeAccessSpecifierPublic)
	TArray<struct FSavedClearPoint>              FrontLeftClearPoints;                              // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedClearPoint>              FrontRightClearPoints;                             // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedClearPoint>              BackLeftClearPoints;                               // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedClearPoint>              BackRightClearPoints;                              // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedThreatAwarenessActor>    FrontThreats;                                      // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedThreatAwarenessActor>    BackThreats;                                       // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedStackUpActor>            FrontLeftStackups;                                 // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedStackUpActor>            FrontRightStackups;                                // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedStackUpActor>            BackLeftStackups;                                  // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSavedStackUpActor>            BackRightStackups;                                 // 0x1A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EDoorRoomPosition                 FrontRoomPosition;                                 // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDoorRoomPosition                 BackRoomPosition;                                  // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFrame;                                         // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanIssueOrdersOnFrontSide;                        // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanIssueOrdersOnBackSide;                         // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


