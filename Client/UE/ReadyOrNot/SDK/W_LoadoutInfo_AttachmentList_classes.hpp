#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x240 (0x4A0 - 0x260)
// WidgetBlueprintGeneratedClass W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C
class UW_LoadoutInfo_AttachmentList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_CleanWeapon;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ModifyWeapon;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Attachments;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_GamepadNavIcon_C*                   W_GamepadNavIcon;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           W_Header;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             W_Text;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UClass*>                        Placeholders;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x2B0(0x188)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ItemClass;                                         // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<TSubclassOf<class UWeaponAttachment>> Attachments;                                       // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnModifyWeaponButtonClick;                         // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UW_LoadoutInfo_AttachmentListEntry_C*> AttachmentListItems;                               // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Restricted;                                        // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4187[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RevealDelay;                                       // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RevealDelayOffset;                                 // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4188[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAttachmentItemClicked;                           // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRemoveAttachmentClicked;                         // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_LoadoutInfo_AttachmentList_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void CheckCurrentAttachments(TArray<class UClass*>& Attachments, const TArray<class UW_LoadoutInfo_AttachmentListEntry_C*>& CurrentListItems, int32 AttachmentIndex, class UClass* Attachment, bool SlotExists, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UW_LoadoutInfo_AttachmentListEntry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UClass* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, class UW_LoadoutInfo_AttachmentListEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_GetIsNullAttachment_IsNull, bool CallFunc_Not_PreBool_ReturnValue_2, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_3, class UW_LoadoutInfo_AttachmentListEntry_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetIsNullAttachment(class UClass* AttachmentData, bool* IsNull, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_HasSubstring_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void AttachmentArraySidearm(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7);
	void AttachmentArrayPrimary(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7);
	void GetCurrentAttachments(TArray<TSubclassOf<class UWeaponAttachment>>* Attachments, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	void Finished_EC73150B49B091C3F6FAB48DDD93DD29();
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void RefreshList(const struct FSavedLoadout& ActiveLoadout, class UClass* ItemClass, bool Restricted);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void Reveal(float Delay);
	void AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy);
	void RemoveAttachmentClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy);
	void ExecuteUbergraph_W_LoadoutInfo_AttachmentList(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<TSubclassOf<class UWeaponAttachment>>& CallFunc_GetCurrentAttachments_Attachments, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GetIsNullAttachment_IsNull, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UW_LoadoutInfo_AttachmentListEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_LoadoutInfo_AttachmentListEntry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout, class UClass* K2Node_CustomEvent_ItemClass, bool K2Node_CustomEvent_Restricted, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, enum class ESlateVisibility K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_Delay, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, int32 Temp_int_Array_Index_Variable_2, float CallFunc_Add_FloatFloat_ReturnValue, class UClass* CallFunc_Array_Get_Item_2, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_TriggeredBy_1, const struct FMargin& K2Node_MakeStruct_Margin_1, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_TriggeredBy, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UW_LoadoutInfo_AttachmentListEntry_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, TArray<TSubclassOf<class UWeaponAttachment>>& CallFunc_GetCurrentAttachments_Attachments_1);
	void OnRemoveAttachmentClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry);
	void OnAttachmentItemClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry);
	void OnModifyWeaponButtonClick__DelegateSignature(class UClass* ItemData);
};

}


