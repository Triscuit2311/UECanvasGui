#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_7[0x8];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class ModelingComponents.OnAcceptHandleSourcesProperties
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{
public:
	enum class EHandleSourcesMethod              OnToolAccept;                                      // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8[0x7];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesProperties* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	enum class EBaseCreateFromSelectedTargetType WriteOutputTo;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutputName;                                        // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputAsset;                                       // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedHandleSourceProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class ModelingComponents.TransformInputsToolProperties
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowTransformUI;                                  // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A[0x6];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformInputsToolProperties* GetDefaultObj();

};

// 0x60 (0xF0 - 0x90)
// Class ModelingComponents.BaseCreateFromSelectedTool
class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_B[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformInputsToolProperties*        TransformProperties;                               // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>               TransformProxies;                                  // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>               TransformGizmos;                                   // 0xC0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       TransformInitialScales;                            // 0xD0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C[0x10];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedTool* GetDefaultObj();

};

// 0x48 (0x4C0 - 0x478)
// Class ModelingComponents.BaseDynamicMeshComponent
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_D[0x48];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseMeshProcessingToolBuilder
class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseMeshProcessingToolBuilder* GetDefaultObj();

};

// 0x378 (0x400 - 0x88)
// Class ModelingComponents.BaseMeshProcessingTool
class UBaseMeshProcessingTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_E[0x28];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F[0x348];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseMeshProcessingTool* GetDefaultObj();

};

// 0x18 (0x108 - 0xF0)
// Class ModelingComponents.BaseVoxelTool
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                      VoxProperties;                                     // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseVoxelTool* GetDefaultObj();

};

// 0x520 (0x550 - 0x30)
// Class ModelingComponents.CollectSurfacePathMechanic
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_11[0x520];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCollectSurfacePathMechanic* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class ModelingComponents.ConstructionPlaneMechanic
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_12[0x98];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformGizmo*                       PlaneTransformGizmo;                               // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConstructionPlaneMechanic* GetDefaultObj();

};

// 0x620 (0x650 - 0x30)
// Class ModelingComponents.CurveControlPointsMechanic
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_14[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15[0x498];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     DrawnControlSegments;                              // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    PreviewPoint;                                      // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     PreviewSegment;                                    // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16[0x78];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       PointTransformProxy;                               // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                       PointTransformGizmo;                               // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17[0xB8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurveControlPointsMechanic* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class ModelingComponents.DynamicMeshReplacementChangeTarget
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	uint8                                        Pad_19[0x30];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshReplacementChangeTarget* GetDefaultObj();

};

// 0x68 (0x4E0 - 0x478)
// Class ModelingComponents.LineSetComponent
class ULineSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    LineMaterial;                                      // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      Bounds;                                            // 0x480(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bBoundsDirty;                                      // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B[0x43];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULineSetComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.MeshCommandChangeTarget
class IMeshCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshCommandChangeTarget* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	uint8                                        Pad_20[0x30];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            StandardMaterials;                                 // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WorkingMaterial;                                   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshOpPreviewWithBackgroundCompute* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.MeshReplacementCommandChangeTarget
class IMeshReplacementCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshReplacementCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.MeshVertexCommandChangeTarget
class IMeshVertexCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshVertexCommandChangeTarget* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingComponents.MultiTransformer
class UMultiTransformer : public UObject
{
public:
	uint8                                        Pad_2A[0x48];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C[0x68];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformGizmo*                       TransformGizmo;                                    // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       TransformProxy;                                    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D[0x50];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiTransformer* GetDefaultObj();

};

// 0x110 (0x5D0 - 0x4C0)
// Class ModelingComponents.OctreeDynamicMeshComponent
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_2F[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExplicitShowWireframe;                            // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30[0xF7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOctreeDynamicMeshComponent* GetDefaultObj();

};

// 0x470 (0x4A0 - 0x30)
// Class ModelingComponents.PlaneDistanceFromHitMechanic
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_31[0x470];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneDistanceFromHitMechanic* GetDefaultObj();

};

