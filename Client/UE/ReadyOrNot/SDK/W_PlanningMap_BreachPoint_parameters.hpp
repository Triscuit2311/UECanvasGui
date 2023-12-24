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
// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.SetSelected
struct UW_PlanningMap_BreachPoint_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_PlanningMap_BreachPoint_C_BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
struct UW_PlanningMap_BreachPoint_C_BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.ExecuteUbergraph_W_PlanningMap_BreachPoint
struct UW_PlanningMap_BreachPoint_C_ExecuteUbergraph_W_PlanningMap_BreachPoint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1572[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue_1;  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1577[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointClicked__DelegateSignature
struct UW_PlanningMap_BreachPoint_C_OnBreachPointClicked__DelegateSignature_Params
{
public:
	class UW_PlanningMap_BreachPoint_C*          ClickedPoint;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointHovered__DelegateSignature
struct UW_PlanningMap_BreachPoint_C_OnBreachPointHovered__DelegateSignature_Params
{
public:
	class UW_PlanningMap_BreachPoint_C*          HoveredPoint;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


