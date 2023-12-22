#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraSystemSpawnSectionEndBehavior : int32
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : int32
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraBakerViewMode : int32
{
	Perspective                    = 0,
	OrthoFront                     = 1,
	OrthoBack                      = 2,
	OrthoLeft                      = 3,
	OrthoRight                     = 4,
	OrthoTop                       = 5,
	OrthoBottom                    = 6,
	Num                            = 7,
	ENiagaraBakerViewMode_MAX      = 8,
};

enum class ENiagaraCollisionMode : uint8
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4,
};

enum class ENiagaraFunctionDebugState : uint8
{
	NoDebug                        = 0,
	Basic                          = 1,
	ENiagaraFunctionDebugState_MAX = 2,
};

enum class ENiagaraSystemInstanceState : uint8
{
	None                           = 0,
	PendingSpawn                   = 1,
	PendingSpawnPaused             = 2,
	Spawning                       = 3,
	Running                        = 4,
	Paused                         = 5,
	Num                            = 6,
	ENiagaraSystemInstanceState_MAX = 7,
};

enum class ENCPoolMethod : uint8
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5,
};

enum class ENiagaraLegacyTrailWidthMode : uint8
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENiagaraRendererSourceDataMode : uint8
{
	Particles                      = 0,
	Emitter                        = 1,
	ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class ENiagaraBindingSource : uint8
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6,
};

enum class ENiagaraIterationSource : uint8
{
	Particles                      = 0,
	DataInterface                  = 1,
	ENiagaraIterationSource_MAX    = 2,
};

enum class ENiagaraScriptGroup : uint8
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3,
};

enum class ENiagaraScriptContextStaticSwitch : uint8
{
	System                         = 0,
	Emitter                        = 1,
	Particle                       = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8
{
	Spawn                          = 0,
	Update                         = 1,
	Event                          = 2,
	SimulationStage                = 3,
	Default                        = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ENiagaraScriptUsage : uint8
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13,
};

enum class ENiagaraScriptCompileStatus : uint8
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7,
};

enum class ENiagaraInputNodeUsage : uint8
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6,
};

enum class ENiagaraDataSetType : uint8
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3,
};

enum class ENiagaraStatDisplayMode : uint8
{
	Percent                        = 0,
	Absolute                       = 1,
	ENiagaraStatDisplayMode_MAX    = 2,
};

enum class ENiagaraStatEvaluationType : uint8
{
	Average                        = 0,
	Maximum                        = 1,
	ENiagaraStatEvaluationType_MAX = 2,
};

enum class ENiagaraAgeUpdateMode : uint8
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3,
};

enum class ENiagaraSimTarget : uint8
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2,
};

enum class ENiagaraRendererMotionVectorSetting : int32
{
	AutoDetect                     = 0,
	Precise                        = 1,
	Approximate                    = 2,
	Disable                        = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4,
};

enum class ENiagaraDefaultRendererMotionVectorSetting : int32
{
	Precise                        = 0,
	Approximate                    = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class ENiagaraDefaultMode : uint8
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	FailIfPreviouslyNotSet         = 3,
	ENiagaraDefaultMode_MAX        = 4,
};

enum class ENiagaraMipMapGeneration : uint8
{
	Disabled                       = 0,
	PostStage                      = 1,
	PostSimulate                   = 2,
	ENiagaraMipMapGeneration_MAX   = 3,
};

enum class ENiagaraGpuBufferFormat : uint8
{
	Float                          = 0,
	HalfFloat                      = 1,
	UnsignedNormalizedByte         = 2,
	Max                            = 3,
};

enum class ENiagaraTickBehavior : uint8
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4,
};

enum class ENDIExport_GPUAllocationMode : uint8
{
	FixedSize                      = 0,
	PerParticle                    = 1,
	ENDIExport_MAX                 = 2,
};

enum class ENDILandscape_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDILandscape_MAX              = 3,
};

