#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x518 - 0x4F8)
// Class CommonUI.AnalogSlider
class UAnalogSlider : public USlider
{
public:
	FMulticastInlineDelegateProperty_            OnAnalogCapture;                                   // 0x4F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D01[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnalogSlider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonActionHandlerInterface
class ICommonActionHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICommonActionHandlerInterface* GetDefaultObj();

};

// 0x218 (0x320 - 0x108)
// Class CommonUI.CommonActionWidget
class UCommonActionWidget : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ProgressMaterialBrush;                             // 0x118(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  ProgressMaterialParam;                             // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconRimBrush;                                      // 0x1A8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           InputActions;                                      // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D1F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ProgressDynamicMaterial;                           // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D20[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonActionWidget* GetDefaultObj();

	void SetInputActions(const TArray<struct FDataTableRowHandle>& NewInputActions);
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	class FText GetDisplayText();
};

// 0x28 (0x288 - 0x260)
// Class CommonUI.CommonUserWidget
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                         bConsumePointerInput;                              // 0x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D2E[0x27];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUserWidget* GetDefaultObj();

	void SetConsumePointerInput(bool bInConsumePointerInput);
};

// 0x98 (0x320 - 0x288)
// Class CommonUI.CommonActivatableWidget
class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                         bAutoActivate;                                     // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBackHandler;                                    // 0x289(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsActivationFocus;                          // 0x28A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsModal;                                          // 0x28B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoRestoreFocus;                                 // 0x28C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetVisibilityOnActivated;                         // 0x28D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESlateVisibility                  ActivatedVisibility;                               // 0x28E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetVisibilityOnDeactivated;                       // 0x28F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESlateVisibility                  DeactivatedVisibility;                             // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnWidgetActivated;                              // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnWidgetDeactivated;                            // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	bool                                         bIsActive;                                         // 0x2B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D4E[0x67];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonActivatableWidget* GetDefaultObj();

	bool IsActivated();
	void DeactivateWidget();
	bool BP_OnHandleBackAction();
	void BP_OnDeactivated();
	void BP_OnActivated();
	class UWidget* BP_GetDesiredFocusTarget();
	void ActivateWidget();
};

// 0x100 (0x208 - 0x108)
// Class CommonUI.CommonActivatableWidgetContainerBase
class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x109(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D62[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionDuration;                                // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonActivatableWidget*>      WidgetList;                                        // 0x110(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UCommonActivatableWidget*              DisplayedWidget;                                   // 0x120(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       GeneratedWidgetsPool;                              // 0x128(0x80)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D63[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetContainerBase* GetDefaultObj();

	void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
	class UCommonActivatableWidget* GetActiveWidget();
	void ClearWidgets();
	class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
};

// 0x10 (0x218 - 0x208)
// Class CommonUI.CommonActivatableWidgetStack
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
public:
	TSubclassOf<class UCommonActivatableWidget>  RootContentWidgetClass;                            // 0x208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*              RootContentWidget;                                 // 0x210(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetStack* GetDefaultObj();

};

// 0x0 (0x208 - 0x208)
// Class CommonUI.CommonActivatableWidgetQueue
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
public:

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetQueue* GetDefaultObj();

};

// 0x58 (0x190 - 0x138)
// Class CommonUI.CommonAnimatedSwitcher
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	uint8                                        Pad_D91[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x150(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x151(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D94[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionDuration;                                // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D95[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonAnimatedSwitcher* GetDefaultObj();

	void SetDisableTransitionAnimation(bool bDisableAnimation);
	bool HasWidgets();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};

// 0x0 (0x190 - 0x190)
// Class CommonUI.CommonActivatableWidgetSwitcher
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetSwitcher* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class CommonUI.CommonBorderStyle
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                           Background;                                        // 0x28(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonBorderStyle* GetDefaultObj();

	void GetBackgroundBrush(struct FSlateBrush* Brush);
};

// 0x20 (0x290 - 0x270)
// Class CommonUI.CommonBorder
class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>        Style;                                             // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReducePaddingBySafezone;                          // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               MinimumPadding;                                    // 0x27C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonBorder* GetDefaultObj();

	void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
};

// 0x10 (0x1E8 - 0x1D8)
// Class CommonUI.CommonBoundActionBar
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	TSubclassOf<class UCommonBoundActionButton>  ActionButtonClass;                                 // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayOwningPlayerActionsOnly;                   // 0x1E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DB1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonBoundActionBar* GetDefaultObj();

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
};

