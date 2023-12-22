#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedSteamFriendsLibrary* GetDefaultObj();

	bool RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);
	bool OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, enum class ESteamUserOverlayType DialogType);
	bool IsSteamInBigPictureMode();
	bool IsOverlayEnabled();
	bool InitTextFiltering();
	class FString GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
	void GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
	void GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, enum class EBlueprintResultSwitch* Result, int32* AppId);
	class UTexture2D* GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, enum class EBlueprintAsyncResultSwitch* Result, enum class ESteamAvatarSize AvatarSize);
	struct FBPUniqueNetId GetLocalSteamIDFromSteam();
	int32 GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
	bool FilterText(const class FString& TextToFilter, enum class EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText);
	struct FBPUniqueNetId CreateSteamIDFromString(const class FString& SteamID64);
};

// 0x0 (0x28 - 0x28)
// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAdvancedSteamWorkshopLibrary* GetDefaultObj();

	TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32* NumberOfItems);
	void GetNumSubscribedWorkshopItems(int32* NumberOfItems);
};

// 0x70 (0xA0 - 0x30)
// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A7[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamRequestGroupOfficersCallbackProxy* GetDefaultObj();

	class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);
};

// 0x58 (0x88 - 0x30)
// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AB[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamWSRequestUGCDetailsCallbackProxy* GetDefaultObj();

	class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);
};

}


