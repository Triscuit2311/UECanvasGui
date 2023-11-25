#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AdvancedSessions.EBPLoginStatus
	 */
	enum class EBPLoginStatus : uint8_t
	{
		NotLoggedIn       = 0,
		UsingLocalProfile = 1,
		LoggedIn          = 2,
		MAX               = 3
	};

	/**
	 * Enum AdvancedSessions.EBPOnlinePresenceState
	 */
	enum class EBPOnlinePresenceState : uint8_t
	{
		Online       = 0,
		Offline      = 1,
		Away         = 2,
		ExtendedAway = 3,
		DoNotDisturb = 4,
		Chat         = 5,
		MAX          = 6
	};

	/**
	 * Enum AdvancedSessions.EBPUserPrivileges
	 */
	enum class EBPUserPrivileges : uint8_t
	{
		CanPlay                    = 0,
		CanPlayOnline              = 1,
		CanCommunicateOnline       = 2,
		CanUseUserGeneratedContent = 3,
		MAX                        = 4
	};

	/**
	 * Enum AdvancedSessions.EOnlineComparisonOpRedux
	 */
	enum class EOnlineComparisonOpRedux : uint8_t
	{
		Equals            = 0,
		NotEquals         = 1,
		GreaterThan       = 2,
		GreaterThanEquals = 3,
		LessThan          = 4,
		LessThanEquals    = 5,
		MAX               = 6
	};

	/**
	 * Enum AdvancedSessions.EBPOnlineSessionState
	 */
	enum class EBPOnlineSessionState : uint8_t
	{
		NoSession  = 0,
		Creating   = 1,
		Pending    = 2,
		Starting   = 3,
		InProgress = 4,
		Ending     = 5,
		Ended      = 6,
		Destroying = 7,
		MAX        = 8
	};

	/**
	 * Enum AdvancedSessions.EBPServerPresenceSearchType
	 */
	enum class EBPServerPresenceSearchType : uint8_t
	{
		AllServers           = 0,
		ClientServersOnly    = 1,
		DedicatedServersOnly = 2,
		MAX                  = 3
	};

	/**
	 * Enum AdvancedSessions.EBlueprintAsyncResultSwitch
	 */
	enum class EBlueprintAsyncResultSwitch : uint8_t
	{
		OnSuccess    = 0,
		AsyncLoading = 1,
		OnFailure    = 2,
		MAX          = 3
	};

	/**
	 * Enum AdvancedSessions.EBlueprintResultSwitch
	 */
	enum class EBlueprintResultSwitch : uint8_t
	{
		OnSuccess = 0,
		OnFailure = 1,
		MAX       = 2
	};

	/**
	 * Enum AdvancedSessions.ESessionSettingSearchResult
	 */
	enum class ESessionSettingSearchResult : uint8_t
	{
		Found     = 0,
		NotFound  = 1,
		WrongType = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AdvancedSessions.BPUniqueNetId
	 * Size -> 0x0020
	 */
	struct FBPUniqueNetId
	{
	public:
		unsigned char                                                UnknownData_0000[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSessions.BPFriendPresenceInfo
	 * Size -> 0x0018
	 */
	struct FBPFriendPresenceInfo
	{
	public:
		bool                                                         bIsOnline;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsPlaying;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsPlayingThisGame;                                      // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsJoinable;                                             // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasVoiceSupport;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBPOnlinePresenceState                                       PresenceState;                                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                StatusString;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSessions.BPFriendInfo
	 * Size -> 0x0068
	 */
	struct FBPFriendInfo
	{
	public:
		class FString                                                DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                RealName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBPOnlinePresenceState                                       OnlineState;                                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPUniqueNetId                                        UniqueNetId;                                             // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                         bIsPlayingSameGame;                                      // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPFriendPresenceInfo                                 PresenceInfo;                                            // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSessions.BPOnlineUser
	 * Size -> 0x0040
	 */
	struct FBPOnlineUser
	{
	public:
		struct FBPUniqueNetId                                        UniqueNetId;                                             // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                                DisplayName;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                RealName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	struct FBPOnlineRecentPlayer : public FBPOnlineUser
	{
	public:
		class FString                                                LastSeen;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSessions.SessionsSearchSetting
	 * Size -> 0x0028
	 */
	struct FSessionsSearchSetting
	{
	public:
		unsigned char                                                UnknownData_0000[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSessions.SessionPropertyKeyPair
	 * Size -> 0x0020
	 */
	struct FSessionPropertyKeyPair
	{
	public:
		unsigned char                                                UnknownData_0000[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSessions.BPUserOnlineAccount
	 * Size -> 0x0010
	 */
	struct FBPUserOnlineAccount
	{
	public:
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
