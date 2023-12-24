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
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BackPage
struct UW_LoadoutSlot_v2_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetFocusTarget
struct UW_LoadoutSlot_v2_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.RefreshMunitionButtons
struct UW_LoadoutSlot_v2_C_RefreshMunitionButtons_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MunitionsMaxed_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.MunitionsMaxed
struct UW_LoadoutSlot_v2_C_MunitionsMaxed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentSlotCount_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaximumSlotCount_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.IsNewSubtext
struct UW_LoadoutSlot_v2_C_IsNewSubtext_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x358 (0x358 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnKeyUp
struct UW_LoadoutSlot_v2_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	enum class EUINavigation                     CallFunc_Key_GetNavigationDirectionFromKey_ReturnValue; // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x130(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue_1;                  // 0x1E8(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x2A0(0xB8)(None)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetIconVisibility
struct UW_LoadoutSlot_v2_C_SetIconVisibility_Params
{
public:
	bool                                         SmallIcon;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.RefreshInfo
struct UW_LoadoutSlot_v2_C_RefreshInfo_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemClassText_Category_Text;           // 0x8(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x28(0x18)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetVisualState
struct UW_LoadoutSlot_v2_C_SetVisualState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Pressed;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Equipped;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_Select_Default_1;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetEquippedColorByState_ReturnValue;      // 0x28(0x28)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetNormalColorByState_ReturnValue;        // 0x58(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_3;                           // 0x80(0x28)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetGamepadFontStyles
struct UW_LoadoutSlot_v2_C_GetGamepadFontStyles_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetNormalFontSyles
struct UW_LoadoutSlot_v2_C_GetNormalFontSyles_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UnbindFromButton
struct UW_LoadoutSlot_v2_C_UnbindFromButton_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x64(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindDoubleClick
struct UW_LoadoutSlot_v2_C_BindDoubleClick_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindClick
struct UW_LoadoutSlot_v2_C_BindClick_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindUnhovered
struct UW_LoadoutSlot_v2_C_BindUnhovered_Params
{
public:
	bool                                         CallFunc_GetEquipped_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindPressedState
struct UW_LoadoutSlot_v2_C_BindPressedState_Params
{
public:
	bool                                         CallFunc_GetEquipped_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindHovered
struct UW_LoadoutSlot_v2_C_BindHovered_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEquipped_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindSelectedState
struct UW_LoadoutSlot_v2_C_BindSelectedState_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindToButton
struct UW_LoadoutSlot_v2_C_BindToButton_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BindClicks;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetEquippedColorByState
struct UW_LoadoutSlot_v2_C_GetEquippedColorByState_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x58(0x28)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateDetailFontSize
struct UW_LoadoutSlot_v2_C_UpdateDetailFontSize_Params
{
public:
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        CallFunc_AdjustFontSize_Font;                      // 0x8(0x58)(HasGetValueTypeHash)
	struct FSlateFontInfo                        CallFunc_AdjustFontSize_Font_1;                    // 0x60(0x58)(HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateNameFont
struct UW_LoadoutSlot_v2_C_UpdateNameFont_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          CallFunc_GetNormalFontSyles_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          CallFunc_GetGamepadFontStyles_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.AdjustFontSize
struct UW_LoadoutSlot_v2_C_AdjustFontSize_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x10(0x58)(Parm, OutParm, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x68(0x58)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateStyle
struct UW_LoadoutSlot_v2_C_UpdateStyle_Params
{
public:
	bool                                         bUseGamepad;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        K2Node_Select_Default_3;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetNormalColorByState
struct UW_LoadoutSlot_v2_C_GetNormalColorByState_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x58(0x28)(None)
};

// 0x50 (0x50 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateCurrentItemMap
struct UW_LoadoutSlot_v2_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetLoadoutWidget
struct UW_LoadoutSlot_v2_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.HeaderSubpageNavigation
struct UW_LoadoutSlot_v2_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.PreConstruct
struct UW_LoadoutSlot_v2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnAddedToFocusPath
struct UW_LoadoutSlot_v2_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
struct UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
struct UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateCurrentSlot
struct UW_LoadoutSlot_v2_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateActiveLoadout
struct UW_LoadoutSlot_v2_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.ChangePage
struct UW_LoadoutSlot_v2_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
struct UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetInputMode
struct UW_LoadoutSlot_v2_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.InputMethodChanged
struct UW_LoadoutSlot_v2_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetArmorMaterial
struct UW_LoadoutSlot_v2_C_SetArmorMaterial_Params
{
public:
	class UArmourMaterial*                       Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetManualDetails
struct UW_LoadoutSlot_v2_C_SetManualDetails_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  SlotName;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Subtext;                                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                            ItemImage;                                         // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.Hide
struct UW_LoadoutSlot_v2_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.Reveal
struct UW_LoadoutSlot_v2_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.ShowSubtext
struct UW_LoadoutSlot_v2_C_ShowSubtext_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Show;                                              // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3BC (0x3BC - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.ExecuteUbergraph_W_LoadoutSlot_v2
struct UW_LoadoutSlot_v2_C_ExecuteUbergraph_W_LoadoutSlot_v2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEquipped_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEquipped_ReturnValue_1;                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetEquipped_ReturnValue_2;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetEquipped_ReturnValue_3;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetEquipped_ReturnValue_4;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_4;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_3;               // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUserFocus_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x40(0x188)(None)
	class FName                                  K2Node_Event_PageName;                             // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x1E4(0x8)(NoDestructor)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetEquipped_ReturnValue_5;                // 0x1EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArmourMaterial*                       K2Node_Event_Item;                                 // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_ItemName;                       // 0x1F8(0x18)(None)
	class FText                                  K2Node_CustomEvent_SlotName;                       // 0x210(0x18)(None)
	class FText                                  K2Node_CustomEvent_Subtext;                        // 0x228(0x18)(None)
	class UTexture2D*                            K2Node_CustomEvent_ItemImage;                      // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_OptionNameID;                         // 0x24C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x260(0x50)(None)
	bool                                         Temp_bool_Variable;                                // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x2B8(0x28)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x2E8(0x28)(None)
	float                                        K2Node_Event_Delay_1;                              // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x318(0x28)(None)
	float                                        K2Node_Event_Delay;                                // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMunitionTypeText_MunitionText;         // 0x358(0x18)(None)
	class FText                                  K2Node_Event_Text;                                 // 0x370(0x18)(ConstParm)
	bool                                         K2Node_Event_Show;                                 // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x390(0x18)(None)
	bool                                         CallFunc_IsNewSubtext_ReturnValue;                 // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3AC(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnDoubleClick__DelegateSignature
struct UW_LoadoutSlot_v2_C_OnDoubleClick__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnHover__DelegateSignature
struct UW_LoadoutSlot_v2_C_OnHover__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnClick__DelegateSignature
struct UW_LoadoutSlot_v2_C_OnClick__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


