#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMakeMeshPolygroupMode : uint8
{
	Single                         = 0,
	PerFace                        = 1,
	PerQuad                        = 2,
	EMakeMeshPolygroupMode_MAX     = 3,
};

enum class EMakeMeshPivotLocation : uint8
{
	Base                           = 0,
	Centered                       = 1,
	Top                            = 2,
	EMakeMeshPivotLocation_MAX     = 3,
};

enum class EMakeMeshPlacementType : uint8
{
	GroundPlane                    = 0,
	OnScene                        = 1,
	EMakeMeshPlacementType_MAX     = 2,
};

enum class EAlignObjectsBoxPoint : int32
{
	Center                         = 0,
	Bottom                         = 1,
	Top                            = 2,
	Left                           = 3,
	Right                          = 4,
	Front                          = 5,
	Back                           = 6,
	Min                            = 7,
	Max                            = 8,
};

enum class EAlignObjectsAlignToOptions : int32
{
	FirstSelected                  = 0,
	LastSelected                   = 1,
	Combined                       = 2,
	EAlignObjectsAlignToOptions_MAX = 3,
};

enum class EAlignObjectsAlignTypes : int32
{
	Pivots                         = 0,
	BoundingBoxes                  = 1,
	EAlignObjectsAlignTypes_MAX    = 2,
};

enum class EBakedCurvatureClampMode : int32
{
	None                           = 0,
	Positive                       = 1,
	Negative                       = 2,
	EBakedCurvatureClampMode_MAX   = 3,
};

enum class EBakedCurvatureColorMode : int32
{
	Grayscale                      = 0,
	RedBlue                        = 1,
	RedGreenBlue                   = 2,
	EBakedCurvatureColorMode_MAX   = 3,
};

enum class EBakedCurvatureTypeMode : int32
{
	MeanAverage                    = 0,
	Max                            = 1,
	Min                            = 2,
	Gaussian                       = 3,
};

enum class EOcclusionMapPreview : int32
{
	AmbientOcclusion               = 0,
	BentNormal                     = 1,
	EOcclusionMapPreview_MAX       = 2,
};

enum class EOcclusionMapDistribution : int32
{
	Uniform                        = 0,
	Cosine                         = 1,
	EOcclusionMapDistribution_MAX  = 2,
};

enum class ENormalMapSpace : int32
{
	Tangent                        = 0,
	Object                         = 1,
	ENormalMapSpace_MAX            = 2,
};

enum class EBakeTextureResolution : int32
{
	Resolution16                   = 16,
	Resolution32                   = 32,
	Resolution64                   = 64,
	Resolution128                  = 128,
	Resolution256                  = 256,
	Resolution512                  = 512,
	Resolution1024                 = 1024,
	Resolution2048                 = 2048,
	Resolution4096                 = 4096,
	Resolution8192                 = 8192,
	EBakeTextureResolution_MAX     = 8193,
};

enum class EBakeMapType : int32
{
	TangentSpaceNormalMap          = 0,
	Occlusion                      = 1,
	Curvature                      = 2,
	Texture2DImage                 = 3,
	NormalImage                    = 4,
	FaceNormalImage                = 5,
	PositionImage                  = 6,
	EBakeMapType_MAX               = 7,
};

enum class EBakeScaleMethod : uint8
{
	BakeFullScale                  = 0,
	BakeNonuniformScale            = 1,
	DoNotBakeScale                 = 2,
	EBakeScaleMethod_MAX           = 3,
};

enum class ECollisionGeometryMode : int32
{
	Default                        = 0,
	SimpleAndComplex               = 1,
	UseSimpleAsComplex             = 2,
	UseComplexAsSimple             = 3,
	ECollisionGeometryMode_MAX     = 4,
};

enum class ECombineTargetType : int32
{
	NewAsset                       = 0,
	FirstInputAsset                = 1,
	LastInputAsset                 = 2,
	ECombineTargetType_MAX         = 3,
};

