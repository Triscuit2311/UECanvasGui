#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x160 - 0x108)
// Class ModioUI.FxWidget
class UFxWidget : public UWidget
{
public:
	uint8                                        Pad_C7D[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RenderScale;                                       // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             RenderScaleOrigin;                                 // 0x12C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LayoutScale;                                       // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VisualOffset;                                      // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreClipping;                                   // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               ContentClass;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGetContent;                                      // 0x150(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFxWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioAuthenticationContextUIDetails
class IModioAuthenticationContextUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioAuthenticationContextUIDetails* GetDefaultObj();

	struct FModioTerms GetTerms();
	struct FModioUIAuthenticationProviderInfo GetProviderInfo();
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioMenuBackgroundProvider
class IModioMenuBackgroundProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioMenuBackgroundProvider* GetDefaultObj();

	class UMaterialInterface* GetBackgroundMaterial();
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIAsyncHandlerWidget
class IModioUIAsyncHandlerWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIAsyncHandlerWidget* GetDefaultObj();

	void LinkAsyncOperationWidget(TScriptInterface<class IModioUIAsyncOperationWidget>& Widget);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIAsyncOperationWidget
class IModioUIAsyncOperationWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIAsyncOperationWidget* GetDefaultObj();

	void SetOperationStateDelegate(FDelegateProperty_& Delegate);
	void RequestOperationRetry();
	void NotifyOperationState(enum class EModioUIAsyncOperationWidgetState NewState);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIAsyncRetryWidget
class IModioUIAsyncRetryWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIAsyncRetryWidget* GetDefaultObj();

	void SetRetryRequestedDelegate(FDelegateProperty_& Delegate);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIAuthenticationDataProvider
class IModioUIAuthenticationDataProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIAuthenticationDataProvider* GetDefaultObj();

	bool ShouldOfferEmailAuthentication();
	TArray<struct FModioUIAuthenticationProviderInfo> GetAuthenticationTypes();
	struct FModioAuthenticationParams GetAuthenticationParams(enum class EModioAuthenticationProvider Provider);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIBusyStateWidget
class IModioUIBusyStateWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIBusyStateWidget* GetDefaultObj();

	void EndBusyState(bool bErrorOccurred);
	void DisplayBusyState();
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIClickableWidget
class IModioUIClickableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIClickableWidget* GetDefaultObj();

	void RemoveClickHandler(class UObject* UserObject, class FName FunctionName);
	void AddClickHandler(class UObject* UserObject, class FName FunctionName);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUICommand
class IModioUICommand : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUICommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIDataSourceWidget
class IModioUIDataSourceWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIDataSourceWidget* GetDefaultObj();

	void SetDataSource(class UObject* InDataSource);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIDialogButtonWidget
class IModioUIDialogButtonWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIDialogButtonWidget* GetDefaultObj();

	void SetStyle(struct FModioDialogStyle& Style);
	void SetDialogController(class UModioDialogController* Controller);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIDownloadQueueWidget
class IModioUIDownloadQueueWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIDownloadQueueWidget* GetDefaultObj();

	void RefreshDownloadQueue();
	void DisplayUserInfo(const struct FModioOptionalUser& NewUser);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIErrorDisplayWidget
class IModioUIErrorDisplayWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIErrorDisplayWidget* GetDefaultObj();

	void SetErrorText(class FText& InErrorText);
	void SetErrorString(const class FString& InErrorString);
	bool IsErrorSet();
	void DisplayError(struct FModioErrorCode& Ec);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIImageDisplay
class IModioUIImageDisplay : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIImageDisplay* GetDefaultObj();

	void DisplayImage(struct FSlateBrush& Image);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIInputDeviceChangedReceiver
class IModioUIInputDeviceChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIInputDeviceChangedReceiver* GetDefaultObj();

	void OnInputDeviceChanged(enum class EModioUIInputMode InputDevice);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIInputHintDisplayWidget
class IModioUIInputHintDisplayWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIInputHintDisplayWidget* GetDefaultObj();

	void OnDisplayHintForInput(const struct FKey& VirtualKey);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIInputHintGlyphProvider
class IModioUIInputHintGlyphProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIInputHintGlyphProvider* GetDefaultObj();

	class UMaterialInterface* GetInputGlyphMaterialForInputType(const struct FKey& VirtualInput, enum class EModioUIInputMode InputType);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIModDetailsDisplay
class IModioUIModDetailsDisplay : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModDetailsDisplay* GetDefaultObj();

	void RegisterUserWidget(TScriptInterface<class IModioUIModDetailsDisplay>& DisplayWidget);
	void HandleDisplayModDetailsForID(struct FModioModID& ModId);
	void HandleDisplayModDetails(TScriptInterface<class IModioModInfoUIDetails>* Details);
	void DisplayModDetailsForID(struct FModioModID& ModId);
	void DisplayModDetails(TScriptInterface<class IModioModInfoUIDetails>& Details);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIPopupMenuContentWidget
class IModioUIPopupMenuContentWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIPopupMenuContentWidget* GetDefaultObj();

	void SetStyle(struct FModioUIStyleRef& StyleRef);
	void SetMenuEntries(struct FModioUIMenuCommandList& Entries);
	void SetDesiredSize(struct FVector2D& DesiredSize);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIRefineSearchWidget
class IModioUIRefineSearchWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIRefineSearchWidget* GetDefaultObj();

	void RefreshTags();
	void NotifySettingsChanged(struct FModioFilterParams& SearchSettings);
	TArray<class FString> GetSelectedTagValues();
	class FString GetSearchString();
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIStringInputWidget
class IModioUIStringInputWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIStringInputWidget* GetDefaultObj();

	void SetInput(const class FString& Input);
	void SetHint(class FText& HintText);
	class FString GatherInput();
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIStyleRefSerializer
class IModioUIStyleRefSerializer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIStyleRefSerializer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIInputValidationLibrary
class UModioUIInputValidationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIInputValidationLibrary* GetDefaultObj();

	bool ValidateUsingRule(struct FModioTextValidationRule& Rule, class FText& TextToValidate, class FText* ValidationMessageText);
	bool ValidateNoWhitespace(class FText& TextToValidate);
	bool ValidateNotEmpty(class FText& TextToValidate);
	bool ValidateLength(class FText& TextToValidate, int32 DesiredMaximumLength, int32 DesiredMinimumLength);
	bool ValidateEmailAddress(class FText& TextToValidate);
	bool ValidateAlphanumeric(class FText& TextToValidate);
	bool ValidateAllNumeric(class FText& TextToValidate);
	bool ValidateAllLetters(class FText& TextToValidate);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUITextValidator
class IModioUITextValidator : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUITextValidator* GetDefaultObj();

	bool ValidateText(class FText& InputText, class FText* ValidationMessageText);
	void SetValidationError(class FText* ErrorText);
	void GetTextValidationRules(TArray<struct FModioTextValidationRule>* Rules);
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUIUserStringListEntry
class IModioUIUserStringListEntry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIUserStringListEntry* GetDefaultObj();

	void SetListItemString(const class FString& InString);
};

// 0x30 (0x2A0 - 0x270)
// Class ModioUI.ModioAsyncOpWrapperWidget
class UModioAsyncOpWrapperWidget : public UBorder
{
public:
	uint8                                        Pad_DA4[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IModioUIAsyncOperationWidget> ActualWidget;                                      // 0x290(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioAsyncOpWrapperWidget* GetDefaultObj();

	void SetActualAsyncOperationWidget(TScriptInterface<class IModioUIAsyncOperationWidget>& Widget);
};

// 0xF8 (0x120 - 0x28)
// Class ModioUI.ModioAuthenticationContextUI
class UModioAuthenticationContextUI : public UObject
{
public:
	uint8                                        Pad_DA7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioTerms                           Terms;                                             // 0x30(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIAuthenticationProviderInfo    ProviderInfo;                                      // 0x100(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioAuthenticationContextUI* GetDefaultObj();

};

// 0x60 (0x168 - 0x108)
// Class ModioUI.ModioAuthenticationMethodSelector
class UModioAuthenticationMethodSelector : public UWidget
{
public:
	uint8                                        Pad_DAD[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRichTextButton*                  CancelButton;                                      // 0x160(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioAuthenticationMethodSelector* GetDefaultObj();

	void CancelClicked();
};

// 0xB8 (0x4E0 - 0x428)
// Class ModioUI.ModioButton
class UModioButton : public UButton
{
public:
	uint8                                        Pad_DB8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSetLabel;                                        // 0x430(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      ButtonStyle;                                       // 0x440(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioWidgetBorderStyle               BorderStyle;                                       // 0x448(0x80)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_DBA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOverrideGlobalStyle;                              // 0x4D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioButton* GetDefaultObj();

