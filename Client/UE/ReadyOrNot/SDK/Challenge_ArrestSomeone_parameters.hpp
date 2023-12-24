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
// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeInit
struct UChallenge_ArrestSomeone_C_OnChallengeInit_Params
{
public:
	class AReadyOrNotGameState*                  Gs;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnCharacterArrested_Event_0
struct UChallenge_ArrestSomeone_C_OnCharacterArrested_Event_0_Params
{
public:
	class AReadyOrNotCharacter*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  ArrestedBy;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.ExecuteUbergraph_Challenge_ArrestSomeone
struct UChallenge_ArrestSomeone_C_ExecuteUbergraph_Challenge_ArrestSomeone_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_Character;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_ArrestedBy;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class AReadyOrNotGameState*                  K2Node_Event_gs;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


