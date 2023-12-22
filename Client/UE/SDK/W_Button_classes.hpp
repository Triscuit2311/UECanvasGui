#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x428 (0xFF8 - 0xBD0)
// WidgetBlueprintGeneratedClass W_Button.W_Button_C
class UW_Button_C : public UCommonButtonImplementation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            CustomContents;                                    // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ButtonLabel;                                   // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonLabelText;                                   // 0xBF0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_Style_Buttons                   SelectButtonStyle;                                 // 0xC08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            StyleGuide;                                        // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0xC20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Hovered;                                           // 0xC30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Unhovered;                                         // 0xC40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Pressed;                                           // 0xC50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            DoubleClicked;                                     // 0xC60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        FontSizeOverride;                                  // 0xC70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            DescriptionWidget;                                 // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceUppercaseDescription;                         // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionText;                                   // 0xC88(0x18)(Edit, BlueprintVisible)
	bool                                         StartActive;                                       // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StartActiveDisabled;                               // 0xCA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A67[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0xCA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTextBlockStyle                       Widget_Style;                                      // 0xCA8(0x270)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HoveredButtonStyle;                                // 0xF18(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Released;                                          // 0xFA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0xFB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Deselected;                                        // 0xFC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EHorizontalAlignment              ContentHorizontalAlignment;                        // 0xFD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                ContentVerticalAlignment;                          // 0xFD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A6B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRightMousePressed;                               // 0xFD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightMouseReleased;                              // 0xFE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Button_C* GetDefaultObj();

	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void PassthroughInteraction(bool PassThrough, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void IgnoreInteraction(bool Ignore, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Deselect();
	void Select();
	class UCommonTextBlock* BP_GetButtonLabel();
	void TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters, class FText CallFunc_TruncateText_TruncatedText);
	void DisableInteraction(bool Disable, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidgetSwitcherSlot* CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue, class UWidgetSwitcherSlot* CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue_1);
	void Enable(bool Enable);
	void SetBackgroundTint(const struct FLinearColor& InBackgroundColor);
	void SetButtonText(class FText Text, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void InitContent(bool CallFunc_HasAnyChildren_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ForceClick();
	void ForceDoubleClick();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnDoubleClicked();
	void BP_OnClicked();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void OnCurrentTextStyleChanged();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnPressed();
	void EventOnReleased(class UCommonButtonBase* Button);
	void EventOnPressed(class UCommonButtonBase* Button);
	void RightMousePressed();
	void RightMouseReleased();
	void ExecuteUbergraph_W_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, float K2Node_Event_HeldPercent, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style, bool K2Node_DynamicCast_bSuccess, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_1, const struct FMargin& CallFunc_GetCustomPadding_OutCustomPadding, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& CallFunc_GetButtonPadding_OutButtonPadding, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_2, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_2, bool K2Node_DynamicCast_bSuccess_2, class FText K2Node_Select_Default_1, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class UCommonButtonBase* K2Node_CustomEvent_Button, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_3, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess_3);
	void OnRightMouseReleased__DelegateSignature();
	void OnRightMousePressed__DelegateSignature(class UW_Button_C* Button);
	void Deselected__DelegateSignature(class UW_Button_C* Button);
	void Selected__DelegateSignature(class UW_Button_C* Button);
	void Released__DelegateSignature();
	void DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void Pressed__DelegateSignature();
	void Unhovered__DelegateSignature();
	void Hovered__DelegateSignature(class UW_Button_C* Button);
	void Clicked__DelegateSignature(class UW_Button_C* Button);
};

}