enum class EConvertToPolygonsMode : int32
{
	FaceNormalDeviation            = 0,
	FromUVISlands                  = 1,
	EConvertToPolygonsMode_MAX     = 2,
};

enum class EQuickTransformerMode : uint8
{
	AxisTranslation                = 0,
	AxisRotation                   = 1,
	EQuickTransformerMode_MAX      = 2,
};

enum class EWeightScheme : int32
{
	Uniform                        = 0,
	Umbrella                       = 1,
	Valence                        = 2,
	MeanValue                      = 3,
	Cotangent                      = 4,
	ClampedCotangent               = 5,
	EWeightScheme_MAX              = 6,
};

enum class EGroupTopologyDeformationStrategy : uint8
{
	Linear                         = 0,
	Laplacian                      = 1,
	EGroupTopologyDeformationStrategy_MAX = 2,
};

enum class EDisplaceMeshToolDisplaceType : uint8
{
	Constant                       = 0,
	RandomNoise                    = 1,
	PerlinNoise                    = 2,
	DisplacementMap                = 3,
	SineWave                       = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5,
};

enum class EDrawPolygonOutputMode : uint8
{
	MeshedPolygon                  = 0,
	ExtrudedConstant               = 1,
	ExtrudedInteractive            = 2,
	EDrawPolygonOutputMode_MAX     = 3,
};

enum class EDrawPolygonDrawMode : uint8
{
	Freehand                       = 0,
	Circle                         = 1,
	Square                         = 2,
	Rectangle                      = 3,
	RoundedRectangle               = 4,
	HoleyCircle                    = 5,
	EDrawPolygonDrawMode_MAX       = 6,
};

enum class EDrawPolyPathExtrudeDirection : int32
{
	SelectionNormal                = 0,
	WorldX                         = 1,
	WorldY                         = 2,
	WorldZ                         = 3,
	LocalX                         = 4,
	LocalY                         = 5,
	LocalZ                         = 6,
	EDrawPolyPathExtrudeDirection_MAX = 7,
};

enum class EDrawPolyPathHeightMode : int32
{
	Interactive                    = 0,
	Constant                       = 1,
	EDrawPolyPathHeightMode_MAX    = 2,
};

enum class EDrawPolyPathWidthMode : int32
{
	Interactive                    = 0,
	Constant                       = 1,
	EDrawPolyPathWidthMode_MAX     = 2,
};

enum class EDrawPolyPathOutputMode : int32
{
	Ribbon                         = 0,
	Extrusion                      = 1,
	Ramp                           = 2,
	EDrawPolyPathOutputMode_MAX    = 3,
};

enum class EDynamicMeshSculptBrushType : uint8
{
	Move                           = 0,
	PullKelvin                     = 1,
	PullSharpKelvin                = 2,
	Smooth                         = 3,
	Offset                         = 4,
	SculptView                     = 5,
	SculptMax                      = 6,
	Inflate                        = 7,
	ScaleKelvin                    = 8,
	Pinch                          = 9,
	TwistKelvin                    = 10,
	Flatten                        = 11,
	Plane                          = 12,
	PlaneViewAligned               = 13,
	FixedPlane                     = 14,
	Resample                       = 15,
	LastValue                      = 16,
	EDynamicMeshSculptBrushType_MAX = 17,
};

enum class EEdgeLoopInsertionMode : int32
{
	Retriangulate                  = 0,
	PlaneCut                       = 1,
	EEdgeLoopInsertionMode_MAX     = 2,
};

enum class EEdgeLoopPositioningMode : int32
{
	Even                           = 0,
	ProportionOffset               = 1,
	DistanceOffset                 = 2,
	EEdgeLoopPositioningMode_MAX   = 3,
};

