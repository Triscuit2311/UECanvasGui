#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHairCardsSourceType : uint8
{
	Procedural                     = 0,
	Imported                       = 1,
	EHairCardsSourceType_MAX       = 2,
};

enum class EHairCardsGenerationType : uint8
{
	CardsCount                     = 0,
	UseGuides                      = 1,
	EHairCardsGenerationType_MAX   = 2,
};

enum class EHairCardsClusterType : uint8
{
	Low                            = 0,
	High                           = 1,
	EHairCardsClusterType_MAX      = 2,
};

enum class EGroomGeometryType : uint8
{
	Strands                        = 0,
	Cards                          = 1,
	Meshes                         = 2,
	EGroomGeometryType_MAX         = 3,
};

enum class EHairLODSelectionType : uint8
{
	Cpu                            = 0,
	Gpu                            = 1,
	EHairLODSelectionType_MAX      = 2,
};

enum class EHairInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Unknown                        = 3,
	EHairInterpolationWeight_MAX   = 4,
};

enum class EHairInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EHairInterpolationQuality_MAX  = 4,
};

enum class EGroomInterpolationType : uint8
{
	None                           = 0,
	RigidTransform                 = 2,
	OffsetTransform                = 4,
	SmoothTransform                = 8,
	EGroomInterpolationType_MAX    = 9,
};

enum class EGroomStrandsSize : uint8
{
	None                           = 0,
	Size2                          = 2,
	Size4                          = 4,
	Size8                          = 8,
	Size16                         = 16,
	Size32                         = 32,
	EGroomStrandsSize_MAX          = 33,
};

enum class EGroomNiagaraSolvers : uint8
{
	None                           = 0,
	CosseratRods                   = 2,
	AngularSprings                 = 4,
	CustomSolver                   = 8,
	EGroomNiagaraSolvers_MAX       = 9,
};

enum class EGroomBindingMeshType : uint8
{
	SkeletalMesh                   = 0,
	GeometryCache                  = 1,
	EGroomBindingMeshType_MAX      = 2,
};

enum class EGroomCacheType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	EGroomCacheType_MAX            = 3,
};

enum class EGroomCacheAttributes : uint8
{
	None                           = 0,
	Position                       = 1,
	Width                          = 2,
	Color                          = 4,
	EGroomCacheAttributes_MAX      = 5,
};

enum class EFollicleMaskChannel : uint8
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	EFollicleMaskChannel_MAX       = 4,
};

enum class EStrandsTexturesMeshType : uint8
{
	Static                         = 0,
	Skeletal                       = 1,
	EStrandsTexturesMeshType_MAX   = 2,
};

enum class EStrandsTexturesTraceType : uint8
{
	TraceInside                    = 0,
	TraceOuside                    = 1,
	TraceBidirectional             = 2,
	EStrandsTexturesTraceType_MAX  = 3,
};

enum class EGroomInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Unknown                        = 3,
	EGroomInterpolationWeight_MAX  = 4,
};

