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
// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.ShouldPerformAction
struct UAIAction_ThrowWeaponAndSurrender_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.Tick_Blueprint
struct UAIAction_ThrowWeaponAndSurrender_C_Tick_Blueprint_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender
struct UAIAction_ThrowWeaponAndSurrender_C_ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_1;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4259[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_2;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_PlayMontageFromTable_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