// 0x938 (0xBC0 - 0x288)
// Class CommonUI.CommonButtonBase
class UCommonButtonBase : public UCommonUserWidget
{
public:
	int32                                        MinWidth;                                          // 0x288(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x28C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        Style;                                             // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideInputAction;                                  // 0x298(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x2A0(0x18)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x2B8(0x18)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bApplyAlphaOnDisable : 1;                          // Mask: 0x1, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSelectable : 1;                                   // Mask: 0x2, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldSelectUponReceivingFocus : 1;               // Mask: 0x4, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInteractableWhenSelected : 1;                     // Mask: 0x8, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bToggleable : 1;                                   // Mask: 0x10, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisplayInputActionWhenNotInteractable : 1;        // Mask: 0x20, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideInputActionWithKeyboard : 1;                  // Mask: 0x40, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldUseFallbackDefaultInputAction : 1;          // Mask: 0x80, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E8D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EButtonClickMethod                ClickMethod;                                       // 0x2D2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x2D3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x2D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputPriority;                                     // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC5[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectedChangedBase;                             // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseHovered;                               // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseUnhovered;                             // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBasePressed;                               // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseReleased;                              // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_ED4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsPersistentBinding;                              // 0x374(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputMode                  InputModeOverride;                                 // 0x375(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EDD[0x32];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              SingleMaterialStyleMID;                            // 0x3A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          NormalStyle;                                       // 0x3B0(0x278)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          SelectedStyle;                                     // 0x628(0x278)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          DisabledStyle;                                     // 0x8A0(0x278)(NativeAccessSpecifierPrivate)
	uint8                                        bStopDoubleClickPropagation : 1;                   // Mask: 0x1, PropSize: 0x10xB18(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_90 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EE3[0x9F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActionWidget*                   InputActionWidget;                                 // 0xBB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonButtonBase* GetDefaultObj();

	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow);
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow);
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetPressedSoundOverride(class USoundBase* Sound);
	void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetIsFocusable(bool bInIsFocusable);
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam);
	void SetHoveredSoundOverride(class USoundBase* Sound);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetIsFocusable();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void DisableButtonWithReason(class FText& DisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnHovered();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};

// 0x10 (0xBD0 - 0xBC0)
// Class CommonUI.CommonBoundActionButton
class UCommonBoundActionButton : public UCommonButtonBase
{
public:
	class UCommonTextBlock*                      Text_ActionName;                                   // 0xBC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F04[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonBoundActionButton* GetDefaultObj();

	void OnUpdateInputAction();
};

// 0x558 (0x580 - 0x28)
// Class CommonUI.CommonButtonStyle
class UCommonButtonStyle : public UObject
{
public:
	bool                                         bSingleMaterial;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SingleMaterialBrush;                               // 0x30(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBase;                                        // 0xB8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalHovered;                                     // 0x140(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalPressed;                                     // 0x1C8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedBase;                                      // 0x250(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedHovered;                                   // 0x2D8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedPressed;                                   // 0x360(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x3E8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x470(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomPadding;                                     // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x490(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x494(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalTextStyle;                                   // 0x498(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalHoveredTextStyle;                            // 0x4A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalPressedTextStyle;                            // 0x4A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedTextStyle;                                 // 0x4B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedHoveredTextStyle;                          // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedPressedTextStyle;                          // 0x4C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DisabledTextStyle;                                 // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x4D0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedPressedSlateSound;                         // 0x4E8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  DisabledPressedSlateSound;                         // 0x508(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x528(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedHoveredSlateSound;                         // 0x540(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  DisabledHoveredSlateSound;                         // 0x560(0x20)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonButtonStyle* GetDefaultObj();

