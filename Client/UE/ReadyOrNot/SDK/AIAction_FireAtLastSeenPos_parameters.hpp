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
// Function AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C.ShouldPerformAction
struct UAIAction_FireAtLastSeenPos_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C.ExecuteUbergraph_AIAction_FireAtLastSeenPos
struct UAIAction_FireAtLastSeenPos_C_ExecuteUbergraph_AIAction_FireAtLastSeenPos_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


