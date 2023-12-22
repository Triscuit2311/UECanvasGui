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

// 0xC (0xC - 0x0)
// Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetRemappedBoneNameByConvention
struct ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Params
{
public:
	enum class EXsensMapping                     Bone;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EXsensRetargetNamingConvention    Convention;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F17[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetCustomRemappedBoneName
struct ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Params
{
public:
	enum class EXsensMapping                     Bone;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LiveLinkMvnPlugin.MvnRemoteControlManager.StopRecording
struct UMvnRemoteControlManager_StopRecording_Params
{
public:
	float                                        _fTimeOffsetInSeconds;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LiveLinkMvnPlugin.MvnRemoteControlManager.StartRecording
struct UMvnRemoteControlManager_StartRecording_Params
{
public:
	float                                        _fTimeOffsetInSeconds;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


