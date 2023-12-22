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
// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
struct UAdvancedExternalUILibrary_ShowWebURLUI_Params
{
public:
	class FString                                URLToShow;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        AllowedDomains;                                    // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEmbedded;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBackground;                                   // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCloseButton;                                  // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OffsetX;                                           // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OffsetY;                                           // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeX;                                             // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
struct UAdvancedExternalUILibrary_ShowProfileUI_Params
{
public:
	struct FBPUniqueNetId                        PlayerViewingProfile;                              // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        PlayerToViewProfileOf;                             // 0x20(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
struct UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params
{
public:
	class FString                                LeaderboardName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
struct UAdvancedExternalUILibrary_ShowInviteUI_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
struct UAdvancedExternalUILibrary_ShowFriendsUI_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
struct UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params
{
public:
	struct FBPUniqueNetId                        PlayerRequestingAccountUpgradeUI;                  // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
struct UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params
{
public:
	int32                                        LocalPlayerNum;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        PersonInviting;                                    // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	class FString                                AppId;                                             // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               SessionToJoin;                                     // 0x38(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
struct UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params
{
public:
	int32                                        LocalPlayerNum;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_602[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        PersonInvited;                                     // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               SessionToJoin;                                     // 0x28(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
struct UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params
{
public:
	struct FBPUniqueNetId                        PlayerId;                                          // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         bIsTalking;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_603[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
struct UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params
{
public:
	int32                                        PlayerNum;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPLoginStatus                    PreviousStatus;                                    // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPLoginStatus                    NewStatus;                                         // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_604[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        NewPlayerUniqueNetID;                              // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
struct UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params
{
public:
	int32                                        PlayerNum;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
struct IAdvancedFriendsInterface_OnSessionInviteReceived_Params
{
public:
	struct FBPUniqueNetId                        PersonInviting;                                    // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x20(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
struct IAdvancedFriendsInterface_OnSessionInviteAccepted_Params
{
public:
	struct FBPUniqueNetId                        PersonInvited;                                     // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x20(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
struct IAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params
{
public:
	struct FBPUniqueNetId                        PlayerId;                                          // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         bIsTalking;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_608[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
struct IAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params
{
public:
	enum class EBPLoginStatus                    PreviousStatus;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPLoginStatus                    NewStatus;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        PlayerUniqueNetID;                                 // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
struct IAdvancedFriendsInterface_OnPlayerLoginChanged_Params
{
public:
	int32                                        PlayerNum;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
struct UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBPUniqueNetId>                Friends;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_615[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
struct UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        FriendUniqueNetId;                                 // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_618[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
struct UAdvancedFriendsLibrary_IsAFriend_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         IsFriend;                                          // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_619[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
struct UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FBPOnlineRecentPlayer>         PlayersList;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
struct UAdvancedFriendsLibrary_GetStoredFriendsList_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBPFriendInfo>                 FriendsList;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
struct UAdvancedFriendsLibrary_GetFriend_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        FriendUniqueNetId;                                 // 0x8(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FBPFriendInfo                         Friend;                                            // 0x28(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
struct UAdvancedIdentityLibrary_SetUserAccountAttribute_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                AttributeName;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewAttributeValue;                                 // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
struct UAdvancedIdentityLibrary_GetUserID_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x10(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
struct UAdvancedIdentityLibrary_GetUserAccountRealName_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
struct UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
struct UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                AttributeName;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthAttribute;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_624[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
struct UAdvancedIdentityLibrary_GetUserAccountAttribute_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                AttributeName;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttributeValue;                                    // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
struct UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params
{
public:
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
struct UAdvancedIdentityLibrary_GetUserAccount_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUserOnlineAccount                  AccountInfo;                                       // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_633[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
struct UAdvancedIdentityLibrary_GetPlayerNickname_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                PlayerNickname;                                    // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
struct UAdvancedIdentityLibrary_GetPlayerAuthToken_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthToken;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_638[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
struct UAdvancedIdentityLibrary_GetLoginStatus_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EBPLoginStatus                    LoginStatus;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
struct UAdvancedIdentityLibrary_GetAllUserAccounts_Params
{
public:
	TArray<struct FBPUserOnlineAccount>          AccountInfos;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
struct UAdvancedSessionsLibrary_UniqueNetIdToString_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
struct UAdvancedSessionsLibrary_SetPlayerName_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
struct UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params
{
public:
	struct FSessionPropertyKeyPair               SessionSearchProperty;                             // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	enum class EOnlineComparisonOpRedux          ComparisonOp;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_642[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionsSearchSetting                ReturnValue;                                       // 0x28(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair               ReturnValue;                                       // 0x18(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_646[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionPropertyKeyPair               ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_647[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionPropertyKeyPair               ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_648[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionPropertyKeyPair               ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionPropertyKeyPair               ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
struct UAdvancedSessionsLibrary_KickPlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerToKick;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  KickReason;                                        // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
struct UAdvancedSessionsLibrary_IsValidUniqueNetID_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
struct UAdvancedSessionsLibrary_IsValidSession_Params
{
public:
	struct FBlueprintSessionResult               SessionResult;                                     // 0x0(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x108(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_650[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
struct UAdvancedSessionsLibrary_IsPlayerInSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        PlayerToCheck;                                     // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsInSession;                                      // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_654[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
struct UAdvancedSessionsLibrary_HasOnlineSubsystem_Params
{
public:
	class FName                                  SubSystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_655[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
struct UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
struct UAdvancedSessionsLibrary_GetUniqueNetID_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
struct UAdvancedSessionsLibrary_GetUniqueBuildID_Params
{
public:
	struct FBlueprintSessionResult               SessionResult;                                     // 0x0(0x108)(Parm, NativeAccessSpecifierPublic)
	int32                                        UniqueBuildId;                                     // 0x108(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
struct UAdvancedSessionsLibrary_GetSessionState_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPOnlineSessionState             SessionState;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
struct UAdvancedSessionsLibrary_GetSessionSettings_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumConnections;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPrivateConnections;                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLAN;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDedicated;                                      // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInvites;                                     // 0x12(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinInProgress;                              // 0x13(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAnticheatEnabled;                               // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_664[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BuildUniqueID;                                     // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_665[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_666[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
struct UAdvancedSessionsLibrary_GetSessionPropertyString_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionSettingSearchResult       SearchResult;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_669[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SettingValue;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
struct UAdvancedSessionsLibrary_GetSessionPropertyKey_Params
{
public:
	struct FSessionPropertyKeyPair               SessionProperty;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
struct UAdvancedSessionsLibrary_GetSessionPropertyInt_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionSettingSearchResult       SearchResult;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SettingValue;                                      // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
struct UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionSettingSearchResult       SearchResult;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_676[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SettingValue;                                      // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
struct UAdvancedSessionsLibrary_GetSessionPropertyByte_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionSettingSearchResult       SearchResult;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SettingValue;                                      // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
struct UAdvancedSessionsLibrary_GetSessionPropertyBool_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionSettingSearchResult       SearchResult;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SettingValue;                                      // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_681[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
struct UAdvancedSessionsLibrary_GetSessionID_AsString_Params
{
public:
	struct FBlueprintSessionResult               SessionResult;                                     // 0x0(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                SessionID;                                         // 0x108(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
struct UAdvancedSessionsLibrary_GetPlayerName_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
struct UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumNetPlayers;                                     // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_685[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
struct UAdvancedSessionsLibrary_GetNetPlayerIndex_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NetPlayerIndex;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_686[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
struct UAdvancedSessionsLibrary_GetExtraSettings_Params
{
public:
	struct FBlueprintSessionResult               SessionResult;                                     // 0x0(0x108)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x108(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
struct UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params
{
public:
	int32                                        UniqueBuildId;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
struct UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionID;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
struct UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutIndex;                                          // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
struct UAdvancedSessionsLibrary_FindSessionPropertyByName_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  SettingsName;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlueprintResultSwitch            Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_691[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionPropertyKeyPair               OutProperty;                                       // 0x20(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
struct UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params
{
public:
	struct FBPUniqueNetId                        A;                                                 // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        B;                                                 // 0x20(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_694[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
struct UAdvancedSessionsLibrary_BanPlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerToBan;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  BanReason;                                         // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
struct UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params
{
public:
	TArray<struct FSessionPropertyKeyPair>       SettingsArray;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>       NewOrChangedSettings;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>       ModifiedSettingsArray;                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
struct UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
struct UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params
{
public:
	uint8                                        LocalPlayerNum;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
struct UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params
{
public:
	uint8                                        LocalUserNum;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsSystemWide;                                     // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B6[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
struct UAdvancedVoiceLibrary_StopNetworkedVoice_Params
{
public:
	uint8                                        LocalPlayerNum;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
struct UAdvancedVoiceLibrary_StartNetworkedVoice_Params
{
public:
	uint8                                        LocalPlayerNum;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
struct UAdvancedVoiceLibrary_RegisterRemoteTalker_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
struct UAdvancedVoiceLibrary_RegisterLocalTalker_Params
{
public:
	uint8                                        LocalPlayerNum;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
struct UAdvancedVoiceLibrary_MuteRemoteTalker_Params
{
public:
	uint8                                        LocalUserNum;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsSystemWide;                                     // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
struct UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
struct UAdvancedVoiceLibrary_IsPlayerMuted_Params
{
public:
	uint8                                        LocalUserNumChecking;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
struct UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params
{
public:
	uint8                                        LocalPlayerNum;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
struct UAdvancedVoiceLibrary_IsHeadsetPresent_Params
{
public:
	bool                                         bHasHeadset;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LocalPlayerNum;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
struct UAdvancedVoiceLibrary_GetNumLocalTalkers_Params
{
public:
	int32                                        NumLocalTalkers;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
struct UCancelFindSessionsCallbackProxy_CancelFindSessions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCancelFindSessionsCallbackProxy*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
struct UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PublicConnections;                                 // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrivateConnections;                                // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInvites;                                     // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDedicatedServer;                                // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePresence;                                      // 0x2B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLobbiesIfAvailable;                            // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinViaPresence;                             // 0x2D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinViaPresenceFriendsOnly;                  // 0x2E(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAntiCheatProtected;                               // 0x2F(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesStats;                                        // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAdvertise;                                  // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateSessionCallbackProxyAdvanced*   ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession
struct UDestroySessionCallbackProxyAdvanced_DestroySession_Params
{
public:
	class UWorld*                                WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDestroySessionCallbackProxyAdvanced*  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
struct UEndSessionCallbackProxy_EndSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEndSessionCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
struct UFindFriendSessionCallbackProxy_FindFriendSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        FriendUniqueNetId;                                 // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFindFriendSessionCallbackProxy*       ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
struct UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPServerPresenceSearchType       ServerTypeToSearch;                                // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_735[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSessionsSearchSetting>        Filters;                                           // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bEmptyServersOnly;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNonEmptyServersOnly;                              // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSecureServersOnly;                                // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSearchLobbies;                                    // 0x2B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSlotsAvailable;                                 // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFindSessionsCallbackProxyAdvanced*    ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
struct UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params
{
public:
	TArray<struct FBlueprintSessionResult>       SessionResults;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionsSearchSetting>        Filters;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBlueprintSessionResult>       FilteredResults;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
struct UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetFriendsCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
struct UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetRecentPlayersCallbackProxy*        ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
struct UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPUserPrivileges                 PrivilegeToCheck;                                  // 0x8(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_767[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        PlayerUniqueNetID;                                 // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetUserPrivilegeCallbackProxy*        ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession
struct UJoinSessionCallbackProxyAdvanced_JoinSession_Params
{
public:
	class UWorld*                                WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x10(0x108)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinSessionCallbackProxyAdvanced*     ReturnValue;                                       // 0x118(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
struct ULoginUserCallbackProxy_LoginUser_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserToken;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoginUserCallbackProxy*               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
struct ULogoutUserCallbackProxy_LogoutUser_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULogoutUserCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
struct USendFriendInviteCallbackProxy_SendFriendInvite_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                        UniqueNetIDInvited;                                // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USendFriendInviteCallbackProxy*        ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
struct UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>       ExtraSettings;                                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        PublicConnections;                                 // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrivateConnections;                                // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInvites;                                     // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinInProgress;                              // 0x22(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshOnlineData;                                // 0x23(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDedicatedServer;                                // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUpdateSessionCallbackProxyAdvanced*   ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


