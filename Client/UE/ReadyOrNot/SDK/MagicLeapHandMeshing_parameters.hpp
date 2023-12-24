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

// 0x1 (0x1 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
struct UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Params
{
public:
	bool                                         bInUseWeightedNormals;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
struct UMagicLeapHandMeshingComponent_DisconnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1980[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
struct UMagicLeapHandMeshingComponent_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1985[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
struct UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
struct UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
struct UMagicLeapHandMeshingFunctionLibrary_CreateClient_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
struct UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1994[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


