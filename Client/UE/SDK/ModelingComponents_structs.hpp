#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBaseCreateFromSelectedTargetType : int32
{
	NewAsset                       = 0,
	FirstInputAsset                = 1,
	LastInputAsset                 = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class EDynamicMeshTangentCalcType : uint8
{
	NoTangents                     = 0,
	AutoCalculated                 = 1,
	ExternallyCalculated           = 2,
	EDynamicMeshTangentCalcType_MAX = 3,
};

enum class EMultiTransformerMode : uint8
{
	DefaultGizmo                   = 1,
	QuickAxisTranslation           = 2,
	EMultiTransformerMode_MAX      = 3,
};

enum class EHandleSourcesMethod : uint8
{
	DeleteSources                  = 0,
	HideSources                    = 1,
	KeepSources                    = 2,
	EHandleSourcesMethod_MAX       = 3,
};

enum class ESpaceCurveControlPointFalloffType : int32
{
	Linear                         = 0,
	Smooth                         = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2,
};

enum class ESpaceCurveControlPointOriginMode : int32
{
	Shared                         = 0,
	First                          = 1,
	Last                           = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3,
};

enum class ESpaceCurveControlPointTransformMode : int32
{
	Shared                         = 0,
	PerVertex                      = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
};

enum class EUVLayoutPreviewSide : int32
{
	Left                           = 0,
	Right                          = 1,
	EUVLayoutPreviewSide_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangleVertex
struct FRenderableTriangleVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV;                                                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangle
struct FRenderableTriangle
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex             Vertex0;                                           // 0x8(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex             Vertex1;                                           // 0x2C(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex             Vertex2;                                           // 0x50(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}


