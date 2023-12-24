#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x440 - 0x338)
// WidgetBlueprintGeneratedClass W_Overview_V2.W_Overview_V2_C
class UW_Overview_V2_C : public UOverview_V2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_ArmorOverviewSlot_C*                ArmorOverview;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ArmorMunitions;                                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_TacticalGear;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_UnitSelect_C*               CharacterSelect;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   Headwear;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Loadout;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   LongTactical;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SmallSlot_v2_C*                     PresetName;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   Primary;                                           // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   Secondary;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_CurrentPreset_C*            W_Loadout_CurrentPreset;                           // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_PresetDropdown_C*           W_Loadout_PresetDropdown;                          // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MunitionsOverviewSlot_C*            W_MunitionsSlot;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CharacterChanged;                                  // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CharacterIndex;                                    // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Character_Index;                                   // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadout_V2*                           Loadout_V2;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastHovered;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutSlot_V2*                       DefaultFocus;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutSlot_V2*>               LoadoutSlots;                                      // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, class FText>             LoadoutPresetOptions;                              // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Overview_V2_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeLoadoutPresets(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess);
	void UpdateHeadwear(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHeadwear_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateMunitions();
	void UpdateBodyArmor(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, enum class EArmourCoverage CallFunc_GetArmorCoverage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class UArmourMaterial* CallFunc_GetActiveArmorMaterial_ReturnValue);
	void UpdateLongTactical(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveLongTactical_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateSecondary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdatePrimary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable_1, bool Temp_bool_Variable_1, const struct FMargin& Temp_struct_Variable, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void RefreshOverviewSlots();
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void Update_Active_Character(bool CallFunc_IsCurrentPresetDirty_IsDirty, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const class FString& CallFunc_GetActiveSwatMemberLabel_ReturnValue);
	void OnCharacterSelectionNext(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EEquippingSwat CallFunc_NextActiveSwatMember_ReturnValue);
	void OnCharacterSelectionPrevious(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EEquippingSwat CallFunc_PreviousActiveSwatMember_ReturnValue);
	void BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ChangePage(class FName PageName);
	void Construct();
	void Reveal(float Delay);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BP_OnActivated();
	void BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UW_ArmorOverviewSlot_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_W_MunitionsSlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__W_Overview_V2_btn_TacticalGear_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Overview_V2_W_LoadoutSlot_v2_K2Node_ComponentBoundEvent_21_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void SetLastHovered(class UWidget* Widget);
	void BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnInitialized();
	void BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_12_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_13_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_0_OnCarouselNext__DelegateSignature();
	void BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_7_OnCarouselPrevious__DelegateSignature();
	void BP_OnDeactivated();
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature(const class FString& PresetName);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature(const class FString& ModifiedPreset);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_15_OnSaveNewPresetClicked__DelegateSignature();
	void PresetModified(bool PresetDirty);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature(const class FString& PresetName);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_18_OnDefaultPresetSelected__DelegateSignature();
	void PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_19_OnPresetHovered__DelegateSignature(const struct FSavedLoadout& SavedLoadout);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_22_OnPresetMenuClosed__DelegateSignature();
	void BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_23_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_24_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ExecuteUbergraph_W_Overview_V2(int32 EntryPoint, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_8, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_7, class FName K2Node_Event_PageName, float K2Node_Event_Delay, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_6, class UW_ArmorOverviewSlot_C* K2Node_ComponentBoundEvent_TriggeringSlot_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_4, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_2, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_4, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_5, class UWidget* K2Node_CustomEvent_Widget, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class FText CallFunc_GetItemClassText_Category_Text, class UW_Button_C* K2Node_ComponentBoundEvent_Button, TArray<class ULoadoutSlot_V2*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9, const class FString& K2Node_ComponentBoundEvent_PresetName_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10, const class FString& K2Node_ComponentBoundEvent_ModifiedPreset, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12, bool K2Node_CustomEvent_PresetDirty, const class FString& K2Node_ComponentBoundEvent_PresetName, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_3, const class FString& K2Node_CustomEvent_Name, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, const struct FSavedLoadout& K2Node_ComponentBoundEvent_SavedLoadout, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, class FText CallFunc_GetItemClassText_Category_Text_1);
	void CharacterChanged__DelegateSignature(const class FString& Name);
};

}


