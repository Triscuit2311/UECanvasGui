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

// 0xD0 (0xD0 - 0x0)
// Function ModioUI.ModioAuthenticationContextUIDetails.GetTerms
struct IModioAuthenticationContextUIDetails_GetTerms_Params
{
public:
	struct FModioTerms                           ReturnValue;                                       // 0x0(0xD0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioAuthenticationContextUIDetails.GetProviderInfo
struct IModioAuthenticationContextUIDetails_GetProviderInfo_Params
{
public:
	struct FModioUIAuthenticationProviderInfo    ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioMenuBackgroundProvider.GetBackgroundMaterial
struct IModioMenuBackgroundProvider_GetBackgroundMaterial_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIAsyncHandlerWidget.LinkAsyncOperationWidget
struct IModioUIAsyncHandlerWidget_LinkAsyncOperationWidget_Params
{
public:
	TScriptInterface<class IModioUIAsyncOperationWidget> Widget;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIAsyncOperationWidget.SetOperationStateDelegate
struct IModioUIAsyncOperationWidget_SetOperationStateDelegate_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUIAsyncOperationWidget.NotifyOperationState
struct IModioUIAsyncOperationWidget_NotifyOperationState_Params
{
public:
	enum class EModioUIAsyncOperationWidgetState NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIAsyncRetryWidget.SetRetryRequestedDelegate
struct IModioUIAsyncRetryWidget_SetRetryRequestedDelegate_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUIAuthenticationDataProvider.ShouldOfferEmailAuthentication
struct IModioUIAuthenticationDataProvider_ShouldOfferEmailAuthentication_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIAuthenticationDataProvider.GetAuthenticationTypes
struct IModioUIAuthenticationDataProvider_GetAuthenticationTypes_Params
{
public:
	TArray<struct FModioUIAuthenticationProviderInfo> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ModioUI.ModioUIAuthenticationDataProvider.GetAuthenticationParams
struct IModioUIAuthenticationDataProvider_GetAuthenticationParams_Params
{
public:
	enum class EModioAuthenticationProvider      Provider;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioAuthenticationParams            ReturnValue;                                       // 0x8(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUIBusyStateWidget.EndBusyState
struct IModioUIBusyStateWidget_EndBusyState_Params
{
public:
	bool                                         bErrorOccurred;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIClickableWidget.RemoveClickHandler
struct IModioUIClickableWidget_RemoveClickHandler_Params
{
public:
	class UObject*                               UserObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIClickableWidget.AddClickHandler
struct IModioUIClickableWidget_AddClickHandler_Params
{
public:
	class UObject*                               UserObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIDataSourceWidget.SetDataSource
struct IModioUIDataSourceWidget_SetDataSource_Params
{
public:
	class UObject*                               InDataSource;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUI.ModioUIDialogButtonWidget.SetStyle
struct IModioUIDialogButtonWidget_SetStyle_Params
{
public:
	struct FModioDialogStyle                     Style;                                             // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIDialogButtonWidget.SetDialogController
struct IModioUIDialogButtonWidget_SetDialogController_Params
{
public:
	class UModioDialogController*                Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUI.ModioUIDownloadQueueWidget.DisplayUserInfo
struct IModioUIDownloadQueueWidget_DisplayUserInfo_Params
{
public:
	struct FModioOptionalUser                    NewUser;                                           // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUIErrorDisplayWidget.SetErrorText
struct IModioUIErrorDisplayWidget_SetErrorText_Params
{
public:
	class FText                                  InErrorText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIErrorDisplayWidget.SetErrorString
struct IModioUIErrorDisplayWidget_SetErrorString_Params
{
public:
	class FString                                InErrorString;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUIErrorDisplayWidget.IsErrorSet
struct IModioUIErrorDisplayWidget_IsErrorSet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIErrorDisplayWidget.DisplayError
struct IModioUIErrorDisplayWidget_DisplayError_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ModioUI.ModioUIImageDisplay.DisplayImage
struct IModioUIImageDisplay_DisplayImage_Params
{
public:
	struct FSlateBrush                           Image;                                             // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUIInputDeviceChangedReceiver.OnInputDeviceChanged
struct IModioUIInputDeviceChangedReceiver_OnInputDeviceChanged_Params
{
public:
	enum class EModioUIInputMode                 InputDevice;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUIInputHintDisplayWidget.OnDisplayHintForInput
struct IModioUIInputHintDisplayWidget_OnDisplayHintForInput_Params
{
public:
	struct FKey                                  VirtualKey;                                        // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUI.ModioUIInputHintGlyphProvider.GetInputGlyphMaterialForInputType
struct IModioUIInputHintGlyphProvider_GetInputGlyphMaterialForInputType_Params
{
public:
	struct FKey                                  VirtualInput;                                      // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIInputMode                 InputType;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIModDetailsDisplay.RegisterUserWidget
struct IModioUIModDetailsDisplay_RegisterUserWidget_Params
{
public:
	TScriptInterface<class IModioUIModDetailsDisplay> DisplayWidget;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIModDetailsDisplay.HandleDisplayModDetailsForID
struct IModioUIModDetailsDisplay_HandleDisplayModDetailsForID_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIModDetailsDisplay.HandleDisplayModDetails
struct IModioUIModDetailsDisplay_HandleDisplayModDetails_Params
{
public:
	TScriptInterface<class IModioModInfoUIDetails> Details;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIModDetailsDisplay.DisplayModDetailsForID
struct IModioUIModDetailsDisplay_DisplayModDetailsForID_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIModDetailsDisplay.DisplayModDetails
struct IModioUIModDetailsDisplay_DisplayModDetails_Params
{
public:
	TScriptInterface<class IModioModInfoUIDetails> Details;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIPopupMenuContentWidget.SetStyle
struct IModioUIPopupMenuContentWidget_SetStyle_Params
{
public:
	struct FModioUIStyleRef                      StyleRef;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ModioUI.ModioUIPopupMenuContentWidget.SetMenuEntries
struct IModioUIPopupMenuContentWidget_SetMenuEntries_Params
{
public:
	struct FModioUIMenuCommandList               Entries;                                           // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUIPopupMenuContentWidget.SetDesiredSize
struct IModioUIPopupMenuContentWidget_SetDesiredSize_Params
{
public:
	struct FVector2D                             DesiredSize;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function ModioUI.ModioUIRefineSearchWidget.NotifySettingsChanged
struct IModioUIRefineSearchWidget_NotifySettingsChanged_Params
{
public:
	struct FModioFilterParams                    SearchSettings;                                    // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIRefineSearchWidget.GetSelectedTagValues
struct IModioUIRefineSearchWidget_GetSelectedTagValues_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIRefineSearchWidget.GetSearchString
struct IModioUIRefineSearchWidget_GetSearchString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIStringInputWidget.SetInput
struct IModioUIStringInputWidget_SetInput_Params
{
public:
	class FString                                Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUIStringInputWidget.SetHint
struct IModioUIStringInputWidget_SetHint_Params
{
public:
	class FText                                  HintText;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIStringInputWidget.GatherInput
struct IModioUIStringInputWidget_GatherInput_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateUsingRule
struct UModioUIInputValidationLibrary_ValidateUsingRule_Params
{
public:
	struct FModioTextValidationRule              Rule;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  TextToValidate;                                    // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ValidationMessageText;                             // 0x40(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D44[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateNoWhitespace
struct UModioUIInputValidationLibrary_ValidateNoWhitespace_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D52[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateNotEmpty
struct UModioUIInputValidationLibrary_ValidateNotEmpty_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D58[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateLength
struct UModioUIInputValidationLibrary_ValidateLength_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        DesiredMaximumLength;                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredMinimumLength;                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateEmailAddress
struct UModioUIInputValidationLibrary_ValidateEmailAddress_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D64[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateAlphanumeric
struct UModioUIInputValidationLibrary_ValidateAlphanumeric_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateAllNumeric
struct UModioUIInputValidationLibrary_ValidateAllNumeric_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D76[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioUIInputValidationLibrary.ValidateAllLetters
struct UModioUIInputValidationLibrary_ValidateAllLetters_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ModioUI.ModioUITextValidator.ValidateText
struct IModioUITextValidator_ValidateText_Params
{
public:
	class FText                                  InputText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ValidationMessageText;                             // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUITextValidator.SetValidationError
struct IModioUITextValidator_SetValidationError_Params
{
public:
	class FText                                  ErrorText;                                         // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUITextValidator.GetTextValidationRules
struct IModioUITextValidator_GetTextValidationRules_Params
{
public:
	TArray<struct FModioTextValidationRule>      Rules;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUIUserStringListEntry.SetListItemString
struct IModioUIUserStringListEntry_SetListItemString_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioAsyncOpWrapperWidget.SetActualAsyncOperationWidget
struct UModioAsyncOpWrapperWidget_SetActualAsyncOperationWidget_Params
{
public:
	TScriptInterface<class IModioUIAsyncOperationWidget> Widget;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioButton.SetLabel
struct UModioButton_SetLabel_Params
{
public:
	class FText                                  NewLabel;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ModioUI.ModioButton.SetButtonStyle
struct UModioButton_SetButtonStyle_Params
{
public:
	struct FModioUIStyleRef                      ButtonStyleRef;                                    // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyStyle;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB6[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioProceduralBrushParams.GetMaterialInstance
struct UModioProceduralBrushParams_GetMaterialInstance_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUI.ModioCircularProgressBar.GetProgress
struct UModioCircularProgressBar_GetProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function ModioUI.ModioCodeInputWidget.ValidateCodeInputCharacter
struct UModioCodeInputWidget_ValidateCodeInputCharacter_Params
{
public:
	class FString                                Character;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x10(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUserWidgetBase.SetDataSource
struct UModioUserWidgetBase_SetDataSource_Params
{
public:
	class UObject*                               NewDataSource;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUserWidgetBase.OnFinishLoadExternalData
struct UModioUserWidgetBase_OnFinishLoadExternalData_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUserWidgetBase.FinishLoadExternalData
struct UModioUserWidgetBase_FinishLoadExternalData_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioCollectionView.OnModGroupChanged
struct UModioCollectionView_OnModGroupChanged_Params
{
public:
	class FText                                  SelectedItem;                                      // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class ESelectInfo                       SelectionType;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E34[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.RefineSearchCommand
struct UModioUICommandInfoLibrary_RefineSearchCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.PreviousPageCommand
struct UModioUICommandInfoLibrary_PreviousPageCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.NextPageCommand
struct UModioUICommandInfoLibrary_NextPageCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.MoreOptionsCommand
struct UModioUICommandInfoLibrary_MoreOptionsCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.DownloadQueueCommand
struct UModioUICommandInfoLibrary_DownloadQueueCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.ConfirmCommand
struct UModioUICommandInfoLibrary_ConfirmCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.CollapseCommand
struct UModioUICommandInfoLibrary_CollapseCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioUICommandInfoLibrary.BackCommand
struct UModioUICommandInfoLibrary_BackCommand_Params
{
public:
	struct FModioUIMenuEntry                     ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioDialogController.ShowErrorDialog
struct UModioDialogController_ShowErrorDialog_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseDialogsOnOK;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function ModioUI.ModioDialogController.HandleBackgroundClick
struct UModioDialogController_HandleBackgroundClick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioDownloadQueueDrawer.OnSubsricptionChanged
struct UModioDownloadQueueDrawer_OnSubsricptionChanged_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Subscribed;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F21[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function ModioUI.ModioDownloadQueueEntry.OnEntryPressed
struct UModioDownloadQueueEntry_OnEntryPressed_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioDownloadQueueOpProgress.OperationCompletedDelegate
struct UModioDownloadQueueOpProgress_OperationCompletedDelegate_Params
{
public:
	FDelegateProperty_                           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioDrawerContentBase.GetOptionalContentWidget
struct UModioDrawerContentBase_GetOptionalContentWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioDrawerContentBase.GetHeaderWidget
struct UModioDrawerContentBase_GetHeaderWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioDrawerContentBase.GetContentWidget
struct UModioDrawerContentBase_GetContentWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioDrawerController.ToggleDrawerExpanded
struct UModioDrawerController_ToggleDrawerExpanded_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseOtherDrawers;                                // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAA[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioDrawerController.SetDrawerExpanded
struct UModioDrawerController_SetDrawerExpanded_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExpandedState;                                    // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseOtherDrawers;                                // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB6[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioDrawerController.IsAnyDrawerExpanded
struct UModioDrawerController_IsAnyDrawerExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioEditableText.GetStyleNames
struct UModioEditableText_GetStyleNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioErrorRetryWidget.SetErrorText
struct UModioErrorRetryWidget_SetErrorText_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioFeaturedCategory.SetSelectionIndexDelegate
struct UModioFeaturedCategory_SetSelectionIndexDelegate_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ModioUI.ModioFeaturedCategory.OnCategorySelectionChanged__DelegateSignature
struct UModioFeaturedCategory_OnCategorySelectionChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1012[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioFeaturedCategory*                RealCategory;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioFeaturedCategory.HandleItemListEntrySubscribeClicked
struct UModioFeaturedCategory_HandleItemListEntrySubscribeClicked_Params
{
public:
	class UModioModInfoUI*                       ModInfo;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioFeaturedCategory.HandleItemListEntryReportClicked
struct UModioFeaturedCategory_HandleItemListEntryReportClicked_Params
{
public:
	class UModioModInfoUI*                       ModInfo;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioFeaturedCategory.HandleItemListEntryDetailsClicked
struct UModioFeaturedCategory_HandleItemListEntryDetailsClicked_Params
{
public:
	class UModioModInfoUI*                       ModInfo;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioFeaturedCategory.GetItemList
struct UModioFeaturedCategory_GetItemList_Params
{
public:
	class UModioTileView*                        ReturnValue;                                       // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioModTileBase.SetExpandedState
struct UModioModTileBase_SetExpandedState_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioModTileBase.OnSetExpandedState
struct UModioModTileBase_OnSetExpandedState_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModTileBase.OnModSubscriptionStatusChanged
struct UModioModTileBase_OnModSubscriptionStatusChanged_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Subscribed;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1038[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioModTileBase.HandleModLogoOperationStateChanged
struct UModioModTileBase_HandleModLogoOperationStateChanged_Params
{
public:
	enum class EModioUIAsyncOperationWidgetState NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioFeaturedModCarousel.NavigateToWidget
struct UModioFeaturedModCarousel_NavigateToWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUI.ModioFeaturedView.GetSelectionIndex
struct UModioFeaturedView_GetSelectionIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioFeaturedView.CategorySelectionChanged
struct UModioFeaturedView_CategorySelectionChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1076[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioFeaturedCategory*                RealCategory;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioImage.LoadImageFromFileWithMaterialAsync
struct UModioImage_LoadImageFromFileWithMaterialAsync_Params
{
public:
	struct FModioImageWrapper                    ImageLoader;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ImageParameterName;                                // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioImage.LoadImageFromFileAsync
struct UModioImage_LoadImageFromFileAsync_Params
{
public:
	struct FModioImageWrapper                    ImageLoader;                                       // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioImage.ImageLoadHandler
struct UModioImage_ImageLoadHandler_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ImageParameterName;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioImage.DisplayImageWithMaterial
struct UModioImage_DisplayImageWithMaterial_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ImageParameterName;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ModioUI.ModioImageGalleryBase.OnDisplayImage__DelegateSignature
struct UModioImageGalleryBase_OnDisplayImage__DelegateSignature_Params
{
public:
	class UWidget*                               ImageWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImageIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioImageGalleryBase.DisplayGalleryImageAtIndex
struct UModioImageGalleryBase_DisplayGalleryImageAtIndex_Params
{
public:
	enum class EModioUIDirection                 Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DirectIndex;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioInputBindingImage.SetKeyToShow
struct UModioInputBindingImage_SetKeyToShow_Params
{
public:
	struct FKey                                  NewKey;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioInputBindingImage.GetInputModeVisibilityDelegate
struct UModioInputBindingImage_GetInputModeVisibilityDelegate_Params
{
public:
	FDelegateProperty_                           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function ModioUI.ModioInputMappingGlyphLibrary.GetInputGlyph
struct UModioInputMappingGlyphLibrary_GetInputGlyph_Params
{
public:
	struct FModioInputMappingGlyph               MappingGlyph;                                      // 0x0(0xC8)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EModioUIInputMode                 InputMode;                                         // 0xC8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioMenu.OnViewChanged
struct UModioMenu_OnViewChanged_Params
{
public:
	int64                                        ViewIndex;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function ModioUI.ModioMenu.OnSearchSettingsChanged
struct UModioMenu_OnSearchSettingsChanged_Params
{
public:
	struct FModioFilterParams                    Settings;                                          // 0x0(0xA8)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUI.ModioMenu.OnDrawerAnimatedOut
struct UModioMenu_OnDrawerAnimatedOut_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUI.ModioMenu.HandleViewChanged
struct UModioMenu_HandleViewChanged_Params
{
public:
	int32                                        ViewIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModCollectionTile.OnRatingSubmissionComplete
struct UModioModCollectionTile_OnRatingSubmissionComplete_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioRating                      Rating;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioModDetailsImageGallery.OnGalleryImageLoad
struct UModioModDetailsImageGallery_OnGalleryImageLoad_Params
{
public:
	class UTexture2DDynamic*                     LoadedImage;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ModId;                                             // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1136[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ModioUI.ModioModDetailsImageGallery.GetImageCount
struct UModioModDetailsImageGallery_GetImageCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModDetailsImageGallery.ApplyImageToWidget
struct UModioModDetailsImageGallery_ApplyImageToWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImageIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ModioUI.ModioModDetailsPropertyInspector.GetTextStyle
struct UModioModDetailsPropertyInspector_GetTextStyle_Params
{
public:
	struct FModioUIStyleRef                      TextStyle;                                         // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioRichTextStyle                   ReturnValue;                                       // 0x8(0xA8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModDetailsPropertyInspector.GetPropertyValueStyleNames
struct UModioModDetailsPropertyInspector_GetPropertyValueStyleNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModDetailsPropertyInspector.GetPropertyNameStyleNames
struct UModioModDetailsPropertyInspector_GetPropertyNameStyleNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModDetailsPropertyInspector.GetFillerStyleNames
struct UModioModDetailsPropertyInspector_GetFillerStyleNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModDetailsView.OnRatingSubmissionComplete
struct UModioModDetailsView_OnRatingSubmissionComplete_Params
{
public:
	struct FModioErrorCode                       Ec;                                                // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioRating                      SubmittedRating;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioModDetailsView.OnModSubscriptionStatusChanged
struct UModioModDetailsView_OnModSubscriptionStatusChanged_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Subscribed;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioModTile.SetSizeOverride
struct UModioModTile_SetSizeOverride_Params
{
public:
	struct FVector2D                             NewSize;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ModioUI.ModioModTile.OnThumbnailMouseDown
struct UModioModTile_OnThumbnailMouseDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioNamedGlyphMaterialParams.GetValidGlyphNames
struct UModioNamedGlyphMaterialParams_GetValidGlyphNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioNotificationControllerBase.OnNotificationExpired
struct UModioNotificationControllerBase_OnNotificationExpired_Params
{
public:
	class UWidget*                               Notification;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUI.ModioNotificationWidgetBase.CreateFromParams
struct UModioNotificationWidgetBase_CreateFromParams_Params
{
public:
	TSubclassOf<class UWidget>                   NotificationClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioNotificationParams              Params;                                            // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               Outer;                                             // 0xC0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0xC8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ModioUI.ModioPopupMenu.SetMenuEntries
struct UModioPopupMenu_SetMenuEntries_Params
{
public:
	struct FModioUIMenuCommandList               Entries;                                           // 0x0(0x50)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioPopupMenu.GeneratePopupMenuContent
struct UModioPopupMenu_GeneratePopupMenuContent_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioProgressBar.SetStyleRef
struct UModioProgressBar_SetStyleRef_Params
{
public:
	struct FModioUIStyleRef                      NewStyle;                                          // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioRichTextBlock.GetStyleNames
struct UModioRichTextBlock_GetStyleNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioRichTextButton.GetStyleNames
struct UModioRichTextButton_GetStyleNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function ModioUI.ModioRichTextButton.GetRichTextStyle
struct UModioRichTextButton_GetRichTextStyle_Params
{
public:
	struct FModioRichTextStyle                   ReturnValue;                                       // 0x0(0xA8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ModioUI.ModioRichTextButton.GetInputHintVisibility
struct UModioRichTextButton_GetInputHintVisibility_Params
{
public:
	enum class EModioUIInputMode                 InputMode;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioSelectableTag.OnCheckboxCheckStateChanged
struct UModioSelectableTag_OnCheckboxCheckStateChanged_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUI.ModioTabBar.OnTabIndexChanged
struct UModioTabBar_OnTabIndexChanged_Params
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioTabController.SetTabItems
struct UModioTabController_SetTabItems_Params
{
public:
	TArray<class UObject*>                       NewItems;                                          // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioTabController.SetCurrentTab
struct UModioTabController_SetCurrentTab_Params
{
public:
	int64                                        TabIndex;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ModioUI.ModioTabController.GetInputHintVisibility
struct UModioTabController_GetInputHintVisibility_Params
{
public:
	enum class EModioUIInputMode                 InputMode;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioTagList.SetTags
struct UModioTagList_SetTags_Params
{
public:
	TArray<struct FModioModTag>                  NewTags;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioTagListWidgetBase.GetSelectedTags
struct UModioTagListWidgetBase_GetSelectedTags_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioTagSelectorWidgetBase.OnCheckboxChecked
struct UModioTagSelectorWidgetBase_OnCheckboxChecked_Params
{
public:
	class UModioSelectableTag*                   SourceTag;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsChecked;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1331[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUI.ModioTagWidgetBase.SetTagValue
struct UModioTagWidgetBase_SetTagValue_Params
{
public:
	class FString                                Category;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewValue;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUI.ModioTagWidgetBase.SetTagTextFormat
struct UModioTagWidgetBase_SetTagTextFormat_Params
{
public:
	class FText                                  NewFormat;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function ModioUI.ModioTagWidgetBase.GetTagTextStyle
struct UModioTagWidgetBase_GetTagTextStyle_Params
{
public:
	struct FModioRichTextStyle                   ReturnValue;                                       // 0x0(0xA8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioTileView.SetCenterPanelItems
struct UModioTileView_SetCenterPanelItems_Params
{
public:
	bool                                         bCenterPanelItems;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioTileView.SetAllowPartialItems
struct UModioTileView_SetAllowPartialItems_Params
{
public:
	bool                                         bAllowPartialItems;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUI4Subsystem.SetCurrentFocusTarget
struct UModioUI4Subsystem_SetCurrentFocusTarget_Params
{
public:
	class UWidget*                               CurrentTarget;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUI4Subsystem.HandleInputModeChanged
struct UModioUI4Subsystem_HandleInputModeChanged_Params
{
public:
	enum class EModioUIInputMode                 NewDevice;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUI.ModioUI4Subsystem.GetLocalizedTag
struct UModioUI4Subsystem_GetLocalizedTag_Params
{
public:
	class FString                                InTag;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUI.ModioUI4Subsystem.GetInputGlyphMaterialForInputType
struct UModioUI4Subsystem_GetInputGlyphMaterialForInputType_Params
{
public:
	struct FKey                                  VirtualInput;                                      // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIInputMode                 InputType;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1361[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUI4Subsystem.GetDefaultStyleSet
struct UModioUI4Subsystem_GetDefaultStyleSet_Params
{
public:
	class UModioUIStyleSet*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUI.ModioUI4Subsystem.GetCurrentFocusTarget
struct UModioUI4Subsystem_GetCurrentFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioUI4Subsystem.GetAllNamedStyleNames
struct UModioUI4Subsystem_GetAllNamedStyleNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUI.ModioUIAsyncLoader.NativeHandleAsyncOperationStateChange
struct UModioUIAsyncLoader_NativeHandleAsyncOperationStateChange_Params
{
public:
	enum class EModioUIAsyncOperationWidgetState NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUI.ModioWidgetCarousel.SetItems
struct UModioWidgetCarousel_SetItems_Params
{
public:
	TArray<class UObject*>                       Items;                                             // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

}
}