// 0x68 (0x4E0 - 0x478)
// Class ModelingComponents.PointSetComponent
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    PointMaterial;                                     // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      Bounds;                                            // 0x480(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bBoundsDirty;                                      // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34[0x43];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointSetComponent* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class ModelingComponents.PreviewMesh
class UPreviewMesh : public UObject
{
public:
	uint8                                        Pad_37[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bBuildSpatialDataStructure;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawOnTop;                                        // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39[0xE];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USimpleDynamicMeshComponent*           DynamicMeshComponent;                              // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A[0x88];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPreviewMesh* GetDefaultObj();

};

// 0x3F0 (0x4D0 - 0xE0)
// Class ModelingComponents.PolyEditPreviewMesh
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	uint8                                        Pad_3B[0x3F0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditPreviewMesh* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class ModelingComponents.PolygonSelectionMechanicProperties
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bSelectFaces;                                      // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdges;                                      // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectVertices;                                   // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdgeLoops;                                  // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdgeRings;                                  // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferProjectedElement;                           // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectDownRay;                                    // 0x66(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreOcclusion;                                  // 0x67(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanicProperties* GetDefaultObj();

};

// 0x800 (0x830 - 0x30)
// Class ModelingComponents.PolygonSelectionMechanic
class UPolygonSelectionMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_3C[0x20];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolygonSelectionMechanicProperties*   Properties;                                        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D[0x4C8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTriangleSetComponent*                 DrawnTriangleSetComponent;                         // 0x528(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E[0x50];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    HighlightedFaceMaterial;                           // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F[0x2A8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanic* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class ModelingComponents.PreviewGeometryActor
class APreviewGeometryActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class APreviewGeometryActor* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class ModelingComponents.PreviewGeometry
class UPreviewGeometry : public UObject
{
public:
	class APreviewGeometryActor*                 ParentActor;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class ULineSetComponent*> LineSets;                                          // 0x30(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPreviewGeometry* GetDefaultObj();

	bool SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible);
	bool SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
	void SetAllLineSetsMaterial(class UMaterialInterface* Material);
	bool RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy);
	void RemoveAllLineSets(bool bDestroy);
	class APreviewGeometryActor* GetActor();
	class ULineSetComponent* FindLineSet(const class FString& LineSetIdentifier);
	void Disconnect();
	void CreateInWorld(class UWorld* World, struct FTransform& WithTransform);
	class ULineSetComponent* AddLineSet(const class FString& LineSetIdentifier);
};

// 0x0 (0x220 - 0x220)
// Class ModelingComponents.PreviewMeshActor
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class APreviewMeshActor* GetDefaultObj();

};

// 0x150 (0x610 - 0x4C0)
// Class ModelingComponents.SimpleDynamicMeshComponent
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	enum class EDynamicMeshTangentCalcType       TangentsType;                                      // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvalidateProxyOnChange;                          // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51[0x36];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExplicitShowWireframe;                            // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52[0x47];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDrawOnTop;                                        // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53[0xCF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USimpleDynamicMeshComponent* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	enum class ESpaceCurveControlPointTransformMode TransformMode;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Softness;                                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff;                                       // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanicPropertySet* GetDefaultObj();

};

// 0x280 (0x2B0 - 0x30)
// Class ModelingComponents.SpaceCurveDeformationMechanic
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_56[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USpaceCurveDeformationMechanicPropertySet* TransformProperties;                               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58[0xF8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPointSetComponent*                    RenderPoints;                                      // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     RenderSegments;                                    // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A[0x38];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       PointTransformProxy;                               // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                       PointTransformGizmo;                               // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B[0xE8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanic* GetDefaultObj();

};

// 0x3C0 (0x3F0 - 0x30)
// Class ModelingComponents.SpatialCurveDistanceMechanic
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_5D[0x3C0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpatialCurveDistanceMechanic* GetDefaultObj();

};

// 0xE8 (0x560 - 0x478)
// Class ModelingComponents.TriangleSetComponent
class UTriangleSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                      Bounds;                                            // 0x478(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bBoundsDirty;                                      // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_61[0xCB];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTriangleSetComponent* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class ModelingComponents.UVLayoutPreviewProperties
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bVisible;                                          // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleFactor;                                       // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUVLayoutPreviewSide              WhichSide;                                         // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Shift;                                             // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUVLayoutPreviewProperties* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingComponents.UVLayoutPreview
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*            Settings;                                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTriangleSetComponent*                 TriangleComponent;                                 // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBackingRectangle;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    BackingRectangleMaterial;                          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C[0xF0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVLayoutPreview* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class ModelingComponents.VoxelProperties
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        VoxelCount;                                        // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSimplify;                                     // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveInternalSurfaces;                           // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SimplifyMaxErrorFactor;                            // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CubeRootMinComponentVolume;                        // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVoxelProperties* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class ModelingComponents.WeightMapSetProperties
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  WeightMap;                                         // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        WeightMapsList;                                    // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInvertWeightMap;                                  // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeightMapSetProperties* GetDefaultObj();

	TArray<class FString> GetWeightMapsFunc();
};

}


