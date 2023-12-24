#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x548 - 0x320)
// WidgetBlueprintGeneratedClass W_PageWrapper.W_PageWrapper_C
class UW_PageWrapper_C : public UPageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRefresh;                                       // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAspectRatioConstraintBox*             AspectBox;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_81;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_60;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_AnimatedHeaderFillLine;                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FooterFade;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderFillLine;                                // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderFillLine_Unconstrained;                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_headerLine;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderLine_Refresh;                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            PageContent;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageHeader_Carousel_C*              PageHeaderNav;                                     // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_HeaderText;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PageTagline;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Vignette;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     W_ScreenFooter;                                    // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tagline;                                           // 0x3C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  HeaderText;                                        // 0x3D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         DesignTime;                                        // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNavOptionSelected;                               // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class FText>               NavOptionMap;                                      // 0x408(0x50)(Edit, BlueprintVisible)
	bool                                         NavIgnoreGamepad;                                  // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Revealed;                                          // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUseGamepad;                                       // 0x45A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShowVignette;                                     // 0x45B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_40FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CurrentNavOptions;                                 // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bUseFixedAspect;                                   // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FixedAspectRatio;                                  // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPreviewFixedAspect;                               // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreviewAspectRatio;                                // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FScreenFooterEntry>            FooterEntriesArray;                                // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        LineMax;                                           // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4102[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynMatLine;                                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFooterButtonClicked;                             // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             ViewportSize;                                      // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBackgroundBlur;                                   // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bApplyAlphaToBlur;                                 // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_4103[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurStrength;                                      // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VignetteColor;                                     // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        VignetteIntensity;                                 // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4104[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynMatVignette;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LineMarginWidth;                                   // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectedNavOption;                                 // 0x4E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4105[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentFocus;                                      // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FScreenFooterEntry> FooterEntries;                                     // 0x4F8(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_PageWrapper_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void BackPage(bool* Handled);
	void HideRedLine();
	void SetFooterFocusByID(const class FString& ID, class UWidget* CallFunc_SetFocusByID_FocusedEntryButton, bool CallFunc_IsValid_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void GetCurrentNavSelection(class FName* SelectedNavOption);
	void UnhideFooterEntryByIndex(int32 Index);
	void UnhideFooterEntryByID(const class FString& ID);
	void HideFooterEntryByIndex(int32 Index);
	void HideFooterEntryByID(const class FString& ID);
	bool IsAspectConstrained(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	float GetLineWidthByConstraint(float RelativeScreenLength, float OpenSpace, bool CallFunc_IsAspectConstrained_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void UpdateVignette(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void ClearTagline();
	void ClearHeadline();
	void InitializeHeader();
	void InitializeNavigation();
	void InitializeMaterials(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void UpdateBackgroundBlur();
	void AddFooterEntry(int32 InsertAtIndex, class FString& EntryID, const struct FScreenFooterEntry& ScreenFooterEntry);
	void SetFooterEntries(TMap<class FString, struct FScreenFooterEntry> FooterEntries, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void HideFooter();
	void ShowFooter();
	void InitializeFooter();
	void SetAspectConstraints();
	void UpdateCurrentNavOptions(TArray<class FName>& CallFunc_Map_Keys_Keys);
	void ToggleNavVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void RemoveHeaderNavOption(class FName OptionNameID, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
	void EnableHeaderNavOption(class FName OptionNameID);
	void DisableHeaderNavOption(class FName OptionNameID);
	void SetHeaderNavSelection(class FName OptionNameID);
	void AddHeaderNavOption(class FName OptionNameID, class FText OptionLabelText, bool DefaultSelection);
	void SetHeaderNavOptions(TMap<class FName, class FText> OptionMap, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateHeader(class FText NewHeader, class FText NewTagline, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_TextIsNotEmpty_NotEmpty_1);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_PageHeader_W_PageHeader_Carousel_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(class FName OptionID);
	void Reveal(float Delay);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_2_OnFooterEntriesUpdated__DelegateSignature();
	void BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_3_OnFooterEntryClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnInitialized();
	void Destruct();
	void Animating();
	void ExecuteUbergraph_W_PageWrapper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_ComponentBoundEvent_OptionID, float K2Node_Event_Delay, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UW_ScreenFooterEntry_C* K2Node_ComponentBoundEvent_FooterEntry, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const class FString& CallFunc_GetButtonID_ButtonID, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_GetLineWidthByConstraint_ReturnValue);
	void OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
};

}


