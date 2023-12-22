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
// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
struct UMagicLeapPlanesComponent_RequestPlanesAsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
struct UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params
{
public:
	TArray<enum class EMagicLeapPlaneQueryFlags> InPriority;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> InFlagsToReorder;                                  // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> OutReorderedFlags;                                 // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
struct UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params
{
public:
	struct FGuid                                 Handle;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1944[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
struct UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params
{
public:
	TArray<enum class EMagicLeapPlaneQueryFlags> InQueryFlags;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> InResultFlags;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> OutFlags;                                          // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params
{
public:
	struct FMagicLeapPlanesQuery                 Query;                                             // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ResultDelegate;                                    // 0x60(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params
{
public:
	struct FMagicLeapPlanesQuery                 Query;                                             // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGuid                                 Handle;                                            // 0x60(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ResultDelegate;                                    // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1967[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
struct UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
struct UMagicLeapPlanesFunctionLibrary_GetContentScale_Params
{
public:
	class AActor*                                ContentActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapPlaneResult                 PlaneResult;                                       // 0x8(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_197C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x70(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
struct UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
struct UMagicLeapPlanesFunctionLibrary_CreateTracker_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
struct UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params
{
public:
	enum class EMagicLeapPlaneQueryType          PersistentQueryType;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


