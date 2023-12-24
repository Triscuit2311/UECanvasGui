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

// 0x22 (0x22 - 0x0)
// Function W_StandardRadioButton.W_StandardRadioButton_C.Equals
struct UW_StandardRadioButton_C_Equals_Params
{
public:
	TScriptInterface<class IIRadioWidget_C>      Other;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_208C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardRadioButton_C*              K2Node_DynamicCast_AsW_Standard_Radio_Button;      // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_StandardRadioButton.W_StandardRadioButton_C.GetTabControlIndex
struct UW_StandardRadioButton_C_GetTabControlIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function W_StandardRadioButton.W_StandardRadioButton_C.GetParentContainerSlow
struct UW_StandardRadioButton_C_GetParentContainerSlow_Params
{
public:
	class UW_RadioContainer_C*                   RadioContainer;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CurrentWidget;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_RadioContainer_C*                   K2Node_DynamicCast_AsW_Radio_Container;            // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function W_StandardRadioButton.W_StandardRadioButton_C.ExecuteUbergraph_W_StandardRadioButton
struct UW_StandardRadioButton_C_ExecuteUbergraph_W_StandardRadioButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IIRadioWidget_C>      K2Node_DynamicCast_AsIRadio_Widget;                // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RadioContainer_C*                   CallFunc_GetParentContainerSlow_RadioContainer;    // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IIRadioWidget_C>      K2Node_DynamicCast_AsIRadio_Widget_1;              // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


