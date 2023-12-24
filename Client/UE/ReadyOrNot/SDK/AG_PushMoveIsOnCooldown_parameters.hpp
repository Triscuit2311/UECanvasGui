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

// 0x2F (0x2F - 0x0)
// Function AG_PushMoveIsOnCooldown.AG_PushMoveIsOnCooldown_C.CanOpen
struct UAG_PushMoveIsOnCooldown_C_CanOpen_Params
{
public:
	struct FAIActionDecisionContext              Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4281[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UBaseActivity>             Temp_class_Variable;                               // 0x18(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UActivityManager*                      CallFunc_GetWorldSubsystem_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


