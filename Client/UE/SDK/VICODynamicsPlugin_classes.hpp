#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x678 - 0x478)
// Class VICODynamicsPlugin.BaseVDComponent
class UBaseVDComponent : public UMeshComponent
{
public:
	uint8                                        Pad_E76[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UVDSimulation*                         SimulationInstance;                                // 0x480(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVDSimulatedObject*                    VDSimObject;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UVDSimulatedParticle*>          Particles;                                         // 0x490(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        FrictionCoefficient;                               // 0x4A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RestitutionCoefficient;                            // 0x4A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVDCollisionSettings                  CollisionSettings;                                 // 0x4A8(0x40)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        ParticleRadius;                                    // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttachToRigids;                                    // 0x4EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttachToParticles;                                 // 0x4ED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E79[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttachToParticlesConstraintStiffness;              // 0x4F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0x4F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DetectionRadiusInflationFactor;                    // 0x4F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateTensionConstraintsForSimulatingRigids;       // 0x4FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToSimulatingAttachment;                       // 0x4FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ManuallyAttachParticles;                           // 0x4FE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVDParticleAttachment>         ParticleAttachments;                               // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TensionForce;                                      // 0x510(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TensionDampening;                                  // 0x514(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdjustOtherParticleLocationsBasedOnAttachments : 1; // Mask: 0x1, PropSize: 0x10x518(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AffectedByGlobalWind : 1;                          // Mask: 0x2, PropSize: 0x10x518(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseExplicitRigidBodyCollision : 1;                 // Mask: 0x4, PropSize: 0x10x518(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8A : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_E86[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindResistance;                                    // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FComponentReference>           AffectedByWindSources;                             // 0x520(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CheckForWindOccluders;                             // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E89[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWindOccluderDistance;                           // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVDCollisionSettings                  WindOccluderTraceSettings;                         // 0x538(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSimulationDataCreated;                           // 0x578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSimulationSync;                                  // 0x588(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        ShowParticles : 1;                                 // Mask: 0x1, PropSize: 0x10x598(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8B : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_E8F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GravityScale;                                      // 0x59C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinConstraintDistance;                             // 0x5A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         SimulateOnlyWhenRendered;                          // 0x5A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimulationToggleThreshold;                         // 0x5A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        EnableParticleToParticleCollisions : 1;            // Mask: 0x1, PropSize: 0x10x5AC(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        ConsiderInnerCollisions : 1;                       // Mask: 0x2, PropSize: 0x10x5AC(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        SkipRelativeVelocityCheckDuringRigidBodyCollisions : 1; // Mask: 0x4, PropSize: 0x10x5AC(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8C : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bNotifyOnVDCollision : 1;                          // Mask: 0x1, PropSize: 0x10x5AD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_E9A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnVDCollisionEvent;                                // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UVDSimulatedParticle*, struct FVDCollision> PendingCollisionNotifications;                     // 0x5C0(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E9E[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVDParticleSpringConstraint*>   ConstraintsToOtherParticles;                       // 0x630(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E9F[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseLocationCache : 1;                             // Mask: 0x1, PropSize: 0x10x660(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bApplyCachedStartLocationBeforeAttachToRigids : 1; // Mask: 0x2, PropSize: 0x10x660(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8E : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EA3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVDCachedParticleStartLocation> CachedStartLocations;                              // 0x668(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBaseVDComponent* GetDefaultObj();

	void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision);
	void SetAffectedByGlobalWind(bool IsAffected);
	void OnSync();
	int32 GetTensionConstraintCount();
	TArray<struct FVDParticleInfo> GetParticleBuildInfo();
	struct FVector GetLastAppliedForceFromTensionConstraint(int32 TensionConstraintIndex);
	void AttachToOverlappingRigidBodies();
};

// 0x0 (0x28 - 0x28)
// Class VICODynamicsPlugin.VDBlueprintFunctionLibrary
class UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVDBlueprintFunctionLibrary* GetDefaultObj();

	class UVDSimulation* GetVICODynamicsSimulationInstance();
};

// 0x30 (0xE0 - 0xB0)
// Class VICODynamicsPlugin.VDColliderComponent
class UVDColliderComponent : public UActorComponent
{
public:
	class UVDSimulation*                         SimulationInstance;                                // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FComponentReference>           AssociatedVDComponents;                            // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bAddAllComponents : 1;                             // Mask: 0x1, PropSize: 0x10xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreConvexShapes : 1;                           // Mask: 0x2, PropSize: 0x10xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8F : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EC1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SpecificColliders;                                 // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVDColliderComponent* GetDefaultObj();

};

