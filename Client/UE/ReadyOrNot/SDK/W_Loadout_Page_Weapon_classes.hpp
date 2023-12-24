#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x43 (0x363 - 0x320)
// WidgetBlueprintGeneratedClass W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C
class UW_Loadout_Page_Weapon_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_TabCarousel_C*                      Carousel;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      MainSwitcher;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_WeaponEdit_C*          PrimaryEdit;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_WeaponEdit_C*          SecondaryEdit;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Switcher;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_WeaponEdits;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_ItemList_C*            WeaponList;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ChangingPrimary;                                   // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChangingSecondary;                                 // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EItemClass                        CurrentItemClass;                                  // 0x362(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_Weapon_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput_1, class UWidget* CallFunc_GetFocusTarget_Focus_1, bool CallFunc_BooleanOR_ReturnValue);
	void BackPage(bool* Handled, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> CallFunc_BackPage_self_CastInput, bool CallFunc_BackPage_Handled, bool CallFunc_BooleanOR_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void RegisterTabs();
	void UpdateStyle(bool bUseGamepad);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void Construct();
	void OnInitialized();
	void BndEvt__W_Loadout_Page_Weapon_WeaponEdit_K2Node_ComponentBoundEvent_0_OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon);
	void BP_OnActivated();
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_1_OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass);
	void ChangePage(class FName PageName);
	void TabSwitched(class FName TabId);
	void BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_2_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType);
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_3_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_7_OnAttachmentUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_8_OnAttachmentUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_Carousel_K2Node_ComponentBoundEvent_9_OnTabSelected__DelegateSignature(class FName TabId);
	void ExecuteUbergraph_W_Loadout_Page_Weapon(int32 EntryPoint, bool Temp_bool_Variable, class ABaseWeapon* CallFunc_GetWeaponObject_WeaponObject, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable_1, enum class ELoadoutCategory Temp_byte_Variable, enum class ELoadoutCategory Temp_byte_Variable_1, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, bool K2Node_ComponentBoundEvent_Secondary_1, enum class EItemClass K2Node_ComponentBoundEvent_ItemClass_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABaseWeapon* K2Node_ComponentBoundEvent_Weapon_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, TSubclassOf<class ABaseWeapon> K2Node_ComponentBoundEvent_Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EItemType CallFunc_GetItemType_Item_Type, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, bool K2Node_ComponentBoundEvent_Secondary, enum class EItemClass K2Node_ComponentBoundEvent_ItemClass, bool CallFunc_BackPage_Handled, class FName K2Node_Event_PageName, bool CallFunc_SelectTabByID_ReturnValue, class FName K2Node_CustomEvent_TabId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment_1, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType_1, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, bool CallFunc_IsActivated_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7, class FName K2Node_Event_OptionNameID, bool CallFunc_EqualEqual_NameName_ReturnValue_1, TScriptInterface<class IReadyOrNotUI_C> K2Node_Select_Default, bool CallFunc_BackPage_Handled_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ELoadoutCategory K2Node_Select_Default_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8, class FName K2Node_ComponentBoundEvent_TabId, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9, class FName CallFunc_GetActiveTab_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class ABaseWeapon* CallFunc_GetWeaponObject_WeaponObject_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10);
};

}


