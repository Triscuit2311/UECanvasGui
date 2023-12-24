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
// Function W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C.RemovePlayer
struct UW_PreMission_Tablet_Roster_MP_C_RemovePlayer_Params
{
public:
	class AReadyOrNotPlayerState*                Ready_or_Not_Player_State;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2249[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_Roster_Entry_C*   CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C.AddPlayer
struct UW_PreMission_Tablet_Roster_MP_C_AddPlayer_Params
{
public:
	class AReadyOrNotPlayerState*                Ready_or_Not_Player_State;                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2250[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_Roster_Entry_C*   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