// 0x80 (0x6F8 - 0x678)
// Class VICODynamicsPlugin.VDRopeComponent
class UVDRopeComponent : public UBaseVDComponent
{
public:
	float                                        StretchStiffness;                                  // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendStiffness;                                     // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSegments;                                       // 0x690(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceStrictLength;                              // 0x694(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSides;                                          // 0x698(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileMaterial;                                      // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F03[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVDParticleSpringConstraint*>   StretchConstraints;                                // 0x6C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UVDParticleSpringConstraint*>   BendConstraints;                                   // 0x6D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRopePiece>                    Pieces;                                            // 0x6E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F06[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDRopeComponent* GetDefaultObj();

	void SetNewRestLengthStartingAtParticle(int32 ParticleIndexStart, float NewLength);
	void SetNewRestLength(float NewLength, int32 PieceIndex);
	void ResetRope();
	float GetTrueLength(int32 PieceIndex);
	TArray<struct FRopePiece> GetPieces();
	void CreateRopeGeometry_BP();
	void BreakAtSegment(int32 SegmentIndex);
};

// 0x8 (0x700 - 0x6F8)
// Class VICODynamicsPlugin.VDDynamicRopeComponent
class UVDDynamicRopeComponent : public UVDRopeComponent
{
public:
	uint8                                        Pad_F3C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDDynamicRopeComponent* GetDefaultObj();

	void RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, class FName StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, class FName EndSocket, bool EndSimulateTension);
	void RebuildRopeAtPoints(float DistancePerSegment, struct FVector& StartLocation, struct FVector& EndLocation, bool bRelativeLocations);
	void RebuildRope();
};

// 0xE8 (0x760 - 0x678)
// Class VICODynamicsPlugin.VDMeshClothComponent
class UVDMeshClothComponent : public UBaseVDComponent
{
public:
	class UStaticMesh*                           HullMesh;                                          // 0x678(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchStiffness;                                  // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendStiffness;                                     // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PreserveVolume;                                    // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentVolume;                                     // 0x694(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideRestVolume;                                // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F57[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        UseVertexColorDataForSetup : 1;                    // Mask: 0x1, PropSize: 0x10x6A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_93 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxBendConstraintDistance;                         // 0x6A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5D[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVDParticleSpringConstraint*>   StretchConstraints;                                // 0x6D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UVDParticleSpringConstraint*>   BendConstraints;                                   // 0x6E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UVDMeshVolumeConstraint*               VolumeConstraint;                                  // 0x6F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F60[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDMeshClothComponent* GetDefaultObj();

	class UVDMeshVolumeConstraint* GetVolumeConstraint();
	TArray<class UVDParticleSpringConstraint*> GetStretchConstraintsArray();
	TArray<class UVDParticleSpringConstraint*> GetBendConstraintsArray();
};

// 0x10 (0x38 - 0x28)
// Class VICODynamicsPlugin.VDMeshVolumeConstraint
class UVDMeshVolumeConstraint : public UObject
{
public:
	uint8                                        Pad_F74[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDMeshVolumeConstraint* GetDefaultObj();

	void SetRestVolume(float NewVolume);
	float GetRestVolume();
	float GetCurrentVolume();
};

// 0x10 (0x38 - 0x28)
// Class VICODynamicsPlugin.VDParticleSpringConstraint
class UVDParticleSpringConstraint : public UObject
{
public:
	uint8                                        Pad_F9B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDParticleSpringConstraint* GetDefaultObj();