	void SetLabel(class FText NewLabel);
	void SetButtonStyle(const struct FModioUIStyleRef& ButtonStyleRef, bool bApplyStyle);
};

// 0xA0 (0xD0 - 0x30)
// Class ModioUI.ModioUIWidgetStyleContainer
class UModioUIWidgetStyleContainer : public USlateWidgetStyleContainerBase
{
public:
	TMap<class FName, struct FModioUIColorRef>   SerializedColors;                                  // 0x30(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FModioUIMaterialRef> SerializedMaterials;                               // 0x80(0x50)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIWidgetStyleContainer* GetDefaultObj();

};

// 0x2A0 (0x370 - 0xD0)
// Class ModioUI.ModioButtonStyleContainer
class UModioButtonStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioButtonStyle                     Style;                                             // 0xD0(0x2A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioButtonStyleContainer* GetDefaultObj();

};

// 0x30 (0x7A0 - 0x770)
// Class ModioUI.ModioCheckBox
class UModioCheckBox : public UCheckBox
{
public:
	uint8                                        Pad_DC2[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LabelText;                                         // 0x780(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      CheckBoxStyle;                                     // 0x798(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioCheckBox* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioProceduralBrushParams
class UModioProceduralBrushParams : public UObject
{
public:

	static class UClass* StaticClass();
	static class UModioProceduralBrushParams* GetDefaultObj();

	class UMaterialInterface* GetMaterialInstance();
};

// 0x20 (0x48 - 0x28)
// Class ModioUI.ModioCheckBoxMaterialParams
class UModioCheckBoxMaterialParams : public UModioProceduralBrushParams
{
public:
	struct FModioUIColorRef                      InnerColor;                                        // 0x28(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      TickColor;                                         // 0x30(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      BorderColor;                                       // 0x38(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsTicked;                                         // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBorder;                                     // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BorderRadius;                                      // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioCheckBoxMaterialParams* GetDefaultObj();

};

// 0x8C0 (0x990 - 0xD0)
// Class ModioUI.ModioCheckBoxStyleContainer
class UModioCheckBoxStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioCheckBoxStyle                   Style;                                             // 0xD0(0x8C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioCheckBoxStyleContainer* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class ModioUI.ModioCircle
class UModioCircle : public UWidget
{
public:
	uint8                                        Pad_DD3[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Resolution;                                        // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartAngleInDegrees;                               // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ArcInDegrees;                                      // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Thickness;                                         // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           ColorAndOpacity;                                   // 0x130(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioCircle* GetDefaultObj();

};

// 0x58 (0x160 - 0x108)
// Class ModioUI.ModioCircularProgressBar
class UModioCircularProgressBar : public UWidget
{
public:
	uint8                                        Pad_DDC[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackgroundThickness;                               // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ForegroundThickness;                               // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StartAngleInDegrees;                               // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Progress;                                          // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundColor;                                   // 0x12C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ForegroundColor;                                   // 0x13C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FDelegateProperty_                           OnGetProgress;                                     // 0x14C(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioCircularProgressBar* GetDefaultObj();

	float GetProgress();
};

// 0x320 (0x3F0 - 0xD0)
// Class ModioUI.ModioCodeInputStyleContainer
class UModioCodeInputStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioCodeInputStyle                  Style;                                             // 0xD0(0x320)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioCodeInputStyleContainer* GetDefaultObj();

};

// 0x70 (0x178 - 0x108)
// Class ModioUI.ModioCodeInputWidget
class UModioCodeInputWidget : public UWidget
{
public:
	uint8                                        Pad_DF9[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfCharacters;                                // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      Style;                                             // 0x12C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bValidateInput;                                    // 0x134(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DFC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioTextValidationRule>      ValidationRules;                                   // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bDisplayValidationErrors;                          // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DFD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      TextStyle;                                         // 0x14C(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_DFE[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioCodeInputWidget* GetDefaultObj();

	struct FEventReply ValidateCodeInputCharacter(const class FString& Character);
};

// 0x18 (0x278 - 0x260)
// Class ModioUI.ModioUserWidgetBase
class UModioUserWidgetBase : public UUserWidget
{
public:
	uint8                                        Pad_E0D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRoutedSetDataSource;                              // 0x268(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRoutedLoadExternalData;                           // 0x269(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRoutedFinishLoadExternalData;                     // 0x26A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E12[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUserWidgetBase* GetDefaultObj();

	void SetDataSource(class UObject* NewDataSource);
	void OnFinishLoadExternalData(const struct FModioErrorCode& Ec);
	void OnDataSourceUpdated();
	void OnBeginLoadExternalData();
	void LoadExternalData();
	void FinishLoadExternalData(const struct FModioErrorCode& Ec);
};

// 0x28 (0x2A0 - 0x278)
// Class ModioUI.ModioModManagementWidgetBase
class UModioModManagementWidgetBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_E17[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModManagementWidgetBase* GetDefaultObj();

};

// 0xD8 (0x378 - 0x2A0)
// Class ModioUI.ModioCollectionTileStatus
class UModioCollectionTileStatus : public UModioModManagementWidgetBase
{
public:
	uint8                                        Pad_E1A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PendingLabelText;                                  // 0x2B0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  UpdatePendingLabelText;                            // 0x2C8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  UninstallPendingLabelText;                         // 0x2E0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  DownloadingLabelText;                              // 0x2F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ExtractingLabelText;                               // 0x310(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  SubscribedLabelText;                               // 0x328(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  InstalledLabelText;                                // 0x340(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   StatusText;                                        // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   StatusPercent;                                     // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioProgressBar*                     ProgressBar;                                       // 0x368(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioSizeBox*                         ProgressBarSizeBox;                                // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioCollectionTileStatus* GetDefaultObj();

};

// 0x30 (0x2A8 - 0x278)
// Class ModioUI.ModioMenuView
class UModioMenuView : public UModioUserWidgetBase
{
public:
	class UUserWidget*                           CachedMenuTitleContentWidget;                      // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  MenuName;                                          // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               TitleContentClass;                                 // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowTopNavBar;                              // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowBackButton;                             // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E25[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioMenuView* GetDefaultObj();

};

// 0x170 (0x418 - 0x2A8)
// Class ModioUI.ModioCollectionView
class UModioCollectionView : public UModioMenuView
{
public:
	uint8                                        Pad_E36[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRichTextBlock*                   CollectionTitle;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioEditableTextBox*                 SearchInput;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ShowUserSubscriptionsText;                         // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ShowSystemCollectionText;                          // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  FetchButton;                                       // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioPopupComboBox*                   ModGroupSelection;                                 // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioPopupComboBox*                   SortBy;                                            // 0x318(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioListView*                        CollectionList;                                    // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   CollectionCount;                                   // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   InfoRichTextBlock;                                 // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UModioModCollectionEntryUI*>    CachedCollection;                                  // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UModioModCollectionEntryUI*>    FilteredCollection;                                // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E3F[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioModCollectionTile*               CurrentTile;                                       // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DefaultButtonLabel;                                // 0x3A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  SearchingButtonLabel;                              // 0x3B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoSubscribedModsText;                              // 0x3D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoModsFoundText;                                   // 0x3E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E44[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioCollectionView* GetDefaultObj();

	void SortZToA();
	void SortSizeOnDisk();
	void SortRecentlyUpdatedDelegate();
	void SortAToZ();
	void OnModGroupChanged(class FText SelectedItem, enum class ESelectInfo SelectionType);
	void OnFetchUpdatesClicked();
};

// 0x50 (0x80 - 0x30)
// Class ModioUI.ModioColorPresets
class UModioColorPresets : public UDataAsset
{
public:
	TMap<class FName, struct FModioUIColor>      ColorPresets;                                      // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioColorPresets* GetDefaultObj();

};

// 0x8 (0x148 - 0x140)
// Class ModioUI.ModioComboBox
class UModioComboBox : public UComboBox
{
public:
	enum class EMenuPlacement                    MenuPlacement;                                     // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E4E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioComboBox* GetDefaultObj();

};

// 0x78 (0xE78 - 0xE00)
// Class ModioUI.ModioComboBoxString
class UModioComboBoxString : public UComboBoxString
{
public:
	uint8                                        Pad_E50[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMenuPlacement                    Placement;                                         // 0xE10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCreateNewWindow;                                  // 0xE11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapMenuContent;                                  // 0xE12(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E54[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     ContentWrapMaterial;                               // 0xE18(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableBorder;                                     // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                BorderColor;                                       // 0xE44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BorderRadius;                                      // 0xE48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BorderThickness;                                   // 0xE4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BorderOpacity;                                     // 0xE50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E5C[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioComboBoxString* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioUICommandInfoLibrary
class UModioUICommandInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUICommandInfoLibrary* GetDefaultObj();

	struct FModioUIMenuEntry RefineSearchCommand();
	struct FModioUIMenuEntry PreviousPageCommand();
	struct FModioUIMenuEntry NextPageCommand();
	struct FModioUIMenuEntry MoreOptionsCommand();
	struct FModioUIMenuEntry DownloadQueueCommand();
	struct FModioUIMenuEntry ConfirmCommand();
	struct FModioUIMenuEntry CollapseCommand();
	struct FModioUIMenuEntry BackCommand();
};

// 0x58 (0x128 - 0xD0)
// Class ModioUI.ModioCustomComboBoxStyleContainer
class UModioCustomComboBoxStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioCustomComboBoxStyle             Style;                                             // 0xD0(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioCustomComboBoxStyleContainer* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class ModioUI.ModioDefaultInputGlyphProvider
class UModioDefaultInputGlyphProvider : public UObject
{
public:
	uint8                                        Pad_E81[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultInputGlyphProvider* GetDefaultObj();

};

// 0xF0 (0x350 - 0x260)
// Class ModioUI.ModioDefaultPopupMenuContent
class UModioDefaultPopupMenuContent : public UUserWidget
{
public:
	uint8                                        Pad_E87[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      TextStyle;                                         // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      BorderStyle;                                       // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIMaterialRef                   RetainerMaterial;                                  // 0x310(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E8C[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultPopupMenuContent* GetDefaultObj();

};

// 0x8 (0x280 - 0x278)
// Class ModioUI.ModioDialogBase
class UModioDialogBase : public UModioUserWidgetBase
{
public:
	struct FModioUIStyleRef                      DialogStyle;                                       // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDialogBase* GetDefaultObj();

};

// 0x128 (0x230 - 0x108)
// Class ModioUI.ModioDialogBaseInternal
class UModioDialogBaseInternal : public UWidget
{
public:
	uint8                                        Pad_EA0[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               LoadingSpinner;                                    // 0x1B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               DataSource;                                        // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      DialogStyle;                                       // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               ButtonSpacing;                                     // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UWidget*                               SubHeaderWidget;                                   // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UModioDialogController> Controller;                                        // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               InputWidget;                                       // 0x200(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ButtonWidget;                                      // 0x208(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB0[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDialogBaseInternal* GetDefaultObj();

	void SetDialogFocus();
	void OnSubmitKeyPressed();
	void OnNavigateDownFromCodeInputWidget();
};

// 0x0 (0x108 - 0x108)
// Class ModioUI.ModioWidgetBase
class UModioWidgetBase : public UWidget
{
public:

	static class UClass* StaticClass();
	static class UModioWidgetBase* GetDefaultObj();

};

// 0x238 (0x340 - 0x108)
// Class ModioUI.ModioDialogController
class UModioDialogController : public UModioWidgetBase
{
public:
	class UModioDialogBaseInternal*              ActualDialog;                                      // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ECB[0x44];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      InvisibleButtonStyleRef;                           // 0x154(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCurrentlyDisplayingDialog;                        // 0x15C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ECE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        DialogInputValues;                                 // 0x160(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FInterpCurveFloat                     BlurCurve;                                         // 0x170(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       AuthenticationChoiceDialog;                        // 0x188(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       UnsubscribeConfirmationDialog;                     // 0x1B0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       EmailAuthenticationDialog;                         // 0x1D8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       ReportContentDialog;                               // 0x200(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       ReportEmailDialog;                                 // 0x228(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       UninstallConfirmationDialog;                       // 0x250(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       TermsOfUseDialog;                                  // 0x278(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       TermsOfUseFailDialog;                              // 0x2A0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       ErrorDisplayDialog;                                // 0x2C8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UModioDialogInfo>       LogoutConfirmationDialog;                          // 0x2F0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UWidget>                   LoadingOverlay;                                    // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EE6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UModioDialogInfo*>              DialogStack;                                       // 0x330(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDialogController* GetDefaultObj();

	void ShowErrorDialog(const struct FModioErrorCode& Ec, bool bCloseDialogsOnOK);
	struct FEventReply HandleBackgroundClick(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
};

// 0x88 (0xB0 - 0x28)
// Class ModioUI.ModioDialogInfo
class UModioDialogInfo : public UObject
{
public:
	class FText                                  TitleText;                                         // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   SubHeaderWidget;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              SubHeaderWidgetHAlign;                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                SubHeaderWidgetVAlign;                             // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DialogText;                                        // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   InputWidget;                                       // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              InputWidgetHAlign;                                 // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                InputWidgetVAlign;                                 // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchDirection                 InputWidgetScalingType;                            // 0x72(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputWidgetHeightOverride;                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InputWidgetHintText;                               // 0x78(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   ButtonAreaWidget;                                  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              ButtonAreaWidgetHAlign;                            // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                ButtonAreaWidgetVAlign;                            // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F05[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioDialogButtonInfo>        Buttons;                                           // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDialogInfo* GetDefaultObj();

};

// 0xB8 (0x188 - 0xD0)
// Class ModioUI.ModioDialogStyleContainer
class UModioDialogStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioDialogStyle                     Style;                                             // 0xD0(0xB8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDialogStyleContainer* GetDefaultObj();

};

// 0x30 (0x2A8 - 0x278)
// Class ModioUI.ModioDownloadListWidgetBase
class UModioDownloadListWidgetBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_F0E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioListView*                        QueueList;                                         // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioRichTextBlock*                   QueueTypeLabel;                                    // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   StatusString;                                      // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F12[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDownloadListWidgetBase* GetDefaultObj();

};

// 0xF0 (0x368 - 0x278)
// Class ModioUI.ModioDownloadQueueDrawer
class UModioDownloadQueueDrawer : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_F2C[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioUserProfileButton*               ProfileIcon;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   UserLabel;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ActivityText;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   StatusText;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  LogOutButton;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioDownloadQueueOpProgress*         CurrentOpProgress;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioDownloadListWidgetBase*          OperationQueue;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioDownloadListWidgetBase*          CompletedQueue;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DownloadingActionText;                             // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ExtractingActionText;                              // 0x308(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  InitializingActionText;                            // 0x320(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoDownloadText;                                    // 0x338(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F3B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDownloadQueueDrawer* GetDefaultObj();

	void OnSubsricptionChanged(const struct FModioModID& ID, bool Subscribed);
	void OnLogoutClicked();
	void HandleOperationCompleted();
};

// 0x88 (0x300 - 0x278)
// Class ModioUI.ModioDownloadQueueEntry
class UModioDownloadQueueEntry : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_F48[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioImage*                           ModThumbnail;                                      // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModNameLabel;                                      // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModSizeLabel;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  UnsubscribeButton;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModStatusLabel;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      EntryStyle;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F4D[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBorder*                               EntryBorder;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDownloadQueueEntry* GetDefaultObj();

	void OnUnsubClicked();
	struct FEventReply OnEntryPressed(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
};

// 0xD0 (0x1A0 - 0xD0)
// Class ModioUI.ModioDownloadQueueEntryStyleContainer
class UModioDownloadQueueEntryStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioDownloadQueueEntryStyle         Style;                                             // 0xD0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDownloadQueueEntryStyleContainer* GetDefaultObj();

};

// 0x80 (0x320 - 0x2A0)
// Class ModioUI.ModioDownloadQueueOpProgress
class UModioDownloadQueueOpProgress : public UModioModManagementWidgetBase
{
public:
	class UModioRichTextButton*                  UnsubscribeButton;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6C[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioProgressBar*                     ProgressBar;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModNameLabel;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   OperationSpeedText;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   OperationProgressText;                             // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SpeedFormatText;                                   // 0x2E0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ProgressFormatText;                                // 0x2F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F6F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDownloadQueueOpProgress* GetDefaultObj();

	FDelegateProperty_ OperationCompletedDelegate();
	void OnUnsubscribeClicked();
};

// 0xF8 (0x200 - 0x108)
// Class ModioUI.ModioDrawer
class UModioDrawer : public UWidget
{
public:
	uint8                                        Pad_F75[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UWidget*>            NamedWidgets;                                      // 0x140(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      DrawerStyle;                                       // 0x190(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UBorder*                               HeaderBorder;                                      // 0x198(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               ContentBorder;                                     // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               FooterBorder;                                      // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeaderFillOverride;                                // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ContentFillOverride;                               // 0x1B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FooterFillOverride;                                // 0x1B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               HeaderPadding;                                     // 0x1BC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HeaderHorizontalAlignment;                         // 0x1CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                HeaderVerticalAlignment;                           // 0x1CD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F80[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ContentPadding;                                    // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              ContentHorizontalAlignment;                        // 0x1E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                ContentVerticalAlignment;                          // 0x1E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F82[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               FooterPadding;                                     // 0x1E4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              FooterHorizontalAlignment;                         // 0x1F4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                FooterVerticalAlignment;                           // 0x1F5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F85[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinWidth;                                          // 0x1F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F86[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDrawer* GetDefaultObj();

};

// 0x60 (0x2D8 - 0x278)
// Class ModioUI.ModioDrawerContentBase
class UModioDrawerContentBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_F94[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNamedSlot*                            HeaderSlot;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            ContentSlot;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            OptionalContentSlot;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDrawerContentBase* GetDefaultObj();

	class UWidget* GetOptionalContentWidget();
	class UWidget* GetHeaderWidget();
	class UWidget* GetContentWidget();
};

// 0x0 (0x130 - 0x130)
// Class ModioUI.ModioOverlay
class UModioOverlay : public UOverlay
{
public:

	static class UClass* StaticClass();
	static class UModioOverlay* GetDefaultObj();

};

// 0x28 (0x158 - 0x130)
// Class ModioUI.ModioDrawerController
class UModioDrawerController : public UModioOverlay
{
public:
	uint8                                        Pad_FC0[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDrawerController* GetDefaultObj();

	bool ToggleDrawerExpanded(int32 SlotIndex, bool bCloseOtherDrawers);
	void SetDrawerExpanded(int32 SlotIndex, bool bExpandedState, bool bCloseOtherDrawers);
	bool IsAnyDrawerExpanded();
	void DrawerAnimatedOut();
	void CollapseAllDrawers();
};

// 0x38 (0x90 - 0x58)
// Class ModioUI.ModioDrawerControllerSlot
class UModioDrawerControllerSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_FCD[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioDrawerControllerSlotEdge    Edge;                                              // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              DrawerHorizontalAlignment;                         // 0x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                DrawerVerticalAlignment;                           // 0x72(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExpanded;                                         // 0x73(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimationTime;                                     // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentAnimationProgress;                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD1[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDrawerControllerSlot* GetDefaultObj();

};

// 0x1A0 (0x270 - 0xD0)
// Class ModioUI.ModioDrawerWidgetStyleContainer
class UModioDrawerWidgetStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioDrawerWidgetStyle               Style;                                             // 0xD0(0x1A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDrawerWidgetStyleContainer* GetDefaultObj();

};

// 0x130 (0x200 - 0xD0)
// Class ModioUI.ModioDynamicImageStyleContainer
class UModioDynamicImageStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioDynamicImageStyle               Style;                                             // 0xD0(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioDynamicImageStyleContainer* GetDefaultObj();

};

// 0x20 (0x480 - 0x460)
// Class ModioUI.ModioEditableText
class UModioEditableText : public UEditableText
{
public:
	uint8                                        Pad_FE3[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      TextStyle;                                         // 0x470(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultStyleName;                                  // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioEditableText* GetDefaultObj();

	TArray<class FString> GetStyleNames();
};

// 0xA8 (0xAE0 - 0xA38)
// Class ModioUI.ModioEditableTextBox
class UModioEditableTextBox : public UEditableTextBox
{
public:
	uint8                                        Pad_FEA[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCharacters;                                     // 0xA78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEB[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bValidateInput;                                    // 0xA90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioTextValidationRule>      ValidationRules;                                   // 0xA98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bDisplayValidationErrors;                          // 0xAA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      TextBoxStyle;                                      // 0xAAC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      TextStyle;                                         // 0xAB4(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF3[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioEditableTextBox* GetDefaultObj();

	void StartInput();
};

// 0xA20 (0xAF0 - 0xD0)
// Class ModioUI.ModioEditableTextBoxStyleContainer
class UModioEditableTextBoxStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioEditableTextBoxStyle            Style;                                             // 0xD0(0xA20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioEditableTextBoxStyleContainer* GetDefaultObj();

};

// 0x38 (0x2B0 - 0x278)
// Class ModioUI.ModioErrorRetryWidget
class UModioErrorRetryWidget : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_FFC[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRichTextBlock*                   ErrorText;                                         // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ErrorTextValue;                                    // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  RetryButton;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioErrorRetryWidget* GetDefaultObj();

	void SetErrorText(const class FString& Error);
	void OnRetryClicked();
};

// 0x160 (0x3D8 - 0x278)
// Class ModioUI.ModioFeaturedCategory
class UModioFeaturedCategory : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1020[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      NavLeftHoverAnim;                                  // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      NavRightHoverAnim;                                 // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   Title;                                             // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTileView*                        ItemList;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               TileLoader;                                        // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioErrorRetryWidget*                ModioErrorWithRetryWidget;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          SeeAllButton;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          NavLeftButton;                                     // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          NavRightButton;                                    // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioAsyncOpWrapperWidget*            CategoryViewContent;                               // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioFilterParams                    Filter;                                            // 0x318(0xA8)(Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            SelectionChangedDelegate;                          // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	int32                                        ArrowButtonScrollAmount;                           // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1025[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioFeaturedCategory* GetDefaultObj();

	void SetSelectionIndexDelegate(FDelegateProperty_ Delegate);
	void PlayNavRightUnhoverAnim();
	void PlayNavRightHoverAnim();
	void PlayNavLeftUnhoverAnim();
	void PlayNavLeftHoverAnim();
	void OnCategorySelectionChanged__DelegateSignature(int32 Index, class UModioFeaturedCategory* RealCategory);
	void HandleSeeAllClicked();
	void HandleNavRightClicked();
	void HandleNavLeftClicked();
	void HandleItemListEntrySubscribeClicked(class UModioModInfoUI* ModInfo);
	void HandleItemListEntryReportClicked(class UModioModInfoUI* ModInfo);
	void HandleItemListEntryDetailsClicked(class UModioModInfoUI* ModInfo);
	class UModioTileView* GetItemList();
};

// 0x138 (0x3B0 - 0x278)
// Class ModioUI.ModioModTileBase
class UModioModTileBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_103F[0x54];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCurrentExpandedState;                             // 0x2CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1040[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIMaterialRef                   LoadingMaterial;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIMaterialRef                   ErrorMaterial;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UModioImage*                           Thumbnail;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioUserWidgetBase*                  SubscriptionIndicator;                             // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModName;                                           // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      FocusTransition;                                   // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRoundedBorder*                   TileBorder;                                        // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioImage*                           TileFrame;                                         // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  SubscribeButton;                                   // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      Style;                                             // 0x318(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UModioUI4Subsystem*                    UISubsystem;                                       // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104C[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SubscribeLabel;                                    // 0x370(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  UnsubscribeLabel;                                  // 0x388(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSubscribeClicked;                                // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModTileBase* GetDefaultObj();

	void SetExpandedState(bool bExpanded);
	void OnSetExpandedState(bool bExpanded);
	void OnModSubscriptionStatusChanged(const struct FModioModID& ID, bool Subscribed);
	void NativeSubscribeClicked();
	void HandleModLogoOperationStateChanged(enum class EModioUIAsyncOperationWidgetState NewState);
	void EnableSubscribeButton();
};

// 0x28 (0x3D8 - 0x3B0)
// Class ModioUI.ModioFeaturedMod
class UModioFeaturedMod : public UModioModTileBase
{
public:
	uint8                                        Pad_1059[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioPopupMenu*                       MoreOptionsMenu;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioImage*                           TileActiveFrame;                                   // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioFeaturedMod* GetDefaultObj();

	void SubmitPositiveRating();
	void SubmitNegativeRating();
	void SubmitModReport();
	void NativeMoreOptionsClicked();
};

// 0x78 (0x2F0 - 0x278)
// Class ModioUI.ModioFeaturedModCarousel
class UModioFeaturedModCarousel : public UModioUserWidgetBase
{
public:
	class UCanvasPanel*                          CarouselCanvasPanel;                               // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UModioFeaturedMod>         ModTileTemplate;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WidgetMargin;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollTime;                                        // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollInputDelay;                                  // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GeneratedWidgetSize;                               // 0x294(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1068[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AnimationCurve;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1069[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       CachedWidgetData;                                  // 0x2E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UModioFeaturedModCarousel* GetDefaultObj();

	void NavigateToWidget(class UWidget* InWidget);
};

// 0x88 (0x330 - 0x2A8)
// Class ModioUI.ModioFeaturedView
class UModioFeaturedView : public UModioMenuView
{
public:
	uint8                                        Pad_1078[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioErrorRetryWidget*                ModioErrorWithRetryWidget;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               PrimaryFeaturedCategoryLoader;                     // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioListView*                        AdditionalCategories;                              // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioAsyncOpWrapperWidget*            FeaturedViewContent;                               // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioGridPanel*                       PrimaryCategoryGridPanel;                          // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioFeaturedModCarousel*             FeaturedModCarousel;                               // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       CachedFeaturedItems;                               // 0x320(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioFeaturedView* GetDefaultObj();

	void SetFocusToPrimaryCategory();
	void SetFocusToAdditionalCategory();
	int32 GetSelectionIndex();
	void CategorySelectionChanged(int32 Index, class UModioFeaturedCategory* RealCategory);
};

// 0x0 (0x150 - 0x150)
// Class ModioUI.ModioGridPanel
class UModioGridPanel : public UGridPanel
{
public:

	static class UClass* StaticClass();
	static class UModioGridPanel* GetDefaultObj();

};

// 0x8 (0x218 - 0x210)
// Class ModioUI.ModioImage
class UModioImage : public UImage
{
public:
	class UMaterialInstanceDynamic*              CachedMaterial;                                    // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioImage* GetDefaultObj();

	void LoadImageFromFileWithMaterialAsync(const struct FModioImageWrapper& ImageLoader, class UMaterialInterface* Material, class FName ImageParameterName);
	void LoadImageFromFileAsync(const struct FModioImageWrapper& ImageLoader);
	void ImageLoadHandler(class UTexture2DDynamic* Texture, class UMaterialInterface* Material, class FName ImageParameterName);
	void DisplayImageWithMaterial(class UTexture2DDynamic* Texture, class UMaterialInterface* Material, class FName ImageParameterName);
};

// 0x80 (0x188 - 0x108)
// Class ModioUI.ModioImageGalleryBase
class UModioImageGalleryBase : public UWidget
{
public:
	uint8                                        Pad_10B4[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ForegroundContent;                                 // 0x138(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               BackgroundContent;                                 // 0x140(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FDelegateProperty_                           OnDisplayImage;                                    // 0x148(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           OnConstructWidget;                                 // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           OnGetItemCount;                                    // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               ImageWidgetClass;                                  // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioImageGalleryBase* GetDefaultObj();

	void ResetGallery();
	void RefreshCurrentImage();
	void OnDisplayImage__DelegateSignature(class UWidget* ImageWidget, int32 ImageIndex);
	void DisplayGalleryImageAtIndex(enum class EModioUIDirection Direction, int32 DirectIndex);
};

// 0x40 (0x258 - 0x218)
// Class ModioUI.ModioInputBindingImage
class UModioInputBindingImage : public UModioImage
{
public:
	uint8                                        Pad_10C2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  KeyToShow;                                         // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C3[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioInputBindingImage* GetDefaultObj();

	void SetKeyToShow(const struct FKey& NewKey);
	FDelegateProperty_ GetInputModeVisibilityDelegate();
};

// 0xA0 (0xD0 - 0x30)
// Class ModioUI.ModioInputGlyphSet
class UModioInputGlyphSet : public UDataAsset
{
public:
	TMap<struct FKey, class UTexture2D*>         Glyphs;                                            // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FKey, class UTexture2D*>         PngGlyphs;                                         // 0x80(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioInputGlyphSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioInputMappingGlyphLibrary
class UModioInputMappingGlyphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioInputMappingGlyphLibrary* GetDefaultObj();

	class UTexture2D* GetInputGlyph(struct FModioInputMappingGlyph* MappingGlyph, enum class EModioUIInputMode InputMode);
};

// 0x0 (0x368 - 0x368)
// Class ModioUI.ModioListView
class UModioListView : public UListView
{
public:

	static class UClass* StaticClass();
	static class UModioListView* GetDefaultObj();

};

// 0xF8 (0x310 - 0x218)
// Class ModioUI.ModioListViewInteger
class UModioListViewInteger : public UListViewBase
{
public:
	uint8                                        Pad_10D7[0xD0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EOrientation                      Orientation;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  ScrollbarVisibility;                               // 0x2E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0x2EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideItemSize;                                 // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ItemSize;                                          // 0x2F4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10DB[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioListViewInteger* GetDefaultObj();

};

// 0xF8 (0x310 - 0x218)
// Class ModioUI.ModioListViewString
class UModioListViewString : public UListViewBase
{
public:
	uint8                                        Pad_10E2[0xD0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EOrientation                      Orientation;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  ScrollbarVisibility;                               // 0x2E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0x2EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideItemSize;                                 // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ItemSize;                                          // 0x2F4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10EA[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioListViewString* GetDefaultObj();

};

// 0x60 (0x168 - 0x108)
// Class ModioUI.ModioLoadingSpinner
class UModioLoadingSpinner : public UWidget
{
public:
	uint8                                        Pad_10ED[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIMaterialRef                   LoadingImage;                                      // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             ImageBrushSize;                                    // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EStretch                          Stretch;                                           // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EStretchDirection                 StretchDirection;                                  // 0x149(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10EF[0x16];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CachedReferencedMaterial;                          // 0x160(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioLoadingSpinner* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class ModioUI.ModioLogoWidget
class UModioLogoWidget : public UWidget
{
public:
	class UObject*                               DataSource;                                        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      StyleRef;                                          // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioLogoWidget* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class ModioUI.ModioMaterialData
class UModioMaterialData : public UDataAsset
{
public:
	TMap<class FName, class UModioProceduralBrushParams*> NamedBrushMaterialsNew;                            // 0x30(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FName, class UModioRoundedRectangleMaterialParams*> RoundedRectangleParams;                            // 0x80(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FName, class UModioCheckBoxMaterialParams*> CheckBoxMaterialParams;                            // 0xD0(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DefaultRoundedRectangleMaterial;                   // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DefaultCheckboxMaterial;                           // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    PngGlyphMaterial;                                  // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DefaultGlyphMaterial;                              // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioMaterialData* GetDefaultObj();

};

// 0xD8 (0x350 - 0x278)
// Class ModioUI.ModioMenu
class UModioMenu : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1104[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      ViewChangedAnim;                                   // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      DialogAnim;                                        // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioWidgetSwitcher*                  ViewController;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioMenuBar*                         MenuBar;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioImage*                           Background;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioDrawerController*                DrawerController;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioDialogController*                DialogController;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           HideCursorWidget;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               NotificationController;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           ModioMenuBarWidget;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              MenuSizeBox;                                       // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               LeftBlurBorder;                                    // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               RightBlurBorder;                                   // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioMenuView>            FeaturedView;                                      // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioMenuView>            CollectionView;                                    // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioMenuView>            SearchResultsView;                                 // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioMenuView>            ModDetailsView;                                    // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioDrawer>              DownloadProgressDrawer;                            // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioDrawer>              RefineSearchDrawer;                                // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_110A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioMenu* GetDefaultObj();

	void OnViewChanged(int64 ViewIndex);
	void OnSearchSettingsChanged(const struct FModioFilterParams& Settings);
	void OnDrawerAnimatedOut(int32 SlotIndex);
	void HandleViewChanged(int32 ViewIndex);
};

// 0x18 (0x290 - 0x278)
// Class ModioUI.ModioMenuBar
class UModioMenuBar : public UModioUserWidgetBase
{
public:
	class UModioRichTextButton*                  SearchButton;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  BackButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioUserProfileButton*               UserProfileButton;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioMenuBar* GetDefaultObj();

	void OnSearchClicked();
	void OnBackClicked();
};

// 0x10 (0x38 - 0x28)
// Class ModioUI.ModioMenuDefaultBackgroundProvider
class UModioMenuDefaultBackgroundProvider : public UObject
{
public:
	uint8                                        Pad_1115[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioMenuDefaultBackgroundProvider* GetDefaultObj();

};

// 0x0 (0x278 - 0x278)
// Class ModioUI.ModioModBrowser
class UModioModBrowser : public UModioUserWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UModioModBrowser* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class ModioUI.ModioModBrowserParams
class UModioModBrowserParams : public UDataAsset
{
public:
	class UModioFeaturedCategoryParams*          PrimaryCategoryParams;                             // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UModioFeaturedCategoryParams*>  AdditionalCategoryParams;                          // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModBrowserParams* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class ModioUI.ModioCarousel
class UModioCarousel : public UWidget
{
public:
	uint8                                        Pad_111E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   EntryWidgets;                                      // 0x118(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UModioModInfoUI*>               ModsToDisplay;                                     // 0x128(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioCarousel* GetDefaultObj();

};

// 0x0 (0x3B0 - 0x3B0)
// Class ModioUI.ModioModCarouselTile
class UModioModCarouselTile : public UModioModTileBase
{
public:

	static class UClass* StaticClass();
	static class UModioModCarouselTile* GetDefaultObj();

};

// 0x80 (0x430 - 0x3B0)
// Class ModioUI.ModioModCollectionTile
class UModioModCollectionTile : public UModioModTileBase
{
public:
	uint8                                        Pad_1128[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRichTextBlock*                   SizeOnDiskLabel;                                   // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioCollectionTileStatus*            StatusWidget;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   StatusLine;                                        // 0x3E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               TileButton;                                        // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SubscribedStatusText;                              // 0x3F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  InstalledStatusText;                               // 0x408(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioPopupMenu*                       MoreOptionsMenu;                                   // 0x420(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModCollectionTile* GetDefaultObj();

	void SubmitPositiveRating();
	void SubmitNegativeRating();
	void SubmitModReport();
	void ShowModDetails();
	void OnRatingSubmissionComplete(const struct FModioErrorCode& Ec, enum class EModioRating Rating);
	void NativeMoreOptionsClicked();
	void NativeCollectionTileClicked();
	void ForceUninstall();
};

// 0x20 (0x298 - 0x278)
// Class ModioUI.ModioModDetailsImage
class UModioModDetailsImage : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1130[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRoundedImage*                    Image;                                             // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIMaterialRef                   FrameMaterial;                                     // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  TextureParameterName;                              // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModDetailsImage* GetDefaultObj();

};

// 0x58 (0x2D0 - 0x278)
// Class ModioUI.ModioModDetailsImageGallery
class UModioModDetailsImageGallery : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1141[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModDetailsGalleryImageInfo> ImageInfo;                                         // 0x290(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UModioImageGalleryBase*                ImageGallery;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioListViewInteger*                 NavButtons;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      Style;                                             // 0x2B0(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UModioRoundedImage*                    ActiveBackground;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioGridPanel*                       NavButtonGridPanel;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFocused;                                        // 0x2C8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1144[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModDetailsImageGallery* GetDefaultObj();

	void PrevImage();
	void OnGalleryImageLoad(class UTexture2DDynamic* LoadedImage, const struct FModioModID& ModId, int32 Index);
	void NextImage();
	int32 GetImageCount();
	void ApplyImageToWidget(class UWidget* Widget, int32 ImageIndex);
};

// 0x88 (0x300 - 0x278)
// Class ModioUI.ModioModDetailsImageGalleryNavButtonBase
class UModioModDetailsImageGalleryNavButtonBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1155[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioImage*                           Image;                                             // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UMaterialInterface>     SpecifiedMaterial;                                 // 0x288(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateColor                           UnselectedColor;                                   // 0x2B0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           SelectedColor;                                     // 0x2D8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModDetailsImageGalleryNavButtonBase* GetDefaultObj();

};

// 0x60 (0x300 - 0x2A0)
// Class ModioUI.ModioModDetailsOpProgress
class UModioModDetailsOpProgress : public UModioModManagementWidgetBase
{
public:
	uint8                                        Pad_1160[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioProgressBar*                     ProgressBar;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   TimeRemainingText;                                 // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  TimeRemainingTextFormat;                           // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  SpeedTextFormat;                                   // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   OperationSpeedText;                                // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   OperationProgressText;                             // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModDetailsOpProgress* GetDefaultObj();

};

// 0x18 (0x290 - 0x278)
// Class ModioUI.ModioModPropertyInspectorBase
class UModioModPropertyInspectorBase : public UModioUserWidgetBase
{
public:
	TArray<struct FModioModInfoPropertyDescriptor> PropertiesToDisplay;                               // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_116E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModPropertyInspectorBase* GetDefaultObj();

	void UpdatePropertyDisplay();
	void OnUpdatePropertyDisplay();
};

// 0x68 (0x2F8 - 0x290)
// Class ModioUI.ModioModDetailsPropertyInspector
class UModioModDetailsPropertyInspector : public UModioModPropertyInspectorBase
{
public:
	class UModioGridPanel*                       PropertyGrid;                                      // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  LastUpdatedFormat;                                 // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      PropertyNameTextStyle;                             // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultPropertyNameStyleName;                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      PropertyValueTextStyle;                            // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultPropertyValueStyleName;                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      FillerTextStyle;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  FillerStyleName;                                   // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1189[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModDetailsPropertyInspector* GetDefaultObj();

	struct FModioRichTextStyle GetTextStyle(const struct FModioUIStyleRef& TextStyle);
	TArray<class FString> GetPropertyValueStyleNames();
	TArray<class FString> GetPropertyNameStyleNames();
	TArray<class FString> GetFillerStyleNames();
};

// 0x180 (0x428 - 0x2A8)
// Class ModioUI.ModioModDetailsView
class UModioModDetailsView : public UModioMenuView
{
public:
	uint8                                        Pad_11B2[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               DetailsLoader;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioAsyncOpWrapperWidget*            DetailsViewContent;                                // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  SubscribeButton;                                   // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  RateUpButton;                                      // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  RateDownButton;                                    // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  ReportButton;                                      // 0x318(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioUserWidgetBase*                  ModPropertiesInspector;                            // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioModManagementWidgetBase*         ProgressWidget;                                    // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SubscribeButtonFormat;                             // 0x330(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  RateUpTextFormat;                                  // 0x348(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  RateDownTextFormat;                                // 0x360(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ReportTextFormat;                                  // 0x378(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModTitleTextBlock;                                 // 0x390(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModSummaryTextBlock;                               // 0x398(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModFullDescriptionTextBlock;                       // 0x3A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioErrorRetryWidget*                ModioErrorWithRetryWidget;                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTagList*                         ModTags;                                           // 0x3B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   ModChangelog;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SubscribeLabel;                                    // 0x3C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  UnsubscribeLabel;                                  // 0x3D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioModDetailsImageGallery*          ImageGallery;                                      // 0x3F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioSubscriptionBadge*               SubscriptionBadge;                                 // 0x3F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioScrollBox*                       ScrollBox;                                         // 0x400(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CE[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ControllerScrollingMultiplier;                     // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollingSpeed;                                    // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModDetailsView* GetDefaultObj();

	void SetInitialFocus();
	void ReportClicked();
	void RateUpClicked();
	void RateDownClicked();
	void OnRatingSubmissionComplete(const struct FModioErrorCode& Ec, enum class EModioRating SubmittedRating);
	void OnModSubscriptionStatusChanged(const struct FModioModID& ID, bool Subscribed);
	void OnDownloadQueueClosed();
	void OnDialogClosed();
	void NativeSubscribeClicked();
	void EnableSubscribeButton();
};

// 0x28 (0x130 - 0x108)
// Class ModioUI.ModioModNameWidget
class UModioModNameWidget : public UWidget
{
public:
	uint8                                        Pad_11D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      Style;                                             // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModNameWidget* GetDefaultObj();

};

// 0x50 (0x400 - 0x3B0)
// Class ModioUI.ModioModTile
class UModioModTile : public UModioModTileBase
{
public:
	class UModioPopupMenu*                       MoreOptionsMenu;                                   // 0x3B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  MoreOptionsLabel;                                  // 0x3B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UModioImage*                           TileActiveFrame;                                   // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnDetailsClicked;                                  // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReportClicked;                                   // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        TruncateDivider;                                   // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModTile* GetDefaultObj();

	void SubmitPositiveRating();
	void SubmitNegativeRating();
	void SubmitModReport();
	void SetSizeOverride(const struct FVector2D& NewSize);
	struct FEventReply OnThumbnailMouseDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void NativeReportClicked();
	void NativeMoreOptionsClicked();
};

// 0x38 (0x108 - 0xD0)
// Class ModioUI.ModioModTileStyleContainer
class UModioModTileStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioModTileStyle                    Style;                                             // 0xD0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModTileStyleContainer* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class ModioUI.ModioModUninstallHeaderWidget
class UModioModUninstallHeaderWidget : public UWidget
{
public:
	uint8                                        Pad_11F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11F5[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      Style;                                             // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModUninstallHeaderWidget* GetDefaultObj();

};

// 0x8 (0x288 - 0x280)
// Class ModioUI.ModioMoreOptionsDialog
class UModioMoreOptionsDialog : public UModioDialogBase
{
public:
	class UModioTileView*                        OptionsList;                                       // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioMoreOptionsDialog* GetDefaultObj();

};

// 0x70 (0xD08 - 0xC98)
// Class ModioUI.ModioMultiLineEditableTextBox
class UModioMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
public:
	uint8                                        Pad_1201[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bValidateInput;                                    // 0xCB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1205[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioTextValidationRule>      ValidationRules;                                   // 0xCC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bDisplayValidationErrors;                          // 0xCD0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1207[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      ErrorTextStyle;                                    // 0xCD4(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1208[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      TextBoxStyle;                                      // 0xD00(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioMultiLineEditableTextBox* GetDefaultObj();

};

// 0x800 (0x8D0 - 0xD0)
// Class ModioUI.ModioMultiLineEditableTextBoxStyleContainer
class UModioMultiLineEditableTextBoxStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioMultiLineEditableTextBoxStyle   Style;                                             // 0xD0(0x800)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioMultiLineEditableTextBoxStyleContainer* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ModioUI.ModioNamedGlyphMaterialParams
class UModioNamedGlyphMaterialParams : public UModioProceduralBrushParams
{
public:
	class FName                                  GlyphName;                                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioNamedGlyphMaterialParams* GetDefaultObj();

	TArray<class FString> GetValidGlyphNames();
};

// 0xA0 (0xD0 - 0x30)
// Class ModioUI.ModioNamedGlyphsDataAsset
class UModioNamedGlyphsDataAsset : public UDataAsset
{
public:
	TMap<class FName, class UTexture2D*>         NamedGlyphs;                                       // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, class UTexture2D*>         PngGlyphs;                                         // 0x80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioNamedGlyphsDataAsset* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModioUI.ModioNavigationConfigFactoryBase
class UModioNavigationConfigFactoryBase : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UModioNavigationConfigFactoryBase* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ModioUI.ModioNavigationConfigFactory
class UModioNavigationConfigFactory : public UModioNavigationConfigFactoryBase
{
public:
	bool                                         bTabNavigation;                                    // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bKeyNavigation;                                    // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnalogNavigation;                                 // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_121D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnalogNavigationHorizontalThreshold;               // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnalogNavigationVerticalThreshold;                 // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_121E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioNavigationConfigFactory* GetDefaultObj();

};

// 0x20 (0x298 - 0x278)
// Class ModioUI.ModioNotificationControllerBase
class UModioNotificationControllerBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1221[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNotificationsOnScreen;                          // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1222[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               ErrorNotificationClass;                            // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          NotificationList;                                  // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioNotificationControllerBase* GetDefaultObj();

	void OnNotificationExpired(class UWidget* Notification);
};

// 0x28 (0x80 - 0x58)
// Class ModioUI.ModioNotificationControllerSlot
class UModioNotificationControllerSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_1226[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioNotificationControllerSlotEdge Edge;                                              // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              NotificationHorizontalAlignment;                   // 0x69(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                NotificationVerticalAlignment;                     // 0x6A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_122A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisibleDuration;                                   // 0x6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExpanded;                                         // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_122B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationTime;                                     // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentAnimationProgress;                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_122C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioNotificationControllerSlot* GetDefaultObj();

};

// 0x58 (0x128 - 0xD0)
// Class ModioUI.ModioNotificationStyleContainer
class UModioNotificationStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioNotificationStyle               Style;                                             // 0xD0(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioNotificationStyleContainer* GetDefaultObj();

};

// 0x30 (0x2A8 - 0x278)
// Class ModioUI.ModioNotificationWidgetBase
class UModioNotificationWidgetBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_123A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      NotificationStyle;                                 // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_123C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioNotificationWidgetBase* GetDefaultObj();

	class UWidget* CreateFromParams(TSubclassOf<class UWidget> NotificationClass, struct FModioNotificationParams& Params, class UWidget* Outer);
};

// 0x30 (0x2D8 - 0x2A8)
// Class ModioUI.ModioNotificationErrorWidgetBase
class UModioNotificationErrorWidgetBase : public UModioNotificationWidgetBase
{
public:
	class UModioImage*                           StatusColorBackground;                             // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioImage*                           StatusIndicator;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   NotificationTitle;                                 // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   NotificationMessage;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1240[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioNotificationErrorWidgetBase* GetDefaultObj();

};

// 0x120 (0x228 - 0x108)
// Class ModioUI.ModioPopupComboBox
class UModioPopupComboBox : public UWidget
{
public:
	struct FModioUIMenuCommandList               CurrentEntries;                                    // 0x108(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1243[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x168(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  LabelFormatText;                                   // 0x180(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ValueFormatText;                                   // 0x198(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseRoundedCorners;                                // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1244[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      RoundedCornerStyle;                                // 0x1B4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      ComboBoxStyle;                                     // 0x1BC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      TextStyle;                                         // 0x1C4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               ContentPadding;                                    // 0x1CC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bPreviewOpen;                                      // 0x1DC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1247[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          OptionValues;                                      // 0x1E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1248[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioPopupPlacement              PopupPlacement;                                    // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1249[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioPopupComboBox* GetDefaultObj();

};

// 0xB0 (0x220 - 0x170)
// Class ModioUI.ModioPopupMenu
class UModioPopupMenu : public UMenuAnchor
{
public:
	uint8                                        Pad_1250[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonLabel;                                       // 0x1C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class ETextJustify                      ButtonLabelJustification;                          // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1253[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CurrentContent;                                    // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  MenuButton;                                        // 0x1E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      ButtonStyle;                                       // 0x1F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      PopupMenuStyle;                                    // 0x1F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               MenuContentWidgetClass;                            // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  KeyForInputHint;                                   // 0x208(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioPopupMenu* GetDefaultObj();

	void SetMenuEntries(const struct FModioUIMenuCommandList& Entries);
	void HandleButtonClicked();
	class UUserWidget* GeneratePopupMenuContent();
};

// 0x38 (0x108 - 0xD0)
// Class ModioUI.ModioPopupMenuStyleContainer
class UModioPopupMenuStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioPopupMenuStyle                  Style;                                             // 0xD0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioPopupMenuStyleContainer* GetDefaultObj();

};

// 0x8 (0x320 - 0x318)
// Class ModioUI.ModioProgressBar
class UModioProgressBar : public UProgressBar
{
public:
	struct FModioUIStyleRef                      StyleRef;                                          // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioProgressBar* GetDefaultObj();

	void SetStyleRef(const struct FModioUIStyleRef& NewStyle);
};

// 0x1A0 (0x270 - 0xD0)
// Class ModioUI.ModioProgressBarStyleContainer
class UModioProgressBarStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioProgressBarStyle                Style;                                             // 0xD0(0x1A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioProgressBarStyleContainer* GetDefaultObj();

};

// 0x80 (0x2F8 - 0x278)
// Class ModioUI.ModioRefineSearchDrawer
class UModioRefineSearchDrawer : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1266[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioEditableTextBox*                 SearchInput;                                       // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTagListWidgetBase*               TagSelector;                                       // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  ApplyButton;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  ClearButton;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  CancelButton;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSettingsChanged;                                 // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UModioTagOptionsUI*                    TagOptions;                                        // 0x2C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UWidget*>                       NavigationPath;                                    // 0x2D0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UModioUI4Subsystem*                    UISubsystem;                                       // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTagSelectorWidgetBase*           CurrentActiveTagSelector;                          // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1271[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioRefineSearchDrawer* GetDefaultObj();

	void OnCollapse();
	void OnClearClicked();
	void OnCancelClicked();
	void OnApplyClicked();
	void ConstructNavigationPath();
};

// 0x20 (0x2A0 - 0x280)
// Class ModioUI.ModioRemoveModDialog
class UModioRemoveModDialog : public UModioDialogBase
{
public:
	class UModioTextBlock*                       ModName;                                           // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTextBlock*                       PromptMessage;                                     // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          BackButton;                                        // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          ConfirmButton;                                     // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioRemoveModDialog* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class ModioUI.ModioReportButtonGroupWidget
class UModioReportButtonGroupWidget : public UWidget
{
public:
	uint8                                        Pad_127B[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_127D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      ButtonStyle;                                       // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_127E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioReportButtonGroupWidget* GetDefaultObj();

	void CancelClicked();
};

// 0x0 (0x280 - 0x280)
// Class ModioUI.ModioReportModDialog
class UModioReportModDialog : public UModioDialogBase
{
public:

	static class UClass* StaticClass();
	static class UModioReportModDialog* GetDefaultObj();

};

// 0x10 (0xD18 - 0xD08)
// Class ModioUI.ModioReportSummaryWidget
class UModioReportSummaryWidget : public UModioMultiLineEditableTextBox
{
public:
	uint8                                        Pad_1285[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UModioReportSummaryWidget* GetDefaultObj();

};

// 0x0 (0x150 - 0x150)
// Class ModioUI.ModioRetainerBox
class UModioRetainerBox : public URetainerBox
{
public:

	static class UClass* StaticClass();
	static class UModioRetainerBox* GetDefaultObj();

};

// 0x20 (0x698 - 0x678)
// Class ModioUI.ModioRichTextBlock
class UModioRichTextBlock : public URichTextBlock
{
public:
	uint8                                        Pad_128B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      TextStyle;                                         // 0x688(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultStyleName;                                  // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioRichTextBlock* GetDefaultObj();

	TArray<class FString> GetStyleNames();
};

// 0x0 (0x28 - 0x28)
// Class ModioUI.ModioRichTextBlockDecorator
class UModioRichTextBlockDecorator : public URichTextBlockDecorator
{
public:

	static class UClass* StaticClass();
	static class UModioRichTextBlockDecorator* GetDefaultObj();

};

// 0x78 (0x558 - 0x4E0)
// Class ModioUI.ModioRichTextButton
class UModioRichTextButton : public UModioButton
{
public:
	uint8                                        Pad_12A9[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRichTextBlock*                   ButtonContent;                                     // 0x508(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioInputBindingImage*               InputHintImage;                                    // 0x510(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ButtonLabel;                                       // 0x518(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultStyleName;                                  // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextJustify                      Justification;                                     // 0x538(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  KeyForInputHint;                                   // 0x540(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioRichTextButton* GetDefaultObj();

	TArray<class FString> GetStyleNames();
	struct FModioRichTextStyle GetRichTextStyle();
	enum class ESlateVisibility GetInputHintVisibility(enum class EModioUIInputMode InputMode);
};

// 0xA8 (0x178 - 0xD0)
// Class ModioUI.ModioRichTextStyleContainer
class UModioRichTextStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioRichTextStyle                   Style;                                             // 0xD0(0xA8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioRichTextStyleContainer* GetDefaultObj();

};

// 0x30 (0x180 - 0x150)
// Class ModioUI.ModioRoundedBorder
class UModioRoundedBorder : public UModioRetainerBox
{
public:
	TSoftObjectPtr<class UMaterialInterface>     RetainerMaterial;                                  // 0x150(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      BorderStyle;                                       // 0x178(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioRoundedBorder* GetDefaultObj();

};

// 0x20 (0x238 - 0x218)
// Class ModioUI.ModioRoundedImage
class UModioRoundedImage : public UModioImage
{
public:
	struct FModioUIMaterialRef                   MaterialToUse;                                     // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    CachedReferencedMaterial;                          // 0x220(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ImageMaterial;                                     // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TextureParameterName;                              // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioRoundedImage* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class ModioUI.ModioRoundedRectangleMaterialParams
class UModioRoundedRectangleMaterialParams : public UModioProceduralBrushParams
{
public:
	struct FModioUIColorRef                      NormalBorderColor;                                 // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      FocusedBorderColor;                                // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      InnerColor;                                        // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRelativeRadius;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CornerRadius;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BorderThickness;                                   // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBorder;                                     // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableButtonGradients;                            // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIColorRef                      BorderGradientColor;                               // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      InnerGradientColor;                                // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BorderGradientOpacity;                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerGradientOpacity;                              // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioRoundedRectangleMaterialParams* GetDefaultObj();

};

// 0x30 (0x8B0 - 0x880)
// Class ModioUI.ModioScrollBox
class UModioScrollBox : public UScrollBox
{
public:
	uint8                                        Pad_12BB[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioScrollBoxBarAlignment       ScrollBarAlignment;                                // 0x8A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalPadding;                                 // 0x8AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioScrollBox* GetDefaultObj();

};

// 0x20 (0x2A0 - 0x280)
// Class ModioUI.ModioSearchOptionsDialog
class UModioSearchOptionsDialog : public UModioDialogBase
{
public:
	class UModioTabController*                   TagCategorySelector;                               // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioListView*                        TagList;                                           // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          ApplyButton;                                       // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          MoreOptionsButton;                                 // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioSearchOptionsDialog* GetDefaultObj();

};

// 0x198 (0x440 - 0x2A8)
// Class ModioUI.ModioSearchResultsView
class UModioSearchResultsView : public UModioMenuView
{
public:
	uint8                                        Pad_12D1[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UModioModInfoUI*>               SearchResults;                                     // 0x2F0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UModioTileView*                        ResultsTileView;                                   // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           FirstTile;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ResultLoader;                                      // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioGridPanel*                       NoResultsDialog;                                   // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTagList*                         SearchTags;                                        // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          RefineSearchButton;                                // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          NoResultsRefineSearchButton;                       // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioPopupComboBox*                   SortBy;                                            // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioErrorRetryWidget*                ModioErrorWithRetryWidget;                         // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   SearchResultsCount;                                // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      TitleTextStyle;                                    // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FText                                  PageTitle;                                         // 0x358(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ModQueryFormatText;                                // 0x370(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultTagText;                                    // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SearchInputTagFormatText;                          // 0x398(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12D8[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioSearchResultsView* GetDefaultObj();

	void SortByTrending();
	void SortByRecentlyAdded();
	void SortByMostSubscribers();
	void SortByMostPopular();
	void SortByLastUpdated();
	void SortByHighestRated();
	void OnRetryPressed();
	void OnRefineSearchButtonClicked();
	void OnDrawerClosed();
};

// 0x60 (0x2D8 - 0x278)
// Class ModioUI.ModioSelectableTag
class UModioSelectableTag : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_12E0[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      RadioCheckboxStyle;                                // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      RadioCheckboxFocusedStyle;                         // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UModioCheckBox*                        TagSelectedCheckbox;                               // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      NormalStyle;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      FocusedStyle;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                SearchString;                                      // 0x2B0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioSelectableTag* GetDefaultObj();

	void OnCheckboxCheckStateChanged(bool bIsChecked);
};

// 0x8 (0x160 - 0x158)
// Class ModioUI.ModioSizeBox
class UModioSizeBox : public USizeBox
{
public:
	enum class EHorizontalAlignment              HAlign;                                            // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VAlign;                                            // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12E7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioSizeBox* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ModioUI.ModioSpecifiedMaterialParams
class UModioSpecifiedMaterialParams : public UModioProceduralBrushParams
{
public:
	class UMaterialInterface*                    SpecifiedMaterial;                                 // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioSpecifiedMaterialParams* GetDefaultObj();

};

// 0x88 (0x328 - 0x2A0)
// Class ModioUI.ModioSubscriptionBadge
class UModioSubscriptionBadge : public UModioModManagementWidgetBase
{
public:
	uint8                                        Pad_12EC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioProgressBar*                     ProgressBar;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   Label;                                             // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      BadgeStyle;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FText                                  PendingLabelText;                                  // 0x2C8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  DownloadingLabelText;                              // 0x2E0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ExtractingLabelText;                               // 0x2F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  SubscribedLabelText;                               // 0x310(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioSubscriptionBadge* GetDefaultObj();

};

// 0x308 (0x3D8 - 0xD0)
// Class ModioUI.ModioSubscriptionBadgeStyleContainer
class UModioSubscriptionBadgeStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioSubscriptionBadgeStyle          Style;                                             // 0xD0(0x308)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioSubscriptionBadgeStyleContainer* GetDefaultObj();

};

// 0x908 (0xA10 - 0x108)
// Class ModioUI.ModioTabBar
class UModioTabBar : public UWidget
{
public:
	uint8                                        Pad_12FA[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          TabNames;                                          // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12FB[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTableRowStyle                        TEMP_TableRowStyle;                                // 0x158(0x7C8)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      TabButtonStyle;                                    // 0x920(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      InactiveTabButtonStyle;                            // 0x928(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           SelectedButtonBrush;                               // 0x930(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FModioUIColorRef>   SerializedColors;                                  // 0x9B8(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             ItemSize;                                          // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioTabBar* GetDefaultObj();

	void OnTabIndexChanged(int32 TabIndex);
};

// 0x10 (0x288 - 0x278)
// Class ModioUI.ModioTabButton
class UModioTabButton : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1305[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioButton*                          ClickableRegion;                                   // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioTabButton* GetDefaultObj();

};

// 0x30 (0x2A8 - 0x278)
// Class ModioUI.ModioTabController
class UModioTabController : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1319[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioInputBindingImage*               NavigatePreviousHint;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioTileView*                        TabButtons;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioInputBindingImage*               NavigateNextHint;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCurrentTabChanged;                               // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTabController* GetDefaultObj();

	void SetTabItems(const TArray<class UObject*>& NewItems);
	void SetCurrentTab(int64 TabIndex);
	void PrevTab();
	void NextTab();
	enum class ESlateVisibility GetInputHintVisibility(enum class EModioUIInputMode InputMode);
};

// 0x38 (0x108 - 0xD0)
// Class ModioUI.ModioTableRowStyleContainer
class UModioTableRowStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioTableRowStyle                   Style;                                             // 0xD0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTableRowStyleContainer* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class ModioUI.ModioWrapBox
class UModioWrapBox : public UWrapBox
{
public:

	static class UClass* StaticClass();
	static class UModioWrapBox* GetDefaultObj();

};

// 0x68 (0x1B0 - 0x148)
// Class ModioUI.ModioTagList
class UModioTagList : public UModioWrapBox
{
public:
	int32                                        NumberOfTagsToShow;                                // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1324[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModTag>                  Tags;                                              // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FText                                  ExcessTagCountText;                                // 0x160(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UModioTagWidgetBase>       TagWidgetClass;                                    // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1325[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioTagList* GetDefaultObj();

	void SetTags(const TArray<struct FModioModTag>& NewTags);
};

// 0x20 (0x298 - 0x278)
// Class ModioUI.ModioTagListWidgetBase
class UModioTagListWidgetBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1329[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioRichTextBlock*                   CategoryTextBlock;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            SelectorListScrollBox;                             // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UModioTagSelectorWidgetBase> TagSelectorListTemplate;                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTagListWidgetBase* GetDefaultObj();

	TArray<class FString> GetSelectedTags();
	void ClearSelectedTags();
};

// 0x48 (0x2C0 - 0x278)
// Class ModioUI.ModioTagSelectorWidgetBase
class UModioTagSelectorWidgetBase : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_1333[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioTagInfoUI*                       CachedTagInfo;                                     // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   TagCategoryLabel;                                  // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioButton*                          TagCategoryCollapseButton;                         // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioImage*                           TagCategoryCollapseImage;                          // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioInputBindingImage*               TagCategoryInputHint;                              // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          CategoryVerticalBox;                               // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UModioSelectableTag>       TagWidgetTemplate;                                 // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTagSelectorWidgetBase* GetDefaultObj();

	void OnCheckboxChecked(class UModioSelectableTag* SourceTag, bool bIsChecked);
	void OnCategoryCollapseToggled();
};

// 0x40 (0x2B8 - 0x278)
// Class ModioUI.ModioTagWidgetBase
class UModioTagWidgetBase : public UModioUserWidgetBase
{
public:
	class FText                                  TagTextFormat;                                     // 0x278(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FString                                TagValue;                                          // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   TagText;                                           // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioImage*                           TagBackground;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioUIStyleRef                      TagStyle;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioTagWidgetBase* GetDefaultObj();

	void SetTagValue(const class FString& Category, const class FString& NewValue);
	void SetTagTextFormat(class FText NewFormat);
	struct FModioRichTextStyle GetTagTextStyle();
};

// 0x1D0 (0x2A0 - 0xD0)
// Class ModioUI.ModioTagWidgetStyleContainer
class UModioTagWidgetStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FModioTagWidgetStyle                  Style;                                             // 0xD0(0x1D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTagWidgetStyleContainer* GetDefaultObj();

};

// 0x10 (0x2D0 - 0x2C0)
// Class ModioUI.ModioTextBlock
class UModioTextBlock : public UTextBlock
{
public:
	struct FModioUIStyleRef                      StyleRef;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bOverrideGlobalStyle;                              // 0x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1344[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioTextBlock* GetDefaultObj();

};

// 0x270 (0x340 - 0xD0)
// Class ModioUI.ModioTextWidgetStyleContainer
class UModioTextWidgetStyleContainer : public UModioUIWidgetStyleContainer
{
public:
	struct FTextBlockStyle                       Style;                                             // 0xD0(0x270)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioTextWidgetStyleContainer* GetDefaultObj();

};

// 0x18 (0x3A0 - 0x388)
// Class ModioUI.ModioTileView
class UModioTileView : public UTileView
{
public:
	uint8                                        Pad_134C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         AllowPartialItems;                                 // 0x398(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CenterPanelItems;                                  // 0x399(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bZoomSelectedEntryWidget;                          // 0x39A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  ScrollbarVisibility;                               // 0x39B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_134E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioTileView* GetDefaultObj();

	void SetCenterPanelItems(bool bCenterPanelItems);
	void SetAllowPartialItems(bool bAllowPartialItems);
};

// 0x0 (0x3C0 - 0x3C0)
// Class ModioUI.ModioTreeView
class UModioTreeView : public UTreeView
{
public:

	static class UClass* StaticClass();
	static class UModioTreeView* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class ModioUI.ModioUI4Subsystem
class UModioUI4Subsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1369[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioUIStyleSet*                      LoadedDefaultStyleSet;                             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_136A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentFocusTarget;                                // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_136B[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUI4Subsystem* GetDefaultObj();

	void SetCurrentFocusTarget(class UWidget* CurrentTarget);
	void HandleInputModeChanged(enum class EModioUIInputMode NewDevice);
	class FText GetLocalizedTag(const class FString& InTag);
	class UMaterialInterface* GetInputGlyphMaterialForInputType(const struct FKey& VirtualInput, enum class EModioUIInputMode InputType);
	class UModioUIStyleSet* GetDefaultStyleSet();
	class UWidget* GetCurrentFocusTarget();
	TArray<class FName> GetAllNamedStyleNames();
};

// 0x78 (0x180 - 0x108)
// Class ModioUI.ModioUIAsyncLoader
class UModioUIAsyncLoader : public UWidget
{
public:
	uint8                                        Pad_1377[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioUIAsyncOperationWidgetState CurrentState;                                      // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1378[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UWidget*>            NamedWidgets;                                      // 0x130(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIAsyncLoader* GetDefaultObj();

	void OnRetryRequested();
	void NativeHandleAsyncOperationStateChange(enum class EModioUIAsyncOperationWidgetState NewState);
};

// 0x28 (0x2A0 - 0x278)
// Class ModioUI.ModioUIAsyncLoadingOverlay
class UModioUIAsyncLoadingOverlay : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_137D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIStyleRef                      DialogStyle;                                       // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UModioRichTextButton*                  CancelButton;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioRichTextBlock*                   LoadingText;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BackgroundImage;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIAsyncLoadingOverlay* GetDefaultObj();

	void Close();
};

// 0x8 (0x30 - 0x28)
// Class ModioUI.ModioUIDefaultAuthProvider
class UModioUIDefaultAuthProvider : public UObject
{
public:
	uint8                                        Pad_1386[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUIDefaultAuthProvider* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class ModioUI.ModioUISettings
class UModioUISettings : public UObject
{
public:
	TArray<struct FModioInputMapping>            ModioToProjectInputMappings;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UModioUIStyleSet>       DefaultStyleSet;                                   // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UModioNavigationConfigFactoryBase> NavigationConfigOverride;                          // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   AuthenticationDataProvider;                        // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   InputHintGlyphProvider;                            // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UModioModBrowserParams> BrowserCategoryConfiguration;                      // 0x98(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIInputMode                 InputDevicesForTesting;                            // 0xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePlatformMaterials;                        // 0xC1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCenteredUI;                                 // 0xC2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1391[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxMenuWidth;                                      // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableInputGlyphsCompletely;                     // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1393[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FText>             LocalizedTags;                                     // 0xD0(0x50)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioUISettings* GetDefaultObj();

};

// 0xF48 (0xF78 - 0x30)
// Class ModioUI.ModioUIStyleSet
class UModioUIStyleSet : public UDataAsset
{
public:
	uint8                                        Pad_1395[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    DefaultBackgroundMaterial;                         // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               HideCursorWidgetClass;                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioColorPresets*                    ColorPresetsData;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1397[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FModioUIColorRef>   SerializedColors;                                  // 0xB0(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FModioUIMaterialRef> SerializedMaterials;                               // 0x100(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FName>             PropertyPathToColorPresetMap;                      // 0x150(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class UModioWidgetStyleData*>         WidgetStyleAssets;                                 // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FSlateBrush>        NamedBrushes;                                      // 0x1B0(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UModioNamedGlyphsDataAsset*            NamedGlyphsAsset;                                  // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_139B[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UMaterialInterface*> MaterialInstanceCache;                             // 0x258(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FModioComboBoxStyle                   DefaultComboBoxStyle;                              // 0x2A8(0xCC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UModioMaterialData*                    MaterialData;                                      // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUIStyleSet* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class ModioUI.ModioUniformGridPanel
class UModioUniformGridPanel : public UUniformGridPanel
{
public:

	static class UClass* StaticClass();
	static class UModioUniformGridPanel* GetDefaultObj();

};

// 0x8 (0x280 - 0x278)
// Class ModioUI.ModioUserButton
class UModioUserButton : public UModioUserWidgetBase
{
public:
	uint8                                        Pad_13A0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUserButton* GetDefaultObj();

};

// 0xA0 (0x340 - 0x2A0)
// Class ModioUI.ModioUserProfileButton
class UModioUserProfileButton : public UModioModManagementWidgetBase
{
public:
	uint8                                        Pad_13A4[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioCircularProgressBar*             DownloadProgressIndicator;                         // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioButton*                          ProfileButton;                                     // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioImage*                           ProfileImage;                                      // 0x318(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    GCMaterial;                                        // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    UserBrushMaterial;                                 // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    NoUserBrushMaterial;                               // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ProfileTextureParameterName;                       // 0x338(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUserProfileButton* GetDefaultObj();

	void OnButtonClicked();
};

// 0x60 (0x2D8 - 0x278)
// Class ModioUI.ModioUserWidgetNamedSlotBase
class UModioUserWidgetNamedSlotBase : public UModioUserWidgetBase
{
public:
	TMap<class FName, class UWidget*>            NamedWidgets;                                      // 0x278(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          DesignerSpecifiedSlotNames;                        // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUserWidgetNamedSlotBase* GetDefaultObj();

};

// 0x80 (0x150 - 0xD0)
// Class ModioUI.ModioRoundedBorderStyle
class UModioRoundedBorderStyle : public UModioUIWidgetStyleContainer
{
public:
	struct FModioWidgetBorderStyle               Style;                                             // 0xD0(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioRoundedBorderStyle* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class ModioUI.ModioWidgetCarouselEntryWrapper
class UModioWidgetCarouselEntryWrapper : public UWidget
{
public:

	static class UClass* StaticClass();
	static class UModioWidgetCarouselEntryWrapper* GetDefaultObj();

};

// 0x78 (0x180 - 0x108)
// Class ModioUI.ModioWidgetCarousel
class UModioWidgetCarousel : public UWidget
{
public:
	uint8                                        Pad_13BC[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UModioUserWidgetBase>      EntryWidgetClass;                                  // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioWidgetCarouselEntryWrapper*      LeftCarouselWidget;                                // 0x130(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioWidgetCarouselEntryWrapper*      CenterCarouselWidget;                              // 0x138(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioWidgetCarouselEntryWrapper*      RightCarouselWidget;                               // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModioWidgetCarouselEntryWrapper*      IncomingWidget;                                    // 0x148(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RelativeWidgetSpacing;                             // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetClipping                   EntryWidgetClipping;                               // 0x154(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioWidgetCarouselSizeOverrideType EntryWidgetSizeOverride;                           // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideAbsoluteWidth;                            // 0x15C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntryWidgetWidthOverride;                          // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideAbsoluteHeight;                           // 0x164(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntryWidgetHeightOverride;                         // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideRelativeLayoutWidth;                      // 0x16C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntryWidgetRelativeWidthOverride;                  // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideRelativeLayoutHeight;                     // 0x174(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntryWidgetRelativeHeightOverride;                 // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioWidgetCarousel* GetDefaultObj();

	void SetItems(const TArray<class UObject*>& Items);
	void SetFocusToCurrentElement();
	void ScrollRight();
	void ScrollLeft();
};

// 0x50 (0x80 - 0x30)
// Class ModioUI.ModioWidgetStyleData
class UModioWidgetStyleData : public UDataAsset
{
public:
	TMap<class FName, class USlateWidgetStyleContainerBase*> WidgetStyles;                                      // 0x30(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioWidgetStyleData* GetDefaultObj();

};

// 0x20 (0x158 - 0x138)
// Class ModioUI.ModioWidgetSwitcher
class UModioWidgetSwitcher : public UWidgetSwitcher
{
public:
	FMulticastInlineDelegateProperty_            OnActiveWidgetChanged;                             // 0x138(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13D1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioWidgetSwitcher* GetDefaultObj();

};

}


