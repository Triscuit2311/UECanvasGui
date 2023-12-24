#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetTutorialWidget
struct UW_HumanCharacter_HUD_V2_C_GetTutorialWidget_Params
{
public:
	class UTutorialWidget*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateSwatTeamStatusVisibility
struct UW_HumanCharacter_HUD_V2_C_UpdateSwatTeamStatusVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowTeamStatus_bShowTeamStatus;       // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowTeamStatus_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetOwningPlayerCharacter
struct UW_HumanCharacter_HUD_V2_C_GetOwningPlayerCharacter_Params
{
public:
	class APlayerCharacter*                      Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowFireModes
struct UW_HumanCharacter_HUD_V2_C_ShowFireModes_Params
{
public:
	class ABaseWeapon*                           Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowMagCheck
struct UW_HumanCharacter_HUD_V2_C_ShowMagCheck_Params
{
public:
	class ABaseMagazineWeapon*                   Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged
struct UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Params
{
public:
	enum class EFireMode                         NewFireMode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14E4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                           K2Node_DynamicCast_AsBase_Weapon;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TickCommandContext
struct UW_HumanCharacter_HUD_V2_C_TickCommandContext_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14F9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_ReturnValue; // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_1;  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1501[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_2;  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1503[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_3;  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1504[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USWATManager*                          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSWATTeamDead_ReturnValue;               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1507[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x78(0x18)(None)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x98(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_150B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRonKey                               CallFunc_ConvertUnrealKeyToRonKey_ReturnValue;     // 0xB8(0xA8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_150C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x168(0x18)(None)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1510[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x188(0x18)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddMapActor
struct UW_HumanCharacter_HUD_V2_C_AddMapActor_Params
{
public:
	class UMapActorComponent*                    MapActorComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UMapActorWidget>           MapActorIconWidgetClass;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSlateBrush                           IconBrush;                                         // 0x10(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                          IconColor;                                         // 0x98(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IconTextColor;                                     // 0xA8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationOffset;                                    // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1526[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapActorWidget*                       ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurrentFireMode
struct UW_HumanCharacter_HUD_V2_C_UpdateCurrentFireMode_Params
{
public:
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1534[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                           K2Node_DynamicCast_AsBase_Weapon;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.FadeInHUD
struct UW_HumanCharacter_HUD_V2_C_FadeInHUD_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitializeItemSelectionPanel
struct UW_HumanCharacter_HUD_V2_C_InitializeItemSelectionPanel_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_153F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1540[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1542[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.IsCurvedHUDEnabled
struct UW_HumanCharacter_HUD_V2_C_IsCurvedHUDEnabled_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurveHUDValue
struct UW_HumanCharacter_HUD_V2_C_UpdateCurveHUDValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleHUDSway
struct UW_HumanCharacter_HUD_V2_C_ToggleHUDSway_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateMapFloors
struct UW_HumanCharacter_HUD_V2_C_UpdateMapFloors_Params
{
public:
	TArray<struct FBuildingFloor>                Floors;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponMagCheck_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnWeaponMagCheck_Event_0_Params
{
public:
	class ABaseMagazineWeapon*                   MagazineWeapon;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddScorePopup
struct UW_HumanCharacter_HUD_V2_C_AddScorePopup_Params
{
public:
	class FText                                  ScoreText;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        ScoreValue;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bGive;                                             // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialPrompt
struct UW_HumanCharacter_HUD_V2_C_ShowTutorialPrompt_Params
{
public:
	class FString                                MessageID;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bFirstShowing;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1557[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MessageTitle;                                      // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                          MessageContent;                                    // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTutorialPrompt
struct UW_HumanCharacter_HUD_V2_C_HideTutorialPrompt_Params
{
public:
	class FString                                MessageID;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialOverview
struct UW_HumanCharacter_HUD_V2_C_ShowTutorialOverview_Params
{
public:
	class FString                                MessageID;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  MessageTitle;                                      // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                          MessageContent;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTeamViewSet_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnTeamViewSet_Event_0_Params
{
public:
	class AReadyOrNotCharacter*                  NewViewCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemEquipped_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnItemEquipped_Event_0_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Pressed_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Pressed_Event_0_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryIndex;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Released_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Released_Event_0_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryIndex;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnCharacterTakeDamage_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnCharacterTakeDamage_Event_0_Params
{
public:
	class AReadyOrNotCharacter*                  InstigatorCharacter;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  DamagedCharacter;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthRemaining;                                   // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_ItemChanged_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_ItemChanged_Event_0_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryIndex;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.RemoveMapActor
struct UW_HumanCharacter_HUD_V2_C_RemoveMapActor_Params
{
public:
	class UMapActorComponent*                    MapActorComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged_Event_0
struct UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Event_0_Params
{
public:
	class APlayerCharacter*                      PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFireMode                         NewFireMode;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFireMode                         LastFireMode;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_0
struct UW_HumanCharacter_HUD_V2_C_CustomEvent_0_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ClearText;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnimate;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoopAnimation;                                    // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_1
struct UW_HumanCharacter_HUD_V2_C_CustomEvent_1_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ClearText;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnimate;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoopAnimation;                                    // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_2
struct UW_HumanCharacter_HUD_V2_C_CustomEvent_2_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ClearText;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnimate;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoopAnimation;                                    // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_3
struct UW_HumanCharacter_HUD_V2_C_CustomEvent_3_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ClearText;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnimate;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoopAnimation;                                    // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_4
struct UW_HumanCharacter_HUD_V2_C_CustomEvent_4_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ClearText;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnimate;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoopAnimation;                                    // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_5
struct UW_HumanCharacter_HUD_V2_C_CustomEvent_5_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ClearText;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnimate;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoopAnimation;                                    // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Tick
struct UW_HumanCharacter_HUD_V2_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.LocalReadyStateChanged
struct UW_HumanCharacter_HUD_V2_C_LocalReadyStateChanged_Params
{
public:
	bool                                         bReady;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddObjectivePopup
struct UW_HumanCharacter_HUD_V2_C_AddObjectivePopup_Params
{
public:
	class FText                                  PopupText;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x588 (0x588 - 0x0)
// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ExecuteUbergraph_W_HumanCharacter_HUD_V2
struct UW_HumanCharacter_HUD_V2_C_ExecuteUbergraph_W_HumanCharacter_HUD_V2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowHud;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD;               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD;           // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD;                 // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload;                // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_LoadHUDSettings_IconScale;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption;    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue;              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1676[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x7C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_167F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x100(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x110(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FBuildingFloor>                K2Node_Event_Floors;                               // 0x120(0x10)(ConstParm, ReferenceParm)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value;    // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1685[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseMagazineWeapon*                   K2Node_CustomEvent_MagazineWeapon;                 // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_ScoreText;                            // 0x148(0x18)(ConstParm)
	int32                                        K2Node_Event_ScoreValue;                           // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bGive;                                // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHealthIconSetting_bShowHealthIcons; // 0x165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHealthIconSetting_ReturnValue;    // 0x166(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;    // 0x167(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHotkeyHintSetting_ReturnValue;        // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_168A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_MessageID_2;                          // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bFirstShowing;                        // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_168D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_MessageTitle_1;                       // 0x188(0x18)(ConstParm)
	TArray<class FText>                          K2Node_Event_MessageContent_1;                     // 0x1A0(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_Event_MessageID_1;                          // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_MessageID;                            // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_MessageTitle;                         // 0x1D0(0x18)(ConstParm)
	TArray<class FText>                          K2Node_Event_MessageContent;                       // 0x1E8(0x10)(ConstParm, ReferenceParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1695[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_TutorialOverviewText_C*             CallFunc_Create_ReturnValue;                       // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_NewViewCharacter;               // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_CustomEvent_Item;                           // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_1;  // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                           K2Node_DynamicCast_AsBase_Weapon;                  // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_169C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_2;  // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_3;  // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_4;  // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_5;  // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_6;  // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_7;  // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_8;  // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_9;  // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_10; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16A2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_11; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_GroupIndex_2;                   // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_CategoryIndex_2;                // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_12; // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_GroupIndex_1;                   // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_CategoryIndex_1;                // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_InstigatorCharacter;            // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_DamagedCharacter;               // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_HealthRemaining;                // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_13; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_GroupIndex;                     // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_CategoryIndex;                  // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetOwningPlayerCharacter_Return_Value_14; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseMagazineWeapon*                   CallFunc_GetEquippedWeapon_ReturnValue;            // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapActorComponent*                    K2Node_Event_MapActorComponent;                    // 0x308(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowHud_1;               // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD_1;             // 0x312(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass_1;           // 0x313(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD_1;         // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD_1;       // 0x315(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat_1;              // 0x316(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD_1;               // 0x317(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload_1;              // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadHUDSettings_IconScale_1;              // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale_1;        // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption_1;  // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames_1;       // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts_1;     // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue_1;            // 0x32A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x32B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      K2Node_CustomEvent_PlayerCharacter;                // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFireMode                         K2Node_CustomEvent_NewFireMode;                    // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFireMode                         K2Node_CustomEvent_LastFireMode;                   // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x364(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText_5;                       // 0x378(0x18)(None)
	bool                                         K2Node_CustomEvent_clearText_5;                    // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAnimate_5;                     // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bLoopAnimation_5;               // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16BD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText_4;                       // 0x398(0x18)(None)
	bool                                         K2Node_CustomEvent_clearText_4;                    // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAnimate_4;                     // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bLoopAnimation_4;               // 0x3B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16BF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText_3;                       // 0x3B8(0x18)(None)
	bool                                         K2Node_CustomEvent_clearText_3;                    // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAnimate_3;                     // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bLoopAnimation_3;               // 0x3D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16C2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText_2;                       // 0x3D8(0x18)(None)
	bool                                         K2Node_CustomEvent_clearText_2;                    // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAnimate_2;                     // 0x3F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bLoopAnimation_2;               // 0x3F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16C5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText_1;                       // 0x3F8(0x18)(None)
	bool                                         K2Node_CustomEvent_clearText_1;                    // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAnimate_1;                     // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bLoopAnimation_1;               // 0x412(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16C7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText;                         // 0x418(0x18)(None)
	bool                                         K2Node_CustomEvent_clearText;                      // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAnimate;                       // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bLoopAnimation;                 // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue_1; // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x440(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x480(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x4A0(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue_2;                    // 0x4C0(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_2;        // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue_3;                    // 0x4E0(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_3;        // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue_4;                    // 0x500(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_4;        // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue_5;                    // 0x520(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_5;        // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x539(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x53A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x53B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x53C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x53D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x53E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x53F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x555(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x556(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x557(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bReady;                               // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMissionPortal*                        CallFunc_GetActorOfClass_ReturnValue;              // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_PopupText;                            // 0x570(0x18)(ConstParm)
};

}
}


