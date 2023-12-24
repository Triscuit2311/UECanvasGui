#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x438 - 0x320)
// WidgetBlueprintGeneratedClass W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C
class UW_Loadout_Page_ArmorMunitions_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Loadout_Munitions_C*                Ammo;                                              // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TabCarousel_C*                      Carousel;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ButtonBar_C*                        Coverage;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munitions_C*                Deployables;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ButtonBar_C*                        Material;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      MunitionsSwitcher;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Vest;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WidgetSwitcher;                                    // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   EquippedVestSlot;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, enum class EArmourCoverage> CoverageMap;                                       // 0x370(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class UArmourMaterial*>  MaterialMap;                                       // 0x3C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget*                               LastHovered;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_Munitions_C*                LastActiveMunitionList;                            // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   LastAmmoHover;                                     // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   LastDeployableHover;                               // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_Munitions_C*                CurrentActiveMunitionList;                         // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_ArmorMunitions_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_Focus);
	void UpdateActiveMaterial(class UArmourMaterial* CurrentMaterial, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, TArray<class UArmourMaterial*>& CallFunc_Map_Values_Values, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UArmourMaterial* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UArmourMaterial* CallFunc_GetActiveArmorMaterial_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateActiveCoverage(enum class EArmourCoverage CurrentCoverage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, TArray<enum class EArmourCoverage>& CallFunc_Map_Values_Values, enum class EArmourCoverage CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EArmourCoverage CallFunc_GetArmorCoverage_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void PopulateMaterials(TMap<class FString, class FText> ButtonOptions, const class FString& ButtonID, class UArmourMaterial* ArmorMaterial, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class UArmourMaterial*>& CallFunc_GetArmorMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UArmourMaterial* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PopulateCoverage(TMap<class FString, class FText> ButtonOptions, enum class EArmourCoverage CoverageValue, const class FString& ButtonID, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_SelectString_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GetArmorCoverageText_CoverageText, int32 CallFunc_MakeLiteralInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void PopulateArmor(class UW_LoadoutSlot_v2_C* NewWidget, class ABaseItem* Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UClass* CallFunc_GetClassFromObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetBodyArmors_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BP_OnActivated();
	void OnArmorClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnArmorHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ItemUnhovered();
	void CoverageOptionClicked(const class FString& ButtonID, class UW_Button_C* TriggeringButton);
	void CoverageOptionHovered(const class FString& ButtonID, class UW_Button_C* TriggeringButton);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void MaterialClicked(const class FString& ButtonID, class UW_Button_C* TriggeringButton);
	void MaterialHovered(const class FString& ButtonID, class UW_Button_C* TriggeringButton);
	void BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void ChangePage(class FName PageName);
	void BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void OnInitialized();
	void Construct();
	void HeaderSubpageNavigation(class FName OptionNameID);
	void ExecuteUbergraph_W_Loadout_Page_ArmorMunitions(int32 EntryPoint, class FName K2Node_Event_OptionNameID, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, const class FString& K2Node_CustomEvent_ButtonID_3, class UW_Button_C* K2Node_CustomEvent_TriggeringButton_3, const class FString& K2Node_CustomEvent_ButtonID_2, class UW_Button_C* K2Node_CustomEvent_TriggeringButton_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EArmourCoverage CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& K2Node_CustomEvent_ButtonID_1, class UW_Button_C* K2Node_CustomEvent_TriggeringButton_1, const class FString& K2Node_CustomEvent_ButtonID, class UW_Button_C* K2Node_CustomEvent_TriggeringButton, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UArmourMaterial* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class UArmourMaterial* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class FName K2Node_ComponentBoundEvent_TabId, class FName K2Node_Event_PageName, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class UWidget* CallFunc_GetFocusTarget_Focus);
};

}


