#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESkeletalSummaryDataType : uint8
{
	VR_SummaryType_FromAnimation   = 0,
	VR_SummaryType_FromDevice      = 1,
	VR_SummaryType_MAX             = 2,
};

enum class ESteamVRInputStringBits : uint8
{
	VR_InputString_Hand            = 0,
	VR_InputString_ControllerType  = 1,
	VR_InputString_InputSource     = 2,
	VR_InputString_All             = 3,
	VR_InputString_MAX             = 4,
};

enum class EControllerFidelity : uint8
{
	VR_ControllerFidelity_Estimated = 0,
	VR_ControllerFidelity_Full     = 1,
	VR_ControllerFidelity_Partial  = 2,
	VR_ControllerFidelity_MAX      = 3,
};

enum class EHandSkeleton : uint8
{
	VR_SteamVRHandSkeleton         = 0,
	VR_UE4HandSkeleton             = 1,
	VR_MAX                         = 2,
};

enum class EHand : uint8
{
	VR_LeftHand                    = 0,
	VR_RightHand                   = 1,
	VR_MAX                         = 2,
};

enum class EMotionRange : uint8
{
	VR_WithoutController           = 0,
	VR_WithController              = 1,
	VR_MAX                         = 2,
};

enum class ESteamVRHand : uint8
{
	VR_Left                        = 0,
	VR_Right                       = 1,
	VR_MAX                         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x5D0 (0x5D0 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
struct FSteamVRSkeletonTransform
{
public:
	struct FTransform                            Root;                                              // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Wrist;                                             // 0x30(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Thumb_0;                                           // 0x60(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Thumb_1;                                           // 0x90(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Thumb_2;                                           // 0xC0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Thumb_3;                                           // 0xF0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Index_0;                                           // 0x120(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Index_1;                                           // 0x150(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Index_2;                                           // 0x180(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Index_3;                                           // 0x1B0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Index_4;                                           // 0x1E0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Middle_0;                                          // 0x210(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Middle_1;                                          // 0x240(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Middle_2;                                          // 0x270(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Middle_3;                                          // 0x2A0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Middle_4;                                          // 0x2D0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Ring_0;                                            // 0x300(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Ring_1;                                            // 0x330(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Ring_2;                                            // 0x360(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Ring_3;                                            // 0x390(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Ring_4;                                            // 0x3C0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Pinky_0;                                           // 0x3F0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Pinky_1;                                           // 0x420(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Pinky_2;                                           // 0x450(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Pinky_3;                                           // 0x480(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Pinky_4;                                           // 0x4B0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Aux_Thumb;                                         // 0x4E0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Aux_Index;                                         // 0x510(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Aux_Middle;                                        // 0x540(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Aux_Ring;                                          // 0x570(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Aux_Pinky;                                         // 0x5A0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
struct FUE4RetargettingRefs
{
public:
	bool                                         bIsInitialized;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRightHanded;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               KnuckleAverageMS_UE4;                              // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WristSideDirectionLS_UE4;                          // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WristForwardLS_UE4;                                // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x610 (0x620 - 0x10)
// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
struct FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
{
public:
	enum class EMotionRange                      MotionRange;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHand                             Hand;                                              // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHandSkeleton                     HandSkeleton;                                      // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mirror;                                            // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamVRSkeletonTransform             SteamVRSkeletalTransform;                          // 0x20(0x5D0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FUE4RetargettingRefs                  UE4RetargettingRefs;                               // 0x5F0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_863[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x40 - 0x10)
// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
struct FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
{
public:
	struct FPoseLink                             ReferencePose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHandSkeleton                     HandSkeleton;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_865[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             TargetPose;                                        // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_866[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
struct FSteamVRInputBindingInfo
{
public:
	class FName                                  DevicePathName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InputPathName;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModeName;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
struct FSteamVRInputOriginInfo
{
public:
	int32                                        TrackedDeviceIndex;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RenderModelComponentName;                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TrackedDeviceModel;                                // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRActionSet
struct FSteamVRActionSet
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRAction
struct FSteamVRAction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Path;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
struct FSteamVRFingerSplays
{
public:
	float                                        Thumb_Index;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Index_Middle;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Middle_Ring;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ring_Pinky;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
struct FSteamVRFingerCurls
{
public:
	float                                        Thumb;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Index;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Middle;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ring;                                              // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pinky;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


