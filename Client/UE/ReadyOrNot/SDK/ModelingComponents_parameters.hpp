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
// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
struct UPreviewGeometry_SetLineSetVisibility_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
struct UPreviewGeometry_SetLineSetMaterial_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
struct UPreviewGeometry_SetAllLineSetsMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveLineSet
struct UPreviewGeometry_RemoveLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroy;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
struct UPreviewGeometry_RemoveAllLineSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.GetActor
struct UPreviewGeometry_GetActor_Params
{
public:
	class APreviewGeometryActor*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindLineSet
struct UPreviewGeometry_FindLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModelingComponents.PreviewGeometry.CreateInWorld
struct UPreviewGeometry_CreateInWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WithTransform;                                     // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddLineSet
struct UPreviewGeometry_AddLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
struct UWeightMapSetProperties_GetWeightMapsFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


