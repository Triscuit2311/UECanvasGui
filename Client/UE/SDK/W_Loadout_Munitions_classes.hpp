#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x3C8 - 0x320)
// WidgetBlueprintGeneratedClass W_Loadout_Munitions.W_Loadout_Munitions_C
class UW_Loadout_Munitions_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ItemBox;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Grenades;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_PrimaryAmmo;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_SecondaryAmmo;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Tactical;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Slots;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GrenadeBox;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Grenades;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Primary;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_PrimaryAmmoBox;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Secondary;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_SecondaryAmmoBox;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Tactical;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TacticalBox;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowPrimary;                                       // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowSecondary;                                     // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowGrenades;                                      // 0x39A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowTactical;                                      // 0x39B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3663[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_v2_C*                   LastHoveredSlot;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_LoadoutSlot_v2_C*>           SlotWidgets;                                       // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnMunitionHovered;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Loadout_Munitions_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item);
	class UWidget* CustomNavigation(enum class EUINavigation Navigation, const TArray<class UW_LoadoutSlot_v2_C*>& Slots, class UWidget* NextFocus, bool LeaveDown, int32 CurrentIndex, int32 LastIndex, enum class EUINavigation Direction, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue);
	void SecondaryHasFocus(bool* HasFocus, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_WidgetOrChildHasFocus_HasFocus);
	void PrimaryHasFocus(bool* HasFocus, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_WidgetOrChildHasFocus_HasFocus);
	void RefreshAllSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetVisibleCategories(bool Primary, bool Secondary, bool Grenades, bool Tactical, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void UpdateSlotUsage(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetMaximumSlotCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_GetCurrentSlotCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2);
	void CreateTacticalSlots(class UW_LoadoutSlot_v2_C* NewSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDeviceData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void CreateGrenadeSlots(class UW_LoadoutSlot_v2_C* NewSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDeviceData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void CreateSecondarySlots(class UW_LoadoutSlot_v2_C* NewSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class FName>& CallFunc_GetSecondaryAmmoTypes_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void CreatePrimarySlots(class UW_LoadoutSlot_v2_C* NewSlot, class UW_ItemSlotTactical_V2_C* NewSlotTactical, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class FName>& CallFunc_GetPrimaryAmmoTypes_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize(const TArray<class UW_ItemSlotTactical_V2_C*>& Deployables, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item_1, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void BP_OnActivated();
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void PrimaryAmmoSlotHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void SlotUnhovered();
	void DeployableSlotHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void SecondaryAmmoSlotHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ExecuteUbergraph_W_Loadout_Munitions(int32 EntryPoint, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_2, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, class FText CallFunc_GetItemClassText_Category_Text, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot);
	void OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot);
};

}


