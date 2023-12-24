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
// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
struct UMagicLeapImageTrackerComponent_SetTargetAsync_Params
{
public:
	class UTexture2D*                            ImageTarget;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
struct UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
struct UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params
{
public:
	int32                                        MaxSimultaneousTargets;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
struct UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
struct UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
struct UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


