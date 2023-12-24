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

// 0x10 (0x10 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_SetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV;                                                // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UVIndex;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x4(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UVIndex;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HalfExtents;                                       // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                       PolygonGroup;                                      // 0x18(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            PolygonID_PlusX;                                   // 0x1C(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            PolygonID_MinusX;                                  // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            PolygonID_PlusY;                                   // 0x24(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            PolygonID_MinusY;                                  // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            PolygonID_PlusZ;                                   // 0x2C(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            PolygonID_MinusZ;                                  // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


