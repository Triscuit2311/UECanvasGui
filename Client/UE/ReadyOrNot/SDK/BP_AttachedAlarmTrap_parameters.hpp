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

// 0x8 (0x8 - 0x0)
// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapTriggered
struct ABP_AttachedAlarmTrap_C_OnTrapTriggered_Params
{
public:
	class AReadyOrNotCharacter*                  TriggeredBy;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapDisarmed
struct ABP_AttachedAlarmTrap_C_OnTrapDisarmed_Params
{
public:
	class AReadyOrNotCharacter*                  DisarmedBy;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.ExecuteUbergraph_BP_AttachedAlarmTrap
struct ABP_AttachedAlarmTrap_C_ExecuteUbergraph_BP_AttachedAlarmTrap_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_Event_TriggeredBy;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnSWATTeam_ReturnValue;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_DisarmedBy;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


