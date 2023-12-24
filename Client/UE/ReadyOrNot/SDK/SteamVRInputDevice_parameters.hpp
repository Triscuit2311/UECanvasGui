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

// 0x40 (0x40 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
struct USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params
{
public:
	struct FSteamVRAction                        SteamVRAction;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FSteamVRActionSet                     SteamVRActionSet;                                  // 0x28(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
struct USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
struct USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params
{
public:
	bool                                         bUseSkeletonPose;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
struct USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params
{
public:
	bool                                         NewLeftHandState;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewRightHandState;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
struct USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
struct USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params
{
public:
	enum class ESteamVRHand                      Hand;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_797[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartSecondsFromNow;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationSeconds;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
struct USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params
{
public:
	struct FSteamVRAction                        SteamVRAction;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FSteamVRInputOriginInfo               InputOriginInfo;                                   // 0x28(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params
{
public:
	struct FSteamVRAction                        SteamVRAction;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	TArray<enum class ESteamVRInputStringBits>   LocalizedParts;                                    // 0x28(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                OriginLocalizedName;                               // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params
{
public:
	struct FSteamVRAction                        SteamVRActionHandle;                               // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FSteamVRInputBindingInfo>      ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamVRHand                      Hand;                                              // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PredictedSecondsFromNow;                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params
{
public:
	TArray<struct FSteamVRActionSet>             SteamVRActionSets;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params
{
public:
	TArray<struct FSteamVRAction>                SteamVRActions;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xBB0 (0xBB0 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
struct USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params
{
public:
	struct FSteamVRSkeletonTransform             LeftHand;                                          // 0x0(0x5D0)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamVRSkeletonTransform             RightHand;                                         // 0x5D0(0x5D0)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWithController;                                   // 0xBA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CF[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
struct USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params
{
public:
	bool                                         LeftHandState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RightHandState;                                    // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
struct USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x24(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
struct USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params
{
public:
	bool                                         bUsingSkeletonPose;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
struct USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x24(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
struct USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params
{
public:
	enum class EHand                             Hand;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamVRFingerCurls                   FingerCurls;                                       // 0x4(0x14)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamVRFingerSplays                  FingerSplays;                                      // 0x18(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESkeletalSummaryDataType          SummaryDataType;                                   // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
struct USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params
{
public:
	bool                                         LeftHandState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RightHandState;                                    // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
struct USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params
{
public:
	enum class EControllerFidelity               LeftControllerFidelity;                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerFidelity               RightControllerFidelity;                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamVRInputOriginInfo               InputOriginInfo;                                   // 0x10(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FName                                  ActionSet;                                         // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionSet;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamVRInputBindingInfo>      ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionSet;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_826[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_830[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamVRAction                        FoundAction;                                       // 0x10(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSteamVRActionSet                     FoundActionSet;                                    // 0x38(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FName                                  ActionSet;                                         // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
struct USteamVRTrackingReferences_ShowTrackingReferences_Params
{
public:
	class UStaticMesh*                           TrackingReferenceMesh;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_849[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


