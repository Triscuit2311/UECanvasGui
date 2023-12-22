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
// Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
struct UBaseVDComponent_SetUseExplicitRigidBodyCollision_Params
{
public:
	bool                                         UseExplicitCollision;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
struct UBaseVDComponent_SetAffectedByGlobalWind_Params
{
public:
	bool                                         IsAffected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
struct UBaseVDComponent_GetTensionConstraintCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo
struct UBaseVDComponent_GetParticleBuildInfo_Params
{
public:
	TArray<struct FVDParticleInfo>               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
struct UBaseVDComponent_GetLastAppliedForceFromTensionConstraint_Params
{
public:
	int32                                        TensionConstraintIndex;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
struct UVDBlueprintFunctionLibrary_GetVICODynamicsSimulationInstance_Params
{
public:
	class UVDSimulation*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
struct UVDRopeComponent_SetNewRestLengthStartingAtParticle_Params
{
public:
	int32                                        ParticleIndexStart;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewLength;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
struct UVDRopeComponent_SetNewRestLength_Params
{
public:
	float                                        NewLength;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PieceIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
struct UVDRopeComponent_GetTrueLength_Params
{
public:
	int32                                        PieceIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDRopeComponent.GetPieces
struct UVDRopeComponent_GetPieces_Params
{
public:
	TArray<struct FRopePiece>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
struct UVDRopeComponent_BreakAtSegment_Params
{
public:
	int32                                        SegmentIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
struct UVDDynamicRopeComponent_RebuildRopeAttached_Params
{
public:
	float                                        DistancePerSegment;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F20[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       StartAttachedTo;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartSocket;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartSimulateTension;                              // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       EndAttachedTo;                                     // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndSocket;                                         // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EndSimulateTension;                                // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F26[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
struct UVDDynamicRopeComponent_RebuildRopeAtPoints_Params
{
public:
	float                                        DistancePerSegment;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x4(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeLocations;                                // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
struct UVDMeshClothComponent_GetVolumeConstraint_Params
{
public:
	class UVDMeshVolumeConstraint*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
struct UVDMeshClothComponent_GetStretchConstraintsArray_Params
{
public:
	TArray<class UVDParticleSpringConstraint*>   ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
struct UVDMeshClothComponent_GetBendConstraintsArray_Params
{
public:
	TArray<class UVDParticleSpringConstraint*>   ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
struct UVDMeshVolumeConstraint_SetRestVolume_Params
{
public:
	float                                        NewVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
struct UVDMeshVolumeConstraint_GetRestVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
struct UVDMeshVolumeConstraint_GetCurrentVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
struct UVDParticleSpringConstraint_SetStiffness_Params
{
public:
	float                                        NewStiffness;                                      // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
struct UVDParticleSpringConstraint_SetRestDistance_Params
{
public:
	float                                        NewRestDistance;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
struct UVDParticleSpringConstraint_IsConstraining_Params
{
public:
	class UVDSimulatedParticle*                  Particle1;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVDSimulatedParticle*                  Particle2;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
struct UVDParticleSpringConstraint_GetStifffness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
struct UVDParticleSpringConstraint_GetRestDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
struct UVDParticleSpringConstraint_GetParticle2_Params
{
public:
	class UVDSimulatedParticle*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
struct UVDParticleSpringConstraint_GetParticle1_Params
{
public:
	class UVDSimulatedParticle*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
struct UVDSimulatedObject_SetSkipRelativeVelocityCheckDuringCollision_Params
{
public:
	bool                                         Skip;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
struct UVDSimulatedObject_SetObjectType_Params
{
public:
	enum class ECollisionChannel                 ObjectType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
struct UVDSimulatedObject_SetMinimumConstraintSatisfactionDistance_Params
{
public:
	float                                        MinDistance;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
struct UVDSimulatedObject_SetGravityScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
struct UVDSimulatedObject_SetCollisionResponseToObjectType_Params
{
public:
	enum class ECollisionChannel                 ObjectType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Response;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
struct UVDSimulatedObject_SetCollisionEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
struct UVDSimulatedObject_SetCollisionChannel_Params
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
struct UVDSimulatedObject_SetAffectiveWindVector_Params
{
public:
	struct FVector                               NewWindVector;                                     // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
struct UVDSimulatedObject_GetSpringConstraints_Params
{
public:
	TArray<class UVDParticleSpringConstraint*>   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
struct UVDSimulatedObject_GetSkipRelativeVelocityCheckDuringCollision_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
struct UVDSimulatedObject_GetParticles_Params
{
public:
	TArray<class UVDSimulatedParticle*>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
struct UVDSimulatedObject_GetMinimumConstraintSatisfactionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
struct UVDSimulatedObject_GetGravityScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
struct UVDSimulatedObject_GetCollisionSettings_Params
{
public:
	struct FVDCollisionSettings                  ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
struct UVDSimulatedObject_GetCollisionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
struct UVDSimulatedObject_GetAffectiveWindVector_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
struct UVDSimulatedObject_DestroyVolumeConstraint_Params
{
public:
	class UVDMeshVolumeConstraint*               Constraint;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
struct UVDSimulatedObject_DestroyParticle_Params
{
public:
	class UVDSimulatedParticle*                  Particle;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
struct UVDSimulatedObject_DestroyConstraint_Params
{
public:
	class UVDParticleSpringConstraint*           Constraint;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
struct UVDSimulatedObject_CreateVolumeConstraint_Params
{
public:
	TArray<int32>                                IndexList;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestVolume;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVDMeshVolumeConstraint*               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
struct UVDSimulatedObject_CreateSpringConstraint_Params
{
public:
	class UVDSimulatedParticle*                  Particle1;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVDSimulatedParticle*                  Particle2;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestDistance;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVDParticleSpringConstraint*           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
struct UVDSimulatedObject_CreateParticle_Params
{
public:
	struct FVDParticleInfo                       ParticleInfo;                                      // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_102E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVDSimulatedParticle*                  ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
struct UVDSimulatedParticle_SetVelocity_Params
{
public:
	struct FVector                               NewVelocity;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
struct UVDSimulatedParticle_SetRestitutionCoefficient_Params
{
public:
	float                                        NewRestitutionCoefficient;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius
struct UVDSimulatedParticle_SetRadius_Params
{
public:
	float                                        NewRadius;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
struct UVDSimulatedParticle_SetMass_Params
{
public:
	float                                        NewMass;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
struct UVDSimulatedParticle_SetLocation_Params
{
public:
	struct FVector                               NewLocation;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
struct UVDSimulatedParticle_SetIsWindOccluded_Params
{
public:
	bool                                         IsOccluded;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
struct UVDSimulatedParticle_SetIsRigidBodyCollisionEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
struct UVDSimulatedParticle_SetIsParticleCollisionEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
struct UVDSimulatedParticle_SetIsFree_Params
{
public:
	bool                                         IsFree;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
struct UVDSimulatedParticle_SetFrictionCoefficient_Params
{
public:
	float                                        NewFrictionCoefficient;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
struct UVDSimulatedParticle_SetDragCoefficient_Params
{
public:
	float                                        NewDragCoefficient;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
struct UVDSimulatedParticle_GetVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
struct UVDSimulatedParticle_GetRestitutionCoefficient_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
struct UVDSimulatedParticle_GetRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
struct UVDSimulatedParticle_GetMass_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
struct UVDSimulatedParticle_GetLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
struct UVDSimulatedParticle_GetIsWindOccluded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
struct UVDSimulatedParticle_GetIsRigidBodyCollisionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
struct UVDSimulatedParticle_GetIsParticleCollisionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
struct UVDSimulatedParticle_GetIsFree_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
struct UVDSimulatedParticle_GetFrictionCoefficient_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
struct UVDSimulatedParticle_GetDragCoefficient_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
struct UVDSimulatedParticle_GetAttachment_Params
{
public:
	struct FVDParticleAttachment                 OutAttachment;                                     // 0x0(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1097[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
struct UVDSimulatedParticle_CopyAttachment_Params
{
public:
	struct FVDParticleAttachment                 Attachment;                                        // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         UseCurrentMass;                                    // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
struct UVDSimulatedParticle_AttachToLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRelative;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A5[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
struct UVDSimulatedParticle_AttachToComponent_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SimulateTension;                                   // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
struct UVDSimulatedParticle_AttachToActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SimulateTension;                                   // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
struct UVDSimulatedParticle_AddForce_Params
{
public:
	struct FVector                               Force;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
struct UVDSimulation_SetSubstepCount_Params
{
public:
	int32                                        SubstepCount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
struct UVDSimulation_SetSelfCollisionEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
struct UVDSimulation_SetPhysXSceneCollisionEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
struct UVDSimulation_SetPerFrameCollisionCacheEnable_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
struct UVDSimulation_SetPerformExtraCollisionResolutionLoop_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
struct UVDSimulation_SetIsExplicitRigidBodyCollisionEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetFrameRate
struct UVDSimulation_SetFrameRate_Params
{
public:
	int32                                        FrameRate;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
struct UVDSimulation_SetConstraintIterationCount_Params
{
public:
	int32                                        ConstraintIterationCount;                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
struct UVDSimulation_SetConstrainSimulationTo2DPlane_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
struct UVDSimulation_SetConstrainPlaneOrigin_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
struct UVDSimulation_SetConstrainPlaneNormal_Params
{
public:
	struct FVector                               Normal;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
struct UVDSimulation_RemoveExplicitColliderMapping_Params
{
public:
	class UBaseVDComponent*                      VDComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   Collider;                                          // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
struct UVDSimulation_RemoveAllExplicitColliderMappings_Params
{
public:
	class UBaseVDComponent*                      VDComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
struct UVDSimulation_K2QuerySphereOverlaps_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVDSimulatedParticle*>          Overlaps;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UVDSimulatedObject*>            SimObjectsToIgnore;                                // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        MaxOverlaps;                                       // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1117[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
struct UVDSimulation_K2QueryBoxOverlaps_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HalfExtents;                                       // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVDSimulatedParticle*>          Overlaps;                                          // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UVDSimulatedObject*>            SimObjectsToIgnore;                                // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        MaxOverlaps;                                       // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1122[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.GetSettings
struct UVDSimulation_GetSettings_Params
{
public:
	struct FVDSettings                           ReturnValue;                                       // 0x0(0x44)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
struct UVDSimulation_GetIsRunningOnWorkerThread_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
struct UVDSimulation_GetIsExplicitRigidBodyCollisionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
struct UVDSimulation_GetDirectionalWindParameters_Params
{
public:
	class UBaseVDComponent*                      VDComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutDirection;                                      // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutSpeed;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutGust;                                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
struct UVDSimulation_AddExplicitColliderMapping_Params
{
public:
	class UBaseVDComponent*                      VDComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   Collider;                                          // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreConvexShapes;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1133[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
struct AVDSimulationSettingsActor_GetSettings_Params
{
public:
	struct FVDSettings                           ReturnValue;                                       // 0x0(0x44)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
struct UVDWindDirectionalSourceComponent_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
struct UVDWindDirectionalSourceComponent_GetCurrentGust_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


