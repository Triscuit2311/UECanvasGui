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
// Function Projectile_Taser.Projectile_Taser_C.OnDeflect
struct AProjectile_Taser_C_OnDeflect_Params
{
public:
	struct FHitResult                            DeflectionHit;                                     // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8C (0x8C - 0x0)
// Function Projectile_Taser.Projectile_Taser_C.ExecuteUbergraph_Projectile_Taser
struct AProjectile_Taser_C_ExecuteUbergraph_Projectile_Taser_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_DeflectionHit;                        // 0x4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


