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

// 0x88 (0x88 - 0x0)
// Function Projectile_Base.Projectile_Base_C.OnDeflect
struct AProjectile_Base_C_OnDeflect_Params
{
public:
	struct FHitResult                            DeflectionHit;                                     // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x98 (0x98 - 0x0)
// Function Projectile_Base.Projectile_Base_C.ExecuteUbergraph_Projectile_Base
struct AProjectile_Base_C_ExecuteUbergraph_Projectile_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_689[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_DeflectionHit;                        // 0x10(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


