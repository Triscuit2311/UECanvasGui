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

// 0x19 (0x19 - 0x0)
// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ShouldPerformAction
struct UAIAction_SeekPlayer_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3014[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatMoveActivity*               CallFunc_GetCombatMoveActivity_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.OnCreate_Blueprint
struct UAIAction_SeekPlayer_C_OnCreate_Blueprint_Params
{
public:
	class ACyberneticController*                 Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ExecuteUbergraph_AIAction_SeekPlayer
struct UAIAction_SeekPlayer_C_ExecuteUbergraph_AIAction_SeekPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3015[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticController*                 K2Node_Event_Controller;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USeekPlayerCombatMove_C*               CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