	void SetStiffness(float& NewStiffness);
	void SetRestDistance(float& NewRestDistance);
	bool IsConstraining(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2);
	float GetStifffness();
	float GetRestDistance();
	class UVDSimulatedParticle* GetParticle2();
	class UVDSimulatedParticle* GetParticle1();
};

// 0x78 (0x6F0 - 0x678)
// Class VICODynamicsPlugin.VDProceduralClothComponent
class UVDProceduralClothComponent : public UBaseVDComponent
{
public:
	float                                        StretchStiffness;                                  // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendStiffness;                                     // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumParticlesWide;                                  // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumParticlesHigh;                                  // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileMaterialAlongWidth;                            // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileMaterialAlongHeight;                           // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB0[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVDParticleSpringConstraint*>   StretchConstraints;                                // 0x6C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UVDParticleSpringConstraint*>   BendConstraints;                                   // 0x6D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FB1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDProceduralClothComponent* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class VICODynamicsPlugin.VDSimulatedObject
class UVDSimulatedObject : public UObject
{
public:
	uint8                                        Pad_102F[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDSimulatedObject* GetDefaultObj();

	void SetSkipRelativeVelocityCheckDuringCollision(bool Skip);
	void SetObjectType(enum class ECollisionChannel ObjectType);
	void SetMinimumConstraintSatisfactionDistance(float MinDistance);
	void SetGravityScale(float Scale);
	void SetCollisionResponseToObjectType(enum class ECollisionChannel ObjectType, enum class ECollisionResponse Response);
	void SetCollisionEnabled(bool Enabled);
	void SetCollisionChannel(enum class ECollisionChannel Channel);
	void SetAffectiveWindVector(const struct FVector& NewWindVector);
	TArray<class UVDParticleSpringConstraint*> GetSpringConstraints();
	bool GetSkipRelativeVelocityCheckDuringCollision();
	TArray<class UVDSimulatedParticle*> GetParticles();
	float GetMinimumConstraintSatisfactionDistance();
	float GetGravityScale();
	struct FVDCollisionSettings GetCollisionSettings();
	bool GetCollisionEnabled();
	struct FVector GetAffectiveWindVector();
	void DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint);
	void DestroyParticle(class UVDSimulatedParticle* Particle);
	void DestroyConstraint(class UVDParticleSpringConstraint* Constraint);
	class UVDMeshVolumeConstraint* CreateVolumeConstraint(const TArray<int32>& IndexList, float Alpha, float RestVolume);
	class UVDParticleSpringConstraint* CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness);
	class UVDSimulatedParticle* CreateParticle(struct FVDParticleInfo& ParticleInfo);
};

// 0x80 (0xA8 - 0x28)
// Class VICODynamicsPlugin.VDSimulatedParticle
class UVDSimulatedParticle : public UObject
{
public:
	bool                                         IsAttached;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVDParticleAttachment                 Attachment;                                        // 0x30(0x60)(NativeAccessSpecifierPublic)
	uint8                                        Pad_10C7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDSimulatedParticle* GetDefaultObj();

	void SetVelocity(struct FVector& NewVelocity);
	void SetRestitutionCoefficient(float NewRestitutionCoefficient);
	void SetRadius(float NewRadius);
	void SetMass(float NewMass);
	void SetLocation(struct FVector& NewLocation);
	void SetIsWindOccluded(bool IsOccluded);
	void SetIsRigidBodyCollisionEnabled(bool IsEnabled);
	void SetIsParticleCollisionEnabled(bool IsEnabled);
	void SetIsFree(bool IsFree);
	void SetFrictionCoefficient(float NewFrictionCoefficient);
	void SetDragCoefficient(float NewDragCoefficient);
	struct FVector GetVelocity();
	float GetRestitutionCoefficient();
	float GetRadius();
	float GetMass();
	struct FVector GetLocation();
	bool GetIsWindOccluded();
	bool GetIsRigidBodyCollisionEnabled();
	bool GetIsParticleCollisionEnabled();
	bool GetIsFree();
	float GetFrictionCoefficient();
	float GetDragCoefficient();
	bool GetAttachment(struct FVDParticleAttachment* OutAttachment);
	void Detach();
	void CopyAttachment(struct FVDParticleAttachment& Attachment, bool UseCurrentMass);
	bool AttachToLocation(const struct FVector& Location, bool IsRelative);
	bool AttachToComponent(class UPrimitiveComponent* Component, const struct FVector& Location, bool SimulateTension, class FName Socket);
	bool AttachToActor(class AActor* Actor, const struct FVector& Location, bool SimulateTension, class FName Socket);
	void AddForce(struct FVector& Force);
};

// 0x140 (0x168 - 0x28)
// Class VICODynamicsPlugin.VDSimulation
class UVDSimulation : public UObject
{
public:
	uint8                                        Pad_1134[0x130];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVDWindDirectionalSourceComponent*> WindSources;                                       // 0x158(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVDSimulation* GetDefaultObj();

