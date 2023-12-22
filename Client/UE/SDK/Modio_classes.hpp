#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Modio.ModioCommonTypesLibrary
class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioCommonTypesLibrary* GetDefaultObj();

	struct FModioInitializeOptions SetSessionIdentifier(struct FModioInitializeOptions& Options, const class FString& SessionIdentifier);
	struct FModioInitializeOptions SetPortal(struct FModioInitializeOptions& Options, enum class EModioPortal PortalToUse);
	bool NotEqualTo(struct FModioModID& A, struct FModioModID& B);
	struct FModioInitializeOptions MakeInitializeOptions(int64 GameId, const class FString& ApiKey, enum class EModioEnvironment GameEnvironment, enum class EModioPortal PortalInUse);
	struct FModioGameID MakeGameId(int64 GameId);
	struct FModioAuthenticationParams MakeAuthParams(const class FString& AuthToken, const class FString& EmailAddress, bool bHasAcceptedTOS);
	struct FModioApiKey MakeApiKey(const class FString& ApiKey);
	int64 GetRawValueFromModID(struct FModioModID& In);
	bool EqualTo(struct FModioModID& A, struct FModioModID& B);
	class FString Conv_UserIDToString(const struct FModioUserID& UserID);
	struct FModioEmailAuthCode Conv_StringToEmailAuthCode(const class FString& AuthCode);
	struct FModioEmailAddress Conv_StringToEmailAddress(const class FString& EMail);
	class FString Conv_ModIDToString(const struct FModioModID& ModId);
	class FString Conv_GameIDToString(const struct FModioGameID& GameId);
	class FString Conv_FileMetadataIDToString(const struct FModioFileMetadataID& FileMetadataID);
	class FString Conv_EmailAuthCodeToString(const struct FModioEmailAuthCode& EmailAuthCode);
	class FString Conv_EmailAddressToString(const struct FModioEmailAddress& EmailAddress);
	class FString Conv_ApiKeyToString(const struct FModioApiKey& ApiKey);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioCreateModLibrary
class UModioCreateModLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioCreateModLibrary* GetDefaultObj();

	void SetVersionString(struct FModioCreateModFileParams& In, const class FString& Version);
	void SetTags(struct FModioCreateModParams& In, TArray<class FString>& Tags);
	void SetModfilePlatforms(struct FModioCreateModFileParams& In, TArray<enum class EModioModfilePlatform>& Platforms);
	void SetModFileMetadataBlob(struct FModioCreateModFileParams& In, const class FString& MetadataBlob);
	void SetMetadataBlob(struct FModioCreateModParams& In, const class FString& MetadataBlob);
	void SetMarkAsActiveRelease(struct FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
	void SetInitialVisibility_DEPRECATED(struct FModioCreateModParams& In, bool InitialVisibility);
	void SetInitialVisibility(struct FModioCreateModParams& In, enum class EModioObjectVisibilityFlags InitialVisibility);
	void SetHomepageURL(struct FModioCreateModParams& In, const class FString& HomepageURL);
	void SetDescription(struct FModioCreateModParams& In, const class FString& Description);
	void SetChangelogString(struct FModioCreateModFileParams& In, const class FString& Changelog);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioEditModLibrary
class UModioEditModLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioEditModLibrary* GetDefaultObj();

	void SetVisibility_DEPRECATED(struct FModioEditModParams& In, bool Visibility);
	void SetVisibility(struct FModioEditModParams& In, enum class EModioObjectVisibilityFlags Visibility);
	void SetTags(struct FModioEditModParams& In, TArray<class FString>& Tags);
	void SetSummary(struct FModioEditModParams& In, const class FString& Summary);
	void SetNamePath(struct FModioEditModParams& In, const class FString& NamePath);
	void SetName(struct FModioEditModParams& In, const class FString& Name);
	void SetMetadataBlob(struct FModioEditModParams& In, const class FString& MetadataBlob);
	void SetMaturityFlags(struct FModioEditModParams& In, enum class EModioMaturityFlags MaturityFlags);
	void SetLogoPath(struct FModioEditModParams& In, const class FString& LogoPath);
	void SetHomepageURL(struct FModioEditModParams& In, const class FString& HomepageURL);
	void SetDescription(struct FModioEditModParams& In, const class FString& Description);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioErrorCodeLibrary
class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioErrorCodeLibrary* GetDefaultObj();

	bool IsError(struct FModioErrorCode& Error);
	int32 GetValue(struct FModioErrorCode& Error);
	class FString GetMessage(struct FModioErrorCode& Error);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioErrorConditionLibrary
class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioErrorConditionLibrary* GetDefaultObj();

	bool ErrorCodeMatches(const struct FModioErrorCode& ErrorCode, enum class EModioErrorCondition Condition);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioExampleLibrary
class UModioExampleLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioExampleLibrary* GetDefaultObj();

	void ListUserSubscriptionAsync(struct FModioFilterParams& FilterParams, FDelegateProperty_ Callback);
	enum class EModioLogoSize GetLogoThumbnailSize();
	enum class EModioLogoSize GetLogoFullSize();
	enum class EModioAvatarSize GetAvatarThumbnailSize();
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioFilterParamsLibrary
class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioFilterParamsLibrary* GetDefaultObj();

	struct FModioFilterParams WithTags(struct FModioFilterParams& Filter, TArray<class FString>& NewTags);
	struct FModioFilterParams WithTag(struct FModioFilterParams& Filter, const class FString& Tag);
	struct FModioFilterParams WithoutTags(struct FModioFilterParams& Filter, TArray<class FString>& NewTags);
	struct FModioFilterParams WithoutTag(struct FModioFilterParams& Filter, const class FString& Tag);
	struct FModioFilterParams SortBy(struct FModioFilterParams& Filter, enum class EModioSortFieldType ByField, enum class EModioSortDirection ByDirection);
	struct FModioFilterParams PagedResults(struct FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
	struct FModioFilterParams NameContainsStrings(struct FModioFilterParams& Filter, TArray<class FString>& SearchStrings);
	struct FModioFilterParams NameContains(struct FModioFilterParams& Filter, const class FString& SearchString);
	struct FModioFilterParams MetadataLike(struct FModioFilterParams& Filter, const class FString& SearchString);
	struct FModioFilterParams MatchingIDs(struct FModioFilterParams& Filter, TArray<struct FModioModID>& IDs);
	struct FModioFilterParams MarkedLiveBefore(struct FModioFilterParams& Filter, const struct FDateTime& LiveBefore);
	struct FModioFilterParams MarkedLiveAfter(struct FModioFilterParams& Filter, const struct FDateTime& LiveAfter);
	struct FModioFilterParams IndexedResults(struct FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
	struct FModioFilterParams ExcludingIDs(struct FModioFilterParams& Filter, TArray<struct FModioModID>& IDs);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioImageLibrary
class UModioImageLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioImageLibrary* GetDefaultObj();

	void LoadAsync(struct FModioImageWrapper& Image, FDelegateProperty_ OnImageLoaded);
	class UTexture2DDynamic* GetTexture(struct FModioImageWrapper& Image);
	enum class EModioImageState GetState(struct FModioImageWrapper& Image);
	struct FVector2D GetLogoSize(class UTexture* Logo, enum class EModioLogoSize LogoSize);
	struct FVector2D GetGallerySize(class UTexture* GalleryImage, enum class EModioGallerySize GallerySize);
	struct FVector2D GetAvatarSize(class UTexture* Avatar, enum class EModioAvatarSize AvatarSize);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioInstallationOverride
class UModioInstallationOverride : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioInstallationOverride* GetDefaultObj();

	bool OverrideModInstallationDirectory(const class FString& NewInstallPath, const struct FModioInitializeOptions& InitParams);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioModCollectionLibrary
class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioModCollectionLibrary* GetDefaultObj();

	class FString GetPath(struct FModioModCollectionEntry& Entry);
	enum class EModioModState GetModState(struct FModioModCollectionEntry& Entry);
	struct FModioModInfo GetModProfile(struct FModioModCollectionEntry& Entry);
	struct FModioModID GetId(struct FModioModCollectionEntry& Entry);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioModDependenciesLibrary
class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioModDependenciesLibrary* GetDefaultObj();

	struct FModioPagedResult GetPagedResult(struct FModioModDependencyList& ModTags);
	TArray<struct FModioModDependency> GetDependencies(struct FModioModDependencyList& ModTags);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioModInfoListLibrary
class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioModInfoListLibrary* GetDefaultObj();

	struct FModioPagedResult GetPagedResult(struct FModioModInfoList& ModInfoList);
	TArray<struct FModioModInfo> GetMods(struct FModioModInfoList& ModInfoList);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioModProgressInfoLibrary
class UModioModProgressInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioModProgressInfoLibrary* GetDefaultObj();

	struct FModioUnsigned64 GetTotalProgress(struct FModioModProgressInfo& Info, enum class EModioModProgressState State);
	enum class EModioModProgressState GetCurrentState(struct FModioModProgressInfo& Info);
	struct FModioUnsigned64 GetCurrentProgress(struct FModioModProgressInfo& Info, enum class EModioModProgressState State);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioModTagOptionsLibrary
class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioModTagOptionsLibrary* GetDefaultObj();

	TArray<struct FModioModTagInfo> GetTags(struct FModioModTagOptions& ModTags);
	struct FModioPagedResult GetPagedResult(struct FModioModTagOptions& ModTags);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioOptionalLibrary
class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioOptionalLibrary* GetDefaultObj();

	bool IsSet_ModioOptionalUser(struct FModioOptionalUser& OptionalUser);
	bool IsSet_ModioOptionalTerms(struct FModioOptionalTerms& OptionalTerms);
	bool IsSet_ModioOptionalModTagOptions(struct FModioOptionalModTagOptions& OptionalModTagOptions);
	bool IsSet_ModioOptionalModProgressInfo(struct FModioOptionalModProgressInfo& OptionalModProgressInfo);
	bool IsSet_ModioOptionalModInfoList(struct FModioOptionalModInfoList& OptionalModInfoList);
	bool IsSet_ModioOptionalModInfo(struct FModioOptionalModInfo& OptionalModInfo);
	bool IsSet_ModioOptionalModID(struct FModioOptionalModID& OptionalID);
	bool IsSet_ModioOptionalModDependencyList(struct FModioOptionalModDependencyList& OptionalDependencyList);
	bool IsSet_ModioOptionalImage(struct FModioOptionalImage& OptionalImage);
	bool IsSet_ModioOptionalGameInfo(struct FModioOptionalGameInfo& OptionalGameInfo);
	bool GetValue_ModioOptionalUser(struct FModioOptionalUser& OptionalUser, struct FModioUser* User);
	bool GetValue_ModioOptionalTerms(struct FModioOptionalTerms& OptionalTerms, struct FModioTerms* Terms);
	bool GetValue_ModioOptionalModTagOptions(struct FModioOptionalModTagOptions& OptionalModTagOptions, struct FModioModTagOptions* ModTagOptions);
	bool GetValue_ModioOptionalModProgressInfo(struct FModioOptionalModProgressInfo& OptionalModProgressInfo, struct FModioModProgressInfo* ModProgressInfo);
	bool GetValue_ModioOptionalModInfoList(struct FModioOptionalModInfoList& OptionalModInfoList, struct FModioModInfoList* ModInfoList);
	bool GetValue_ModioOptionalModInfo(struct FModioOptionalModInfo& OptionalModInfo, struct FModioModInfo* ModInfo);
	bool GetValue_ModioOptionalModID(struct FModioOptionalModID& OptionalID, struct FModioModID* ID);
	bool GetValue_ModioOptionalModDependencyList(struct FModioOptionalModDependencyList& OptionalDependencyList, struct FModioModDependencyList* DependencyList);
	bool GetValue_ModioOptionalImage(struct FModioOptionalImage& OptionalImage, struct FModioImageWrapper* Image);
	bool GetValue_ModioOptionalGameInfo(struct FModioOptionalGameInfo& OptionalGameInfo, struct FModioGameInfo* GameInfo);
};

// 0x0 (0x260 - 0x260)
// Class Modio.ModioPopupBase
class UModioPopupBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UModioPopupBase* GetDefaultObj();

};

// 0x20 (0x280 - 0x260)
// Class Modio.ModioPopupContainer
class UModioPopupContainer : public UUserWidget
{
public:
	TArray<class UModioPopupBase*>               PopupStack;                                        // 0x260(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UModioPopupBase*>               PopupCache;                                        // 0x270(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UModioPopupContainer* GetDefaultObj();

	class UModioPopupBase* PushPopup(TSubclassOf<class UModioPopupBase> PopupClass);
	class UModioPopupBase* PopPopup(TSubclassOf<class UModioPopupBase> PopupClass);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioReportLibrary
class UModioReportLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioReportLibrary* GetDefaultObj();

	struct FModioReportParams MakeReportForUser(const struct FModioUserID& User, enum class EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
	struct FModioReportParams MakeReportForMod(const struct FModioModID& Mod, enum class EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
	struct FModioReportParams MakeReportForGame(const struct FModioGameID& Game, enum class EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioSDKLibrary
class UModioSDKLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioSDKLibrary* GetDefaultObj();

	class FText RoundNumberString(class FText InputText);
	float Pct_Int64Int64(int64 Dividend, int64 Divisor);
	bool IsValidSecurityCodeFormat(const class FString& String);
	bool IsValidEmailAddressFormat(const class FString& String);
	struct FModioInitializeOptions GetProjectInitializeOptionsForSessionId(const class FString& SessionID);
	struct FModioInitializeOptions GetProjectInitializeOptions();
	struct FModioGameID GetProjectGameId();
	enum class EModioEnvironment GetProjectEnvironment();
	struct FModioApiKey GetProjectApiKey();
	enum class EFileSizeUnit GetDesiredFileSizeUnit(int64 Filesize);
	class FText Filesize_ToString(int64 Filesize, int32 MinDecimals, int32 MaxDecimals, enum class EFileSizeUnit Unit, bool bIncludeUnitName);
	class FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
	class FString Conv_Int64ToString(int64 InInt);
};

// 0x20 (0x48 - 0x28)
// Class Modio.ModioSettings
class UModioSettings : public UObject
{
public:
	int64                                        GameId;                                            // 0x28(0x8)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApiKey;                                            // 0x30(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioEnvironment                 ENVIRONMENT;                                       // 0x40(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogLevel                    LogLevel;                                          // 0x41(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioPortal                      DefaultPortal;                                     // 0x42(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBackgroundThread;                              // 0x43(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioSettings* GetDefaultObj();

};

// 0x300 (0x330 - 0x30)
// Class Modio.ModioSubsystem
class UModioSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_13A9[0x110];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FModioModID, struct FModioModCollectionEntry> UserSubscriptionsDefaultValue;                     // 0x140(0x50)(NativeAccessSpecifierPrivate)
	TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserInstallationsDefaultValue;                // 0x190(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_13AA[0x150];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioSubsystem* GetDefaultObj();

	void SetLogLevel(enum class EModioLogLevel UnrealLogLevel);
	void RunPendingHandlers();
	TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserSubscriptions();
	TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
	TMap<struct FModioModID, struct FModioModCollectionEntry> QuerySystemInstallations();
	struct FModioErrorCode PrioritizeTransferForMod(const struct FModioModID& ModToPrioritize);
	void KillBackgroundThread();
	void K2_VerifyUserAuthenticationAsync(FDelegateProperty_ Callback);
	void K2_UnsubscribeFromModAsync(const struct FModioModID& ModToUnsubscribeFrom, FDelegateProperty_ OnUnsubscribeComplete);
	void K2_UnmuteUserAsync(const struct FModioUserID& UserID, FDelegateProperty_ Callback);
	void K2_SubscribeToModAsync(const struct FModioModID& ModToSubscribeTo, FDelegateProperty_ OnSubscribeComplete);
	void K2_SubmitNewModFileForMod(const struct FModioModID& Mod, const struct FModioCreateModFileParams& Params);
	void K2_SubmitNewModAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, FDelegateProperty_ Callback);
	void K2_SubmitModRatingAsync(const struct FModioModID& Mod, enum class EModioRating Rating, FDelegateProperty_ Callback);
	void K2_SubmitModChangesAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, FDelegateProperty_ Callback);
	void K2_ShutdownAsync(FDelegateProperty_ OnShutdownComplete);
	void K2_RequestEmailAuthCodeAsync(struct FModioEmailAddress& EmailAddress, FDelegateProperty_ Callback);
	void K2_ReportContentAsync(const struct FModioReportParams& Report, FDelegateProperty_ Callback);
	struct FModioOptionalUser K2_QueryUserProfile();
	struct FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
	void K2_MuteUserAsync(const struct FModioUserID& UserID, FDelegateProperty_ Callback);
	void K2_ListUserCreatedModsAsync(struct FModioFilterParams& Filter, FDelegateProperty_ Callback);
	void K2_ListAllModsAsync(struct FModioFilterParams& Filter, FDelegateProperty_ Callback);
	void K2_InitializeAsync(struct FModioInitializeOptions& InitializeOptions, FDelegateProperty_ OnInitComplete);
	void K2_GetUserMediaAvatarAsync(enum class EModioAvatarSize AvatarSize, FDelegateProperty_ Callback);
	void K2_GetTermsOfUseAsync(enum class EModioAuthenticationProvider Provider, enum class EModioLanguage Locale, FDelegateProperty_ Callback);
	void K2_GetMutedUsersAsync(FDelegateProperty_ Callback);
	void K2_GetModTagOptionsAsync(FDelegateProperty_ Callback);
	void K2_GetModMediaLogoAsync(const struct FModioModID& ModId, enum class EModioLogoSize LogoSize, FDelegateProperty_ Callback);
	void K2_GetModMediaGalleryImageAsync(const struct FModioModID& ModId, enum class EModioGallerySize GallerySize, int32 Index, FDelegateProperty_ Callback);
	void K2_GetModMediaAvatarAsync(const struct FModioModID& ModId, enum class EModioAvatarSize AvatarSize, FDelegateProperty_ Callback);
	void K2_GetModInfoAsync(const struct FModioModID& ModId, FDelegateProperty_ Callback);
	void K2_GetModDependenciesAsync(const struct FModioModID& ModId, FDelegateProperty_ Callback);
	struct FModioModCreationHandle K2_GetModCreationHandle();
	void K2_GetGameInfoAsync(const struct FModioGameID& GameId, FDelegateProperty_ Callback);
	void K2_ForceUninstallModAsync(const struct FModioModID& ModToRemove, FDelegateProperty_ Callback);
	void K2_FetchExternalUpdatesAsync(FDelegateProperty_ OnFetchDone);
	struct FModioErrorCode K2_EnableModManagement(FDelegateProperty_ Callback);
	void K2_ClearUserDataAsync(FDelegateProperty_ Callback);
	void K2_AuthenticateUserExternalAsync(struct FModioAuthenticationParams& User, enum class EModioAuthenticationProvider Provider, FDelegateProperty_ Callback);
	void K2_AuthenticateUserEmailAsync(struct FModioEmailAuthCode& AuthenticationCode, FDelegateProperty_ Callback);
	void K2_ArchiveModAsync(const struct FModioModID& Mod, FDelegateProperty_ Callback);
	bool IsUsingBackgroundThread();
	bool IsModManagementBusy();
	TArray<struct FModioValidationError> GetLastValidationError();
	void DisableModManagement();
};

// 0x0 (0x28 - 0x28)
// Class Modio.ModioUnsigned64Library
class UModioUnsigned64Library : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUnsigned64Library* GetDefaultObj();

	struct FModioUnsigned64 Subtract(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	float Percentage_Unsigned64(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	bool NotEqualTo(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	struct FModioUnsigned64 MakeFromComponents(int32& High, int32& Low);
	bool LessThan(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	bool GreaterThan(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	bool EqualTo(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	float DivideToFloat(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	float DivideFloat(struct FModioUnsigned64& LHS, float RHS);
	struct FModioUnsigned64 Divide(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
	float Conv_FModioUnsigned64ToFloat(struct FModioUnsigned64& In);
	void BreakToComponents(struct FModioUnsigned64& In, int32* High, int32* Low);
	struct FModioUnsigned64 Add(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS);
};

}


