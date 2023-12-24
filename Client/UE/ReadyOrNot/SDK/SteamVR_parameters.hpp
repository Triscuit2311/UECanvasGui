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
// Function SteamVR.SteamVRChaperoneComponent.GetBounds
struct USteamVRChaperoneComponent_GetBounds_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
struct USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params
{
public:
	enum class ESteamVRTrackedDeviceType         DeviceType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                OutTrackedDeviceIds;                               // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
struct USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params
{
public:
	int32                                        DeviceID;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutPosition;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OutOrientation;                                    // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
struct USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params
{
public:
	int32                                        ControllerIndex;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OutPosition;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OutOrientation;                                    // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamVR.SteamVRHQStereoLayerShape.SetCurved
struct USteamVRHQStereoLayerShape_SetCurved_Params
{
public:
	bool                                         InCurved;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
struct USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Params
{
public:
	float                                        InDistance;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
struct USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Params
{
public:
	float                                        InDistance;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
struct USteamVRHQStereoLayerShape_SetAntiAlias_Params
{
public:
	bool                                         InAntiAlias;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


