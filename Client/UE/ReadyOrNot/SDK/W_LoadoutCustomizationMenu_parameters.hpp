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

// 0x1 (0x1 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_IsEnabled
struct UW_LoadoutCustomizationMenu_C_Get_Quatermaster_Box_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FindIconFromItemClass
struct UW_LoadoutCustomizationMenu_C_FindIconFromItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Return_Value;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_FindIconFromItemClass_Return_Value;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeOutItemInfoCard
struct UW_LoadoutCustomizationMenu_C_FadeOutItemInfoCard_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeInItemInfoCard
struct UW_LoadoutCustomizationMenu_C_FadeInItemInfoCard_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_CurrentMenuDirectory_Text
struct UW_LoadoutCustomizationMenu_C_Get_CurrentMenuDirectory_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetCurrentMenuDirectory_Return_Value;     // 0x20(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetCurrentMenuDirectory_Return_Value_1;   // 0x40(0x18)(None)
	class FText                                  CallFunc_GetCurrentMenuDirectory_Return_Value_2;   // 0x58(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
};

// 0x3 (0x3 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanRenamePreset
struct UW_LoadoutCustomizationMenu_C_CanRenamePreset_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanRenamePreset_Return_Value;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Escape
struct UW_LoadoutCustomizationMenu_C_Escape_Params
{
public:
	bool                                         CallFunc_CanExit_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemPresetButtonClicked (Internal)
struct UW_LoadoutCustomizationMenu_C_OnLoadoutItemPresetButtonClicked__Internal__Params
{
public:
	class UW_LoadoutItem_Preset_C*               Loadout_Item_Preset;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E8 (0x1E8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyUp
struct UW_LoadoutCustomizationMenu_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_HandleMenuWideMultiInput__Up__Return_Value; // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x130(0xB8)(None)
};

// 0x688 (0x688 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyDown
struct UW_LoadoutCustomizationMenu_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HandleMenuWideMultiInput__Down__Return_Value; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_1;                     // 0x148(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_2;                     // 0x168(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_8;          // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_3;                     // 0x188(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_9;          // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_10;         // 0x1A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_11;         // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_12;         // 0x1A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_4;                     // 0x1A8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_13;         // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_14;         // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_15;         // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x1C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_5;                     // 0x1C8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_16;         // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_17;         // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_18;         // 0x1E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_19;         // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_6;                     // 0x1E8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_20;         // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_21;         // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_13;                 // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_22;         // 0x205(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_23;         // 0x206(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_7;                     // 0x208(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_14;                 // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_24;         // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_15;                 // 0x222(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_25;         // 0x223(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_16;                 // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_17;                 // 0x225(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x228(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue_1;                  // 0x2E0(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x398(0xB8)(None)
	bool                                         CallFunc_HandleMenuWideInput_Return_Value;         // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x458(0xB8)(None)
	bool                                         CallFunc_IsUIHidden_Return_Value;                  // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_2;                    // 0x518(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_3;                    // 0x5D0(0xB8)(None)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.GetCurrentlyFocusedWidget
struct UW_LoadoutCustomizationMenu_C_GetCurrentlyFocusedWidget_Params
{
public:
	class UWidget*                               Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_Visibility
struct UW_LoadoutCustomizationMenu_C_Get_Quatermaster_Box_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.AnyLoadoutCategoryWidgetHovered
struct UW_LoadoutCustomizationMenu_C_AnyLoadoutCategoryWidgetHovered_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanUnselect
struct UW_LoadoutCustomizationMenu_C_CanUnselect_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanUnselect_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x43 (0x43 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ApplyPresetToPreviewCharacterWeapon
struct UW_LoadoutCustomizationMenu_C_ApplyPresetToPreviewCharacterWeapon_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutItem_Preset_C*               Loadout_Item_Preset;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDeselectAll;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Temp_byte_Variable;                                // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemCategory                     Temp_byte_Variable_1;                              // 0x2A(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CE9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Temp_byte_Variable_2;                              // 0x30(0x10)(ReferenceParm)
	enum class EItemCategory                     Temp_byte_Variable_3;                              // 0x40(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xDC (0xDC - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateFireModeOptions
struct UW_LoadoutCustomizationMenu_C_UpdateFireModeOptions_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x10(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x20(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<enum class EFireMode>                 Temp_byte_Variable;                                // 0x30(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_3;                            // 0x50(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFireMode                         CallFunc_Map_Find_Value;                           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_2;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_3;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFireMode                         CallFunc_Array_Get_Item;                           // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.RenamePreset
struct UW_LoadoutCustomizationMenu_C_RenamePreset_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverAll
struct UW_LoadoutCustomizationMenu_C_UnhoverAll_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_LoadoutItemInfo_Container_Visibility
struct UW_LoadoutCustomizationMenu_C_Get_LoadoutItemInfo_Container_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutCategory
struct UW_LoadoutCustomizationMenu_C_UnhoverLoadoutCategory_Params
{
public:
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutCategory
struct UW_LoadoutCustomizationMenu_C_HoverLoadoutCategory_Params
{
public:
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutCategory
struct UW_LoadoutCustomizationMenu_C_UnselectLoadoutCategory_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUnselect_Return_Value;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x50(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category_1;         // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_2;             // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category_2;         // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutCategory
struct UW_LoadoutCustomizationMenu_C_SelectLoadoutCategory_Params
{
public:
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousRow
struct UW_LoadoutCustomizationMenu_C_PreviousRow_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextRow
struct UW_LoadoutCustomizationMenu_C_NextRow_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5F2 (0x5F2 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateItemInfoCard
struct UW_LoadoutCustomizationMenu_C_UpdateItemInfoCard_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_FindIconFromItemClass_Return_Value;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_1;                              // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_2;                              // 0x19(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D1B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Temp_byte_Variable_3;                              // 0x20(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EStretch                          Temp_byte_Variable_4;                              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetItemLookupDataTable_ReturnValue;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D1D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EStretch                          K2Node_Select_Default;                             // 0x5F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FocusOnWidget
struct UW_LoadoutCustomizationMenu_C_FocusOnWidget_Params
{
public:
	class UWidget*                               WidgetToFocus;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoView
struct UW_LoadoutCustomizationMenu_C_ScrollIntoView_Params
{
public:
	class UWidget*                               WidgetToFind;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoTop
struct UW_LoadoutCustomizationMenu_C_ScrollIntoTop_Params
{
public:
	class UWidget*                               WidgetToFind;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoCenter
struct UW_LoadoutCustomizationMenu_C_ScrollIntoCenter_Params
{
public:
	class UWidget*                               WidgetToFind;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked (Internal)
struct UW_LoadoutCustomizationMenu_C_OnLoadoutItemButtonClicked__Internal__Params
{
public:
	enum class EItemClass                        ItemClass;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemObjectClass;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTactical;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TacticalSlot;                                      // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMultipleTacticalSlots;                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTacticalSlots;                                  // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Starting_Tactical_Slot;                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      LastSelectedLoadoutItem;                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        InvalidTacticals;                                  // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        ValidTacticals;                                    // 0x40(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreMissionPlanning*                   CallFunc_GetPremissionPlanning_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered (Internal)
struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonHovered__Internal__Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D30[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked (Internal)
struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonClicked__Internal__Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Can_Interact_Pre_Mission_Planning_CanInteract; // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_LoadoutCategory_C*>          CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_LoadoutCategory_C*                  CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D32[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_1;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default_2;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked
struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonClicked_Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered
struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonHovered_Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
struct UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked
struct UW_LoadoutCustomizationMenu_C_OnLoadoutItemButtonClicked_Params
{
public:
	enum class EItemClass                        ItemClass;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemObjectClass;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTactical;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TacticalSlot;                                      // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMultipleTacticalSlots;                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTacticalSlots;                                  // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Starting_Tactical_Slot;                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      Loadout_Item_Widget;                               // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature
struct UW_LoadoutCustomizationMenu_C_BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Tick
struct UW_LoadoutCustomizationMenu_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonUnhovered
struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonUnhovered_Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapSelectedEquippingCharacter
struct UW_LoadoutCustomizationMenu_C_SwapSelectedEquippingCharacter_Params
{
public:
	enum class EEquippingSwat                    NewEquippingSwat;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapPlayer
struct UW_LoadoutCustomizationMenu_C_SwapPlayer_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapAlpha
struct UW_LoadoutCustomizationMenu_C_SwapAlpha_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapBeta
struct UW_LoadoutCustomizationMenu_C_SwapBeta_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapCharlie
struct UW_LoadoutCustomizationMenu_C_SwapCharlie_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapDelta
struct UW_LoadoutCustomizationMenu_C_SwapDelta_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x269 (0x269 - 0x0)
// Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ExecuteUbergraph_W_LoadoutCustomizationMenu
struct UW_LoadoutCustomizationMenu_C_ExecuteUbergraph_W_LoadoutCustomizationMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameMode*                   CallFunc_GetReadyOrNotGameMode_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumPlayers_ReturnValue;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Temp_byte_Variable;                                // 0x28(0x10)(ReferenceParm)
	enum class EItemCategory                     Temp_byte_Variable_1;                              // 0x38(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x7C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x9C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xAC(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xBC(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_CustomEvent_LoadoutCategory_2;              // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0xD8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_LoadoutCategory_C*                  K2Node_CustomEvent_LoadoutCategory_1;              // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x100(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category;           // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x13C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3D4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_DynamicCast_AsW_Loadout_Category_1;         // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton;          // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemClass                        K2Node_CustomEvent_ItemClass;                      // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D4E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_ItemObjectClass;                // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsTactical;                    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D4F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TacticalSlot;                   // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsMultipleTacticalSlots;       // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_MaxTacticalSlots;               // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Starting_Tactical_Slot;         // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      K2Node_CustomEvent_Loadout_Item_Widget;            // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption;              // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon;             // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D53[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon_1;           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon_2;           // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon_3;           // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_3;                // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1E4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  K2Node_CustomEvent_LoadoutCategory;                // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    K2Node_CustomEvent_NewEquippingSwat;               // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_CustomEvent_Button_4;                       // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button_3;                       // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPreMissionPlanning*                   CallFunc_GetPremissionPlanning_ReturnValue;        // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button_2;                       // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button_1;                       // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button;                         // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPreMissionPlanning*                   CallFunc_GetPremissionPlanning_ReturnValue_1;      // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


