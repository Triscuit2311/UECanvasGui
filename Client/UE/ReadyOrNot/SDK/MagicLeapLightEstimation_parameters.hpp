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
// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
struct UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
struct UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params
{
public:
	struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;                             // 0x0(0x20)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
struct UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params
{
public:
	struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;                                // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
struct UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