enum class EGroomInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EGroomInterpolationQuality_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupInfo
struct FHairGroupInfo
{
public:
	int32                                        GroupID;                                           // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCurves;                                         // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumGuides;                                         // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCurveVertices;                                  // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumGuideVertices;                                  // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCurveLength;                                    // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x1C - 0x18)
// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
public:
	bool                                         bIsVisible;                                        // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B24[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMaterial
struct FHairGroupsMaterial
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsClusterSettings
struct FHairCardsClusterSettings
{
public:
	float                                        ClusterDecimation;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairCardsClusterType             Type;                                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGuide;                                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B26[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
struct FHairCardsGeometrySettings
{
public:
	enum class EHairCardsGenerationType          GenerationType;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CardsCount;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairCardsClusterType             ClusterType;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSegmentLength;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularThreshold;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinCardsLength;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCardsLength;                                    // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsTextureSettings
struct FHairCardsTextureSettings
{
public:
	int32                                        AtlasMaxResolution;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PixelPerCentimeters;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LengthTextureCount;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DensityTextureCount;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
struct FHairGroupsProceduralCards
{
public:
	struct FHairCardsClusterSettings             ClusterSettings;                                   // 0x0(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FHairCardsGeometrySettings            GeometrySettings;                                  // 0x8(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairCardsTextureSettings             TextureSettings;                                   // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsTextures
struct FHairGroupCardsTextures
{
public:
	class UTexture2D*                            DepthTexture;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            CoverageTexture;                                   // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TangentTexture;                                    // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AttributeTexture;                                  // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AuxilaryDataTexture;                               // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsInfo
struct FHairGroupCardsInfo
{
public:
	int32                                        NumCards;                                          // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCardVertices;                                   // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
struct FHairGroupsCardsSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairCardsSourceType              SourceType;                                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ProceduralMesh;                                    // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProceduralMeshKey;                                 // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ImportedMesh;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupsProceduralCards            ProceduralSettings;                                // 0x38(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairGroupCardsTextures               Textures;                                          // 0x70(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupCardsInfo                   CardsInfo;                                         // 0xA8(0x8)(Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ImportedMeshKey;                                   // 0xB0(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.HairLODSettings
struct FHairLODSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexDecimation;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularThreshold;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSize;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThicknessScale;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomGeometryType                GeometryType;                                      // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B44[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsLOD
struct FHairGroupsLOD
{
public:
	TArray<struct FHairLODSettings>              LODs;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ClusterWorldSize;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterScreenSizeScale;                            // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairDecimationSettings
struct FHairDecimationSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexDecimation;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairInterpolationSettings
struct FHairInterpolationSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairToGuideDensity;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairInterpolationQuality         InterpolationQuality;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairInterpolationWeight          InterpolationDistance;                             // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsInterpolation
struct FHairGroupsInterpolation
{
public:
	struct FHairDecimationSettings               DecimationSettings;                                // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairInterpolationSettings            InterpolationSettings;                             // 0x8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
struct FHairGroupsMeshesSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ImportedMesh;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupCardsTextures               Textures;                                          // 0x18(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImportedMeshKey;                                   // 0x50(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairSolverSettings
struct FHairSolverSettings
{
public:
	bool                                         EnableSimulation;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomNiagaraSolvers              NiagaraSolver;                                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B55[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         CustomSystem;                                      // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSteps;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IterationCount;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairExternalForces
struct FHairExternalForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirDrag;                                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AirVelocity;                                       // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairBendConstraint
struct FHairBendConstraint
{
public:
	bool                                         SolveBend;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProjectBend;                                       // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B57[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BendDamping;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendStiffness;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    BendScale;                                         // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStretchConstraint
struct FHairStretchConstraint
{
public:
	bool                                         SolveStretch;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProjectStretch;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchDamping;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchStiffness;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    StretchScale;                                      // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct HairStrandsCore.HairCollisionConstraint
struct FHairCollisionConstraint
{
public:
	bool                                         SolveCollision;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProjectCollision;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B60[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaticFriction;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KineticFriction;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsViscosity;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            GridDimension;                                     // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    RadiusScale;                                       // 0x20(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct HairStrandsCore.HairMaterialConstraints
struct FHairMaterialConstraints
{
public:
	struct FHairBendConstraint                   BendConstraint;                                    // 0x0(0x98)(Edit, NativeAccessSpecifierPublic)
	struct FHairStretchConstraint                StretchConstraint;                                 // 0x98(0x98)(Edit, NativeAccessSpecifierPublic)
	struct FHairCollisionConstraint              CollisionConstraint;                               // 0x130(0xA8)(Edit, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStrandsParameters
struct FHairStrandsParameters
{
public:
	enum class EGroomStrandsSize                 StrandsSize;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B66[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StrandsDensity;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsSmoothing;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsThickness;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    ThicknessScale;                                    // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsPhysics
struct FHairGroupsPhysics
{
public:
	struct FHairSolverSettings                   SolverSettings;                                    // 0x0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct FHairExternalForces                   ExternalForces;                                    // 0x38(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairMaterialConstraints              MaterialConstraints;                               // 0x58(0x1D8)(Edit, NativeAccessSpecifierPublic)
	struct FHairStrandsParameters                StrandsParameters;                                 // 0x230(0x98)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairGeometrySettings
struct FHairGeometrySettings
{
public:
	float                                        HairWidth;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRootScale;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairTipScale;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairClipScale;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairShadowSettings
struct FHairShadowSettings
{
public:
	float                                        HairShadowDensity;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRaytracingRadiusScale;                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHairRaytracingGeometry;                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoxelize;                                         // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6E[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
struct FHairAdvancedRenderingSettings
{
public:
	bool                                         bUseStableRasterization;                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScatterSceneLighting;                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsRendering
struct FHairGroupsRendering
{
public:
	class FName                                  MaterialSlotName;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGeometrySettings                 GeometrySettings;                                  // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairShadowSettings                   ShadowSettings;                                    // 0x20(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairAdvancedRenderingSettings        AdvancedSettings;                                  // 0x2C(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
struct FGoomBindingGroupInfo
{
public:
	int32                                        RenRootCount;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RenLODCount;                                       // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimRootCount;                                      // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimLODCount;                                       // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.GroomAnimationInfo
struct FGroomAnimationInfo
{
public:
	uint32                                       NumFrames;                                         // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsPerFrame;                                   // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomCacheAttributes             Attributes;                                        // 0x1C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheInfo
struct FGroomCacheInfo
{
public:
	int32                                        Version;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomCacheType                   Type;                                              // 0x4(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGroomAnimationInfo                   AnimationInfo;                                     // 0x8(0x20)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheImportSettings
struct FGroomCacheImportSettings
{
public:
	bool                                         bImportGroomCache;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportGroomAsset;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B83[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GroomAsset;                                        // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.FollicleMaskOptions
struct FFollicleMaskOptions
{
public:
	class UGroomAsset*                           Groom;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFollicleMaskChannel              Channel;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B88[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupDesc
struct FHairGroupDesc
{
public:
	float                                        HairLength;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairWidth;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairWidth_Override;                                // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairRootScale;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairRootScale_Override;                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairTipScale;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairTipScale_Override;                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairClipScale;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairClipScale_Override;                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairShadowDensity;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairShadowDensity_Override;                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairRaytracingRadiusScale;                         // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairRaytracingRadiusScale_Override;                // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHairRaytracingGeometry;                        // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHairRaytracingGeometry_Override;               // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B92[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LODBias;                                           // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStableRasterization;                           // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStableRasterization_Override;                  // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScatterSceneLighting;                             // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScatterSceneLighting_Override;                    // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportVoxelization;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportVoxelization_Override;                     // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B93[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODForcedIndex;                                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.GroomHairGroupPreview
struct FGroomHairGroupPreview
{
public:
	int32                                        GroupID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurveCount;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GuideCount;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupsInterpolation              InterpolationSettings;                             // 0xC(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.GroomBuildSettings
struct FGroomBuildSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairToGuideDensity;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomInterpolationQuality        InterpolationQuality;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomInterpolationWeight         InterpolationDistance;                             // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.GroomConversionSettings
struct FGroomConversionSettings
{
public:
	struct FVector                               Rotation;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
struct FMovieSceneGroomCacheParams
{
public:
	class UGroomCache*                           GroomCache;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x20(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndTime;                                    // 0x24(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGroomCacheSectionTemplateParameters Params;                                            // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPublic)
};

}


