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

// 0x38 (0x38 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
struct UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       ShakeClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraShakeSourceComponent*           SourceComponent;                                   // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserPlaySpaceRot;                                  // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
struct UMatineeCameraShake_StartMatineeCameraShake_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       ShakeClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserPlaySpaceRot;                                  // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
struct UMatineeCameraShake_ReceiveStopShake_Params
{
public:
	bool                                         bImmediately;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
struct UMatineeCameraShake_ReceivePlayShake_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
struct UMatineeCameraShake_ReceiveIsFinished_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xBF0 (0xBF0 - 0x0)
// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
struct UMatineeCameraShake_BlueprintUpdateCameraShake_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x5F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMinimalViewInfo                      ModifiedPOV;                                       // 0x600(0x5F0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
struct UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params
{
public:
	class UCameraShakeBase*                      CameraShake;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


