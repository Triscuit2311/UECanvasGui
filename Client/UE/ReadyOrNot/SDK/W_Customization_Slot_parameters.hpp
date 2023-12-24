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
// Function W_Customization_Slot.W_Customization_Slot_C.GetFocusTarget
struct UW_Customization_Slot_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BackPage
struct UW_Customization_Slot_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetHoveredState
struct UW_Customization_Slot_C_SetHoveredState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.GetTagColor
struct UW_Customization_Slot_C_GetTagColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x20(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x58(0x28)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.UpdateNameText
struct UW_Customization_Slot_C_UpdateNameText_Params
{
public:
	bool                                         CallFunc_TextIsNotEmpty_NotEmpty;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.UpdateVariantCount
struct UW_Customization_Slot_C_UpdateVariantCount_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)(None)
};

// 0x24 (0x24 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetCustomIconTexture
struct UW_Customization_Slot_C_SetCustomIconTexture_Params
{
public:
	class UTexture2D*                            IconTexture;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MatchSize;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CustomSize;                                        // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.ShowMissingData
struct UW_Customization_Slot_C_ShowMissingData_Params
{
public:
	bool                                         NoData;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LineThickness;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWidthByShape_Width;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHeightByShape_Height;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x48(0x28)(None)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWidthByShape_Width_1;                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHeightByShape_Height_1;                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetLocked
struct UW_Customization_Slot_C_SetLocked_Params
{
public:
	bool                                         IsLocked;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetEquipped
struct UW_Customization_Slot_C_SetEquipped_Params
{
public:
	bool                                         bEquipped;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x75 (0x75 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.UpdateIcon
struct UW_Customization_Slot_C_UpdateIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x38(0x28)(None)
	bool                                         CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_SoftObjectReference_ReturnValue_1; // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetupColors
struct UW_Customization_Slot_C_SetupColors_Params
{
public:
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x10(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x48(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_2;             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_2;              // 0x80(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_3;             // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_3;              // 0xB8(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_4;             // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_4;              // 0xF0(0x28)(None)
};

// 0x10 (0x10 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.UpdateStyle
struct UW_Customization_Slot_C_UpdateStyle_Params
{
public:
	bool                                         bUseGamepad;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetVisualState
struct UW_Customization_Slot_C_SetVisualState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Pressed;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Equipped;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Highlighted;                                       // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          CallFunc_GetTagColor_ReturnValue;                  // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x28(0x88)(ConstParm)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BindDoubleClick
struct UW_Customization_Slot_C_BindDoubleClick_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BindClick
struct UW_Customization_Slot_C_BindClick_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BindPressedState
struct UW_Customization_Slot_C_BindPressedState_Params
{
public:
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BindSelectedState
struct UW_Customization_Slot_C_BindSelectedState_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BindHovered
struct UW_Customization_Slot_C_BindHovered_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.UnbindFromButton
struct UW_Customization_Slot_C_UnbindFromButton_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_180D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x64(0x10)(ZeroConstructor, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BindToButton
struct UW_Customization_Slot_C_BindToButton_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BindClicks;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1812[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetLabelText
struct UW_Customization_Slot_C_SetLabelText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x14 (0x14 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.GetWidthByShape
struct UW_Customization_Slot_C_GetWidthByShape_Params
{
public:
	float                                        Width;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_BoxShape                        Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1817[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.GetHeightByShape
struct UW_Customization_Slot_C_GetHeightByShape_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_BoxShape                        Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.Reveal
struct UW_Customization_Slot_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.Hide
struct UW_Customization_Slot_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetInputMode
struct UW_Customization_Slot_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.ChangePage
struct UW_Customization_Slot_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.PreConstruct
struct UW_Customization_Slot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetItem
struct UW_Customization_Slot_C_SetItem_Params
{
public:
	class ULoadoutCustomization*                 Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
struct UW_Customization_Slot_C_BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_Customization_Slot_C_BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.InputMethodChanged
struct UW_Customization_Slot_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetToggleable
struct UW_Customization_Slot_C_SetToggleable_Params
{
public:
	bool                                         Toggleable;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.SetHighlighted
struct UW_Customization_Slot_C_SetHighlighted_Params
{
public:
	bool                                         Highlight;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature
struct UW_Customization_Slot_C_BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.ExecuteUbergraph_W_Customization_Slot
struct UW_Customization_Slot_C_ExecuteUbergraph_W_Customization_Slot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_Delay_1;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1837[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1839[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutCustomization*                 K2Node_CustomEvent_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWidthByShape_Width;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHeightByShape_Height;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomizationCategoryText_Category_Text; // 0x50(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_183D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Toggleable;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Highlight;                      // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1840[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotRightClickPressed__DelegateSignature
struct UW_Customization_Slot_C_OnSlotRightClickPressed__DelegateSignature_Params
{
public:
	class UW_Customization_Slot_C*               TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotClicked__DelegateSignature
struct UW_Customization_Slot_C_OnSlotClicked__DelegateSignature_Params
{
public:
	class UW_Customization_Slot_C*               TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotHovered__DelegateSignature
struct UW_Customization_Slot_C_OnSlotHovered__DelegateSignature_Params
{
public:
	class UW_Customization_Slot_C*               TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


