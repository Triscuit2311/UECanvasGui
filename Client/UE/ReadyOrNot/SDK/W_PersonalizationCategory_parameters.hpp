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
// Function W_PersonalizationCategory.W_PersonalizationCategory_C.PreConstruct
struct UW_PersonalizationCategory_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PersonalizationCategory.W_PersonalizationCategory_C.BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_PersonalizationCategory_C_BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_PersonalizationCategory.W_PersonalizationCategory_C.ExecuteUbergraph_W_PersonalizationCategory
struct UW_PersonalizationCategory_C_ExecuteUbergraph_W_PersonalizationCategory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PersonalizationCategory.W_PersonalizationCategory_C.OnClicked__DelegateSignature
struct UW_PersonalizationCategory_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_PersonalizationCategory_C*          PersonalizationCategory;                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


