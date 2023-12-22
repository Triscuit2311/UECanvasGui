#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE2 (0x402 - 0x320)
// WidgetBlueprintGeneratedClass W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C
class UW_Loadout_Page_ItemList_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ItemScrollBox;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ELoadoutCategory                  LoadoutCategory;                                   // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1D4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             NewItem;                                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   NewLoadoutSlot;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             Attachment_Type;                                   // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSlotClicked;                                     // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotHovered;                                     // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotUnhovered;                                   // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAttachmentClicked;                               // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAttachmentHovered;                               // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAttachmentUnhovered;                             // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnWeaponClicked;                                   // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnWeaponHovered;                                   // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnWeaponUnhovered;                                 // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Secondary;                                         // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               LastHovered;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_LoadoutSlot_v2_C*>           ItemSlots;                                         // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class EItemClass                        ItemClass;                                         // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFilterByItemClass;                                // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_ItemList_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetFocusTarget_Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus_1, bool CallFunc_IsValid_ReturnValue);
	void BackPage(bool* Handled);
	void RefreshListItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckItemEquipped_IsEquipped);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	class UWidget* GetFirst(bool* Valid, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void RefreshAttachments(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetAttachmentClass_ReturnValue, bool CallFunc_CheckIfEquippedAttachment_IsEquipped);
	void Clear();
	void CheckIfEquippedAttachment(bool Secondary, class UClass* Attachment, bool* IsEquipped, class ABaseItem* Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TSubclassOf<class UWeaponAttachment> CallFunc_GetActivePrimaryAttachmentByType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	void AddAttachmentItem(enum class EWeaponAttachmentType AttachmentType, class UClass* Attachment, bool Secondary, class UW_LoadoutSlot_v2_C* CurrentSlotWidget, int32 CallFunc_Array_Add_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UWeaponAttachment* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_CheckIfEquippedAttachment_IsEquipped, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	TSoftObjectPtr<class UTexture2D> GetWeaponImage(class ABaseItem* NewItem, class ABaseItem* Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLongTacticalItemImage_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSecondaryWeaponImage_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetPrimaryWeaponImage_ReturnValue);
	void AddItem(class ABaseItem* BaseItem, class UW_LoadoutSlot_v2_C* CurrentLoadoutSlot, class ABaseItem* CurrentItem, bool CallFunc_CheckItemEquipped_IsEquipped, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void CheckItemEquipped(class ABaseItem* Item, bool* IsEquipped, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHeadwear_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveLongTactical_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Construct();
	void ItemHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ItemClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ItemUnhovered();
	void AttachmentClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void AttachmentHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void AttachmentUnhovered();
	void InitializeWeapons(enum class ELoadoutCategory LoadoutCategory, enum class EItemClass ItemClass, bool bFilterByItemClass);
	void InitializeHeadwear();
	void BP_OnActivated();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_Loadout_Page_ItemList(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_3, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_2, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot, TSubclassOf<class UWeaponAttachment> CallFunc_GetAttachmentClass_ReturnValue, enum class ELoadoutCategory K2Node_CustomEvent_LoadoutCategory, enum class EItemClass K2Node_CustomEvent_ItemClass, bool K2Node_CustomEvent_bFilterByItemClass, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetItemsByLoadoutCategory_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetHeadwears_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABaseItem* CallFunc_Array_Get_Item, class ABaseItem* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon);
	void OnWeaponUnhovered__DelegateSignature();
	void OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnAttachmentClicked__DelegateSignature(TSubclassOf<class UWeaponAttachment> AttachmentClass, enum class EWeaponAttachmentType AttachmentType);
	void OnAttachmentUnhovered__DelegateSignature();
	void OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType, class UW_LoadoutSlot_v2_C* TriggeringSlot);
};

}


