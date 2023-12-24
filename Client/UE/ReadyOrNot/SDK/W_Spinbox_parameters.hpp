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

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.GetMaxSliderValue
struct UW_Spinbox_C_GetMaxSliderValue_Params
{
public:
	float                                        MaximumSliderValue;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.GetMinSliderValue
struct UW_Spinbox_C_GetMinSliderValue_Params
{
public:
	float                                        MinimumSliderValue;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.GetMaxValue
struct UW_Spinbox_C_GetMaxValue_Params
{
public:
	float                                        MaximumValue;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.GetMinValue
struct UW_Spinbox_C_GetMinValue_Params
{
public:
	float                                        MinimumValue;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.SetMaxSliderValue
struct UW_Spinbox_C_SetMaxSliderValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.SetMinSliderValue
struct UW_Spinbox_C_SetMinSliderValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.SetMaxValue
struct UW_Spinbox_C_SetMaxValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.SetMinValue
struct UW_Spinbox_C_SetMinValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_Spinbox.W_Spinbox_C.UpdateResetButton
struct UW_Spinbox_C_UpdateResetButton_Params
{
public:
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2508[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Spinbox.W_Spinbox_C.SetDefaultValue
struct UW_Spinbox_C_SetDefaultValue_Params
{
public:
	float                                        DefaultValue;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowResetButton;                                   // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.SetValue
struct UW_Spinbox_C_SetValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.UpdateValue
struct UW_Spinbox_C_UpdateValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_Spinbox_C_BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Spinbox.W_Spinbox_C.PreConstruct
struct UW_Spinbox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function W_Spinbox.W_Spinbox_C.ExecuteUbergraph_W_Spinbox
struct UW_Spinbox_C_ExecuteUbergraph_W_Spinbox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_2;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2511[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_1;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.OnEndSliderMovement__DelegateSignature
struct UW_Spinbox_C_OnEndSliderMovement__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Spinbox.W_Spinbox_C.OnValueCommited__DelegateSignature
struct UW_Spinbox_C_OnValueCommited__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Spinbox.W_Spinbox_C.OnValueChanged__DelegateSignature
struct UW_Spinbox_C_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


