#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x448 - 0x260)
// WidgetBlueprintGeneratedClass w_Dropdown.w_Dropdown_C
class UW_Dropdown_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Dropdown;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          DropdownItemsMenu;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           DropdownMenuAnchor;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Arrow;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Label;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Label;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Placeholder;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Selection;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  PlaceholderText;                                   // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class FString, class FText>             Options;                                           // 0x2E0(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                SelectedOption;                                    // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class E_Style_Buttons                   OptionButtonStyleOld;                              // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FST_DropdownOptions> FooterOptions;                                     // 0x358(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_Style_Buttons                   FooterOptionButtonStyle;                           // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFooterOptionSelected;                            // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Hidden;                                            // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnOptionHovered;                                   // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionUnhovered;                                 // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMenuClosed;                                      // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        MaxDropdownHeight;                                 // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterLimit;                                    // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OptionButtonStyle;                                 // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFooterOptionHovered;                             // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterOptionUnhovered;                           // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Dropdown_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void EnableMenuInputConsume();
	void DisableMenuInputConsume();
	void OpenMenu(bool CallFunc_IsOpen_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void RemoveFooterOption(const class FString& ID, bool CallFunc_Map_Remove_ReturnValue);
	void AddFooterOption(const class FString& ID, const struct FST_DropdownOptions& OptionData);
	void SetFooterOptions(TMap<class FString, struct FST_DropdownOptions> FooterOptions);
	void ClearFooterOptions();
	void ClearOptions();
	void OnDropdown_Menu_Desired_Focus_Set(class UW_Button_C* DesiredFocus);
	void SetSelectionByIndex(int32 Index, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item);
	void ClearSelection();
	void DisableInteraction(bool Disable);
	void CloseMenu(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsOpen_ReturnValue);
	void SetLabelText(class FText LabelText);
	void UpdateLabelText(const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue);
	void SetSelection(const class FString& OptionID, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetOptions(TMap<class FString, class FText> Options);
	void AddOption(const class FString& OptionID, class FText OptionText);
	class UUserWidget* On_DropdownMenuAnchor_GetUserMenuContent_0(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_DropdownMenu_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void OptionSelected(const class FString& OptionID);
	void FooterOptionSelected(const class FString& OptionID);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void Collapse();
	void OptionHovered(const class FString& OptionID);
	void Clickaway();
	void BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature();
	void OptionUnhovered();
	void SetInputMode(bool IsGamepad);
	void FooterOptionHovered(const class FString& OptionID);
	void FooterOptionUnhovered();
	void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void ExecuteUbergraph_w_Dropdown(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const class FString& K2Node_CustomEvent_OptionID_3, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& K2Node_CustomEvent_OptionID_2, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FName K2Node_Event_PageName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OptionID_1, bool K2Node_Event_IsGamepad, const class FString& K2Node_CustomEvent_OptionID, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(class UW_Dropdown_C* Dropdown);
	void OnFooterOptionUnhovered__DelegateSignature();
	void OnFooterOptionHovered__DelegateSignature(const class FString& OptionID);
	void OnOptionUnhovered__DelegateSignature();
	void OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown);
	void OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
	void OnOptionSelected__DelegateSignature(const class FString& OptionID);
};

}


