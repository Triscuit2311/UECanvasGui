#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInputCaptureState : uint8
{
	Begin                          = 1,
	Continue                       = 2,
	End                            = 3,
	Ignore                         = 4,
	EInputCaptureState_MAX         = 5,
};

enum class EInputCaptureRequestType : uint8
{
	Begin                          = 1,
	Ignore                         = 2,
	EInputCaptureRequestType_MAX   = 3,
};

enum class EInputCaptureSide : uint8
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Both                           = 3,
	Any                            = 99,
	EInputCaptureSide_MAX          = 100,
};

enum class EInputDevices : uint8
{
	None                           = 0,
	Keyboard                       = 1,
	Mouse                          = 2,
	Gamepad                        = 4,
	OculusTouch                    = 8,
	HTCViveWands                   = 16,
	AnySpatialDevice               = 24,
	TabletFingers                  = 1024,
	EInputDevices_MAX              = 1025,
};

enum class ETransformGizmoSubElements : uint8
{
	None                           = 0,
	TranslateAxisX                 = 2,
	TranslateAxisY                 = 4,
	TranslateAxisZ                 = 8,
	TranslateAllAxes               = 14,
	TranslatePlaneXY               = 16,
	TranslatePlaneXZ               = 32,
	TranslatePlaneYZ               = 64,
	TranslateAllPlanes             = 112,
	RotateAxisX                    = 128,
	RotateAxisY                    = 256,
	RotateAxisZ                    = 512,
	RotateAllAxes                  = 896,
	ScaleAxisX                     = 1024,
	ScaleAxisY                     = 2048,
	ScaleAxisZ                     = 4096,
	ScaleAllAxes                   = 7168,
	ScalePlaneYZ                   = 8192,
	ScalePlaneXZ                   = 16384,
	ScalePlaneXY                   = 32768,
	ScaleAllPlanes                 = 57344,
	ScaleUniform                   = 65536,
	StandardTranslateRotate        = 1022,
	TranslateRotateUniformScale    = 66558,
	FullTranslateRotateScale       = 131070,
	ETransformGizmoSubElements_MAX = 131071,
};

enum class EToolChangeTrackingMode : uint8
{
	NoChangeTracking               = 1,
	UndoToExit                     = 2,
	FullUndoRedo                   = 3,
	EToolChangeTrackingMode_MAX    = 4,
};

enum class EToolSide : uint8
{
	Left                           = 1,
	Mouse                          = 1,
	Right                          = 2,
	EToolSide_MAX                  = 3,
};

enum class EViewInteractionState : uint8
{
	None                           = 0,
	Hovered                        = 1,
	Focused                        = 2,
	EViewInteractionState_MAX      = 3,
};

enum class ESelectedObjectsModificationType : uint8
{
	Replace                        = 0,
	Add                            = 1,
	Remove                         = 2,
	Clear                          = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class EToolMessageLevel : uint8
{
	Internal                       = 0,
	UserMessage                    = 1,
	UserNotification               = 2,
	UserWarning                    = 3,
	UserError                      = 4,
	EToolMessageLevel_MAX          = 5,
};

enum class EToolContextCoordinateSystem : int32
{
	World                          = 0,
	Local                          = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class EStandardToolContextMaterials : uint8
{
	VertexColorMaterial            = 1,
	EStandardToolContextMaterials_MAX = 2,
};

enum class ESceneSnapQueryTargetType : uint8
{
	None                           = 0,
	MeshVertex                     = 1,
	MeshEdge                       = 2,
	Grid                           = 4,
	All                            = 7,
	ESceneSnapQueryTargetType_MAX  = 8,
};

enum class ESceneSnapQueryType : uint8
{
	Position                       = 1,
	Rotation                       = 2,
	ESceneSnapQueryType_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct InteractiveToolsFramework.BrushStampData
struct FBrushStampData
{
public:
	uint8                                        Pad_42C[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InteractiveToolsFramework.BehaviorInfo
struct FBehaviorInfo
{
public:
	class UInputBehavior*                        Behavior;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct InteractiveToolsFramework.InputRayHit
struct FInputRayHit
{
public:
	uint8                                        Pad_42E[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct InteractiveToolsFramework.ActiveGizmo
struct FActiveGizmo
{
public:
	uint8                                        Pad_42F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
struct FGizmoFloatParameterChange
{
public:
	float                                        InitialValue;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
struct FGizmoVec2ParameterChange
{
public:
	struct FVector2D                             InitialValue;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CurrentValue;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


