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

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
public:
	TArray<struct FChaosTrailingEventData>       TrailingEvents;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosTrailingSortMethod          SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
public:
	TArray<struct FChaosCollisionEventData>      CollisionEvents;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosCollisionSortMethod         SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2035[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
public:
	TArray<struct FChaosBreakingEventData>       BreakingEvents;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosBreakingSortMethod          SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2038[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
public:
	struct FChaosTrailingEventRequestSettings    InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
public:
	struct FChaosCollisionEventRequestSettings   InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
public:
	struct FChaosBreakingEventRequestSettings    InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
public:
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
public:
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA4 (0xA4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionActor_RaycastSingle_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            OutHit;                                            // 0x18(0x88)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2063[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
public:
	bool                                         bNewNotifyBreaks;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
public:
	struct FChaosPhysicsCollisionInfo            CollisionInfo;                                     // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
struct UGeometryCollectionComponent_OnRep_RepData_Params
{
public:
	struct FGeometryCollectionRepData            OldData;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
struct UGeometryCollectionComponent_NetAbandonCluster_Params
{
public:
	int32                                        TransformIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryCollectionPhysicsTypeEnum Target;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2096[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x4(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
struct USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params
{
public:
	struct FChaosPhysicsCollisionInfo            CollisionInfo;                                     // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
struct UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params
{
public:
	struct FChaosPhysicsCollisionInfo            CollisionInfo;                                     // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


