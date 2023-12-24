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

// 0x2A (0x2A - 0x0)
// Function AG_HasAmmoInCurrentMag.AG_HasAmmoInCurrentMag_C.CanOpen
struct UAG_HasAmmoInCurrentMag_C_CanOpen_Params
{
public:
	struct FAIActionDecisionContext              Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseMagazineWeapon*                   CallFunc_GetEquippedWeapon_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAmmo_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


