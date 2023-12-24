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

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModSubscribed
struct IModioExtendedModInfoUIDetails_IsModSubscribed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModInstalled
struct IModioExtendedModInfoUIDetails_IsModInstalled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModInQueue
struct IModioExtendedModInfoUIDetails_IsModInQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModExtracting
struct IModioExtendedModInfoUIDetails_IsModExtracting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModEnabled
struct IModioExtendedModInfoUIDetails_IsModEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModDownloading
struct IModioExtendedModInfoUIDetails_IsModDownloading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioExtendedModInfoUIDetails.HasModErrors
struct IModioExtendedModInfoUIDetails_HasModErrors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.ShowSearchResults
struct IModioModBrowserInterface_ShowSearchResults_Params
{
public:
	struct FModioFilterParams                    FilterParams;                                      // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.ShowReportMod
struct IModioModBrowserInterface_ShowReportMod_Params
{
public:
	class UObject*                               DialogDataSource;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.ShowModUnsubscribeDialog
struct IModioModBrowserInterface_ShowModUnsubscribeDialog_Params
{
public:
	class UObject*                               DialogDataSource;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.ShowDialog
struct IModioModBrowserInterface_ShowDialog_Params
{
public:
	struct FModioModInfo                         ModInfo;                                           // 0x0(0x1D8)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.ShowDetailsForMod
struct IModioModBrowserInterface_ShowDetailsForMod_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.RequestExternalAuthentication
struct IModioModBrowserInterface_RequestExternalAuthentication_Params
{
public:
	enum class EModioAuthenticationProvider      Provider;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModBrowserInterface.IsDownloadDrawerOpen
struct IModioModBrowserInterface_IsDownloadDrawerOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModInfoUIDetails.GetModID
struct IModioModInfoUIDetails_GetModID_Params
{
public:
	struct FModioModID                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// Function ModioUICore.ModioModInfoUIDetails.GetFullModInfo
struct IModioModInfoUIDetails_GetFullModInfo_Params
{
public:
	struct FModioModInfo                         ReturnValue;                                       // 0x0(0x1D8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIAuthenticationChangedReceiver.OnAuthenticationChanged
struct IModioUIAuthenticationChangedReceiver_OnAuthenticationChanged_Params
{
public:
	struct FModioOptionalUser                    User;                                              // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModLogoDownloadCompleted
struct IModioUIMediaDownloadCompletedReceiver_OnModLogoDownloadCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       Ec;                                                // 0x8(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioOptionalImage                   Image;                                             // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    LogoSize;                                          // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D08[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModGalleryImageDownloadCompleted
struct IModioUIMediaDownloadCompletedReceiver_OnModGalleryImageDownloadCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       Ec;                                                // 0x8(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImageIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D13[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioOptionalImage                   Image;                                             // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModCreatorAvatarDownloadCompleted
struct IModioUIMediaDownloadCompletedReceiver_OnModCreatorAvatarDownloadCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       Ec;                                                // 0x8(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioOptionalImage                   Image;                                             // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModEnableWidget.OnModEnabledStateChanged
struct IModioUIModEnableWidget_OnModEnabledStateChanged_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSubscriptionState;                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D23[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F0 - 0x0)
// Function ModioUICore.ModioUIModInfoReceiver.OnModInfoRequestCompleted
struct IModioUIModInfoReceiver_OnModInfoRequestCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       Ec;                                                // 0x8(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioOptionalModInfo                 Info;                                              // 0x10(0x1E0)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIModInfoReceiver.OnListAllModsRequestCompleted
struct IModioUIModInfoReceiver_OnListAllModsRequestCompleted_Params
{
public:
	class FString                                RequestIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       Ec;                                                // 0x10(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioOptionalModInfoList             List;                                              // 0x18(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIModManagementEventReceiver.OnModManagementEvent
struct IModioUIModManagementEventReceiver_OnModManagementEvent_Params
{
public:
	struct FModioModManagementEvent              Event;                                             // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.SetTextArg
struct UModioNotificationParamsLibrary_SetTextArg_Params
{
public:
	struct FModioNotificationParams              NotificationParams;                                // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0xC8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0xE0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.SetStringArg
struct UModioNotificationParamsLibrary_SetStringArg_Params
{
public:
	struct FModioNotificationParams              NotificationParams;                                // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x188 (0x188 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.SetIntegerArg
struct UModioNotificationParamsLibrary_SetIntegerArg_Params
{
public:
	struct FModioNotificationParams              NotificationParams;                                // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0xC8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D61[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioNotificationParams              ReturnValue;                                       // 0xD0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x188 (0x188 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.SetFloatArg
struct UModioNotificationParamsLibrary_SetFloatArg_Params
{
public:
	struct FModioNotificationParams              NotificationParams;                                // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioNotificationParams              ReturnValue;                                       // 0xD0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.CreateUninstallNotification
struct UModioNotificationParamsLibrary_CreateUninstallNotification_Params
{
public:
	struct FModioErrorCode                       StatusCode;                                        // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IModioModInfoUIDetails> ModInfo;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0x18(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.CreateSubscriptionNotification
struct UModioNotificationParamsLibrary_CreateSubscriptionNotification_Params
{
public:
	struct FModioErrorCode                       StatusCode;                                        // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IModioModInfoUIDetails> ModInfo;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0x18(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.CreateRatingNotification
struct UModioNotificationParamsLibrary_CreateRatingNotification_Params
{
public:
	struct FModioErrorCode                       StatusCode;                                        // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IModioModInfoUIDetails> ModInfo;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0x18(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.CreateNotificationParams
struct UModioNotificationParamsLibrary_CreateNotificationParams_Params
{
public:
	struct FModioErrorCode                       StatusCode;                                        // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TitleText;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  SuccessText;                                       // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ErrorText;                                         // 0x38(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0x50(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.CreateInstallationNotification
struct UModioNotificationParamsLibrary_CreateInstallationNotification_Params
{
public:
	struct FModioErrorCode                       StatusCode;                                        // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IModioModInfoUIDetails> ModInfo;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0x18(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function ModioUICore.ModioNotificationParamsLibrary.AddFormatText
struct UModioNotificationParamsLibrary_AddFormatText_Params
{
public:
	struct FModioNotificationParams              NotificationParams;                                // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0xB8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0xC0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUINotification.SetNotificationExpireHandler
struct IModioUINotification_SetNotificationExpireHandler_Params
{
public:
	FDelegateProperty_                           InDelegate;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUINotification.GetAsWidget
struct IModioUINotification_GetAsWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUINotification.ConfigureManual
struct IModioUINotification_ConfigureManual_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsError;                                          // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioUINotification.Configure
struct IModioUINotification_Configure_Params
{
public:
	struct FModioNotificationParams              Params;                                            // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUINotificationController.RegisterUserWidget
struct IModioUINotificationController_RegisterUserWidget_Params
{
public:
	TScriptInterface<class IModioUINotificationController> ControllerWidget;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUINotificationController.HandleDisplayNotificationWidget
struct IModioUINotificationController_HandleDisplayNotificationWidget_Params
{
public:
	TScriptInterface<class IModioUINotification> Notification;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioUINotificationController.HandleDisplayNotificationParams
struct IModioUINotificationController_HandleDisplayNotificationParams_Params
{
public:
	struct FModioNotificationParams              Params;                                            // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUINotificationController.HandleDisplayManual
struct IModioUINotificationController_HandleDisplayManual_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsError;                                          // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioUINotificationController.DisplayNotificationParams
struct IModioUINotificationController_DisplayNotificationParams_Params
{
public:
	struct FModioNotificationParams              Params;                                            // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUINotificationController.DisplayNotificationManual
struct IModioUINotificationController_DisplayNotificationManual_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsError;                                          // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUINotificationController.DisplayNotification
struct IModioUINotificationController_DisplayNotification_Params
{
public:
	TScriptInterface<class IModioUINotification> Notification;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubscriptionsChangedReceiver.OnSubscriptionsChanged
struct IModioUISubscriptionsChangedReceiver_OnSubscriptionsChanged_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSubscriptionState;                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver.OnUserAvatarDownloadCompleted
struct IModioUIUserAvatarDownloadCompletedReceiver_OnUserAvatarDownloadCompleted_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioOptionalImage                   Image;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIUserChangedReceiver.OnUserChanged
struct IModioUIUserChangedReceiver_OnUserChanged_Params
{
public:
	struct FModioOptionalUser                    NewUser;                                           // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioTagOptionsUI.GetTagCategoriesForUI
struct UModioTagOptionsUI_GetTagCategoriesForUI_Params
{
public:
	TArray<class UModioTagInfoUI*>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.UnsubscribeHandler
struct UModioUISubsystem_UnsubscribeHandler_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.UninstallHandler
struct UModioUISubsystem_UninstallHandler_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.SubscriptionHandler
struct UModioUISubsystem_SubscriptionHandler_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ModioUICore.ModioUISubsystem.ShowSearchResults
struct UModioUISubsystem_ShowSearchResults_Params
{
public:
	struct FModioFilterParams                    SearchParameters;                                  // 0x0(0xA8)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUISubsystem.ShowModBrowserUIForPlayer
struct UModioUISubsystem_ShowModBrowserUIForPlayer_Params
{
public:
	TSubclassOf<class UUserWidget>               MenuClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BrowserClosedDelegate;                             // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubsystem.ShowDetailsForMod
struct UModioUISubsystem_ShowDetailsForMod_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestSubscriptionForModID
struct UModioUISubsystem_RequestSubscriptionForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModID
struct UModioUISubsystem_RequestRemoveSubscriptionForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestModInfoForModIDs
struct UModioUISubsystem_RequestModInfoForModIDs_Params
{
public:
	TArray<struct FModioModID>                   IDs;                                               // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestLogoDownloadForModID
struct UModioUISubsystem_RequestLogoDownloadForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    LogoSize;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E71[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestListAllMods
struct UModioUISubsystem_RequestListAllMods_Params
{
public:
	struct FModioFilterParams                    Params;                                            // 0x0(0xA8)(Parm, NativeAccessSpecifierPublic)
	class FString                                RequestIdentifier;                                 // 0xA8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestGalleryImageDownloadForModID
struct UModioUISubsystem_RequestGalleryImageDownloadForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioGallerySize                 ImageSize;                                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E96[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestExternalAuthentication
struct UModioUISubsystem_RequestExternalAuthentication_Params
{
public:
	enum class EModioAuthenticationProvider      Provider;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestEmailAuthentication
struct UModioUISubsystem_RequestEmailAuthentication_Params
{
public:
	struct FModioEmailAuthCode                   Code;                                              // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.GetOnModEnabled
struct UModioUISubsystem_GetOnModEnabled_Params
{
public:
	FDelegateProperty_                           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUISubsystem.GetCurrentDPIScaleValue
struct UModioUISubsystem_GetCurrentDPIScaleValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUISubsystem.FormatText
struct UModioUISubsystem_FormatText_Params
{
public:
	class FText                                  Input;                                             // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioUISubsystem.DisplayNotificationParams
struct UModioUISubsystem_DisplayNotificationParams_Params
{
public:
	struct FModioNotificationParams              Params;                                            // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUISubsystem.DisplayNotificationManual
struct UModioUISubsystem_DisplayNotificationManual_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         bIsError;                                          // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.DisplayNotification
struct UModioUISubsystem_DisplayNotification_Params
{
public:
	TScriptInterface<class IModioUINotification> Notification;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubsystem.DisplayErrorDialog
struct UModioUISubsystem_DisplayErrorDialog_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


