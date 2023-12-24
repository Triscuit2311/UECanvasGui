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
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdatePressedState
struct UW_Customization_Gamepad_GroupButton_C_UpdatePressedState_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdateSelectedState
struct UW_Customization_Gamepad_GroupButton_C_UpdateSelectedState_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdateHoverState
struct UW_Customization_Gamepad_GroupButton_C_UpdateHoverState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.GetColorByState
struct UW_Customization_Gamepad_GroupButton_C_GetColorByState_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x40(0x28)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x80(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0xA8(0x28)(None)
};

// 0x48 (0x48 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdateVisualState
struct UW_Customization_Gamepad_GroupButton_C_UpdateVisualState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Pressed;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSelected;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetColorByState_ReturnValue;              // 0x18(0x28)(None)
	struct FVector2D                             K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.PreConstruct
struct UW_Customization_Gamepad_GroupButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Pressed
struct UW_Customization_Gamepad_GroupButton_C_Pressed_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Released
struct UW_Customization_Gamepad_GroupButton_C_Released_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.ExecuteUbergraph_W_Customization_Gamepad_GroupButton
struct UW_Customization_Gamepad_GroupButton_C_ExecuteUbergraph_W_Customization_Gamepad_GroupButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_CustomEvent_Button_1;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button;                         // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.OnDeselected__DelegateSignature
struct UW_Customization_Gamepad_GroupButton_C_OnDeselected__DelegateSignature_Params
{
public:
	class UW_Customization_Gamepad_GroupButton_C* Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.OnSelected__DelegateSignature
struct UW_Customization_Gamepad_GroupButton_C_OnSelected__DelegateSignature_Params
{
public:
	class UW_Customization_Gamepad_GroupButton_C* Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


