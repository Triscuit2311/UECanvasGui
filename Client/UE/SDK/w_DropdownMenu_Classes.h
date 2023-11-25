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
	 * WidgetBlueprintGeneratedClass w_DropdownMenu.w_DropdownMenu_C
	 * Size -> 0x01D8 (FullSize[0x0438] - InheritedSize[0x0260])
	 */
	class Uw_DropdownMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                               btn_Clickaway;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                div_Footer;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              SizeBox_1;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          vb_FooterOptions;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          vb_Options;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, class FText>                             Options;                                                 // 0x0290(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		class FString                                                SelectedOption;                                          // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		E_Style_Buttons                                              OptionButtonStyle;                                       // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnOptionSelected;                                        // 0x02F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x02F9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TMap<class UW_Button_C*, class FString>                      OptionsMap;                                              // 0x0308(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class FString, struct FST_DropdownOptions>              FooterOptions;                                           // 0x0358(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<class UW_Button_C*, class FString>                      FooterOptionsMap;                                        // 0x03A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		E_Style_Buttons                                              FooterButtonStyle;                                       // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnFooterOptionSelected;                                  // 0x0400(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0401(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnOptionHovered;                                         // 0x0410(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0411(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnClickaway;                                             // 0x0420(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x0421(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		float                                                        DropdownMaxHeigh;                                        // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      CharacterLimit;                                          // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Construct();
		void PopulateOptions(TMap<class FString, class FText> Options);
		void OptionClicked(class UW_Button_C* Button);
		void FooterOptionClicked(class UW_Button_C* Button);
		void OptionHovered(class UW_Button_C* Button);
		void BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_w_DropdownMenu(int32_t EntryPoint);
		void OnClickaway__DelegateSignature();
		void OnOptionHovered__DelegateSignature(const class FString& OptionID);
		void OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
		void OnOptionSelected__DelegateSignature(const class FString& OptionID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