enum class ESetResolutionMethod : int32
{
	Independent                    = 0,
	MaxAxis                        = 1,
	CellSize                       = 2,
	ESetResolutionMethod_MAX       = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8
{
	Invalid                        = 255,
	None                           = 0,
	SkinOnTheFly                   = 1,
	PreSkin                        = 2,
	ENDISkeletalMesh_MAX           = 256,
};

enum class ENDISkeletalMesh_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDISkeletalMesh_MAX           = 3,
};

enum class ENDIStaticMesh_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	DefaultMeshOnly                = 3,
	ENDIStaticMesh_MAX             = 4,
};

enum class ENiagaraDebugHudVerbosity : int32
{
	None                           = 0,
	Basic                          = 1,
	Verbose                        = 2,
	ENiagaraDebugHudVerbosity_MAX  = 3,
};

enum class ENiagaraDebugHudFont : int32
{
	Small                          = 0,
	Normal                         = 1,
	ENiagaraDebugHudFont_MAX       = 2,
};

enum class ENiagaraDebugHudVAlign : uint8
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	ENiagaraDebugHudVAlign_MAX     = 3,
};

enum class ENiagaraDebugHudHAlign : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ENiagaraDebugHudHAlign_MAX     = 3,
};

enum class ENiagaraDebugPlaybackMode : uint8
{
	Play                           = 0,
	Loop                           = 1,
	Paused                         = 2,
	Step                           = 3,
	ENiagaraDebugPlaybackMode_MAX  = 4,
};

enum class ENiagaraScalabilityUpdateFrequency : int32
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ENiagaraCullReaction : int32
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	ENiagaraCullReaction_MAX       = 4,
};

enum class EParticleAllocationMode : uint8
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	EParticleAllocationMode_MAX    = 2,
};

enum class EScriptExecutionMode : uint8
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3,
};

enum class ENiagaraSortMode : uint8
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5,
};

enum class ENiagaraMeshLockedAxisSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8
{
	Mesh                           = 0,
	Simulation                     = 1,
	World                          = 2,
	Local                          = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class ENiagaraMeshFacingMode : uint8
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4,
};

enum class ENiagaraPlatformSetState : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4,
};

enum class ENiagaraPlatformSelectionState : uint8
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class ENiagaraPreviewGridResetMode : uint8
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraRibbonUVDistributionMode : int32
{
	ScaledUniformly                = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength          = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4,
};

enum class ENiagaraRibbonUVEdgeMode : int32
{
	SmoothTransition               = 0,
	Locked                         = 1,
	ENiagaraRibbonUVEdgeMode_MAX   = 2,
};

enum class ENiagaraRibbonTessellationMode : uint8
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ENiagaraRibbonShapeMode : uint8
{
	Plane                          = 0,
	MultiPlane                     = 1,
	Tube                           = 2,
	Custom                         = 3,
	ENiagaraRibbonShapeMode_MAX    = 4,
};

enum class ENiagaraRibbonDrawDirection : uint8
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ENiagaraRibbonFacingMode : uint8
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3,
};

enum class ENiagaraScriptTemplateSpecification : uint8
{
	None                           = 0,
	Template                       = 1,
	Behavior                       = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3,
};

enum class ENiagaraScriptLibraryVisibility : uint8
{
	Invalid                        = 0,
	Unexposed                      = 1,
	Library                        = 2,
	Hidden                         = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraModuleDependencyType : uint8
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EUnusedAttributeBehaviour : uint8
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5,
};

enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8
{
	Full                           = 0,
	Half                           = 1,
	ENDISkelMesh_MAX               = 2,
};

enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8
{
	Full                           = 0,
	Limited_24_8                   = 1,
	Limited_23_9                   = 2,
	ENDISkelMesh_MAX               = 3,
};

enum class ENDISkelMesh_GpuMaxInfluences : uint8
{
	AllowMax4                      = 0,
	AllowMax8                      = 1,
	Unlimited                      = 2,
	ENDISkelMesh_MAX               = 3,
};

enum class ENiagaraSpriteFacingMode : uint8
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5,
};

enum class ENiagaraSpriteAlignment : uint8
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3,
};