	class UCommonTextStyle* GetSelectedTextStyle();
	class UCommonTextStyle* GetSelectedPressedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	class UCommonTextStyle* GetNormalPressedTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};

// 0x60 (0x488 - 0x428)
// Class CommonUI.CommonButtonInternalBase
class UCommonButtonInternalBase : public UButton
{
public:
	uint8                                        Pad_F8D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDoubleClicked;                                   // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinWidth;                                          // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bButtonEnabled;                                    // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractionEnabled;                               // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8F[0x26];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonButtonInternalBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonWidgetGroupBase
class UCommonWidgetGroupBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCommonWidgetGroupBase* GetDefaultObj();

	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};

// 0xE8 (0x110 - 0x28)
// Class CommonUI.CommonButtonGroupBase
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedButtonBaseChanged;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1007[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoveredButtonBaseChanged;                        // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1008[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_100B[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_100E[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionCleared;                                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1010[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSelectionRequired;                                // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1011[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonButtonGroupBase* GetDefaultObj();

	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int32 ButtonIndex);
	void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
	void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
	void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
	void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
	bool HasAnyButtons();
	int32 GetSelectedButtonIndex();
	class UCommonButtonBase* GetSelectedButtonBase();
	int32 GetHoveredButtonIndex();
	int32 GetButtonCount();
	class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index);
	int32 FindButtonIndex(class UCommonButtonBase* ButtonToFind);
	void DeselectAll();
};

// 0xD8 (0x360 - 0x288)
// Class CommonUI.CommonCarousel
class UCommonCarousel : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnNextHandled;                                     // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreviousHandled;                                 // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NextOptionInputActionData;                         // 0x2B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousOptionInputActionData;                     // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x2D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowWrap;                                        // 0x2D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_105F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultSelection;                                  // 0x2DC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1060[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FText>               OptionMap;                                         // 0x2E8(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1061[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OptionIDs;                                         // 0x340(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1062[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonCarousel* GetDefaultObj();

	void SetSelection(class FName OptionNameID);
	void SetOptions(TMap<class FName, class FText> NewOptions);
	void SetOptionLabelTextByID(class FName OptionNameID, class FText NewLabelText);
	void SetListeningForInput(bool bShouldListen);
	void RemoveOption(class FName OptionNameID);
	void OptionSelected(class FName OptionNameID);
	void OnPreviousHandled__DelegateSignature(class FName OptionID);
	void OnOptionSelected__DelegateSignature(class FName OptionID);
	void OnNextHandled__DelegateSignature(class FName OptionID);
	void NavigatePrevTerminated(bool Terminated);
	void NavigateNextTerminated(bool Terminated);
	void HandlePreviousInputAction(bool* bPassThrough);
	void HandleNextInputAction(bool* bPassThrough);
	class FName GetSelection();
	int32 GetOptionCount();
	class FName GetOptionAtIndex(int32 Index);
	void ClearOptions();
	void AddOption(class FName OptionNameID, class FText LabelText, bool DefaultSelection);
};

// 0x10 (0x280 - 0x270)
// Class CommonUI.CommonCustomNavigation
class UCommonCustomNavigation : public UBorder
{
public:
	FDelegateProperty_                           OnNavigationEvent;                                 // 0x270(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonCustomNavigation* GetDefaultObj();

};

