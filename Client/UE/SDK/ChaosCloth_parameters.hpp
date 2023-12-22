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

// 0x14 (0x14 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
struct UChaosClothingInteractor_SetVelocityScale_Params
{
public:
	struct FVector                               LinearVelocityScale;                               // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityScale;                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FictitiousAngularScale;                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
struct UChaosClothingInteractor_SetMaterialLinear_Params
{
public:
	float                                        EdgeStiffness;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendingStiffness;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AreaStiffness;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
struct UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params
{
public:
	float                                        TetherStiffness;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
struct UChaosClothingInteractor_SetLongRangeAttachment_Params
{
public:
	struct FVector2D                             TetherStiffness;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetGravity
struct UChaosClothingInteractor_SetGravity_Params
{
public:
	float                                        GravityScale;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGravityOverridden;                              // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityOverride;                                   // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetDamping
struct UChaosClothingInteractor_SetDamping_Params
{
public:
	float                                        DampingCoefficient;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetCollision
struct UChaosClothingInteractor_SetCollision_Params
{
public:
	float                                        CollisionThickness;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionCoefficient;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCCD;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SelfCollisionThickness;                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
struct UChaosClothingInteractor_SetAnimDriveLinear_Params
{
public:
	float                                        AnimDriveStiffness;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
struct UChaosClothingInteractor_SetAnimDrive_Params
{
public:
	struct FVector2D                             AnimDriveStiffness;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AnimDriveDamping;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
struct UChaosClothingInteractor_SetAerodynamics_Params
{
public:
	float                                        DragCoefficient;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftCoefficient;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WindVelocity;                                      // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
struct UChaosClothingInteractor_ResetAndTeleport_Params
{
public:
	bool                                         bReset;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleport;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


