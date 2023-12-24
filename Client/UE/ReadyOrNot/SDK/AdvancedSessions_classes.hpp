#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AdvancedSessions.AdvancedExternalUILibrary
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedExternalUILibrary* GetDefaultObj();

	void ShowWebURLUI(const class FString& URLToShow, enum class EBlueprintResultSwitch* Result, TArray<class FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);
	void ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, enum class EBlueprintResultSwitch* Result);
	void ShowLeaderBoardUI(const class FString& LeaderboardName, enum class EBlueprintResultSwitch* Result);
	void ShowInviteUI(class APlayerController* PlayerController, enum class EBlueprintResultSwitch* Result);
	void ShowFriendsUI(class APlayerController* PlayerController, enum class EBlueprintResultSwitch* Result);
	void ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, enum class EBlueprintResultSwitch* Result);
	void CloseWebURLUI();
};

// 0x80 (0x228 - 0x1A8)
// Class AdvancedSessions.AdvancedFriendsGameInstance
class UAdvancedFriendsGameInstance : public UGameInstance
{
public:
	bool                                         bCallFriendInterfaceEventsOnPlayerControllers;     // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallIdentityInterfaceEventsOnPlayerControllers;   // 0x1A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallVoiceInterfaceEventsOnPlayerControllers;      // 0x1AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTalkingStatusDelegate;                      // 0x1AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_606[0x7C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAdvancedFriendsGameInstance* GetDefaultObj();

	void OnSessionInviteReceived(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppId, struct FBlueprintSessionResult& SessionToJoin);
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnPlayerLoginStatusChanged(int32 PlayerNum, enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID);
	void OnPlayerLoginChanged(int32 PlayerNum);
};

// 0x0 (0x28 - 0x28)
// Class AdvancedSessions.AdvancedFriendsInterface
class IAdvancedFriendsInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAdvancedFriendsInterface* GetDefaultObj();

	void OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, struct FBlueprintSessionResult& SearchResult);
	void OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SearchResult);
	void OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID);
	void OnPlayerLoginChanged(int32 PlayerNum);
};

// 0x0 (0x28 - 0x28)
// Class AdvancedSessions.AdvancedFriendsLibrary
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedFriendsLibrary* GetDefaultObj();

	void SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId>& Friends, enum class EBlueprintResultSwitch* Result);
	void SendSessionInviteToFriend(class APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId, enum class EBlueprintResultSwitch* Result);
	void IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend);
	void GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList);
	void GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList);
	void GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend);
};

// 0x50 (0x288 - 0x238)
// Class AdvancedSessions.AdvancedGameSession
class AAdvancedGameSession : public AGameSession
{
public:
	TMap<struct FUniqueNetIdRepl, class FText>   BanList;                                           // 0x238(0x50)(Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAdvancedGameSession* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AdvancedSessions.AdvancedIdentityLibrary
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedIdentityLibrary* GetDefaultObj();

	void SetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, const class FString& NewAttributeValue, enum class EBlueprintResultSwitch* Result);
	void GetUserID(struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId);
	void GetUserAccountRealName(struct FBPUserOnlineAccount& AccountInfo, class FString* Username);
	void GetUserAccountDisplayName(struct FBPUserOnlineAccount& AccountInfo, class FString* DisplayName);
	void GetUserAccountAuthAttribute(struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AuthAttribute, enum class EBlueprintResultSwitch* Result);
	void GetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AttributeValue, enum class EBlueprintResultSwitch* Result);
	void GetUserAccountAccessToken(struct FBPUserOnlineAccount& AccountInfo, class FString* AccessToken);
	void GetUserAccount(struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, enum class EBlueprintResultSwitch* Result);
	void GetPlayerNickname(struct FBPUniqueNetId& UniqueNetId, class FString* PlayerNickname);
	void GetPlayerAuthToken(class APlayerController* PlayerController, class FString* AuthToken, enum class EBlueprintResultSwitch* Result);
	void GetLoginStatus(struct FBPUniqueNetId& UniqueNetId, enum class EBPLoginStatus* LoginStatus, enum class EBlueprintResultSwitch* Result);
	void GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, enum class EBlueprintResultSwitch* Result);
};

// 0x0 (0x28 - 0x28)
// Class AdvancedSessions.AdvancedSessionsLibrary
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedSessionsLibrary* GetDefaultObj();

	void UniqueNetIdToString(struct FBPUniqueNetId& UniqueNetId, class FString* String);
	void SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName);
	struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, enum class EOnlineComparisonOpRedux ComparisonOp);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(class FName Key, const class FString& Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(class FName Key, int32 Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(class FName Key, float Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(class FName Key, uint8 Value);
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(class FName Key, bool Value);
	bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, class FText KickReason);
	bool IsValidUniqueNetID(struct FBPUniqueNetId& UniqueNetId);
	bool IsValidSession(struct FBlueprintSessionResult& SessionResult);
	void IsPlayerInSession(class UObject* WorldContextObject, struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
	bool HasOnlineSubsystem(class FName SubSystemName);
	void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
	void GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
	void GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32* UniqueBuildId);
	void GetSessionState(class UObject* WorldContextObject, enum class EBPOnlineSessionState* SessionState);
	void GetSessionSettings(class UObject* WorldContextObject, int32* NumConnections, int32* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, enum class EBlueprintResultSwitch* Result);
	void GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, class FString* SettingValue);
	class FName GetSessionPropertyKey(struct FSessionPropertyKeyPair& SessionProperty);
	void GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, int32* SettingValue);
	void GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, float* SettingValue);
	void GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, uint8* SettingValue);
	void GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, bool* SettingValue);
	void GetSessionID_AsString(struct FBlueprintSessionResult& SessionResult, class FString* SessionID);
	void GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName);
	void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32* NumNetPlayers);
	void GetNetPlayerIndex(class APlayerController* PlayerController, int32* NetPlayerIndex);
	void GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
	void GetCurrentUniqueBuildID(int32* UniqueBuildId);
	void GetCurrentSessionID_AsString(class UObject* WorldContextObject, class FString* SessionID);
	void FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class EBlueprintResultSwitch* Result, int32* OutIndex);
	void FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingsName, enum class EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
	bool EqualEqual_UNetIDUnetID(struct FBPUniqueNetId& A, struct FBPUniqueNetId& B);
	bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, class FText BanReason);
	void AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>& SettingsArray, TArray<struct FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
};