// 0x28 (0x2E8 - 0x2C0)
// Class CommonUI.CommonTextBlock
class UCommonTextBlock : public UTextBlock
{
public:
	TSubclassOf<class UCommonTextStyle>          Style;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x2D0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x2D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1083[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MobileFontSizeMultiplier;                          // 0x2D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1084[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonTextBlock* GetDefaultObj();

	void SetWrapTextWidth(int32 InWrapTextAt);
	void SetTextCase(bool bUseAllCaps);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
	void ResetScrollState();
};

// 0x40 (0x328 - 0x2E8)
// Class CommonUI.CommonDateTimeTextBlock
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_10A3[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonDateTimeTextBlock* GetDefaultObj();

	void SetTimespanValue(const struct FTimespan& InTimespan);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
	void SetCountDownCompletionText(class FText InCompletionText);
	struct FDateTime GetDateTime();
};

// 0x40 (0x3A0 - 0x360)
// Class CommonUI.CommonGameViewportClient
class UCommonGameViewportClient : public UGameViewportClient
{
public:
	uint8                                        Pad_10A9[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonGameViewportClient* GetDefaultObj();

};

// 0x0 (0x880 - 0x880)
// Class CommonUI.CommonHierarchicalScrollBox
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static class UClass* StaticClass();
	static class UCommonHierarchicalScrollBox* GetDefaultObj();

};

// 0xC8 (0x2D8 - 0x210)
// Class CommonUI.CommonLazyImage
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x210(0x88)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  MaterialTextureParamName;                          // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10D3[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonLazyImage* GetDefaultObj();

	void SetMaterialTextureParamName(class FName TextureParamName);
	void SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
	void SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
	void SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
	bool IsLoading();
};

// 0x108 (0x210 - 0x108)
// Class CommonUI.CommonLazyWidget
class UCommonLazyWidget : public UWidget
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x108(0x88)(Edit, NativeAccessSpecifierPrivate)
	class UUserWidget*                           Content;                                           // 0x190(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10EB[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10EC[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonLazyWidget* GetDefaultObj();

	void SetLazyContent(TSoftClassPtr<class UUserWidget> SoftWidget);
	bool IsLoading();
	class UUserWidget* GetContent();
};

// 0x0 (0x368 - 0x368)
// Class CommonUI.CommonListView
class UCommonListView : public UListView
{
public:

	static class UClass* StaticClass();
	static class UCommonListView* GetDefaultObj();

	void SetEntrySpacing(float InEntrySpacing);
};