enum class EPolyEditCutPlaneOrientation : int32
{
	FaceNormals                    = 0,
	ViewDirection                  = 1,
	EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class EPolyEditExtrudeDirection : int32
{
	SelectionNormal                = 0,
	WorldX                         = 1,
	WorldY                         = 2,
	WorldZ                         = 3,
	LocalX                         = 4,
	LocalY                         = 5,
	LocalZ                         = 6,
	EPolyEditExtrudeDirection_MAX  = 7,
};

enum class EEditMeshPolygonsToolActions : uint8
{
	NoAction                       = 0,
	PlaneCut                       = 1,
	Extrude                        = 2,
	Offset                         = 3,
	Inset                          = 4,
	Outset                         = 5,
	Merge                          = 6,
	Delete                         = 7,
	CutFaces                       = 8,
	RecalculateNormals             = 9,
	FlipNormals                    = 10,
	Retriangulate                  = 11,
	Decompose                      = 12,
	Disconnect                     = 13,
	CollapseEdge                   = 14,
	WeldEdges                      = 15,
	StraightenEdge                 = 16,
	FillHole                       = 17,
	PlanarProjectionUV             = 18,
	PokeSingleFace                 = 19,
	SplitSingleEdge                = 20,
	FlipSingleEdge                 = 21,
	CollapseSingleEdge             = 22,
	EEditMeshPolygonsToolActions_MAX = 23,
};

enum class ELocalFrameMode : int32
{
	FromObject                     = 0,
	FromGeometry                   = 1,
	ELocalFrameMode_MAX            = 2,
};

enum class EEditPivotToolActions : uint8
{
	NoAction                       = 0,
	Center                         = 1,
	Bottom                         = 2,
	Top                            = 3,
	Left                           = 4,
	Right                          = 5,
	Front                          = 6,
	Back                           = 7,
	EEditPivotToolActions_MAX      = 8,
};

enum class EEditPivotSnapDragRotationMode : uint8
{
	Ignore                         = 0,
	Align                          = 1,
	AlignFlipped                   = 2,
	LastValue                      = 3,
	EEditPivotSnapDragRotationMode_MAX = 4,
};

enum class EGroupEdgeInsertionMode : int32
{
	Retriangulate                  = 0,
	PlaneCut                       = 1,
	EGroupEdgeInsertionMode_MAX    = 2,
};

enum class EHoleFillToolActions : uint8
{
	NoAction                       = 0,
	SelectAll                      = 1,
	ClearSelection                 = 2,
	EHoleFillToolActions_MAX       = 3,
};

enum class EMeshAttributePaintToolActions : uint8
{
	NoAction                       = 0,
	EMeshAttributePaintToolActions_MAX = 1,
};

enum class EPlaneBrushSideMode : uint8
{
	BothSides                      = 0,
	PushDown                       = 1,
	PullTowards                    = 2,
	EPlaneBrushSideMode_MAX        = 3,
};

enum class EMeshEditingMaterialModes : int32
{
	ExistingMaterial               = 0,
	Diffuse                        = 1,
	Grey                           = 2,
	Soft                           = 3,
	TangentNormal                  = 4,
	Custom                         = 5,
	EMeshEditingMaterialModes_MAX  = 6,
};

enum class ESetMeshMaterialMode : uint8
{
	KeepOriginal                   = 0,
	Checkerboard                   = 1,
	Override                       = 2,
	ESetMeshMaterialMode_MAX       = 3,
};

enum class EMeshSculptFalloffType : uint8
{
	Smooth                         = 0,
	Linear                         = 1,
	Inverse                        = 2,
	Round                          = 3,
	BoxSmooth                      = 4,
	BoxLinear                      = 5,
	BoxInverse                     = 6,
	BoxRound                       = 7,
	LastValue                      = 8,
	EMeshSculptFalloffType_MAX     = 9,
};

enum class EMeshFacesColorMode : int32
{
	None                           = 0,
	ByGroup                        = 1,
	ByMaterialID                   = 2,
	ByUVIsland                     = 3,
	EMeshFacesColorMode_MAX        = 4,
};

enum class EMeshSelectionToolPrimaryMode : int32
{
	Brush                          = 0,
	VolumetricBrush                = 1,
	AngleFiltered                  = 2,
	Visible                        = 3,
	AllConnected                   = 4,
	AllInGroup                     = 5,
	ByMaterial                     = 6,
	ByUVIsland                     = 7,
	AllWithinAngle                 = 8,
	EMeshSelectionToolPrimaryMode_MAX = 9,
};

enum class EMeshSelectionToolActions : uint8
{
	NoAction                       = 0,
	SelectAll                      = 1,
	ClearSelection                 = 2,
	InvertSelection                = 3,
	GrowSelection                  = 4,
	ShrinkSelection                = 5,
	ExpandToConnected              = 6,
	SelectLargestComponentByTriCount = 7,
	SelectLargestComponentByArea   = 8,
	OptimizeSelection              = 9,
	DeleteSelected                 = 10,
	DisconnectSelected             = 11,
	SeparateSelected               = 12,
	FlipSelected                   = 13,
	CreateGroup                    = 14,
	CycleSelectionMode             = 15,
	CycleViewMode                  = 16,
	EMeshSelectionToolActions_MAX  = 17,
};

enum class ENonlinearOperationType : uint8
{
	Bend                           = 0,
	Flare                          = 1,
	Twist                          = 2,
	ENonlinearOperationType_MAX    = 3,
};

enum class EMeshVertexSculptBrushType : uint8
{
	Move                           = 0,
	PullKelvin                     = 1,
	PullSharpKelvin                = 2,
	Smooth                         = 3,
	SmoothFill                     = 4,
	Offset                         = 5,
	SculptView                     = 6,
	SculptMax                      = 7,
	Inflate                        = 8,
	ScaleKelvin                    = 9,
	Pinch                          = 10,
	TwistKelvin                    = 11,
	Flatten                        = 12,
	Plane                          = 13,
	PlaneViewAligned               = 14,
	FixedPlane                     = 15,
	LastValue                      = 16,
	EMeshVertexSculptBrushType_MAX = 17,
};

enum class EMirrorToolAction : uint8
{
	NoAction                       = 0,
	ShiftToCenter                  = 1,
	Left                           = 2,
	Right                          = 3,
	Up                             = 4,
	Down                           = 5,
	Forward                        = 6,
	Backward                       = 7,
	EMirrorToolAction_MAX          = 8,
};

enum class EMirrorCtrlClickBehavior : uint8
{
	Reposition                     = 0,
	RepositionAndReorient          = 1,
	EMirrorCtrlClickBehavior_MAX   = 2,
};

enum class EMirrorOperationMode : uint8
{
	MirrorAndAppend                = 0,
	MirrorExisting                 = 1,
	EMirrorOperationMode_MAX       = 2,
};

enum class EMirrorSaveMode : uint8
{
	UpdateAssets                   = 0,
	CreateNewAssets                = 1,
	EMirrorSaveMode_MAX            = 2,
};

enum class EOffsetMeshToolOffsetType : uint8
{
	Iterative                      = 0,
	Implicit                       = 1,
	EOffsetMeshToolOffsetType_MAX  = 2,
};

enum class EMaterialBoundaryConstraint : uint8
{
	Fixed                          = 7,
	Refine                         = 5,
	Free                           = 1,
	Ignore                         = 0,
	EMaterialBoundaryConstraint_MAX = 8,
};

enum class EGroupBoundaryConstraint : uint8
{
	Fixed                          = 7,
	Refine                         = 5,
	Free                           = 1,
	Ignore                         = 0,
	EGroupBoundaryConstraint_MAX   = 8,
};

enum class EMeshBoundaryConstraint : uint8
{
	Fixed                          = 7,
	Refine                         = 5,
	Free                           = 1,
	EMeshBoundaryConstraint_MAX    = 8,
};

enum class EOcclusionCalculationUIMode : uint8
{
	GeneralizedWindingNumber       = 0,
	RaycastOcclusionSamples        = 1,
	EOcclusionCalculationUIMode_MAX = 2,
};

enum class EOcclusionTriangleSamplingUIMode : uint8
{
	Vertices                       = 0,
	VerticesAndCentroids           = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2,
};

enum class ERevolvePropertiesQuadSplit : uint8
{
	Uniform                        = 0,
	ShortestDiagonal               = 1,
	ERevolvePropertiesQuadSplit_MAX = 2,
};

enum class ERevolvePropertiesPolygroupMode : uint8
{
	Single                         = 0,
	PerFace                        = 1,
	PerStep                        = 2,
	AccordingToProfileCurve        = 3,
	ERevolvePropertiesPolygroupMode_MAX = 4,
};

enum class ERevolvePropertiesCapFillMode : uint8
{
	None                           = 0,
	Delaunay                       = 1,
	EarClipping                    = 2,
	CenterFan                      = 3,
	ERevolvePropertiesCapFillMode_MAX = 4,
};

enum class EProjectedHullAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	SmallestBoxDimension           = 3,
	SmallestVolume                 = 4,
	EProjectedHullAxis_MAX         = 5,
};

