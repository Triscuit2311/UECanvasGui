#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x65 (0x385 - 0x320)
// WidgetBlueprintGeneratedClass W_Loadout_Page_Gear.W_Loadout_Page_Gear_C
class UW_Loadout_Page_Gear_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_TabCarousel_C*                      Carousel;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_ItemList_C*            Headwear;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_ItemList_C*            LongTactical;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Switcher;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnItemHovered;                                     // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemUnhovered;                                   // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABaseItem*                             HoveredItem;                                       // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                  CurrentPage;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Gamepad;                                       // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PreviousPage;                                      // 0x37C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeavingPage;                                       // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_Gear_C* GetDefaultObj();

	void BackPage(bool* Handled, TScriptInterface<class IReadyOrNotUI_C> CallFunc_BackPage_self_CastInput, bool CallFunc_BackPage_Handled);
	void GetFocusTarget(class UWidget** Focus);
	void RegisterTabPages();
	class UWidget* BP_GetDesiredFocusTarget();
	bool BP_OnHandleBackAction(bool CallFunc_BackPage_Handled);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void TabChanged(class FName TabId, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void OnInitialized();
	void BP_OnActivated();
	void BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_4_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_5_OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_6_OnSlotUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_7_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_8_OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_9_OnSlotUnhovered__DelegateSignature();
	void ChangePage(class FName PageName);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_Loadout_Page_Gear(int32 EntryPoint, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Event_PageName, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature();
};

}


