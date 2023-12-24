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
// Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ShouldPerformAction
struct UAIAction_CheckEmptyWeapon_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.Tick_Blueprint
struct UAIAction_CheckEmptyWeapon_C_Tick_Blueprint_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ExecuteUbergraph_AIAction_CheckEmptyWeapon
struct UAIAction_CheckEmptyWeapon_C_ExecuteUbergraph_AIAction_CheckEmptyWeapon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4276[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_PlayMontageFromTable_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4277[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_1;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue; // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


