#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass W_SettingLabel.W_SettingLabel_C
class UW_SettingLabel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           Button;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SettingName;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BindText;                                          // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTextBlock*                            DescriptionTextWidget;                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnLabelHovered;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLabelUnhovered;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_StandardCheckbox_C*                 CopyDescriptionFromCheckbox;                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_StandardSlider_C*                   CopyDescriptionFromSlider;                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_StandardCombobox_New_C*             CopyDescriptionFromCombobox;                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                            SettingLabelHoveredSound;                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SettingLabel_C* GetDefaultObj();

	void CopyFromCombo(bool CallFunc_IsValid_ReturnValue);
	void CopyFromSlider(bool CallFunc_IsValid_ReturnValue);
	void CopyFromCheckbox(bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void ExecuteUbergraph_W_SettingLabel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void OnLabelUnhovered__DelegateSignature();
	void OnLabelHovered__DelegateSignature();
};

}


