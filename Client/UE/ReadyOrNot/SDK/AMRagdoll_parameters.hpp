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

// 0x4 (0x4 - 0x0)
// Function AMRagdoll.RagdollComponent.RequestAnim2RagdollBlend
struct URagdollComponent_RequestAnim2RagdollBlend_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// DelegateFunction AMRagdoll.RagdollComponent.OnRagdollHitEvent__DelegateSignature
struct URagdollComponent_OnRagdollHitEvent__DelegateSignature_Params
{
public:
	class URagdollComponent*                     Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Impulse;                                           // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x14(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1574[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction AMRagdoll.RagdollComponent.OnRagdollEvent__DelegateSignature
struct URagdollComponent_OnRagdollEvent__DelegateSignature_Params
{
public:
	class URagdollComponent*                     Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function AMRagdoll.RagdollComponent.OnPhysBodyHit
struct URagdollComponent_OnPhysBodyHit_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_157D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function AMRagdoll.RagdollComponent.OnCapsuleHit
struct URagdollComponent_OnCapsuleHit_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1583[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AMRagdoll.RagdollComponent.IsInRagdoll
struct URagdollComponent_IsInRagdoll_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


