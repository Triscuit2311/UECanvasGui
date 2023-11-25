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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AdvancedSessions.AdvancedExternalUILibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ShowWebURLUI(const class FString& URLToShow, EBlueprintResultSwitch* Result, TArray<class FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY);
		void ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result);
		void ShowLeaderBoardUI(const class FString& LeaderboardName, EBlueprintResultSwitch* Result);
		void ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
		void ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
		void ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result);
		void CloseWebURLUI();
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedFriendsGameInstance
	 * Size -> 0x0080 (FullSize[0x0228] - InheritedSize[0x01A8])
	 */
	class UAdvancedFriendsGameInstance : public UGameInstance
	{
	public:
		bool                                                         bCallFriendInterfaceEventsOnPlayerControllers;           // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCallIdentityInterfaceEventsOnPlayerControllers;         // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCallVoiceInterfaceEventsOnPlayerControllers;            // 0x01AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableTalkingStatusDelegate;                            // 0x01AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7C];                                  // 0x01AC(0x007C) MISSED OFFSET (PADDING)

	public:
		void OnSessionInviteReceived(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppId, const struct FBlueprintSessionResult& SessionToJoin);
		void OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
		void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
		void OnPlayerLoginStatusChanged(int32_t PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID);
		void OnPlayerLoginChanged(int32_t PlayerNum);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedFriendsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class IAdvancedFriendsInterface : public IInterface
	{
	public:
		void OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult);
		void OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult);
		void OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
		void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID);
		void OnPlayerLoginChanged(int32_t PlayerNum);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedFriendsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, EBlueprintResultSwitch* Result);
		void SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result);
		void IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend);
		void GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList);
		void GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList);
		void GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedGameSession
	 * Size -> 0x0050 (FullSize[0x0288] - InheritedSize[0x0238])
	 */
	class AAdvancedGameSession : public AGameSession
	{
	public:
		TMap<struct FUniqueNetIdRepl, class FText>                   BanList;                                                 // 0x0238(0x0050) Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedIdentityLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, const class FString& NewAttributeValue, EBlueprintResultSwitch* Result);
		void GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId);
		void GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, class FString* Username);
		void GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, class FString* DisplayName);
		void GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AuthAttribute, EBlueprintResultSwitch* Result);
		void GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AttributeValue, EBlueprintResultSwitch* Result);
		void GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, class FString* AccessToken);
		void GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result);
		void GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, class FString* PlayerNickname);
		void GetPlayerAuthToken(class APlayerController* PlayerController, class FString* AuthToken, EBlueprintResultSwitch* Result);
		void GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result);
		void GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedSessionsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, class FString* String);
		void SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName);
		struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
		struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(const class FName& Key, const class FString& Value);
		struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(const class FName& Key, int32_t Value);
		struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(const class FName& Key, float Value);
		struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(const class FName& Key, uint8_t Value);
		struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(const class FName& Key, bool Value);
		bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const class FText& KickReason);
		bool IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId);
		bool IsValidSession(const struct FBlueprintSessionResult& SessionResult);
		void IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
		bool HasOnlineSubsystem(const class FName& SubSystemName);
		void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
		void GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
		void GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32_t* UniqueBuildId);
		void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState* SessionState);
		void GetSessionSettings(class UObject* WorldContextObject, int32_t* NumConnections, int32_t* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32_t* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result);
		void GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, class FString* SettingValue);
		class FName GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty);
		void GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, int32_t* SettingValue);
		void GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue);
		void GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, uint8_t* SettingValue);
		void GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue);
		void GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, class FString* SessionID);
		void GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName);
		void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t* NumNetPlayers);
		void GetNetPlayerIndex(class APlayerController* PlayerController, int32_t* NetPlayerIndex);
		void GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
		void GetCurrentUniqueBuildID(int32_t* UniqueBuildId);
		void GetCurrentSessionID_AsString(class UObject* WorldContextObject, class FString* SessionID);
		void FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, EBlueprintResultSwitch* Result, int32_t* OutIndex);
		void FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
		bool EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B);
		bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const class FText& BanReason);
		void AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.AdvancedVoiceLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
		void UnRegisterLocalTalker(uint8_t LocalPlayerNum);
		void UnRegisterAllLocalTalkers();
		bool UnMuteRemoteTalker(uint8_t LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
		void StopNetworkedVoice(uint8_t LocalPlayerNum);
		void StartNetworkedVoice(uint8_t LocalPlayerNum);
		void RemoveAllRemoteTalkers();
		bool RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
		bool RegisterLocalTalker(uint8_t LocalPlayerNum);
		void RegisterAllLocalTalkers();
		bool MuteRemoteTalker(uint8_t LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
		bool IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId);
		bool IsPlayerMuted(uint8_t LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId);
		bool IsLocalPlayerTalking(uint8_t LocalPlayerNum);
		void IsHeadsetPresent(bool* bHasHeadset, uint8_t LocalPlayerNum);
		void GetNumLocalTalkers(int32_t* NumLocalTalkers);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.CancelFindSessionsCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.DestroySessionCallbackProxyAdvanced
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDestroySessionCallbackProxyAdvanced* DestroySession(class UWorld* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.EndSessionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.FindFriendSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.GetFriendsCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x68];                                  // 0x0050(0x0068) MISSED OFFSET (PADDING)

	public:
		class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.GetRecentPlayersCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x80];                                  // 0x0050(0x0080) MISSED OFFSET (PADDING)

	public:
		class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32_t MinSlotsAvailable);
		void FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.JoinSessionCallbackProxyAdvanced
	 * Size -> 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
	 */
	class UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x130];                                 // 0x0050(0x0130) MISSED OFFSET (PADDING)

	public:
		class UJoinSessionCallbackProxyAdvanced* JoinSession(class UWorld* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.LoginUserCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& UserID, const class FString& UserToken);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.GetUserPrivilegeCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.LogoutUserCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSessions.SendFriendInviteCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class UMulticastInlineDelegate                               OnSuccess;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnFailure;                                               // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