	void SetSubstepCount(int32 SubstepCount);
	void SetSelfCollisionEnabled(bool IsEnabled);
	void SetPhysXSceneCollisionEnabled(bool IsEnabled);
	void SetPerFrameCollisionCacheEnable(bool IsEnabled);
	void SetPerformExtraCollisionResolutionLoop(bool IsEnabled);
	void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled);
	void SetFrameRate(int32 FrameRate);
	void SetConstraintIterationCount(int32 ConstraintIterationCount);
	void SetConstrainSimulationTo2DPlane(bool IsEnabled);
	void SetConstrainPlaneOrigin(const struct FVector& Origin);
	void SetConstrainPlaneNormal(const struct FVector& Normal);
	void RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider);
	void RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent);
	bool K2QuerySphereOverlaps(const struct FVector& Location, float Radius, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps);
	bool K2QueryBoxOverlaps(const struct FVector& Location, const struct FVector& HalfExtents, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps);
	struct FVDSettings GetSettings();
	bool GetIsRunningOnWorkerThread();
	bool GetIsExplicitRigidBodyCollisionEnabled();
	void GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, struct FVector* OutDirection, float* OutSpeed, float* OutGust);
	void AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes);
};

// 0x48 (0x268 - 0x220)
// Class VICODynamicsPlugin.VDSimulationSettingsActor
class AVDSimulationSettingsActor : public AInfo
{
public:
	struct FVDSettings                           Settings;                                          // 0x220(0x44)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_113D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVDSimulationSettingsActor* GetDefaultObj();

	struct FVDSettings GetSettings();
};

// 0x38 (0x730 - 0x6F8)
// Class VICODynamicsPlugin.VDSkinnedRopeComponent
class UVDSkinnedRopeComponent : public UVDRopeComponent
{
public:
	struct FComponentReference                   PoseableMeshRef;                                   // 0x6F8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1143[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDSkinnedRopeComponent* GetDefaultObj();

};

// 0x38 (0x730 - 0x6F8)
// Class VICODynamicsPlugin.VDSplineRopeComponent
class UVDSplineRopeComponent : public UVDRopeComponent
{
public:
	struct FComponentReference                   SplineRef;                                         // 0x6F8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        bAutoAttachToSplineEndPoints : 1;                  // Mask: 0x1, PropSize: 0x10x720(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bStretchToSplineLength : 1;                        // Mask: 0x2, PropSize: 0x10x720(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_AD : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_114D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SplineLength;                                      // 0x724(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_114E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDSplineRopeComponent* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class VICODynamicsPlugin.VDWindDirectionalSourceActor
class AVDWindDirectionalSourceActor : public AInfo
{
public:
	class UVDWindDirectionalSourceComponent*     Component;                                         // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AVDWindDirectionalSourceActor* GetDefaultObj();

};

// 0x48 (0x240 - 0x1F8)
// Class VICODynamicsPlugin.VDWindDirectionalSourceComponent
class UVDWindDirectionalSourceComponent : public USceneComponent
{
public:
	float                                        Radius;                                            // 0x1F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinGustAmount;                                     // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGustAmount;                                     // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinGustDuration;                                   // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGustDuration;                                   // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinGustTransitionSpeed;                            // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGustTransitionSpeed;                            // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSecondsBetweenGusts;                            // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSecondsBetweenGusts;                            // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1170[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVDWindDirectionalSourceComponent* GetDefaultObj();

	void SetRadius(float InRadius);
	float GetCurrentGust();
};

// 0x40 (0x68 - 0x28)
// Class VICODynamicsPlugin.VICODynamicsSettings
class UVICODynamicsSettings : public UObject
{
public:
	int32                                        ReserveParticleBudget;                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfThreadsToUse;                              // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSelfCollision;                               // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnablePhysXSceneCollision;                         // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerformExtraCollisionResolutionLoop;               // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableExplicitRigidBodyCollision;                  // 0x33(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationFramerate;                               // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RunSimulationOnWorkerThread;                       // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkerThreadCoreAffinity;                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationIterations;                              // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConstraintIterations;                              // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConstrainSimulationTo2DPlane;                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1180[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlaneOrigin;                                       // 0x4C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlaneNormal;                                       // 0x58(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCachePerFrameResults : 1;                         // Mask: 0x1, PropSize: 0x10x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCacheOnlyCollisionsWithStaticRigidBodies : 1;     // Mask: 0x2, PropSize: 0x10x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCacheNonHitsAlso : 1;                             // Mask: 0x4, PropSize: 0x10x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DrawCollisionDebug : 1;                            // Mask: 0x8, PropSize: 0x10x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowOnScreenStats : 1;                            // Mask: 0x10, PropSize: 0x10x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1182[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVICODynamicsSettings* GetDefaultObj();

};

}


