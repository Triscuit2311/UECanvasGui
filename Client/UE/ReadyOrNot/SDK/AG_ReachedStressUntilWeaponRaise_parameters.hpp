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

// 0x31 (0x31 - 0x0)
// Function AG_ReachedStressUntilWeaponRaise.AG_ReachedStressUntilWeaponRaise_C.CanOpen
struct UAG_ReachedStressUntilWeaponRaise_C_CanOpen_Params
{
public:
	struct FAIActionDecisionContext              Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotAIConfig*                   CallFunc_Get_ReturnValue;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloat_ReturnValue;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


