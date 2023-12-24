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
// Function AudioCapture.AudioCapture.IsCapturingAudio
struct UAudioCapture_IsCapturingAudio_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
{
public:
	struct FAudioCaptureDeviceInfo               OutInfo;                                           // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
{
public:
	class UAudioCapture*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


