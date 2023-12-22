#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.AddPatchToolBuilder
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_7F6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPatchToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.AddPatchToolProperties
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Width;                                             // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Subdivisions;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Shift;                                             // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAddPatchToolProperties* GetDefaultObj();

};

// 0x78 (0x100 - 0x88)
// Class MeshModelingTools.AddPatchTool
class UAddPatchTool : public USingleClickTool
{
public:
	uint8                                        Pad_7FE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAddPatchToolProperties*               ShapeSettings;                                     // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_803[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPatchTool* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.AddPrimitiveToolBuilder
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_808[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPrimitiveToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.ProceduralShapeToolProperties
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bInstanceIfPossible;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMakeMeshPolygroupMode            PolygroupMode;                                     // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMakeMeshPlacementType            PlaceMode;                                         // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGrid;                                       // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMakeMeshPivotLocation            PivotLocation;                                     // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation;                                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlignShapeToPlacementSurface;                     // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralShapeToolProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.ProceduralRectangleToolProperties
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Width;                                             // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WidthSubdivisions;                                 // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DepthSubdivisions;                                 // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralRectangleToolProperties* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class MeshModelingTools.ProceduralBoxToolProperties
class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{
public:
	float                                        Height;                                            // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralBoxToolProperties* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{
public:
	float                                        CornerRadius;                                      // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CornerSlices;                                      // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralRoundedRectangleToolProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.ProceduralDiscToolProperties
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSubdivisions;                                // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_829[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralDiscToolProperties* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{
public:
	float                                        HoleRadius;                                        // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralPuncturedDiscToolProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.ProceduralTorusToolProperties
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        MajorRadius;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinorRadius;                                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TubeSlices;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CrossSectionSlices;                                // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralTorusToolProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.ProceduralCylinderToolProperties
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralCylinderToolProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.ProceduralConeToolProperties
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralConeToolProperties* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class MeshModelingTools.ProceduralArrowToolProperties
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        ShaftRadius;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShaftHeight;                                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadRadius;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadHeight;                                        // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSubdivisions;                                 // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralArrowToolProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.ProceduralSphereToolProperties
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LatitudeSlices;                                    // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LongitudeSlices;                                   // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_848[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralSphereToolProperties* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MeshModelingTools.ProceduralSphericalBoxToolProperties
class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Subdivisions;                                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralSphericalBoxToolProperties* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class MeshModelingTools.LastActorInfo
class ULastActorInfo : public UObject
{
public:
	uint8                                        Pad_84F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMesh;                                        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralShapeToolProperties*        ShapeSettings;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULastActorInfo* GetDefaultObj();

};

// 0x68 (0xF0 - 0x88)
// Class MeshModelingTools.AddPrimitiveTool
class UAddPrimitiveTool : public USingleClickTool
{
public:
	uint8                                        Pad_853[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProceduralShapeToolProperties*        ShapeSettings;                                     // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULastActorInfo*                        LastGenerated;                                     // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                AssetName;                                         // 0xB0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_857[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddBoxPrimitiveTool
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddBoxPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddCylinderPrimitiveTool
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddCylinderPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddConePrimitiveTool
class UAddConePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddConePrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddRectanglePrimitiveTool
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddRectanglePrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddRoundedRectanglePrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddDiscPrimitiveTool
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddDiscPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddPuncturedDiscPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddTorusPrimitiveTool
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddTorusPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddArrowPrimitiveTool
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddArrowPrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddSpherePrimitiveTool
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddSpherePrimitiveTool* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MeshModelingTools.AddSphericalBoxPrimitiveTool
class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddSphericalBoxPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.AlignObjectsToolBuilder
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UAlignObjectsToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.AlignObjectsToolProperties
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EAlignObjectsAlignTypes           AlignType;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlignObjectsAlignToOptions       AlignTo;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlignObjectsBoxPoint             BoxPosition;                                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlignX;                                           // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlignY;                                           // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlignZ;                                           // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_876[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAlignObjectsToolProperties* GetDefaultObj();

};

// 0xB0 (0x140 - 0x90)
// Class MeshModelingTools.AlignObjectsTool
class UAlignObjectsTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_87C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAlignObjectsToolProperties*           AlignProps;                                        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87D[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAlignObjectsTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_882[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolBuilder* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeMapType                      MapType;                                           // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBakeTextureResolution            Resolution;                                        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWorldSpace;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_895[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UVLayer;                                           // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        UVLayerNamesList;                                  // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Result;                                            // 0x90(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolProperties* GetDefaultObj();

	TArray<class FString> GetUVLayerNamesFunc();
};

// 0x0 (0x60 - 0x60)
// Class MeshModelingTools.BakedNormalMapToolProperties
class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UBakedNormalMapToolProperties* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class MeshModelingTools.BakedOcclusionMapToolProperties
class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOcclusionMapPreview              Preview;                                           // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OcclusionRays;                                     // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadAngle;                                       // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOcclusionMapDistribution         Distribution;                                      // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGaussianBlur;                                     // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurRadius;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BiasAngle;                                         // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENormalMapSpace                   NormalSpace;                                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakedOcclusionMapToolProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	float                                        BaseGrayLevel;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionMultiplier;                               // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBakedOcclusionMapVisualizationProperties* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.BakedCurvatureMapToolProperties
class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakedCurvatureTypeMode           CurvatureType;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBakedCurvatureColorMode          ColorMode;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMultiplier;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRangeMultiplier;                                // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBakedCurvatureClampMode          Clamping;                                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGaussianBlur;                                     // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurRadius;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakedCurvatureMapToolProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.BakedTexture2DImageProperties
class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            SourceTexture;                                     // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UVLayer;                                           // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakedTexture2DImageProperties* GetDefaultObj();

};

// 0x468 (0x4F8 - 0x90)
// Class MeshModelingTools.BakeMeshAttributeMapsTool
class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{
public:
	class UBakeMeshAttributeMapsToolProperties*  Settings;                                          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedNormalMapToolProperties*         NormalMapProps;                                    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedOcclusionMapToolProperties*      OcclusionMapProps;                                 // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedCurvatureMapToolProperties*      CurvatureMapProps;                                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedTexture2DImageProperties*        Texture2DProps;                                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedOcclusionMapVisualizationProperties* VisualizationProps;                                // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8BF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              PreviewMaterial;                                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              BentNormalPreviewMaterial;                         // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C0[0x360];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CachedNormalMap;                                   // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C1[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CachedOcclusionMap;                                // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            CachedBentNormalMap;                               // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C3[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CachedCurvatureMap;                                // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CachedMeshPropertyMap;                             // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CachedTexture2DImageMap;                           // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            EmptyNormalMap;                                    // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            EmptyColorMapBlack;                                // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            EmptyColorMapWhite;                                // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.BakeTransformToolBuilder
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_8CB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeTransformToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.BakeTransformToolProperties
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bBakeRotation;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBakeScaleMethod                  BakeScale;                                         // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecenterPivot;                                    // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CF[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeTransformToolProperties* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class MeshModelingTools.BakeTransformTool
class UBakeTransformTool : public UMultiSelectionTool
{
public:
	class UBakeTransformToolProperties*          BasicProperties;                                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8D3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeTransformTool* GetDefaultObj();

};

// 0x58 (0xB8 - 0x60)
// Class MeshModelingTools.PhysicsObjectToolPropertySet
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
public:
	class FString                                ObjectName;                                        // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionGeometryMode            CollisionType;                                     // 0x70(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPhysicsSphereData>            Spheres;                                           // 0x78(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsBoxData>               Boxes;                                             // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsCapsuleData>           Capsules;                                          // 0x98(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsConvexData>            Convexes;                                          // 0xA8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPhysicsObjectToolPropertySet* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.CollisionGeometryVisualizationProperties
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	float                                        LineThickness;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHidden;                                       // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Color;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCollisionGeometryVisualizationProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.CombineMeshesToolBuilder
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_8E1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombineMeshesToolBuilder* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class MeshModelingTools.CombineMeshesToolProperties
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsDuplicateMode;                                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECombineTargetType                WriteOutputTo;                                     // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputAsset;                                       // 0x78(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCombineMeshesToolProperties* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class MeshModelingTools.CombineMeshesTool
class UCombineMeshesTool : public UMultiSelectionTool
{
public:
	class UCombineMeshesToolProperties*          BasicProperties;                                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOnAcceptHandleSourcesProperties*      HandleSourceProperties;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombineMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ConvertToPolygonsToolBuilder
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UConvertToPolygonsToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.ConvertToPolygonsToolProperties
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EConvertToPolygonsMode            ConversionMode;                                    // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleTolerance;                                    // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCalculateNormals;                                 // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGroupColors;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_901[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConvertToPolygonsToolProperties* GetDefaultObj();

};

// 0x358 (0x3E0 - 0x88)
// Class MeshModelingTools.ConvertToPolygonsTool
class UConvertToPolygonsTool : public USingleSelectionTool
{
public:
	class UConvertToPolygonsToolProperties*      Settings;                                          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_909[0x348];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConvertToPolygonsTool* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.CSGMeshesToolProperties
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECSGOperation                     Operation;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowNewBoundaryEdges;                             // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttemptFixHoles;                                  // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUseFirstMeshMaterials;                        // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCSGMeshesToolProperties* GetDefaultObj();

};

// 0x30 (0x120 - 0xF0)
// Class MeshModelingTools.CSGMeshesTool
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class UCSGMeshesToolProperties*              CSGProperties;                                     // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_914[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_916[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCSGMeshesTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.CSGMeshesToolBuilder
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UCSGMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsToolBuilder* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupTopologyDeformationStrategy DeformationStrategy;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuickTransformerMode             TransformMode;                                     // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectFaces;                                      // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectEdges;                                      // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectVertices;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0x66(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_923[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWeightScheme                     SelectedWeightScheme;                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_924[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HandleWeight;                                      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostFixHandles;                                   // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_925[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsTransformProperties* GetDefaultObj();

};

// 0x1300 (0x13C0 - 0xC0)
// Class MeshModelingTools.DeformMeshPolygonsTool
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	uint8                                        Pad_929[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USimpleDynamicMeshComponent*           DynamicMeshComponent;                              // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDeformMeshPolygonsTransformProperties* TransformProps;                                    // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_92B[0x12E8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsTool* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class MeshModelingTools.DisplaceMeshCommonProperties
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDisplaceMeshToolDisplaceType     DisplacementType;                                  // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_931[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisplaceIntensity;                                 // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Subdivisions;                                      // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WeightMap;                                         // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        WeightMapsList;                                    // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInvertWeightMap;                                  // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableSizeWarning;                               // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_934[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshCommonProperties* GetDefaultObj();

	TArray<class FString> GetWeightMapsFunc();
};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.DisplaceMeshTextureMapProperties
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            DisplacementMap;                                   // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDisplaceMeshTextureMapProperties* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableFilter;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FilterDirection;                                   // 0x64(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterWidth;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshDirectionalFilterProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
public:
	TArray<struct FPerlinLayerProperties>        PerlinLayerProperties;                             // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDisplaceMeshPerlinNoiseProperties* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.DisplaceMeshSineWaveProperties
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SineWaveFrequency;                                 // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SineWavePhaseShift;                                // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SineWaveDirection;                                 // 0x68(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_942[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshSineWaveProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DisplaceMeshToolBuilder
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDisplaceMeshToolBuilder* GetDefaultObj();

};

// 0x368 (0x3F0 - 0x88)
// Class MeshModelingTools.DisplaceMeshTool
class UDisplaceMeshTool : public USingleSelectionTool
{
public:
	class UDisplaceMeshCommonProperties*         CommonProperties;                                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshTextureMapProperties*     TextureMapProperties;                              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshPerlinNoiseProperties*    NoiseProperties;                                   // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshSineWaveProperties*       SineWaveProperties;                                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_947[0x340];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.DrawAndRevolveToolBuilder
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_94B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawAndRevolveToolBuilder* GetDefaultObj();

};

// 0x50 (0xB0 - 0x60)
// Class MeshModelingTools.RevolveProperties
class URevolveProperties : public UInteractiveToolPropertySet
{
public:
	double                                       RevolutionDegrees;                                 // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RevolutionDegreesOffset;                           // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseRevolutionDirection;                       // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipMesh;                                         // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProfileIsCrossSectionOfSide;                      // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERevolvePropertiesPolygroupMode   PolygroupMode;                                     // 0x77(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERevolvePropertiesQuadSplit       QuadSplitMode;                                     // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DiagonalProportionTolerance;                       // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERevolvePropertiesCapFillMode     CapFillMode;                                       // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldFullRevolution;                               // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldVertsOnAxis;                                  // 0x8A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_951[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AxisWeldTolerance;                                 // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSharpNormals;                                     // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_953[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SharpNormalAngleTolerance;                         // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipVs;                                           // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUVsSkipFullyWeldedEdges;                          // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_956[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveProperties* GetDefaultObj();

};

// 0x20 (0xD0 - 0xB0)
// Class MeshModelingTools.RevolveToolProperties
class URevolveToolProperties : public URevolveProperties
{
public:
	bool                                         bConnectOpenProfileToAxis;                         // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_958[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DrawPlaneOrigin;                                   // 0xB4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              DrawPlaneOrientation;                              // 0xC0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableSnapping;                                   // 0xCC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowedToEditDrawPlane;                           // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95B[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.RevolveOperatorFactory
class URevolveOperatorFactory : public UObject
{
public:
	uint8                                        Pad_95E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDrawAndRevolveTool*                   RevolveTool;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URevolveOperatorFactory* GetDefaultObj();

};

// 0xA0 (0x120 - 0x80)
// Class MeshModelingTools.DrawAndRevolveTool
class UDrawAndRevolveTool : public UInteractiveTool
{
public:
	uint8                                        Pad_963[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveControlPointsMechanic*           ControlPointsMechanic;                             // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URevolveToolProperties*                Settings;                                          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDrawAndRevolveTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.DrawPolygonToolBuilder
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_970[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolygonToolBuilder* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.DrawPolygonToolStandardProperties
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolygonDrawMode              PolygonType;                                       // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawPolygonOutputMode            OutputMode;                                        // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_976[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FeatureSizeRatio;                                  // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtrudeHeight;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSelfIntersections;                           // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGizmo;                                        // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_978[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolygonToolStandardProperties* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.DrawPolygonToolSnapProperties
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapping;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToVertices;                                   // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToEdges;                                      // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToAngles;                                     // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToLengths;                                    // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_980[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SegmentLength;                                     // 0x68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitSceneObjects;                                  // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_982[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HitNormalOffset;                                   // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_983[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolygonToolSnapProperties* GetDefaultObj();

};

// 0x4F0 (0x570 - 0x80)
// Class MeshModelingTools.DrawPolygonTool
class UDrawPolygonTool : public UInteractiveTool
{
public:
	uint8                                        Pad_985[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDrawPolygonToolStandardProperties*    PolygonProperties;                                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolygonToolSnapProperties*        SnapProperties;                                    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_98B[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                       PlaneTransformGizmo;                               // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_991[0x3D8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneDistanceFromHitMechanic*         HeightMechanic;                                    // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_992[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolygonTool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.DrawPolyPathToolBuilder
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	uint8                                        Pad_995[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolyPathToolBuilder* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.DrawPolyPathProperties
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolyPathOutputMode           OutputType;                                        // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawPolyPathWidthMode            WidthMode;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawPolyPathHeightMode           HeightMode;                                        // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RampStartRatio;                                    // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolyPathProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.DrawPolyPathExtrudeProperties
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolyPathExtrudeDirection     Direction;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolyPathExtrudeProperties* GetDefaultObj();

};

// 0x190 (0x210 - 0x80)
// Class MeshModelingTools.DrawPolyPathTool
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	uint8                                        Pad_9A8[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDrawPolyPathProperties*               TransformProps;                                    // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolyPathExtrudeProperties*        ExtrudeProperties;                                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9AB[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9AD[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9AE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolyPathTool* GetDefaultObj();

};

// 0x40 (0x1F8 - 0x1B8)
// Class MeshModelingTools.DynamicMeshBrushTool
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                          PreviewMesh;                                       // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9B2[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshBrushTool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.DynamicMeshSculptToolBuilder
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	uint8                                        Pad_9B9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshSculptToolBuilder* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.BrushSculptProperties
class UBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsRemeshingEnabled;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicMeshSculptBrushType       PrimaryBrushType;                                  // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrimaryBrushSpeed;                                 // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVFlow;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeTarget;                                     // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothBrushSpeed;                                  // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDetailPreservingSmooth;                           // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrushSculptProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.DynamicSculptToolActions
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_9C7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicSculptToolActions* GetDefaultObj();

	void DiscardAttributes();
};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.MeshConstraintProperties
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreserveSharpEdges;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshBoundaryConstraint           MeshBoundaryConstraint;                            // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroupBoundaryConstraint          GroupBoundaryConstraint;                           // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialBoundaryConstraint       MaterialBoundaryConstraint;                        // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventNormalFlips;                               // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshConstraintProperties* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MeshModelingTools.RemeshProperties
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                        SmoothingStrength;                                 // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlips;                                            // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSplits;                                           // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollapses;                                        // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CD[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshProperties* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshModelingTools.BrushRemeshProperties
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                         bEnableRemeshing;                                  // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriangleSize;                                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreserveDetail;                                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBrushRemeshProperties* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.FixedPlaneBrushProperties
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPropertySetEnabled;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGizmo;                                        // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGrid;                                       // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x64(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x70(0x10)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFixedPlaneBrushProperties* GetDefaultObj();

};

// 0xC60 (0xD20 - 0xC0)
// Class MeshModelingTools.DynamicMeshSculptTool
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                BrushProperties;                                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushSculptProperties*                SculptProperties;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USculptMaxBrushProperties*             SculptMaxBrushProperties;                          // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKelvinBrushProperties*                KelvinBrushProperties;                             // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushRemeshProperties*                RemeshProperties;                                  // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFixedPlaneBrushProperties*            GizmoProperties;                                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshEditingViewProperties*            ViewProperties;                                    // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicSculptToolActions*             SculptToolActions;                                 // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D9[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBrushStampIndicator*                  BrushIndicator;                                    // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              BrushIndicatorMaterial;                            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPreviewMesh*                          BrushIndicatorMesh;                                // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOctreeDynamicMeshComponent*           DynamicMeshComponent;                              // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              ActiveOverrideMaterial;                            // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9DD[0xBA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformGizmo*                       PlaneTransformGizmo;                               // 0xD08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9DE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshSculptTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.EdgeLoopInsertionToolBuilder
class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_9E1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEdgeLoopInsertionToolBuilder* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class MeshModelingTools.EdgeLoopInsertionProperties
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EEdgeLoopPositioningMode          PositionMode;                                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEdgeLoopInsertionMode            InsertionMode;                                     // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLoops;                                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ProportionOffset;                                  // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       DistanceOffset;                                    // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInteractive;                                      // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOffsetDirection;                              // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWireframe;                                        // 0x82(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VertexTolerance;                                   // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEdgeLoopInsertionProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
class UEdgeLoopInsertionOperatorFactory : public UObject
{
public:
	uint8                                        Pad_9E9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEdgeLoopInsertionTool*                Tool;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEdgeLoopInsertionOperatorFactory* GetDefaultObj();

};

// 0x478 (0x500 - 0x88)
// Class MeshModelingTools.EdgeLoopInsertionTool
class UEdgeLoopInsertionTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_9EC[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEdgeLoopInsertionProperties*          Settings;                                          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9EE[0x260];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9EF[0x1F8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEdgeLoopInsertionTool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsToolBuilder
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	uint8                                        Pad_9F1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.PolyEditCommonProperties
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELocalFrameMode                   LocalFrameMode;                                    // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockRotation;                                     // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F3[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditCommonProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_9F6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActionPropertySet* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.EditMeshPolygonsToolActions
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActions* GetDefaultObj();

	void Retriangulate();
	void RecalcNormals();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActions_Triangles* GetDefaultObj();

	void RecalcNormals();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void CutFaces();
};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.EditMeshPolygonsToolUVActions
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolUVActions* GetDefaultObj();

	void PlanarProjection();
};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolEdgeActions* GetDefaultObj();

	void Weld();
	void Straighten();
	void FillHole();
};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolEdgeActions_Triangles* GetDefaultObj();

	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.PolyEditExtrudeProperties
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDirection         Direction;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShellsToSolids;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A35[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditExtrudeProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.PolyEditOffsetProperties
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bUseFaceNormals;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A38[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditOffsetProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.PolyEditInsetProperties
class UPolyEditInsetProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bReproject;                                        // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Softness;                                          // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoundaryOnly;                                     // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AreaScale;                                         // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPolyEditInsetProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.PolyEditOutsetProperties
class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Softness;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoundaryOnly;                                     // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A40[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AreaScale;                                         // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A41[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditOutsetProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.PolyEditCutProperties
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditCutPlaneOrientation      Orientation;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToVertices;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A42[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditCutProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.PolyEditSetUVProperties
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowMaterial;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A46[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditSetUVProperties* GetDefaultObj();

};

// 0x710 (0x7D0 - 0xC0)
// Class MeshModelingTools.EditMeshPolygonsTool
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	uint8                                        Pad_A48[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USimpleDynamicMeshComponent*           DynamicMeshComponent;                              // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditCommonProperties*             CommonProps;                                       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions*          EditActions;                                       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;                             // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions*      EditEdgeActions;                                   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;                         // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolUVActions*        EditUVActions;                                     // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditExtrudeProperties*            ExtrudeProperties;                                 // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditOffsetProperties*             OffsetProperties;                                  // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditInsetProperties*              InsetProperties;                                   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditOutsetProperties*             OutsetProperties;                                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditCutProperties*                CutProperties;                                     // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditSetUVProperties*              SetUVProperties;                                   // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A4B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMultiTransformer*                     MultiTransformer;                                  // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A4C[0x350];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A4D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A50[0x308];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.EditNormalsToolBuilder
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_A52[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.EditNormalsToolProperties
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bRecomputeNormals;                                 // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENormalCalculationMethod          NormalCalculationMethod;                           // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixInconsistentNormals;                           // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertNormals;                                    // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplitNormalMethod                SplitNormalMethod;                                 // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SharpEdgeAngleThreshold;                           // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSharpVertices;                               // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsToolProperties* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MeshModelingTools.EditNormalsAdvancedProperties
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditNormalsAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingTools.EditNormalsOperatorFactory
class UEditNormalsOperatorFactory : public UObject
{
public:
	uint8                                        Pad_A60[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditNormalsTool*                      Tool;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A61[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsOperatorFactory* GetDefaultObj();

};

// 0x70 (0x100 - 0x90)
// Class MeshModelingTools.EditNormalsTool
class UEditNormalsTool : public UMultiSelectionTool
{
public:
	class UEditNormalsToolProperties*            BasicProperties;                                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditNormalsAdvancedProperties*        AdvancedProperties;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A64[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.EditPivotToolBuilder
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditPivotToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.EditPivotToolProperties
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapDragging;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEditPivotSnapDragRotationMode    RotationMode;                                      // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6A[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditPivotToolProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.EditPivotToolActionPropertySet
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_A71[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseWorldBox;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A72[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditPivotToolActionPropertySet* GetDefaultObj();

	void Top();
	void Right();
	void Left();
	void Front();
	void Center();
	void Bottom();
	void Back();
};

// 0x170 (0x200 - 0x90)
// Class MeshModelingTools.EditPivotTool
class UEditPivotTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_A77[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditPivotToolProperties*              TransformProps;                                    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditPivotToolActionPropertySet*       EditPivotActions;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A78[0xD0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEditPivotTarget>              ActiveGizmos;                                      // 0x178(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A79[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditPivotTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.EditUVIslandsToolBuilder
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditUVIslandsToolBuilder* GetDefaultObj();

};

// 0x2C0 (0x380 - 0xC0)
// Class MeshModelingTools.EditUVIslandsTool
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	uint8                                        Pad_A7D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USimpleDynamicMeshComponent*           DynamicMeshComponent;                              // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A7F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMultiTransformer*                     MultiTransformer;                                  // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A80[0x288];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditUVIslandsTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_A81[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExtractCollisionGeometryToolBuilder* GetDefaultObj();

};

// 0x2A8 (0x330 - 0x88)
// Class MeshModelingTools.ExtractCollisionGeometryTool
class UExtractCollisionGeometryTool : public USingleSelectionTool
{
public:
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicsObjectToolPropertySet*         ObjectProps;                                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewGeometry*                      PreviewElements;                                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A82[0x288];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExtractCollisionGeometryTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.GroupEdgeInsertionToolBuilder
class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_A85[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroupEdgeInsertionToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.GroupEdgeInsertionProperties
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupEdgeInsertionMode           InsertionMode;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWireframe;                                        // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VertexTolerance;                                   // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroupEdgeInsertionProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
class UGroupEdgeInsertionOperatorFactory : public UObject
{
public:
	uint8                                        Pad_A8C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroupEdgeInsertionTool*               Tool;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroupEdgeInsertionOperatorFactory* GetDefaultObj();

};

// 0x4C8 (0x550 - 0x88)
// Class MeshModelingTools.GroupEdgeInsertionTool
class UGroupEdgeInsertionTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_A8E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroupEdgeInsertionProperties*         Settings;                                          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8F[0x4A8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroupEdgeInsertionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.HoleFillToolBuilder
class UHoleFillToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UHoleFillToolBuilder* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class MeshModelingTools.SmoothHoleFillProperties
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bConstrainToHoleInterior;                          // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A94[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemeshingExteriorRegionWidth;                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SmoothingExteriorRegionWidth;                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SmoothingInteriorRegionWidth;                      // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteriorSmoothness;                                // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A97[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FillDensityScalar;                                 // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProjectDuringRemesh;                              // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A99[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothHoleFillProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.HoleFillToolProperties
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EHoleFillOpFillType               FillType;                                          // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveIsolatedTriangles;                          // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoleFillToolProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.HoleFillToolActions
class UHoleFillToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_A9C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoleFillToolActions* GetDefaultObj();

	void SelectAll();
	void Clear();
};

// 0x50 (0xB0 - 0x60)
// Class MeshModelingTools.HoleFillStatisticsProperties
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                InitialHoles;                                      // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SelectedHoles;                                     // 0x70(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SuccessfulFills;                                   // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FailedFills;                                       // 0x90(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RemainingHoles;                                    // 0xA0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoleFillStatisticsProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.HoleFillOperatorFactory
class UHoleFillOperatorFactory : public UObject
{
public:
	uint8                                        Pad_AA4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoleFillTool*                         FillTool;                                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoleFillOperatorFactory* GetDefaultObj();

};

// 0x158 (0x1E0 - 0x88)
// Class MeshModelingTools.HoleFillTool
class UHoleFillTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_AA6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USmoothHoleFillProperties*             SmoothHoleFillProperties;                          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHoleFillToolProperties*               Properties;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHoleFillToolActions*                  Actions;                                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHoleFillStatisticsProperties*         Statistics;                                        // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AAA[0x118];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoleFillTool* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MeshModelingTools.MeshSculptBrushOpProps
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSculptBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.BaseKelvinletBrushOpProps
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Stiffness;                                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Incompressiblity;                                  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BrushSteps;                                        // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MeshModelingTools.ScaleKelvinletBrushOpProps
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Strength;                                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScaleKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MeshModelingTools.PullKelvinletBrushOpProps
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Falloff;                                           // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPullKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MeshModelingTools.SharpPullKelvinletBrushOpProps
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Falloff;                                           // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USharpPullKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MeshModelingTools.TwistKelvinletBrushOpProps
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Strength;                                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTwistKelvinletBrushOpProps* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.MeshAnalysisProperties
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                SurfaceArea;                                       // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Volume;                                            // 0x70(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshAnalysisProperties* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class MeshModelingTools.MeshAttributePaintToolBuilder
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	uint8                                        Pad_ADC[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintToolBuilder* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class MeshModelingTools.MeshAttributePaintToolProperties
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
public:
	TArray<class FName>                          Attributes;                                        // 0x60(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int32                                        SelectedAttribute;                                 // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AttributeName;                                     // 0x78(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshAttributePaintToolProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.MeshAttributePaintEditActions
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_AE5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintEditActions* GetDefaultObj();

};

// 0x418 (0x610 - 0x1F8)
// Class MeshModelingTools.MeshAttributePaintTool
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
public:
	class UMeshAttributePaintToolProperties*     AttribProps;                                       // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE9[0x410];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintTool* GetDefaultObj();

};

// 0xC8 (0x150 - 0x88)
// Class MeshModelingTools.MeshBoundaryToolBase
class UMeshBoundaryToolBase : public USingleSelectionTool
{
public:
	uint8                                        Pad_AEB[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USingleClickInputBehavior*             LoopSelectClickBehavior;                           // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AED[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshBoundaryToolBase* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.InflateBrushOpProps
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInflateBrushOpProps* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.MeshInspectorToolBuilder
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshInspectorToolBuilder* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.MeshInspectorProperties
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bWireframe;                                        // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoundaryEdges;                                    // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBowtieVertices;                                   // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPolygonBorders;                                   // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUVSeams;                                          // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUVBowties;                                        // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalSeams;                                      // 0x66(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalVectors;                                    // 0x67(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTangentVectors;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalLength;                                      // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TangentLength;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshInspectorProperties* GetDefaultObj();

};

// 0xA0 (0x128 - 0x88)
// Class MeshModelingTools.MeshInspectorTool
class UMeshInspectorTool : public USingleSelectionTool
{
public:
	class UMeshInspectorProperties*              Settings;                                          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B07[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0E[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshInspectorTool* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.NewMeshMaterialProperties
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	TWeakObjectPtr<class UMaterialInterface>     Material;                                          // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UVScale;                                           // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldSpaceUVScale;                                // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWireframe;                                        // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowExtendedOptions;                              // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B17[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNewMeshMaterialProperties* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.ExistingMeshMaterialProperties
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESetMeshMaterialMode              MaterialMode;                                      // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckerDensity;                                    // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UExistingMeshMaterialProperties* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class MeshModelingTools.MeshEditingViewProperties
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshEditingMaterialModes         MaterialMode;                                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlatShading;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x6C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B20[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshEditingViewProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.MoveBrushOpProps
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B23[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoveBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.PinchBrushOpProps
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPerpDamping;                                      // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B25[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPinchBrushOpProps* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MeshModelingTools.BasePlaneBrushOpProps
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
public:

	static class UClass* StaticClass();
	static class UBasePlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.PlaneBrushOpProps
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B37[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UViewAlignedPlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.FixedPlaneBrushOpProps
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFixedPlaneBrushOpProps* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.StandardSculptBrushOpProps
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStandardSculptBrushOpProps* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.ViewAlignedSculptBrushOpProps
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UViewAlignedSculptBrushOpProps* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.SculptMaxBrushOpProps
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeight;                                         // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFixedHeight;                                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FixedHeight;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B48[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USculptMaxBrushOpProps* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class MeshModelingTools.SculptBrushProperties
class USculptBrushProperties : public UBrushBaseProperties
{
public:
	float                                        Depth;                                             // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitBackFaces;                                     // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Lazyness;                                          // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPerBrushProps;                                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USculptBrushProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.KelvinBrushProperties
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                        FalloffDistance;                                   // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Incompressiblity;                                  // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BrushSteps;                                        // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKelvinBrushProperties* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.WorkPlaneProperties
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPropertySetEnabled;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGizmo;                                        // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGrid;                                       // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B56[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x64(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x70(0x10)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWorkPlaneProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.SculptMaxBrushProperties
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                        MaxHeight;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeCurrentHeight;                              // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USculptMaxBrushProperties* GetDefaultObj();

};

// 0x918 (0x9D8 - 0xC0)
// Class MeshModelingTools.MeshSculptToolBase
class UMeshSculptToolBase : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                BrushProperties;                                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorkPlaneProperties*                  GizmoProperties;                                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B61[0xE0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UMeshSculptBrushOpProps*>  BrushOpPropSets;                                   // 0x1B0(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B63[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UMeshSculptBrushOpProps*>  SecondaryBrushOpPropSets;                          // 0x250(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B65[0x5D0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshEditingViewProperties*            ViewProperties;                                    // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ActiveOverrideMaterial;                            // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushStampIndicator*                  BrushIndicator;                                    // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              BrushIndicatorMaterial;                            // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          BrushIndicatorMesh;                                // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                       PlaneTransformGizmo;                               // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B67[0x130];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSculptToolBase* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.MeshSelectionToolBuilder
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	uint8                                        Pad_B69[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.MeshSelectionToolActionPropertySet
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_B6D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSelectionToolActionPropertySet* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.MeshSelectionEditActions
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionEditActions* GetDefaultObj();

	void Shrink();
	void SelectLargestComponentByTriCount();
	void SelectLargestComponentByArea();
	void SelectAll();
	void OptimizeSelection();
	void Invert();
	void Grow();
	void ExpandToConnected();
	void Clear();
};

// 0x0 (0x68 - 0x68)
// Class MeshModelingTools.MeshSelectionMeshEditActions
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionMeshEditActions* GetDefaultObj();

	void SeparateTriangles();
	void FlipNormals();
	void DisconnectTriangles();
	void DeleteTriangles();
	void CreatePolygroup();
};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.MeshSelectionToolProperties
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshSelectionToolPrimaryMode     SelectionMode;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleTolerance;                                    // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitBackFaces;                                     // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshFacesColorMode               FaceColorMode;                                     // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshSelectionToolProperties* GetDefaultObj();

};

// 0x298 (0x490 - 0x1F8)
// Class MeshModelingTools.MeshSelectionTool
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	class UMeshSelectionToolProperties*          SelectionProps;                                    // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionEditActions*             SelectionActions;                                  // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionToolActionPropertySet*   EditActions;                                       // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionSet*                     Selection;                                         // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        SpawnedActors;                                     // 0x218(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B9B[0x268];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MeshModelingTools.BaseSmoothBrushOpProps
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
public:

	static class UClass* StaticClass();
	static class UBaseSmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.SmoothBrushOpProps
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVFlow;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.SecondarySmoothBrushOpProps
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVFlow;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USecondarySmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.SmoothFillBrushOpProps
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVFlow;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothFillBrushOpProps* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.FlattenBrushOpProps
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFlattenBrushOpProps* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.EraseBrushOpProps
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEraseBrushOpProps* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.SpaceDeformerOperatorFactory
class USpaceDeformerOperatorFactory : public UObject
{
public:
	uint8                                        Pad_BB1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshSpaceDeformerTool*                SpaceDeformerTool;                                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpaceDeformerOperatorFactory* GetDefaultObj();

};

// 0x100 (0x1C0 - 0xC0)
// Class MeshModelingTools.MeshSpaceDeformerTool
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
public:
	enum class ENonlinearOperationType           SelectedOperationType;                             // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpperBoundsInterval;                               // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerBoundsInterval;                               // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModifierPercent;                                   // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BB9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BBA[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GizmoCenter;                                       // 0x110(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BBC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 GizmoOrientation;                                  // 0x120(0x10)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UIntervalGizmo*                        IntervalGizmo;                                     // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                       TransformGizmo;                                    // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       TransformProxy;                                    // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*       UpIntervalSource;                                  // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*       DownIntervalSource;                                // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*       ForwardIntervalSource;                             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC1[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerTool* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class MeshModelingTools.MeshStatisticsProperties
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                Mesh;                                              // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UV;                                                // 0x70(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Attributes;                                        // 0x80(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshStatisticsProperties* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.MeshVertexSculptToolBuilder
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshVertexSculptToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.VertexBrushSculptProperties
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshVertexSculptBrushType        PrimaryBrushType;                                  // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshSculptFalloffType            PrimaryFalloffType;                                // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeTarget;                                     // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSmoothErases;                                     // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVertexBrushSculptProperties* GetDefaultObj();

};

// 0x858 (0x1230 - 0x9D8)
// Class MeshModelingTools.MeshVertexSculptTool
class UMeshVertexSculptTool : public UMeshSculptToolBase
{
public:
	class UVertexBrushSculptProperties*          SculptProperties;                                  // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USimpleDynamicMeshComponent*           DynamicMeshComponent;                              // 0x9E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BD9[0x848];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshVertexSculptTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.MirrorToolBuilder
class UMirrorToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_BDD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorToolBuilder* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.MirrorToolProperties
class UMirrorToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMirrorOperationMode              OperationMode;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCropAlongMirrorPlaneFirst;                        // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldVerticesOnMirrorPlane;                        // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBowtieVertexCreation;                        // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMirrorCtrlClickBehavior          CtrlClickBehavior;                                 // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bButtonsOnlyChangeOrientation;                     // 0x66(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPreview;                                      // 0x67(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMirrorSaveMode                   SaveMode;                                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorToolProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingTools.MirrorOperatorFactory
class UMirrorOperatorFactory : public UObject
{
public:
	uint8                                        Pad_BEE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorTool*                           MirrorTool;                                        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorOperatorFactory* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.MirrorToolActionPropertySet
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_BF3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorToolActionPropertySet* GetDefaultObj();

	void Up();
	void ShiftToCenter();
	void Right();
	void Left();
	void Forward();
	void Down();
	void Backward();
};

// 0xA8 (0x138 - 0x90)
// Class MeshModelingTools.MirrorTool
class UMirrorTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_BF7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorToolProperties*                 Settings;                                          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMirrorToolActionPropertySet*          ToolActions;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                    // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xB8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF8[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF9[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorTool* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.OffsetMeshToolProperties
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOffsetMeshToolOffsetType         OffsetType;                                        // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Distance;                                          // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateShell;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOffsetMeshToolProperties* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class MeshModelingTools.OffsetWeightMapSetProperties
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                        MinDistance;                                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOffsetWeightMapSetProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.IterativeOffsetProperties
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        Steps;                                             // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetBoundaries;                                 // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C00[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingPerStep;                                  // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReprojectSmooth;                                  // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIterativeOffsetProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.ImplicitOffsetProperties
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Smoothness;                                        // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVs;                                      // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C04[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImplicitOffsetProperties* GetDefaultObj();

};

// 0x20 (0x420 - 0x400)
// Class MeshModelingTools.OffsetMeshTool
class UOffsetMeshTool : public UBaseMeshProcessingTool
{
public:
	class UOffsetMeshToolProperties*             OffsetProperties;                                  // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIterativeOffsetProperties*            IterativeProperties;                               // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImplicitOffsetProperties*             ImplicitProperties;                                // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOffsetWeightMapSetProperties*         WeightMapProperties;                               // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UOffsetMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.OffsetMeshToolBuilder
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UOffsetMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.PhysicsInspectorToolBuilder
class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPhysicsInspectorToolBuilder* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class MeshModelingTools.PhysicsInspectorTool
class UPhysicsInspectorTool : public UMultiSelectionTool
{
public:
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPhysicsObjectToolPropertySet*> ObjectData;                                        // 0x98(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    LineMaterial;                                      // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPreviewGeometry*>              PreviewElements;                                   // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C1C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPhysicsInspectorTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.PlaneCutToolBuilder
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_C24[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.AcceptOutputProperties
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bExportSeparatedPiecesAsNewMeshAssets;             // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAcceptOutputProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.PlaneCutToolProperties
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bSnapToWorldGrid;                                  // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepBothHalves;                                   // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpacingBetweenHalves;                              // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillCutHole;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPreview;                                      // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillSpans;                                        // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutToolProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingTools.PlaneCutOperatorFactory
class UPlaneCutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_C34[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneCutTool*                         CutTool;                                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C35[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutOperatorFactory* GetDefaultObj();

};

// 0xD0 (0x160 - 0x90)
// Class MeshModelingTools.PlaneCutTool
class UPlaneCutTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_C37[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneCutToolProperties*               BasicProperties;                                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAcceptOutputProperties*               AcceptProperties;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CutPlaneOrigin;                                    // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C38[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 CutPlaneOrientation;                               // 0xC0(0x10)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                       // 0xE0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C39[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformGizmo*                       PlaneTransformGizmo;                               // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C3B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutTool* GetDefaultObj();

	void Cut();
};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.PositionPlaneGizmoBuilder
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UPositionPlaneGizmoBuilder* GetDefaultObj();

};

// 0x4E8 (0x520 - 0x38)
// Class MeshModelingTools.PositionPlaneGizmo
class UPositionPlaneGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_C4C[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          CenterBallShape;                                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     CenterBallMaterial;                                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4D[0x488];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPositionPlaneGizmo* GetDefaultObj();

};

// 0x30 (0xB0 - 0x80)
// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_C4E[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPositionPlaneOnSceneInputBehavior* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.ProjectToTargetToolBuilder
class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_C51[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProjectToTargetToolBuilder* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class MeshModelingTools.RemeshMeshToolProperties
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int32                                        TargetTriangleCount;                               // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERemeshSmoothingType              SmoothingType;                                     // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDiscardAttributes;                                // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGroupColors;                                  // 0x77(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERemeshType                       RemeshType;                                        // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemeshIterations;                                  // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTargetEdgeLength;                              // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetEdgeLength;                                  // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReproject;                                        // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C60[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshMeshToolProperties* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MeshModelingTools.ProjectToTargetToolProperties
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
public:

	static class UClass* StaticClass();
	static class UProjectToTargetToolProperties* GetDefaultObj();

};

// 0x58 (0xE8 - 0x90)
// Class MeshModelingTools.RemeshMeshTool
class URemeshMeshTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_C6F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URemeshMeshToolProperties*             BasicProperties;                                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshStatisticsProperties*             MeshStatisticsProperties;                          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C71[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshMeshTool* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class MeshModelingTools.ProjectToTargetTool
class UProjectToTargetTool : public URemeshMeshTool
{
public:
	uint8                                        Pad_C73[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProjectToTargetTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.RemeshMeshToolBuilder
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_C74[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshMeshToolBuilder* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_C75[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesToolBuilder* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOcclusionCalculationUIMode       OcclusionTestMethod;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOcclusionTriangleSamplingUIMode  TriangleSampling;                                  // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C77[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WindingIsoValue;                                   // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AddRandomRays;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AddTriangleSamples;                                // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlySelfOcclude;                                  // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C79[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesToolProperties* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_C7C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	uint8                                        Pad_C7F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URemoveOccludedTrianglesTool*          Tool;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C80[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesOperatorFactory* GetDefaultObj();

};

// 0xC0 (0x150 - 0x90)
// Class MeshModelingTools.RemoveOccludedTrianglesTool
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
public:
	class URemoveOccludedTrianglesToolProperties* BasicProperties;                                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UPreviewMesh*>                  PreviewCopies;                                     // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C83[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.RevolveBoundaryToolBuilder
class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_C85[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveBoundaryToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.RevolveBoundaryOperatorFactory
class URevolveBoundaryOperatorFactory : public UObject
{
public:
	uint8                                        Pad_C89[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URevolveBoundaryTool*                  RevolveBoundaryTool;                               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URevolveBoundaryOperatorFactory* GetDefaultObj();

};

// 0x20 (0xD0 - 0xB0)
// Class MeshModelingTools.RevolveBoundaryToolProperties
class URevolveBoundaryToolProperties : public URevolveProperties
{
public:
	bool                                         bDisplayOriginalMesh;                              // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AxisOrigin;                                        // 0xB4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisYaw;                                           // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisPitch;                                         // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveBoundaryToolProperties* GetDefaultObj();

};

// 0x60 (0x1B0 - 0x150)
// Class MeshModelingTools.RevolveBoundaryTool
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
public:
	uint8                                        Pad_C92[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URevolveBoundaryToolProperties*        Settings;                                          // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C94[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveBoundaryTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.SeamSculptToolBuilder
class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USeamSculptToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.SeamSculptToolProperties
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitBackFaces;                                     // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C99[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USeamSculptToolProperties* GetDefaultObj();

};

// 0xE0 (0x2D8 - 0x1F8)
// Class MeshModelingTools.SeamSculptTool
class USeamSculptTool : public UDynamicMeshBrushTool
{
public:
	class USeamSculptToolProperties*             Settings;                                          // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreviewGeometry*                      PreviewGeom;                                       // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C9F[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USeamSculptTool* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class MeshModelingTools.SelfUnionMeshesToolProperties
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bAttemptFixHoles;                                  // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowNewBoundaryEdges;                             // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrimFlaps;                                        // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WindingNumberThreshold;                            // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUseFirstMeshMaterials;                        // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelfUnionMeshesToolProperties* GetDefaultObj();

};

// 0x30 (0x120 - 0xF0)
// Class MeshModelingTools.SelfUnionMeshesTool
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class USelfUnionMeshesToolProperties*        Properties;                                        // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0xF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CA7[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelfUnionMeshesTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.SelfUnionMeshesToolBuilder
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USelfUnionMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.SetCollisionGeometryToolBuilder
class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USetCollisionGeometryToolBuilder* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class MeshModelingTools.SetCollisionGeometryToolProperties
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECollisionGeometryType            GeometryType;                                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetCollisionGeometryInputMode    InputMode;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWorldSpace;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveContained;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMaxCount;                                   // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCount;                                          // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThickness;                                      // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDetectBoxes;                                      // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDetectSpheres;                                    // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDetectCapsules;                                   // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyHulls;                                    // 0x77(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HullTargetFaceCount;                               // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyPolygons;                                 // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HullTolerance;                                     // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProjectedHullAxis                SweepAxis;                                         // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAppendToExisting;                                 // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionGeometryMode            SetCollisionType;                                  // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USetCollisionGeometryToolProperties* GetDefaultObj();

};

// 0x130 (0x1C0 - 0x90)
// Class MeshModelingTools.SetCollisionGeometryTool
class USetCollisionGeometryTool : public UMultiSelectionTool
{
public:
	class USetCollisionGeometryToolProperties*   Settings;                                          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicsObjectToolPropertySet*         CollisionProps;                                    // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    LineMaterial;                                      // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewGeometry*                      PreviewGeom;                                       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CB3[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USetCollisionGeometryTool* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.SmoothMeshToolProperties
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESmoothMeshToolSmoothType         SmoothingType;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothMeshToolProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.IterativeSmoothProperties
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothingPerStep;                                  // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSmoothBoundary;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIterativeSmoothProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.DiffusionSmoothProperties
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothingPerStep;                                  // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVs;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDiffusionSmoothProperties* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class MeshModelingTools.ImplicitSmoothProperties
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothSpeed;                                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothness;                                        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveUVs;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeCorrection;                                  // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UImplicitSmoothProperties* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class MeshModelingTools.SmoothWeightMapSetProperties
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                        MinSmoothMultiplier;                               // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothWeightMapSetProperties* GetDefaultObj();

};

// 0x30 (0x430 - 0x400)
// Class MeshModelingTools.SmoothMeshTool
class USmoothMeshTool : public UBaseMeshProcessingTool
{
public:
	class USmoothMeshToolProperties*             SmoothProperties;                                  // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIterativeSmoothProperties*            IterativeProperties;                               // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDiffusionSmoothProperties*            DiffusionProperties;                               // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImplicitSmoothProperties*             ImplicitProperties;                                // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmoothWeightMapSetProperties*         WeightMapProperties;                               // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.SmoothMeshToolBuilder
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USmoothMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.TransformMeshesToolBuilder
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UTransformMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class MeshModelingTools.TransformMeshesToolProperties
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ETransformMeshesTransformMode     TransformMode;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetPivot;                                         // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSnapDragging;                               // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformMeshesSnapDragSource    SnapDragSource;                                    // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformMeshesSnapDragRotationMode RotationMode;                                      // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformMeshesToolProperties* GetDefaultObj();

};

// 0xB0 (0x140 - 0x90)
// Class MeshModelingTools.TransformMeshesTool
class UTransformMeshesTool : public UMultiSelectionTool
{
public:
	uint8                                        Pad_CD6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformMeshesToolProperties*        TransformProps;                                    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CD8[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransformMeshesTarget>        ActiveGizmos;                                      // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CD9[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformMeshesTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.UVProjectionToolBuilder
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_CDB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVProjectionToolBuilder* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class MeshModelingTools.UVProjectionToolProperties
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVProjectionMethod               UVProjectionMethod;                                // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ProjectionPrimitiveScale;                          // 0x64(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CylinderProjectToTopOrBottomAngleThreshold;        // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVScale;                                           // 0x74(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVOffset;                                          // 0x7C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldSpaceUVScale;                                // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVProjectionToolProperties* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MeshModelingTools.UVProjectionAdvancedProperties
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UUVProjectionAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingTools.UVProjectionOperatorFactory
class UUVProjectionOperatorFactory : public UObject
{
public:
	uint8                                        Pad_CE4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVProjectionTool*                     Tool;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVProjectionOperatorFactory* GetDefaultObj();

};

// 0x190 (0x220 - 0x90)
// Class MeshModelingTools.UVProjectionTool
class UUVProjectionTool : public UMultiSelectionTool
{
public:
	class UUVProjectionToolProperties*           BasicProperties;                                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionAdvancedProperties*       AdvancedProperties;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>               TransformGizmos;                                   // 0xC0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>               TransformProxies;                                  // 0xD0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CEB[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVProjectionTool* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.VoxelBlendMeshesToolProperties
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       BlendPower;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       BlendFalloff;                                      // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidifyInput;                                    // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveInternalsAfterSolidify;                     // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OffsetSolidifySurface;                             // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class MeshModelingTools.VoxelBlendMeshesTool
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelBlendMeshesToolProperties*       BlendProperties;                                   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.VoxelBlendMeshesToolBuilder
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesToolBuilder* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMorphologyOperation              Operation;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidifyInput;                                    // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveInternalsAfterSolidify;                     // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF8[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OffsetSolidifySurface;                             // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class MeshModelingTools.VoxelMorphologyMeshesTool
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelMorphologyMeshesToolProperties*  MorphologyProperties;                              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesToolBuilder* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       WindingThreshold;                                  // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ExtendBounds;                                      // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SurfaceSearchSteps;                                // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidAtBoundaries;                                // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMakeOffsetSurfaces;                               // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OffsetThickness;                                   // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class MeshModelingTools.VoxelSolidifyMeshesTool
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelSolidifyMeshesToolProperties*    SolidifyProperties;                                // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.WeldMeshEdgesToolBuilder
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UWeldMeshEdgesToolBuilder* GetDefaultObj();

};

// 0x278 (0x300 - 0x88)
// Class MeshModelingTools.WeldMeshEdgesTool
class UWeldMeshEdgesTool : public USingleSelectionTool
{
public:
	float                                        Tolerance;                                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyUnique;                                       // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D02[0x273];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeldMeshEdgesTool* GetDefaultObj();

};

}


