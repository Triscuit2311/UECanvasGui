#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x420 - 0x1F8)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x1F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x1F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x1F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_148 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_204D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x1FC(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x214(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x22C(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_204F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x248(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x298(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2052[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// 0x10 (0x230 - 0x220)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(NativeAccessSpecifierPrivate)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x488 (0x900 - 0x478)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_209B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x480(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209C[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCollection*                   RestCollection;                                    // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x570(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	bool                                         Simulating;                                        // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableClustering;                                  // 0x589(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterGroupIndex;                                 // 0x58C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DamageThreshold;                                   // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CollisionGroup;                                    // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionSampleFraction;                           // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearEtherDrag;                                   // 0x5B4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularEtherDrag;                                  // 0x5B8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x5C0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0x5CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0x5D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x5E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x5F0(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x640(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x650(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A6[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x678(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        DesiredCacheTime;                                  // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CachePlayback;                                     // 0x68C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x690(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bNotifyBreaks;                                     // 0x6A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNotifyCollisions;                                 // 0x6A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableReplication;                                // 0x6A2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAbandonAfterLevel;                          // 0x6A3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReplicationAbandonClusterLevel;                    // 0x6A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGeometryCollectionRepData            RepData;                                           // 0x6A8(0x18)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_20AE[0x218];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            DummyBodySetup;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20AF[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NetAbandonCluster(int32 TransformIndex);
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
};

// 0xE8 (0x308 - 0x220)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x228(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawWholeCollection;                         // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawHierarchy;                               // 0x241(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawClustering;                              // 0x242(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x243(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyId;                                  // 0x244(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyCollision;                           // 0x245(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollisionAtOrigin;                                // 0x246(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyTransform;                           // 0x247(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInertia;                             // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyVelocity;                            // 0x249(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyForce;                               // 0x24A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInfos;                               // 0x24B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransformIndex;                               // 0x24C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransform;                                    // 0x24D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParent;                                       // 0x24E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLevel;                                        // 0x24F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowConnectivityEdges;                            // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryIndex;                                // 0x251(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryTransform;                            // 0x252(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBoundingBox;                                  // 0x253(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaces;                                        // 0x254(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceIndices;                                  // 0x255(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceNormals;                                  // 0x256(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSingleFace;                                   // 0x257(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SingleFaceIndex;                                   // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertices;                                     // 0x25C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexIndices;                                // 0x25D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexNormals;                                // 0x25E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActiveVisualization;                           // 0x25F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointThickness;                                    // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x264(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTextShadow;                                       // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TextScale;                                         // 0x26C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalScale;                                       // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrowScale;                                        // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyIdColor;                                  // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RigidBodyTransformScale;                           // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyCollisionColor;                           // 0x284(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyInertiaColor;                             // 0x288(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyVelocityColor;                            // 0x28C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyForceColor;                               // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyInfoColor;                                // 0x294(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                TransformIndexColor;                               // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransformScale;                                    // 0x29C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LevelColor;                                        // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ParentColor;                                       // 0x2A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectivityEdgeThickness;                         // 0x2A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                GeometryIndexColor;                                // 0x2AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeometryTransformScale;                            // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BoundingBoxColor;                                  // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceColor;                                         // 0x2B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceIndexColor;                                    // 0x2BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceNormalColor;                                   // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                SingleFaceColor;                                   // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexColor;                                       // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexIndexColor;                                  // 0x2CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexNormalColor;                                 // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBillboardComponent*                   SpriteComponent;                                   // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C7[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20CF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_20D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableClustering;                                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryCollectionSource>     GeometrySource;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECollisionTypeEnum                CollisionType;                                     // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EImplicitTypeEnum                 ImplicitType;                                      // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLevelSetResolution;                             // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevelSetResolution;                             // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinClusterLevelSetResolution;                      // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevelSetResolution;                      // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionObjectReductionPercentage;                // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMassAsDensity;                                    // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumMassClamp;                                  // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionParticlesFraction;                        // 0x9C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumCollisionParticles;                         // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableRemovePiecesOnFracture;                      // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 PersistentGuid;                                    // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 StateGuid;                                         // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BoneSelectedMaterialIndex;                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20EA[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xA0 (0x2C0 - 0x220)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             RayMarchMaterial;                                  // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceTolerance;                                  // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Isovalue;                                          // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderVolumeBoundingBox;                           // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F0[0x86];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

// 0x88 (0x138 - 0xB0)
// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	uint8                                        Pad_20F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimulating;                                       // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCollisions;                                 // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0xD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Density;                                           // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinMass;                                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMass;                                           // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTypeEnum                CollisionType;                                     // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImplicitShapeParticlesPerUnitArea;                 // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImplicitShapeMinNumParticles;                      // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImplicitShapeMaxNumParticles;                      // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLevelSetResolution;                             // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevelSetResolution;                             // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionGroup;                                    // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0x100(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0x10C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2103[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkeletalMeshSimulationComponent* GetDefaultObj();

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
};

// 0x88 (0x138 - 0xB0)
// Class GeometryCollectionEngine.StaticMeshSimulationComponent
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	uint8                                        Pad_2109[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Simulating;                                        // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCollisions;                                 // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTypeEnum                CollisionType;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EImplicitTypeEnum                 ImplicitType;                                      // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLevelSetResolution;                             // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevelSetResolution;                             // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0xD0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0xDC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageThreshold;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2111[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2114[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           SimulatedComponents;                               // 0x120(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2115[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStaticMeshSimulationComponent* GetDefaultObj();

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void ForceRecreatePhysicsState();
};

}


