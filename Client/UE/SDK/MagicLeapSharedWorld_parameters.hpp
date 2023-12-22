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
// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
struct AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
struct AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params
{
public:
	struct FMagicLeapSharedWorldSharedData       NewSharedWorldData;                                // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
struct AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
struct AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params
{
public:
	struct FMagicLeapSharedWorldLocalData        LocalWorldReplicationData;                         // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
struct AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params
{
public:
	struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms;                             // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
struct AMagicLeapSharedWorldPlayerController_IsChosenOne_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
struct AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params
{
public:
	bool                                         bChosenOne;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
struct AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