enum class ENiagaraOrientationAxis : uint8
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	ENiagaraOrientationAxis_MAX    = 3,
};

enum class ENiagaraPythonUpdateScriptReference : uint8
{
	None                           = 0,
	ScriptAsset                    = 1,
	DirectTextEntry                = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3,
};

enum class ENiagaraCoordinateSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraCoordinateSpace_MAX    = 3,
};

enum class ENiagaraExecutionState : uint32
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6,
};

enum class ENiagaraExecutionStateSource : uint8
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ENiagaraVariantMode : int32
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
struct FNiagaraTypeDefinitionHandle
{
public:
	int32                                        RegisteredTypeIndex;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraTypeDefinitionHandle          TypeDefHandle;                                     // 0x8(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : public FNiagaraVariableBase
{
public:
	uint8                                        Pad_1345[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                VarData;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x20(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolChannel;                                       // 0x40(0x90)(NativeAccessSpecifierPrivate)
};

// 0x280 (0x2C0 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               RedChannel;                                        // 0x40(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenChannel;                                      // 0xE0(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueChannel;                                       // 0x180(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaChannel;                                      // 0x220(0xA0)(NativeAccessSpecifierPrivate)
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x40(0xA0)(NativeAccessSpecifierPrivate)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneIntegerChannel             IntegerChannel;                                    // 0x40(0x90)(NativeAccessSpecifierPrivate)
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
public:
	struct FFrameNumber                          SpawnSectionStartFrame;                            // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SpawnSectionEndFrame;                              // 0x14(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1351[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x288 (0x2C8 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               VectorChannels[0x4];                               // 0x40(0x280)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1353[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSource
struct FNiagaraBakerTextureSource
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSettings
struct FNiagaraBakerTextureSettings
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bUseFrameSize : 1;                                 // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C6 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1356[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             FrameSize;                                         // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             TextureSize;                                       // 0x1C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1358[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            GeneratedTexture;                                  // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityState
struct FNiagaraScalabilityState
{
public:
	float                                        Significance;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulled : 1;                                       // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreviousCulled : 1;                               // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByDistance : 1;                             // Mask: 0x4, PropSize: 0x10x4(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByInstanceCount : 1;                        // Mask: 0x8, PropSize: 0x10x4(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByVisibility : 1;                           // Mask: 0x10, PropSize: 0x10x4(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByGlobalBudget : 1;                         // Mask: 0x20, PropSize: 0x10x4(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCompileDependency
struct FNiagaraCompileDependency
{
public:
	class FString                                LinkerErrorMessage;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NodeGuid;                                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PinGuid;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         StackGuids;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  DependentVariable;                                 // 0x40(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo
{
public:
	int32                                        Seed1;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed2;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed3;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x20)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding
{
public:
	struct FNiagaraVariable                      BoundVariable;                                     // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
struct FNiagaraMaterialAttributeBinding
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  NiagaraVariable;                                   // 0x8(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  ResolvedNiagaraVariable;                           // 0x14(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  NiagaraChildVariable;                              // 0x20(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding
{
public:
	struct FNiagaraVariableBase                  ParamMapVariable;                                  // 0x0(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1364[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariable                      DataSetVariable;                                   // 0x10(0x20)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraVariable                      RootVariable;                                      // 0x30(0x20)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENiagaraBindingSource             BindingSourceMode;                                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1366[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bBindingExistsOnSource : 1;                        // Mask: 0x1, PropSize: 0x10x54(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsCachedParticleValue : 1;                        // Mask: 0x2, PropSize: 0x10x54(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1367[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Definition;                                        // 0x20(0x18)(NativeAccessSpecifierPublic)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext
{
public:
	TArray<class UNiagaraComponent*>             ComponentsToReset;                                 // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToReInit;                                // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToNotifySimDestroy;                      // 0x20(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemSimsToDestroy;                               // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1371[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 InputParamLocations;                               // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1375[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVMFunctionSpecifier>          FunctionSpecifiers;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope
{
public:
	class FName                                  FullName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FriendlyName;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
public:
	class UObject*                               ClassStructOrEnum;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UnderlyingType;                                    // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeDefinition                Type;                                              // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlaceholder;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
public:
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1384[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeDefinition                Type;                                              // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Inputs;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Outputs;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresContext : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresExecPin : 1;                              // Mask: 0x2, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMemberFunction : 1;                               // Mask: 0x4, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExperimental : 1;                                 // Mask: 0x8, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsCPU : 1;                                  // Mask: 0x10, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsGPU : 1;                                  // Mask: 0x20, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWriteFunction : 1;                                // Mask: 0x40, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSoftDeprecatedFunction : 1;                       // Mask: 0x80, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCompileTagGenerator : 1;                        // Mask: 0x1, PropSize: 0x10x31(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidden : 1;                                       // Mask: 0x2, PropSize: 0x10x31(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C8 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1389[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ModuleUsageBitmask;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContextStageMinIndex;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContextStageMaxIndex;                              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               FunctionSpecifiers;                                // 0x40(0x50)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
public:
	bool                                         bReadsAttributeData;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDataSetType               Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
public:
	struct FNiagaraDataSetID                     ID;                                                // 0x0(0xC)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraMaterialOverride
struct FNiagaraMaterialOverride
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaterialSubIndex;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraRendererProperties*            EmitterRendererProperty;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPool
struct FNCPool
{
public:
	TArray<struct FNCPoolElement>                FreeElements;                                      // 0x0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct Niagara.NiagaraComponentPropertyBinding
struct FNiagaraComponentPropertyBinding
{
public:
	struct FNiagaraVariableAttributeBinding      AttributeBinding;                                  // 0x0(0x58)(NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeDefinition                PropertyType;                                      // 0x60(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MetadataSetterName;                                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0x78(0x50)(NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      WritableValue;                                     // 0xC8(0x20)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
struct FNiagaraEmitterNameSettingsRef
{
public:
	class FName                                  SystemName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmitterName;                                       // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate
{
public:
	int32                                        Tri;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaryCoord;                                         // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter
{
public:
	TArray<int32>                                AllowedMaterialSlots;                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo
{
public:
	TArray<uint32>                               FloatComponentByteOffsets;                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               FloatComponentRegisterOffsets;                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Int32ComponentByteOffsets;                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Int32ComponentRegisterOffsets;                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               HalfComponentByteOffsets;                          // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               HalfComponentRegisterOffsets;                      // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo
{
public:
	uint32                                       FloatComponentStart;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Int32ComponentStart;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       HalfComponentStart;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1398[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeLayoutInfo                LayoutInfo;                                        // 0x10(0x60)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData
{
public:
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableLayoutInfo>    VariableLayouts;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetID                     ID;                                                // 0x20(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalFloatComponents;                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalInt32Components;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalHalfComponents;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C9 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_139D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraSimpleClientInfo
struct FNiagaraSimpleClientInfo
{
public:
	TArray<class FString>                        Systems;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Actors;                                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Components;                                        // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Emitters;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
struct FNiagaraOutlinerCaptureSettings
{
public:
	bool                                         bTriggerCapture;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       CaptureDelayFrames;                                // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGatherPerfData;                                   // 0x8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
struct FNiagaraRequestSimpleClientInfoMessage
{
public:
	uint8                                        Pad_13A3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDVariable
struct FNiagaraDebugHUDVariable
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHudTextOptions
struct FNiagaraDebugHudTextOptions
{
public:
	enum class ENiagaraDebugHudFont              Font;                                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudHAlign            HorizontalAlignment;                               // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVAlign            VerticalAlignment;                                 // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenOffset;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
struct FNiagaraDebugHUDSettingsData
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateSystemSimulationDataBuffers;              // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateParticleDataBuffers;                      // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverviewEnabled;                                  // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudFont              OverviewFont;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OverviewLocation;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActorFilter;                                       // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComponentFilterEnabled;                           // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ComponentFilter;                                   // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemFilterEnabled;                              // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SystemFilter;                                      // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitterFilterEnabled;                             // 0x50(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EmitterFilter;                                     // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorFilterEnabled;                               // 0x68(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraDebugHudVerbosity         SystemDebugVerbosity;                              // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVerbosity         SystemEmitterVerbosity;                            // 0x70(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemShowBounds;                                 // 0x74(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemShowActiveOnlyInWorld;                      // 0x75(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSystemVariables;                              // 0x76(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDebugHUDVariable>      SystemVariables;                                   // 0x78(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNiagaraDebugHudTextOptions           SystemTextOptions;                                 // 0x88(0x10)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowParticleVariables;                            // 0x98(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGpuParticleReadback;                        // 0x99(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDebugHUDVariable>      ParticlesVariables;                                // 0xA0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNiagaraDebugHudTextOptions           ParticleTextOptions;                               // 0xB0(0x10)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowParticlesVariablesWithSystem;                 // 0xC0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxParticlesToDisplay;                         // 0xC1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxParticlesToDisplay;                             // 0xC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugPlaybackMode         PlaybackMode;                                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlaybackRateEnabled;                              // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackRate;                                      // 0xCC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopTimeEnabled;                                  // 0xD0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopTime;                                          // 0xD4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGlobalBudgetInfo;                             // 0xD8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
struct FNiagaraOutlinerEmitterInstanceData
{
public:
	class FString                                EmitterName;                                       // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraExecutionState            ExecState;                                         // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumParticles;                                      // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerTimingData
struct FNiagaraOutlinerTimingData
{
public:
	float                                        GameThread;                                        // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RenderThread;                                      // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
struct FNiagaraOutlinerSystemInstanceData
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;                                          // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	enum class ENiagaraExecutionState            ActualExecutionState;                              // 0x20(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraExecutionState            RequestedExecutionState;                           // 0x24(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraScalabilityState              ScalabilityState;                                  // 0x28(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bPendingKill : 1;                                  // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CA : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENCPoolMethod                     PoolMethod;                                        // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraOutlinerTimingData            AverageTime;                                       // 0x38(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxTime;                                           // 0x40(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemData
struct FNiagaraOutlinerSystemData
{
public:
	TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;                                   // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x10(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x18(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            AveragePerInstanceTime;                            // 0x20(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerInstanceTime;                                // 0x28(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerWorldData
struct FNiagaraOutlinerWorldData
{
public:
	TMap<class FString, struct FNiagaraOutlinerSystemData> Systems;                                           // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                         bHasBegunPlay;                                     // 0x50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WorldType;                                         // 0x51(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NetMode;                                           // 0x52(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x54(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x5C(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerData
struct FNiagaraOutlinerData
{
public:
	TMap<class FString, struct FNiagaraOutlinerWorldData> WorldData;                                         // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
struct FNiagaraDebuggerOutlinerUpdate
{
public:
	struct FNiagaraOutlinerData                  OutlinerData;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
struct FNiagaraDebuggerExecuteConsoleCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresWorld;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
struct FNiagaraDebuggerConnectionClosed
{
public:
	struct FGuid                                 SessionID;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
struct FNiagaraDebuggerAcceptConnection
{
public:
	struct FGuid                                 SessionID;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
struct FNiagaraDebuggerRequestConnection
{
public:
	struct FGuid                                 SessionID;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings
{
public:
	struct FVector2D                             Location;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Zoom;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsValid;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       QualityLevelMask;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SetQualityLevelMask;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
struct FNiagaraPlatformSetCVarCondition
{
public:
	class FName                                  CVarName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinInt;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInt;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFloat;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFloat;                                          // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinInt : 1;                                    // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxInt : 1;                                    // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinFloat : 1;                                  // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxFloat : 1;                                  // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D9[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet
{
public:
	int32                                        QualityLevelMask;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                               // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;                                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bScaleSpawnCount : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CE : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnCountScale;                                   // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
public:
	uint8                                        bOverrideSpawnCountScale : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides
{
public:
	TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraEmitterScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bCullByDistance : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullMaxInstanceCount : 1;                         // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullPerSystemMaxInstanceCount : 1;                // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByMaxTimeWithoutRender : 1;                   // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByGlobalBudget : 1;                           // Mask: 0x10, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CF : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInstances;                                      // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSystemInstances;                                // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutRender;                              // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGlobalBudgetUsage;                              // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
public:
	uint8                                        bOverrideDistanceSettings : 1;                     // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceCountSettings : 1;                // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePerSystemInstanceCountSettings : 1;       // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTimeSinceRendererSettings : 1;            // Mask: 0x8, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGlobalBudgetCullingSettings : 1;          // Mask: 0x10, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides
{
public:
	TArray<struct FNiagaraSystemScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraSystemScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides
{
public:
	float                                        Low;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Medium;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        High;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Epic;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cine;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventGenerator;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEmitter;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
public:
	int32                                        MaxEventsPerFrame;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x10(0x40)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                        Script;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
	enum class EScriptExecutionMode              ExecutionMode;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SpawnNumber;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxEventsPerFrame;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceEmitterID;                                   // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventName;                                   // 0x44(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSpawnNumber;                                // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MinSpawnNumber;                                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IdName;                                            // 0x10(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnabled;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1400[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1401[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEmitter*                       Instance;                                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
public:
	struct FVector                               CollisionPos;                                      // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionNormal;                                   // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionVelocity;                                 // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalMaterialIndex;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
struct FNiagaraMeshRendererMeshProperties
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PivotOffset;                                       // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride
{
public:
	class UMaterialInterface*                    ExplicitMat;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          UserParamBinding;                                  // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.ParameterDefinitionsSubscription
struct FParameterDefinitionsSubscription
{
public:
	uint8                                        Pad_140E[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
public:
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x10 - 0xC)
// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
public:
	int32                                        Offset;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore
{
public:
	uint8                                        Pad_1414[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Owner;                                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariableWithOffset>    SortedParameterOffsets;                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                ParameterData;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraDataInterface*>         DataInterfaces;                                    // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       UObjects;                                          // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1416[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SrcOffset;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestOffset;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraPerfBaselineStats
struct FNiagaraPerfBaselineStats
{
public:
	float                                        PerInstanceAvg_GT;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceAvg_RT;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceMax_GT;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceMax_RT;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QualityLevelMask;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo
{
public:
	int32                                        SetAIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetBIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonUVSettings
struct FNiagaraRibbonUVSettings
{
public:
	enum class ENiagaraRibbonUVDistributionMode  DistributionMode;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonUVEdgeMode          LeadingEdgeMode;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonUVEdgeMode          TrailingEdgeMode;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TilingLength;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Offset;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePerParticleUOverride;                       // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePerParticleVRangeOverride;                  // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
struct FNiagaraRibbonShapeCustomVertex
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Normal;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextureV;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager
{
public:
	class UNiagaraEffectType*                    EffectType;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             ManagedComponents;                                 // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_141F[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraScriptData
struct FVersionedNiagaraScriptData
{
public:
	uint8                                        Pad_1422[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompilerTag
struct FNiagaraCompilerTag
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData
{
public:
	TArray<uint8>                                ByteCode;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                OptimizedByteCode;                                 // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        NumTempRegisters;                                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUserPtrs;                                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraCompilerTag>           CompileTags;                                       // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ScriptLiterals;                                    // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Attributes;                                        // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraScriptDataUsageInfo           DataUsage;                                         // 0x58(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1426[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                 // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                         // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1427[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDataSetID>             ReadDataSets;                                      // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>     WriteDataSets;                                     // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraStatScope>             StatScopes;                                        // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;                                       // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptCompileStatus       LastCompileStatus;                                 // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSimulationStageMetaData>      SimulationStageMetaData;                           // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bReadsSignificanceIndex : 1;                       // Mask: 0x1, PropSize: 0x10xE8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNeedsGPUContextInit : 1;                          // Mask: 0x2, PropSize: 0x10xE8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId
{
public:
	struct FGuid                                 CompilerVersionID;                                 // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptUsage               ScriptUsageType;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ScriptUsageTypeID;                                 // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRapidIterationParams : 1;                     // Mask: 0x1, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawn : 1;                            // Mask: 0x2, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x4, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_DA : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_142F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BaseScriptID;                                      // 0x28(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraCompileHash                   BaseScriptCompileHash;                             // 0x38(0x10)(NativeAccessSpecifierPublic)
	struct FGuid                                 ScriptVersionID;                                   // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyType      Type;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                                  // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1430[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x10(0x18)(Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic)
};

// 0x10 (0x88 - 0x78)
// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
public:
	uint8                                        Pad_1431[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo
{
public:
	uint16                                       SrcOffset;                                         // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestOffset;                                        // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SrcSize;                                           // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestSize;                                          // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x98 - 0x78)
// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
public:
	int32                                        ParameterSize;                                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PaddedParameterSize;                               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                                       // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bInitialized : 1;                                  // Mask: 0x1, PropSize: 0x10x90(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1433[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest
{
public:
	uint8                                        Pad_1437[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       RootObjects;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1438[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair
{
public:
	uint8                                        Pad_143A[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding
{
public:
	int32                                        ParameterOffset;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataSetComponentOffset;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection
{
public:
	TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x218 (0x218 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData
{
public:
	struct FNiagaraParameterStore                InstanceParamStore;                                // 0x0(0x78)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x78(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           SpawnInstanceParamsDataSetCompiledData;            // 0xB8(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           UpdateInstanceParamsDataSetCompiledData;           // 0xF8(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;                        // 0x138(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;                        // 0x158(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;                         // 0x178(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                      // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;                       // 0x1A8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;                       // 0x1C8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;                        // 0x1E8(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                     // 0x208(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData
{
public:
	TArray<class FName>                          SpawnAttributes;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnIntervalVar;                           // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInterpSpawnStartDTVar;                      // 0x30(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnGroupVar;                              // 0x50(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterAgeVar;                                     // 0x70(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterRandomSeedVar;                              // 0x90(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInstanceSeedVar;                            // 0xB0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterTotalSpawnedParticlesVar;                   // 0xD0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0xF0(0x40)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TargetValues;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAdvancedDisplay;                                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1450[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EditorSortPriority;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInlineEditConditionToggle;                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1452[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraInputConditionMetadata        EditCondition;                                     // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraInputConditionMetadata        VisibleCondition;                                  // 0x58(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             PropertyMetaData;                                  // 0x70(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  ParentAttribute;                                   // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VariableGuid;                                      // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsStaticSwitch;                                   // 0xD8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StaticSwitchDefaultValue;                          // 0xDC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
	class FString                                Object;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyKeys;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyValues;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraID
struct FNiagaraID
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AcquireTag;                                        // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpStartDt;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntervalDt;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnGroup;                                        // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.NiagaraAssetVersion
struct FNiagaraAssetVersion
{
public:
	int32                                        MajorVersion;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinorVersion;                                      // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VersionGuid;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisibleInVersionSelector;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1455[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix
{
public:
	struct FVector4                              Row0;                                              // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row1;                                              // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row2;                                              // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row3;                                              // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap
{
public:
	uint8                                        Pad_1457[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
public:
	uint8                                        Pad_1458[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector4
struct FNiagaraHalfVector4
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       W;                                                 // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector3
struct FNiagaraHalfVector3
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector2
struct FNiagaraHalfVector2
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Niagara.NiagaraHalf
struct FNiagaraHalf
{
public:
	uint16                                       Value;                                             // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraWildcard
struct FNiagaraWildcard
{
public:
	uint8                                        Pad_1460[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0xC8 - 0x78)
// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
public:
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                            // 0x78(0x50)(NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                Bytes;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ENiagaraVariantMode               CurrentMode;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1465[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1466[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