enum class ECollisionGeometryType : int32
{
	KeepExisting                   = 0,
	AlignedBoxes                   = 1,
	OrientedBoxes                  = 2,
	MinimalSpheres                 = 3,
	Capsules                       = 4,
	ConvexHulls                    = 5,
	SweptHulls                     = 6,
	MinVolume                      = 10,
	None                           = 11,
	ECollisionGeometryType_MAX     = 12,
};

enum class ESetCollisionGeometryInputMode : int32
{
	CombineAll                     = 0,
	PerInputObject                 = 1,
	PerMeshComponent               = 2,
	PerMeshGroup                   = 3,
	ESetCollisionGeometryInputMode_MAX = 4,
};

enum class ESmoothMeshToolSmoothType : uint8
{
	Iterative                      = 0,
	Implicit                       = 1,
	Diffusion                      = 2,
	ESmoothMeshToolSmoothType_MAX  = 3,
};

enum class ETransformMeshesSnapDragRotationMode : uint8
{
	Ignore                         = 0,
	Align                          = 1,
	AlignFlipped                   = 2,
	LastValue                      = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4,
};

enum class ETransformMeshesSnapDragSource : uint8
{
	ClickPoint                     = 0,
	Pivot                          = 1,
	LastValue                      = 2,
	ETransformMeshesSnapDragSource_MAX = 3,
};

