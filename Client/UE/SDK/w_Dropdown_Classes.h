#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * WidgetBlueprintGeneratedClass w_Dropdown.w_Dropdown_C
	 * Size -> 0x0188 (FullSize[0x03E8] - InheritedSize[0x0260])
	 */
	class Uw_Dropdown_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Dropdown;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                           DropdownMenuAnchor;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_Arrow;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               Label;                                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Label;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Placeholder;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Selection;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  LabelText;                                               // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                  PlaceholderText;                                         // 0x02C0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<class FString, class FText>                             Options;                                                 // 0x02D8(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		class FString                                                SelectedOption;                                          // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnOptionSelected;                                        // 0x0338(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0339(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		E_Style_Buttons                                              OptionButtonStyle;                                       // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FST_DropdownOptions>              FooterOptions;                                           // 0x0350(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		E_Style_Buttons                                              FooterOptionButtonStyle;                                 // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnFooterOptionSelected;                                  // 0x03A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x03A9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         Hidden;                                                  // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnOptionHovered;                                         // 0x03C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x03C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnMenuClosed;                                            // 0x03D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x03D1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		float                                                        MaxDropdownHeight;                                       // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CharacterLimit;                                          // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearSelection();
		void DisableInteraction(bool Disable);
		void CloseMenu();
		void SetLabelText(const class FText& LabelText);
		void UpdateLabelText();
		void SetSelection(const class FString& OptionID);
		void SetOptions(TMap<class FString, class FText> Options);
		void AddOption(const class FString& OptionID, const class FText& OptionText);
		class UUserWidget* On_DropdownMenuAnchor_GetUserMenuContent_1();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void OptionSelected(const class FString& OptionID);
		void FooterOptionSelected(const class FString& OptionID);
		void Reveal(float Delay);
		void Hide(float Delay, bool Collapse);
		void Collapse();
		void OptionHovered(const class FString& OptionID);
		void Clickaway();
		void ExecuteUbergraph_w_Dropdown(int32_t EntryPoint);
		void OnMenuClosed__DelegateSignature(class Uw_Dropdown_C* TriggeringDropdown);
		void OnOptionHovered__DelegateSignature(const class FString& OptionID);
		void OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
		void OnOptionSelected__DelegateSignature(const class FString& OptionID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
