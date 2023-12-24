#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioExtendedModInfoUIDetails
class IModioExtendedModInfoUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioExtendedModInfoUIDetails* GetDefaultObj();

	bool IsModSubscribed();
	bool IsModInstalled();
	bool IsModInQueue();
	bool IsModExtracting();
	bool IsModEnabled();
	bool IsModDownloading();
	bool HasModErrors();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModBrowserInterface
class IModioModBrowserInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModBrowserInterface* GetDefaultObj();

	void ShowUserAuth();
	void ShowSearchResults(struct FModioFilterParams& FilterParams);
	void ShowReportMod(class UObject* DialogDataSource);
	void ShowModUnsubscribeDialog(class UObject* DialogDataSource);
	void ShowDialog(const struct FModioModInfo& ModInfo);
	void ShowDetailsForMod(const struct FModioModID& ID);
	void RequestExternalAuthentication(enum class EModioAuthenticationProvider Provider);
	void LogOut();
	bool IsDownloadDrawerOpen();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModInfoUIDetails
class IModioModInfoUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModInfoUIDetails* GetDefaultObj();

	struct FModioModID GetModID();
	struct FModioModInfo GetFullModInfo();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIAuthenticationChangedReceiver
class IModioUIAuthenticationChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIAuthenticationChangedReceiver* GetDefaultObj();

	void OnAuthenticationChanged(const struct FModioOptionalUser& User);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIMediaDownloadCompletedReceiver
class IModioUIMediaDownloadCompletedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIMediaDownloadCompletedReceiver* GetDefaultObj();

	void OnModLogoDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, const struct FModioOptionalImage& Image, enum class EModioLogoSize LogoSize);
	void OnModGalleryImageDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, int32 ImageIndex, const struct FModioOptionalImage& Image);
	void OnModCreatorAvatarDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, const struct FModioOptionalImage& Image);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModEnableWidget
class IModioUIModEnableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModEnableWidget* GetDefaultObj();

	void OnModEnabledStateChanged(const struct FModioModID& ModId, bool bNewSubscriptionState);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModInfoReceiver
class IModioUIModInfoReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModInfoReceiver* GetDefaultObj();

	void OnModInfoRequestCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, const struct FModioOptionalModInfo& Info);
	void OnListAllModsRequestCompleted(const class FString& RequestIdentifier, const struct FModioErrorCode& Ec, const struct FModioOptionalModInfoList& List);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModManagementEventReceiver
class IModioUIModManagementEventReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModManagementEventReceiver* GetDefaultObj();

	void OnModManagementEvent(const struct FModioModManagementEvent& Event);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioNotificationParamsLibrary
class UModioNotificationParamsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioNotificationParamsLibrary* GetDefaultObj();

	struct FModioNotificationParams SetTextArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, class FText& Text);
	struct FModioNotificationParams SetStringArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, const class FString& Value);
	struct FModioNotificationParams SetIntegerArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, int32 Value);
	struct FModioNotificationParams SetFloatArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, float Value);
	struct FModioNotificationParams CreateUninstallNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
	struct FModioNotificationParams CreateSubscriptionNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
	struct FModioNotificationParams CreateRatingNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
	struct FModioNotificationParams CreateNotificationParams(const struct FModioErrorCode& StatusCode, class FText& TitleText, class FText& SuccessText, class FText& ErrorText);
	struct FModioNotificationParams CreateInstallationNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
	struct FModioNotificationParams AddFormatText(struct FModioNotificationParams& NotificationParams, class FName& Name, class FText& Text);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUINotification
class IModioUINotification : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUINotification* GetDefaultObj();

	void SetNotificationExpireHandler(FDelegateProperty_& InDelegate);
	class UWidget* GetAsWidget();
	void Display();
	void ConfigureManual(class FText& Title, class FText& Message, bool bIsError);
	void Configure(struct FModioNotificationParams& Params);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUINotificationController
class IModioUINotificationController : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUINotificationController* GetDefaultObj();

	void RegisterUserWidget(TScriptInterface<class IModioUINotificationController>& ControllerWidget);
	void HandleDisplayNotificationWidget(TScriptInterface<class IModioUINotification>* Notification);
	void HandleDisplayNotificationParams(struct FModioNotificationParams& Params);
	void HandleDisplayManual(class FText& Title, class FText& Message, bool bIsError);
	void DisplayNotificationParams(struct FModioNotificationParams& Params);
	void DisplayNotificationManual(class FText& Title, class FText& Message, bool bIsError);
	void DisplayNotification(TScriptInterface<class IModioUINotification>& Notification);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUISubscriptionsChangedReceiver
class IModioUISubscriptionsChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUISubscriptionsChangedReceiver* GetDefaultObj();

	void OnSubscriptionsChanged(const struct FModioModID& ModId, bool bNewSubscriptionState);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver
class IModioUIUserAvatarDownloadCompletedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIUserAvatarDownloadCompletedReceiver* GetDefaultObj();

	void OnUserAvatarDownloadCompleted(const struct FModioErrorCode& Ec, const struct FModioOptionalImage& Image);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIUserChangedReceiver
class IModioUIUserChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIUserChangedReceiver* GetDefaultObj();

	void OnUserChanged(const struct FModioOptionalUser& NewUser);
};

// 0x48 (0x70 - 0x28)
// Class ModioUICore.ModioFeaturedCategoryParams
class UModioFeaturedCategoryParams : public UObject
{
public:
	class FText                                  CategoryName;                                      // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExcludedTags;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EModioSortDirection               Direction;                                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioSortFieldType               SortField;                                         // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Count;                                             // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioFeaturedCategoryParams* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class ModioUICore.ModioFilterParamsUI
class UModioFilterParamsUI : public UObject
{
public:
	struct FModioFilterParams                    Underlying;                                        // 0x28(0xA8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioFilterParamsUI* GetDefaultObj();

};

// 0x218 (0x240 - 0x28)
// Class ModioUICore.ModioModCollectionEntryUI
class UModioModCollectionEntryUI : public UObject
{
public:
	uint8                                        Pad_E0E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModCollectionEntry              Underlying;                                        // 0x30(0x208)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	bool                                         bCachedSubscriptionStatus;                         // 0x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E11[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModCollectionEntryUI* GetDefaultObj();

};

// 0x1E0 (0x208 - 0x28)
// Class ModioUICore.ModioModInfoUI
class UModioModInfoUI : public UObject
{
public:
	uint8                                        Pad_E16[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModInfo                         Underlying;                                        // 0x30(0x1D8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModInfoUI* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ModioUICore.ModioReportInfoUI
class UModioReportInfoUI : public UObject
{
public:
	uint8                                        Pad_E18[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioReportParams                    ReportData;                                        // 0x30(0x58)(NativeAccessSpecifierPublic)
	class UObject*                               ModInfo;                                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioReportInfoUI* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class ModioUICore.ModioTagInfoUI
class UModioTagInfoUI : public UObject
{
public:
	struct FModioModTagInfo                      Underlying;                                        // 0x28(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioTagInfoUI* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class ModioUICore.ModioTagOptionsUI
class UModioTagOptionsUI : public UObject
{
public:
	uint8                                        Pad_E28[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModTagOptions                   Underlying;                                        // 0x38(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTagOptionsUI* GetDefaultObj();

	TArray<class UModioTagInfoUI*> GetTagCategoriesForUI();
};

// 0x208 (0x238 - 0x30)
// Class ModioUICore.ModioUISubsystem
class UModioUISubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_F11[0x1A0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ModBrowserInstance;                                // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F16[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModEnabledChanged;                               // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FDelegateProperty_                           GetModEnabledDelegate;                             // 0x218(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUISubsystem* GetDefaultObj();

	void UnsubscribeHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID);
	void UninstallHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID);
	void SubscriptionHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID);
	bool ShowSearchResults(const struct FModioFilterParams& SearchParameters);
	class UUserWidget* ShowModBrowserUIForPlayer(TSubclassOf<class UUserWidget> MenuClass, class APlayerController* Controller, FDelegateProperty_ BrowserClosedDelegate);
	void ShowDetailsForMod(const struct FModioModID& ID);
	void RequestUserAvatar();
	void RequestSubscriptionForModID(const struct FModioModID& ID);
	void RequestRemoveSubscriptionForModID(const struct FModioModID& ID);
	void RequestModInfoForModIDs(const TArray<struct FModioModID>& IDs);
	void RequestLogoDownloadForModID(const struct FModioModID& ID, enum class EModioLogoSize LogoSize);
	void RequestListAllMods(const struct FModioFilterParams& Params, const class FString& RequestIdentifier);
	void RequestGalleryImageDownloadForModID(const struct FModioModID& ID, int32 Index, enum class EModioGallerySize ImageSize);
	void RequestExternalAuthentication(enum class EModioAuthenticationProvider Provider);
	void RequestEmailAuthentication(const struct FModioEmailAuthCode& Code);
	void HideModBrowserUI();
	FDelegateProperty_ GetOnModEnabled();
	float GetCurrentDPIScaleValue();
	class FText FormatText(class FText Input);
	void DisplayNotificationParams(struct FModioNotificationParams& Params);
	void DisplayNotificationManual(class FText Title, class FText Message, bool bIsError);
	void DisplayNotification(TScriptInterface<class IModioUINotification>& Notification);
	void DisplayErrorDialog(const struct FModioErrorCode& ErrorCode);
	void CloseModBrowserUI();
};

}