// 0x28 (0x60 - 0x38)
// Class CommonUI.LoadGuardSlot
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1101[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadGuardSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x110 (0x230 - 0x120)
// Class CommonUI.CommonLoadGuard
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x120(0x88)(Edit, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              ThrobberAlignment;                                 // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1112[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ThrobberPadding;                                   // 0x1AC(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingText;                                       // 0x1C0(0x18)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       SpinnerMaterialPath;                               // 0x1F0(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1116[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonLoadGuard* GetDefaultObj();

	void SetLoadingText(class FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, FDelegateProperty_& OnAssetLoaded);
};

// 0xA0 (0x388 - 0x2E8)
// Class CommonUI.CommonNumericTextBlock
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	FMulticastInlineDelegateProperty_            OnInterpolationStartedEvent;                       // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationUpdatedEvent;                       // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOutroEvent;                                      // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationEndedEvent;                         // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentNumericValue;                               // 0x328(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0x32C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1139[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonNumberFormattingOptions        FormattingSpecification;                           // 0x330(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutInterpolationExponent;                      // 0x344(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationUpdateInterval;                       // 0x348(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostInterpolationShrinkDuration;                   // 0x34C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerformSizeInterpolation;                          // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPercentage;                                      // 0x351(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_113B[0x36];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonNumericTextBlock* GetDefaultObj();

	void SetNumericType(enum class ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
	void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonPoolableWidgetInterface
class ICommonPoolableWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICommonPoolableWidgetInterface* GetDefaultObj();

	void OnReleaseToPool();
	void OnAcquireFromPool();
};

// 0x38 (0x6B0 - 0x678)
// Class CommonUI.CommonRichTextBlock
class UCommonRichTextBlock : public URichTextBlock
{
public:
	enum class ERichTextInlineIconDisplayMode    InlineIconDisplayMode;                             // 0x678(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTintInlineIcon;                                   // 0x679(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1146[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          DefaultTextStyleOverrideClass;                     // 0x680(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MobileTextBlockScale;                              // 0x688(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1149[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x690(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x698(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_114B[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonRichTextBlock* GetDefaultObj();

};

// 0x58 (0xC18 - 0xBC0)
// Class CommonUI.CommonRotator
class UCommonRotator : public UCommonButtonBase
{
public:
	uint8                                        Pad_1173[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRotated;                                         // 0xBD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1176[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      MyText;                                            // 0xBF8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1178[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonRotator* GetDefaultObj();

	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int32 InValue);
	void PopulateTextLabels(const TArray<class FText>& Labels);
	class FText GetSelectedText();
	int32 GetSelectedIndex();
	void BP_OnOptionsPopulated(int32 Count);
	void BP_OnOptionSelected(int32 Index);
};

// 0xD0 (0x358 - 0x288)
// Class CommonUI.CommonTabListWidgetBase
class UCommonTabListWidgetBase : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnTabSelected;                                     // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonCreation;                               // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonRemoval;                                // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NextTabInputActionData;                            // 0x2B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousTabInputActionData;                        // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x2D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1216[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;                                    // 0x2DC(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1217[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroupBase*                TabButtonGroup;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_121A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                // 0x2F8(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_121B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonTabListWidgetBase* GetDefaultObj();

	void SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(class FName TabNameID, bool bEnable);
	void SetTabEnabled(class FName TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
	bool SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(class FName TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(class FName TabId);
	void OnTabButtonRemoval__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void OnTabButtonCreation__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	class FName GetTabIdAtIndex(int32 Index);
	int32 GetTabCount();
	class UCommonButtonBase* GetTabButtonBaseByID(class FName TabNameID);
	class FName GetSelectedTabId();
	class UCommonAnimatedSwitcher* GetLinkedSwitcher();
	class FName GetActiveTab();
	void DisableTabWithReason(class FName TabNameID, class FText& Reason);
};

// 0x128 (0x150 - 0x28)
// Class CommonUI.CommonTextStyle
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x28(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x84(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesDropShadow;                                   // 0x94(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset;                                      // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StrikeBrush;                                       // 0xC0(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        LineHeightPercentage;                              // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1242[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonTextStyle* GetDefaultObj();

	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};

// 0x18 (0x40 - 0x28)
// Class CommonUI.CommonTextScrollStyle
class UCommonTextScrollStyle : public UObject
{
public:
	float                                        Speed;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDelay;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDelay;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDelay;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1246[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonTextScrollStyle* GetDefaultObj();

};

// 0x0 (0x388 - 0x388)
// Class CommonUI.CommonTileView
class UCommonTileView : public UTileView
{
public:

	static class UClass* StaticClass();
	static class UCommonTileView* GetDefaultObj();

};

// 0x0 (0x3C0 - 0x3C0)
// Class CommonUI.CommonTreeView
class UCommonTreeView : public UTreeView
{
public:

	static class UClass* StaticClass();
	static class UCommonTreeView* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class CommonUI.CommonUIActionRouterBase
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_124D[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUIActionRouterBase* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class CommonUI.CommonUIEditorSettings
class UCommonUIEditorSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonTextStyle>        TemplateTextStyle;                                 // 0x28(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonButtonStyle>      TemplateButtonStyle;                               // 0x50(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonBorderStyle>      TemplateBorderStyle;                               // 0x78(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_124F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUIEditorSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class CommonUI.CommonUIInputSettings
class UCommonUIInputSettings : public UObject
{
public:
	bool                                         bLinkCursorToGamepadFocus;                         // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1255[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UIActionProcessingPriority;                        // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUIInputAction>                InputActions;                                      // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FUIInputAction>                ActionOverrides;                                   // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FCommonAnalogCursorSettings           AnalogCursorSettings;                              // 0x50(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1257[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUIInputSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonUILibrary
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCommonUILibrary* GetDefaultObj();

	class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonUIRichTextData
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                            InlineIconSet;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonUIRichTextData* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class CommonUI.CommonUISettings
class UCommonUISettings : public UObject
{
public:
	bool                                         bAutoLoadData;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1261[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                DefaultImageResourceObject;                        // 0x30(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     DefaultThrobberMaterial;                           // 0x58(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonUIRichTextData>   DefaultRichTextDataClass;                          // 0x80(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1263[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DefaultImageResourceObjectInstance;                // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DefaultThrobberMaterialInstance;                   // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DefaultThrobberBrush;                              // 0xC0(0x88)(Transient, NativeAccessSpecifierPrivate)
	class UCommonUIRichTextData*                 RichTextDataInstance;                              // 0x148(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonUISettings* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class CommonUI.CommonUISubsystemBase
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_126D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUISubsystemBase* GetDefaultObj();

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, class FName& GamepadName);
};

// 0x110 (0x218 - 0x108)
// Class CommonUI.CommonVideoPlayer
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                          Video;                                             // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x110(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                             VideoMaterial;                                     // 0x120(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x128(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           VideoBrush;                                        // 0x130(0x88)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1272[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonVideoPlayer* GetDefaultObj();

};

// 0x28 (0x158 - 0x130)
// Class CommonUI.CommonVisibilitySwitcher
class UCommonVisibilitySwitcher : public UOverlay
{
public:
	enum class ESlateVisibility                  ShownVisibility;                                   // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_128F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActiveWidgetIndex;                                 // 0x134(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivateSlot;                                 // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActivateFirstSlotOnAdding;                        // 0x139(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1291[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonVisibilitySwitcher* GetDefaultObj();

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void IncrementActiveWidgetIndex(bool bAllowWrapping);
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
	void DecrementActiveWidgetIndex(bool bAllowWrapping);
	void DeactivateVisibleSlot();
	void ActivateVisibleSlot();
};

// 0x10 (0x68 - 0x58)
// Class CommonUI.CommonVisibilitySwitcherSlot
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_1294[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonVisibilitySwitcherSlot* GetDefaultObj();

};

// 0x58 (0x2E8 - 0x290)
// Class CommonUI.CommonVisibilityWidgetBase
class UCommonVisibilityWidgetBase : public UCommonBorder
{
public:
	TMap<class FName, bool>                      VisibilityControls;                                // 0x290(0x50)(Edit, EditFixedSize, NativeAccessSpecifierPublic)
	bool                                         bShowForGamepad;                                   // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x2E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x2E2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x2E3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x2E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1297[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonVisibilityWidgetBase* GetDefaultObj();

	TArray<class FName> GetRegisteredPlatforms();
};

// 0x18 (0x170 - 0x158)
// Class CommonUI.CommonVisualAttachment
class UCommonVisualAttachment : public USizeBox
{
public:
	struct FVector2D                             ContentAnchor;                                     // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonVisualAttachment* GetDefaultObj();

};

// 0x40 (0x160 - 0x120)
// Class CommonUI.CommonWidgetCarousel
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCurrentPageIndexChanged;                         // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AE[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonWidgetCarousel* GetDefaultObj();

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};

// 0x48 (0x150 - 0x108)
// Class CommonUI.CommonWidgetCarouselNavBar
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	TSubclassOf<class UCommonButtonBase>         ButtonWidgetType;                                  // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonWidgetCarousel*                 LinkedCarousel;                                    // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                ButtonGroup;                                       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonButtonBase*>             Buttons;                                           // 0x140(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonWidgetCarouselNavBar* GetDefaultObj();

	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
	void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
};

}


