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
// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ShouldPerformAction
struct UAIAction_ReturnToSpawn_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.OnMoveComplete_Blueprint
struct UAIAction_ReturnToSpawn_C_OnMoveComplete_Blueprint_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RequestID;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ExecuteUbergraph_AIAction_ReturnToSpawn
struct UAIAction_ReturnToSpawn_C_ExecuteUbergraph_AIAction_ReturnToSpawn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_627[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         K2Node_Event_Controller;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_RequestID;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