enum class ETransformMeshesTransformMode : uint8
{
	SharedGizmo                    = 0,
	SharedGizmoLocal               = 1,
	PerObjectGizmo                 = 2,
	LastValue                      = 3,
	ETransformMeshesTransformMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct MeshModelingTools.PhysicsConvexData
struct FPhysicsConvexData
{
public:
	int32                                        NumVertices;                                       // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFaces;                                          // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKShapeElem                           Element;                                           // 0x8(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MeshModelingTools.PhysicsCapsuleData
struct FPhysicsCapsuleData
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKShapeElem                           Element;                                           // 0x40(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MeshModelingTools.PhysicsBoxData
struct FPhysicsBoxData
{
public:
	struct FVector                               Dimensions;                                        // 0x0(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D26[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKShapeElem                           Element;                                           // 0x40(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MeshModelingTools.PhysicsSphereData
struct FPhysicsSphereData
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKShapeElem                           Element;                                           // 0x40(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MeshModelingTools.PerlinLayerProperties
struct FPerlinLayerProperties
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshModelingTools.EditPivotTarget
struct FEditPivotTarget
{
public:
	class UTransformProxy*                       TransformProxy;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformGizmo*                       TransformGizmo;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshModelingTools.TransformMeshesTarget
struct FTransformMeshesTarget
{
public:
	class UTransformProxy*                       TransformProxy;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformGizmo*                       TransformGizmo;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