// 0x0 (0x28 - 0x28)
// Class AdvancedSessions.AdvancedVoiceLibrary
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedVoiceLibrary* GetDefaultObj();

	bool UnRegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId);
	void UnRegisterLocalTalker(uint8 LocalPlayerNum);
	void UnRegisterAllLocalTalkers();
	bool UnMuteRemoteTalker(uint8 LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	void StopNetworkedVoice(uint8 LocalPlayerNum);
	void StartNetworkedVoice(uint8 LocalPlayerNum);
	void RemoveAllRemoteTalkers();
	bool RegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId);
	bool RegisterLocalTalker(uint8 LocalPlayerNum);
	void RegisterAllLocalTalkers();
	bool MuteRemoteTalker(uint8 LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	bool IsRemotePlayerTalking(struct FBPUniqueNetId& UniqueNetId);
	bool IsPlayerMuted(uint8 LocalUserNumChecking, struct FBPUniqueNetId& UniqueNetId);
	bool IsLocalPlayerTalking(uint8 LocalPlayerNum);
	void IsHeadsetPresent(bool* bHasHeadset, uint8 LocalPlayerNum);
	void GetNumLocalTalkers(int32* NumLocalTalkers);
};

// 0x48 (0x78 - 0x30)
// Class AdvancedSessions.CancelFindSessionsCallbackProxy
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E6[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCancelFindSessionsCallbackProxy* GetDefaultObj();

	class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x88 (0xB8 - 0x30)
// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_701[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxyAdvanced* GetDefaultObj();

	class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
};

// 0x48 (0x78 - 0x30)
// Class AdvancedSessions.DestroySessionCallbackProxyAdvanced
class UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_70F[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxyAdvanced* GetDefaultObj();

	class UDestroySessionCallbackProxyAdvanced* DestroySession(class UWorld* WorldContextObject, class APlayerController* PlayerController);
};

// 0x48 (0x78 - 0x30)
// Class AdvancedSessions.EndSessionCallbackProxy
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_722[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEndSessionCallbackProxy* GetDefaultObj();

	class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x68 (0x98 - 0x30)
// Class AdvancedSessions.FindFriendSessionCallbackProxy
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_72C[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFindFriendSessionCallbackProxy* GetDefaultObj();

	class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId);
};

// 0xA0 (0xD0 - 0x30)
// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_73F[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxyAdvanced* GetDefaultObj();

	class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, enum class EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);
	void FilterSessionResults(TArray<struct FBlueprintSessionResult>& SessionResults, TArray<struct FSessionsSearchSetting>& Filters, TArray<struct FBlueprintSessionResult>* FilteredResults);
};

// 0x40 (0x70 - 0x30)
// Class AdvancedSessions.GetFriendsCallbackProxy
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_749[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetFriendsCallbackProxy* GetDefaultObj();

	class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x60 (0x90 - 0x30)
// Class AdvancedSessions.GetRecentPlayersCallbackProxy
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_750[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetRecentPlayersCallbackProxy* GetDefaultObj();

	class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, struct FBPUniqueNetId& UniqueNetId);
};

// 0x50 (0x80 - 0x30)
// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetUserPrivilegeCallbackProxy* GetDefaultObj();

	class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, enum class EBPUserPrivileges& PrivilegeToCheck, struct FBPUniqueNetId& PlayerUniqueNetID);
};

// 0x150 (0x180 - 0x30)
// Class AdvancedSessions.JoinSessionCallbackProxyAdvanced
class UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_775[0x130];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxyAdvanced* GetDefaultObj();

	class UJoinSessionCallbackProxyAdvanced* JoinSession(class UWorld* WorldContextObject, class APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult);
};

// 0x68 (0x98 - 0x30)
// Class AdvancedSessions.LoginUserCallbackProxy
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_783[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoginUserCallbackProxy* GetDefaultObj();

	class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& UserID, const class FString& UserToken);
};

// 0x48 (0x78 - 0x30)
// Class AdvancedSessions.LogoutUserCallbackProxy
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_798[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULogoutUserCallbackProxy* GetDefaultObj();

	class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x60 (0x90 - 0x30)
// Class AdvancedSessions.SendFriendInviteCallbackProxy
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A7[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USendFriendInviteCallbackProxy* GetDefaultObj();

	class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBPUniqueNetId& UniqueNetIDInvited);
};

// 0x68 (0x98 - 0x30)
// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BA[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateSessionCallbackProxyAdvanced* GetDefaultObj();

	class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
};

}


