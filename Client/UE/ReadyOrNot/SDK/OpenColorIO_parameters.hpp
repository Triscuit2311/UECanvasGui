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

// 0x78 (0x78 - 0x0)
// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
struct UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenColorIOColorConversionSettings   ConversionSettings;                                // 0x8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture*                              InputTexture;                                      // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                OutputRenderTarget;                                // 0x68(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
{
public:
	TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
{
public:
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0x60)(Parm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0x60)(Parm, NativeAccessSpecifierPublic)
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0x60(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1567[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


