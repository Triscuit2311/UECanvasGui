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

// 0x28 (0x28 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
struct UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         bRequireNameOnly;                                  // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_680[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
struct UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	enum class ESteamUserOverlayType             DialogType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_682[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
struct UAdvancedSteamFriendsLibrary_IsSteamInBigPictureMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
struct UAdvancedSteamFriendsLibrary_IsOverlayEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
struct UAdvancedSteamFriendsLibrary_InitTextFiltering_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
struct UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
struct UAdvancedSteamFriendsLibrary_GetSteamGroups_Params
{
public:
	TArray<struct FBPSteamGroupInfo>             SteamGroups;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
struct UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AppId;                                             // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
struct UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	enum class EBlueprintAsyncResultSwitch       Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamAvatarSize                  AvatarSize;                                        // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
struct UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params
{
public:
	struct FBPUniqueNetId                        ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
struct UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_692[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
struct UAdvancedSteamFriendsLibrary_FilterText_Params
{
public:
	class FString                                TextToFilter;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPTextFilteringContext           Context;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_696[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        TextSourceID;                                      // 0x18(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FString                                FilteredText;                                      // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_697[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
struct UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params
{
public:
	class FString                                SteamID64;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
struct UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params
{
public:
	int32                                        NumberOfItems;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBPSteamWorkshopID>            ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
struct UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params
{
public:
	int32                                        NumberOfItems;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
struct USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        GroupUniqueNetID;                                  // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	class USteamRequestGroupOfficersCallbackProxy* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
struct USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPSteamWorkshopID                    WorkShopID;                                        // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USteamWSRequestUGCDetailsCallbackProxy* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


