#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBPOnlinePresenceState : uint8
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	EBPOnlinePresenceState_MAX     = 6,
};

enum class EBPUserPrivileges : uint8
{
	CanPlay                        = 0,
	CanPlayOnline                  = 1,
	CanCommunicateOnline           = 2,
	CanUseUserGeneratedContent     = 3,
	EBPUserPrivileges_MAX          = 4,
};

enum class EOnlineComparisonOpRedux : uint8
{
	Equals                         = 0,
	NotEquals                      = 1,
	GreaterThan                    = 2,
	GreaterThanEquals              = 3,
	LessThan                       = 4,
	LessThanEquals                 = 5,
	EOnlineComparisonOpRedux_MAX   = 6,
};

enum class EBPOnlineSessionState : uint8
{
	NoSession                      = 0,
	Creating                       = 1,
	Pending                        = 2,
	Starting                       = 3,
	InProgress                     = 4,
	Ending                         = 5,
	Ended                          = 6,
	Destroying                     = 7,
	EBPOnlineSessionState_MAX      = 8,
};

enum class EBPServerPresenceSearchType : uint8
{
	AllServers                     = 0,
	ClientServersOnly              = 1,
	DedicatedServersOnly           = 2,
	EBPServerPresenceSearchType_MAX = 3,
};

enum class EBlueprintAsyncResultSwitch : uint8
{
	OnSuccess                      = 0,
	AsyncLoading                   = 1,
	OnFailure                      = 2,
	EBlueprintAsyncResultSwitch_MAX = 3,
};

enum class EBlueprintResultSwitch : uint8
{
	OnSuccess                      = 0,
	OnFailure                      = 1,
	EBlueprintResultSwitch_MAX     = 2,
};

enum class ESessionSettingSearchResult : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	WrongType                      = 2,
	ESessionSettingSearchResult_MAX = 3,
};

enum class EBPLoginStatus : uint8
{
	NotLoggedIn                    = 0,
	UsingLocalProfile              = 1,
	LoggedIn                       = 2,
	EBPLoginStatus_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct AdvancedSessions.BPUniqueNetId
struct FBPUniqueNetId
{
public:
	uint8                                        Pad_7BB[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
struct FBPFriendPresenceInfo
{
public:
	bool                                         bIsOnline;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlaying;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingThisGame;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsJoinable;                                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasVoiceSupport;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPOnlinePresenceState            PresenceState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StatusString;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AdvancedSessions.BPFriendInfo
struct FBPFriendInfo
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RealName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBPOnlinePresenceState            OnlineState;                                       // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x28(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingSameGame;                                // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPFriendPresenceInfo                 PresenceInfo;                                      // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AdvancedSessions.BPOnlineUser
struct FBPOnlineUser
{
public:
	struct FBPUniqueNetId                        UniqueNetId;                                       // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RealName;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
public:
	class FString                                LastSeen;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AdvancedSessions.SessionsSearchSetting
struct FSessionsSearchSetting
{
public:
	uint8                                        Pad_7D5[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
struct FSessionPropertyKeyPair
{
public:
	uint8                                        Pad_7D6[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AdvancedSessions.BPUserOnlineAccount
struct FBPUserOnlineAccount
{
public:
	uint8                                        Pad_7D7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


