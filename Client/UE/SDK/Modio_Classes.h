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
	 * Class Modio.ModioImageLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioImageLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void LoadAsync(const struct FModioImageWrapper& Image, const class FScriptDelegate& OnImageLoaded);
		class UTexture2DDynamic* GetTexture(const struct FModioImageWrapper& Image);
		EModioImageState GetState(const struct FModioImageWrapper& Image);
		struct FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);
		struct FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);
		struct FVector2D GetAvatarSize(class UTexture* Avatar, EModioAvatarSize AvatarSize);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioInstallationOverride
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioInstallationOverride : public UBlueprintFunctionLibrary
	{
	public:
		bool OverrideModInstallationDirectory(const class FString& NewInstallPath, const struct FModioInitializeOptions& InitParams);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioCommonTypesLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FModioInitializeOptions SetSessionIdentifier(const struct FModioInitializeOptions& Options, const class FString& SessionIdentifier);
		struct FModioInitializeOptions SetPortal(const struct FModioInitializeOptions& Options, EModioPortal PortalToUse);
		bool NotEqualTo(const struct FModioModID& A, const struct FModioModID& B);
		struct FModioInitializeOptions MakeInitializeOptions(int64_t GameId, const class FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
		struct FModioGameID MakeGameId(int64_t GameId);
		struct FModioAuthenticationParams MakeAuthParams(const class FString& AuthToken, const class FString& EmailAddress, bool bHasAcceptedTOS);
		struct FModioApiKey MakeApiKey(const class FString& ApiKey);
		int64_t GetRawValueFromModID(const struct FModioModID& In);
		bool EqualTo(const struct FModioModID& A, const struct FModioModID& B);
		class FString Conv_UserIDToString(const struct FModioUserID& UserID);
		struct FModioEmailAuthCode Conv_StringToEmailAuthCode(const class FString& AuthCode);
		struct FModioEmailAddress Conv_StringToEmailAddress(const class FString& EMail);
		class FString Conv_ModIDToString(const struct FModioModID& ModId);
		class FString Conv_GameIDToString(const struct FModioGameID& GameId);
		class FString Conv_FileMetadataIDToString(const struct FModioFileMetadataID& FileMetadataID);
		class FString Conv_EmailAuthCodeToString(const struct FModioEmailAuthCode& EmailAuthCode);
		class FString Conv_EmailAddressToString(const struct FModioEmailAddress& EmailAddress);
		class FString Conv_ApiKeyToString(const struct FModioApiKey& ApiKey);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioModCollectionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString GetPath(const struct FModioModCollectionEntry& Entry);
		EModioModState GetModState(const struct FModioModCollectionEntry& Entry);
		struct FModioModInfo GetModProfile(const struct FModioModCollectionEntry& Entry);
		struct FModioModID GetId(const struct FModioModCollectionEntry& Entry);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioCreateModLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioCreateModLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetVersionString(struct FModioCreateModFileParams* In, const class FString& Version);
		void SetTags(struct FModioCreateModParams* In, TArray<class FString>* Tags);
		void SetModfilePlatforms(struct FModioCreateModFileParams* In, TArray<EModioModfilePlatform>* Platforms);
		void SetModFileMetadataBlob(struct FModioCreateModFileParams* In, const class FString& MetadataBlob);
		void SetMetadataBlob(struct FModioCreateModParams* In, const class FString& MetadataBlob);
		void SetMarkAsActiveRelease(struct FModioCreateModFileParams* In, bool bMarkAsActiveRelease);
		void SetInitialVisibility(struct FModioCreateModParams* In, bool InitialVisibility);
		void SetHomepageURL(struct FModioCreateModParams* In, const class FString& HomepageURL);
		void SetDescription(struct FModioCreateModParams* In, const class FString& Description);
		void SetChangelogString(struct FModioCreateModFileParams* In, const class FString& Changelog);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioModDependenciesLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FModioPagedResult GetPagedResult(const struct FModioModDependencyList& ModTags);
		TArray<struct FModioModDependency> GetDependencies(const struct FModioModDependencyList& ModTags);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioModInfoListLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FModioPagedResult GetPagedResult(const struct FModioModInfoList& ModInfoList);
		TArray<struct FModioModInfo> GetMods(const struct FModioModInfoList& ModInfoList);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioEditModLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioEditModLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetVisibility(struct FModioEditModParams* In, bool Visibility);
		void SetSummary(struct FModioEditModParams* In, const class FString& Summary);
		void SetNamePath(struct FModioEditModParams* In, const class FString& NamePath);
		void SetName(struct FModioEditModParams* In, const class FString& Name);
		void SetMetadataBlob(struct FModioEditModParams* In, const class FString& MetadataBlob);
		void SetMaturityFlags(struct FModioEditModParams* In, EModioMaturityFlags MaturityFlags);
		void SetHomepageURL(struct FModioEditModParams* In, const class FString& HomepageURL);
		void SetDescription(struct FModioEditModParams* In, const class FString& Description);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioSettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UModioSettings : public UObject
	{
	public:
		int64_t                                                      GameId;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ApiKey;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioEnvironment                                            ENVIRONMENT;                                             // 0x0040(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioLogLevel                                               LogLevel;                                                // 0x0041(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioPortal                                                 DefaultPortal;                                           // 0x0042(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioPopupBase
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UModioPopupBase : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioTestSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioTestSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioErrorCodeLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsError(const struct FModioErrorCode& Error);
		int32_t GetValue(const struct FModioErrorCode& Error);
		class FString GetMessage(const struct FModioErrorCode& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioUnsigned64Library
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioUnsigned64Library : public UBlueprintFunctionLibrary
	{
	public:
		struct FModioUnsigned64 Subtract(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		float Percentage_Unsigned64(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		bool NotEqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		struct FModioUnsigned64 MakeFromComponents(int32_t High, int32_t Low);
		bool LessThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		bool GreaterThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		bool EqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		float DivideToFloat(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		float DivideFloat(const struct FModioUnsigned64& LHS, float RHS);
		struct FModioUnsigned64 Divide(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		float Conv_FModioUnsigned64ToFloat(const struct FModioUnsigned64& In);
		void BreakToComponents(const struct FModioUnsigned64& In, int32_t* High, int32_t* Low);
		struct FModioUnsigned64 Add(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioReportLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioReportLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FModioReportParams MakeReportForUser(const struct FModioUserID& User, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
		struct FModioReportParams MakeReportForMod(const struct FModioModID& Mod, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
		struct FModioReportParams MakeReportForGame(const struct FModioGameID& Game, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioModTagOptionsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FModioModTagInfo> GetTags(const struct FModioModTagOptions& ModTags);
		struct FModioPagedResult GetPagedResult(const struct FModioModTagOptions& ModTags);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioErrorConditionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool ErrorCodeMatches(const struct FModioErrorCode& ErrorCode, EModioErrorCondition Condition);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioSubsystem
	 * Size -> 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
	 */
	class UModioSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                                UnknownData_0000[0x148];                                 // 0x0030(0x0148) MISSED OFFSET (PADDING)

	public:
		void SetLogLevel(EModioLogLevel UnrealLogLevel);
		void RunPendingHandlers();
		TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserSubscriptions();
		TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
		TMap<struct FModioModID, struct FModioModCollectionEntry> QuerySystemInstallations();
		struct FModioErrorCode PrioritizeTransferForMod(const struct FModioModID& ModToPrioritize);
		void K2_VerifyUserAuthenticationAsync(const class FScriptDelegate& Callback);
		void K2_UnsubscribeFromModAsync(const struct FModioModID& ModToUnsubscribeFrom, const class FScriptDelegate& OnUnsubscribeComplete);
		void K2_SubscribeToModAsync(const struct FModioModID& ModToSubscribeTo, const class FScriptDelegate& OnSubscribeComplete);
		void K2_SubmitNewModFileForMod(const struct FModioModID& Mod, const struct FModioCreateModFileParams& Params);
		void K2_SubmitNewModAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, const class FScriptDelegate& Callback);
		void K2_SubmitModRatingAsync(const struct FModioModID& Mod, EModioRating Rating, const class FScriptDelegate& Callback);
		void K2_SubmitModChangesAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, const class FScriptDelegate& Callback);
		void K2_ShutdownAsync(const class FScriptDelegate& OnShutdownComplete);
		void K2_RequestEmailAuthCodeAsync(const struct FModioEmailAddress& EmailAddress, const class FScriptDelegate& Callback);
		void K2_ReportContentAsync(const struct FModioReportParams& Report, const class FScriptDelegate& Callback);
		struct FModioOptionalUser K2_QueryUserProfile();
		struct FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
		void K2_ListAllModsAsync(const struct FModioFilterParams& Filter, const class FScriptDelegate& Callback);
		void K2_InitializeAsync(const struct FModioInitializeOptions& InitializeOptions, const class FScriptDelegate& OnInitComplete);
		void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, const class FScriptDelegate& Callback);
		void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, const class FScriptDelegate& Callback);
		void K2_GetModTagOptionsAsync(const class FScriptDelegate& Callback);
		void K2_GetModMediaLogoAsync(const struct FModioModID& ModId, EModioLogoSize LogoSize, const class FScriptDelegate& Callback);
		void K2_GetModMediaGalleryImageAsync(const struct FModioModID& ModId, EModioGallerySize GallerySize, int32_t Index, const class FScriptDelegate& Callback);
		void K2_GetModMediaAvatarAsync(const struct FModioModID& ModId, EModioAvatarSize AvatarSize, const class FScriptDelegate& Callback);
		void K2_GetModInfoAsync(const struct FModioModID& ModId, const class FScriptDelegate& Callback);
		void K2_GetModDependenciesAsync(const struct FModioModID& ModId, const class FScriptDelegate& Callback);
		struct FModioModCreationHandle K2_GetModCreationHandle();
		void K2_ForceUninstallModAsync(const struct FModioModID& ModToRemove, const class FScriptDelegate& Callback);
		void K2_FetchExternalUpdatesAsync(const class FScriptDelegate& OnFetchDone);
		struct FModioErrorCode K2_EnableModManagement(const class FScriptDelegate& Callback);
		void K2_ClearUserDataAsync(const class FScriptDelegate& Callback);
		void K2_AuthenticateUserExternalAsync(const struct FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, const class FScriptDelegate& Callback);
		void K2_AuthenticateUserEmailAsync(const struct FModioEmailAuthCode& AuthenticationCode, const class FScriptDelegate& Callback);
		void K2_ArchiveModAsync(const struct FModioModID& Mod, const class FScriptDelegate& Callback);
		bool IsModManagementBusy();
		TArray<struct FModioValidationError> GetLastValidationError();
		void DisableModManagement();
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioPopupContainer
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UModioPopupContainer : public UUserWidget
	{
	public:
		TArray<class UModioPopupBase*>                               PopupStack;                                              // 0x0260(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UModioPopupBase*>                               PopupCache;                                              // 0x0270(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		class UModioPopupBase* PushPopup(class UModioPopupBase* PopupClass);
		class UModioPopupBase* PopPopup(class UModioPopupBase* PopupClass);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioSDKLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioSDKLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float Pct_Int64Int64(int64_t Dividend, int64_t Divisor);
		bool IsValidSecurityCodeFormat(const class FString& String);
		bool IsValidEmailAddressFormat(const class FString& String);
		struct FModioInitializeOptions GetProjectInitializeOptionsForSessionId(const class FString& SessionID);
		struct FModioInitializeOptions GetProjectInitializeOptions();
		struct FModioGameID GetProjectGameId();
		EModioEnvironment GetProjectEnvironment();
		struct FModioApiKey GetProjectApiKey();
		class FText Filesize_ToString(int64_t Filesize, int32_t MaxDecimals, EFileSizeUnit Unit);
		class FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
		class FString Conv_Int64ToString(int64_t inInt);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioOptionalLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioOptionalLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsSet_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser);
		bool IsSet_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms);
		bool IsSet_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions);
		bool IsSet_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo);
		bool IsSet_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList);
		bool IsSet_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo);
		bool IsSet_ModioOptionalModID(const struct FModioOptionalModID& OptionalID);
		bool IsSet_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList);
		bool IsSet_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage);
		bool GetValue_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser, struct FModioUser* User);
		bool GetValue_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms, struct FModioTerms* Terms);
		bool GetValue_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions, struct FModioModTagOptions* ModTagOptions);
		bool GetValue_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo, struct FModioModProgressInfo* ModProgressInfo);
		bool GetValue_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList, struct FModioModInfoList* ModInfoList);
		bool GetValue_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo, struct FModioModInfo* ModInfo);
		bool GetValue_ModioOptionalModID(const struct FModioOptionalModID& OptionalID, struct FModioModID* ID);
		bool GetValue_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList, struct FModioModDependencyList* DependencyList);
		bool GetValue_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage, struct FModioImageWrapper* Image);
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioExampleLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioExampleLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ListUserSubscriptionAsync(const struct FModioFilterParams& FilterParams, const class FScriptDelegate& Callback);
		EModioLogoSize GetLogoThumbnailSize();
		EModioLogoSize GetLogoFullSize();
		EModioAvatarSize GetAvatarThumbnailSize();
		static UClass* StaticClass();
	};

	/**
	 * Class Modio.ModioFilterParamsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FModioFilterParams WithTags(struct FModioFilterParams* Filter, TArray<class FString> NewTags);
		struct FModioFilterParams WithTag(struct FModioFilterParams* Filter, const class FString& Tag);
		struct FModioFilterParams WithoutTags(struct FModioFilterParams* Filter, TArray<class FString> NewTags);
		struct FModioFilterParams WithoutTag(struct FModioFilterParams* Filter, const class FString& Tag);
		struct FModioFilterParams SortBy(struct FModioFilterParams* Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
		struct FModioFilterParams PagedResults(struct FModioFilterParams* Filter, int64_t PageNumber, int64_t PageSize);
		struct FModioFilterParams NameContainsStrings(struct FModioFilterParams* Filter, TArray<class FString> SearchStrings);
		struct FModioFilterParams NameContains(struct FModioFilterParams* Filter, const class FString& SearchString);
		struct FModioFilterParams MetadataLike(struct FModioFilterParams* Filter, const class FString& SearchString);
		struct FModioFilterParams MatchingIDs(struct FModioFilterParams* Filter, TArray<struct FModioModID> IDs);
		struct FModioFilterParams MarkedLiveBefore(struct FModioFilterParams* Filter, const struct PCoreUObject_FDateTime& LiveBefore);
		struct FModioFilterParams MarkedLiveAfter(struct FModioFilterParams* Filter, const struct PCoreUObject_FDateTime& LiveAfter);
		struct FModioFilterParams IndexedResults(struct FModioFilterParams* Filter, int64_t StartIndex, int64_t ResultCount);
		struct FModioFilterParams ExcludingIDs(struct FModioFilterParams* Filter, TArray<struct FModioModID> IDs);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
