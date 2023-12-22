#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x510 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C
class UW_Loadout_PresetDropdown_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_ClearPresetWarning;                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ModifiedPreset;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_PresetModified;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_45;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dropdown_C*                         PresetDropdown;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             LoadoutPresetOptions;                              // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSavedLoadout                         Active_Loadout;                                    // 0x2E0(0x188)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSaveModifiedPresetClicked;                       // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSaveNewPresetClicked;                            // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDeletePresetClicked;                             // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_DropdownOptions                   Drop_LoadoutPreset_DeleteFooter;                   // 0x498(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPresetSelected;                                  // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDefaultPresetSelected;                           // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                CurrentPreset;                                     // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPresetHovered;                                   // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Loadout_Preset_Preview_C*           PreviewWidget;                                     // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPresetMenuClosed;                                // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Loadout_PresetDropdown_C* GetDefaultObj();

	struct FSavedLoadout GetPreset(const class FString& Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue);
	void ApplySelectedPreset(const class FString& Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue);
	void SetSelection(const class FString& OptionID);
	void SetPresetModified(bool Modified, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_StringNotEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulatePresets(const class FString& Temp_string_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable, bool CallFunc_IsCurrentPresetDirty_IsDirty, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Construct();
	void BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void OnInitialized();
	void PresetsChanged();
	void PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature(const class FString& OptionID);
	void ExecuteUbergraph_W_Loadout_PresetDropdown(int32 EntryPoint, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& K2Node_ComponentBoundEvent_OptionID_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FName K2Node_Event_OptionNameID, bool CallFunc_StringNotEmpty_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_2, class UW_Loadout_C* K2Node_Event_LoadoutWidget, bool CallFunc_StringIsEmpty_ReturnValue, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, const class FString& K2Node_CustomEvent_Name, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_ComponentBoundEvent_OptionID_1, class UW_Dropdown_C* K2Node_ComponentBoundEvent_TriggeringDropdown, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_ComponentBoundEvent_OptionID, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue);
	void OnPresetMenuClosed__DelegateSignature();
	void OnPresetHovered__DelegateSignature(const struct FSavedLoadout& SavedLoadout);
	void OnDefaultPresetSelected__DelegateSignature();
	void OnPresetSelected__DelegateSignature(const class FString& PresetName);
	void OnDeletePresetClicked__DelegateSignature(const class FString& PresetName);
	void OnSaveNewPresetClicked__DelegateSignature();
	void OnSaveModifiedPresetClicked__DelegateSignature(const class FString& ModifiedPreset);
};

}


