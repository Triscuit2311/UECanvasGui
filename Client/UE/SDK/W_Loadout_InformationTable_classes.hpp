#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C8 (0x728 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_InformationTable.W_Loadout_InformationTable_C
class UW_Loadout_InformationTable_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRefresh;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHide;                                          // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Div_Formation_Bot_1;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ItemInfoPanelWidget;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           ItemListAnchor;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Icon;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectedMissionPanel_1;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Icon;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Category;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Class;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Description;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ItemName;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Overview_C*                 W_Loadout_Overview;                                // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnModifyWeaponButtonClicked;                       // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Hidden;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemName;                                          // 0x300(0x18)(Edit, BlueprintVisible)
	class FText                                  ItemCategory;                                      // 0x318(0x18)(Edit, BlueprintVisible)
	class FText                                  ItemDescription;                                   // 0x330(0x18)(Edit, BlueprintVisible)
	class UClass*                                ItemClass;                                         // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EItemCategory                     LoadoutSlot;                                       // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1F42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  WeaponClassText;                                   // 0x358(0x18)(Edit, BlueprintVisible)
	enum class EItemClass                        WeaponClass;                                       // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInfoPanelRemoved;                                // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         InfoHidden;                                        // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCancelRefresh;                                   // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x3A0(0x188)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UW_LoadoutInfo_AttachmentList_C*       AttachmentList;                                    // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Restricted;                                        // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInfoPanelAttachmentClicked;                      // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  AmmoType;                                          // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ItemIcon;                                          // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmourMaterial*                       ArmourMaterial;                                    // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Attachment;                                        // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ScopeReticle;                                      // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_EffectsList_C*          EffectsList;                                       // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInfoPanelRemoveAttachmentClicked;                // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLoadoutPreset                        Loadout_Preset;                                    // 0x590(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_Loadout_Overview_C*                 LoadoutPresetPreview;                              // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_InformationTable_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void UpdateLoadoutPresetInfo(class UW_Loadout_Overview_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue);
	void SetAttachmentEffects(TArray<struct FST_ItemEffects>* Effects, const TArray<struct FST_ItemEffects>& AttachmentEffects, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class EScrollDirection Temp_byte_Variable, enum class EScrollDirection Temp_byte_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_3, enum class EScrollDirection Temp_byte_Variable_2, enum class EScrollDirection Temp_byte_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, bool Temp_bool_Variable_5, enum class EScrollDirection Temp_byte_Variable_4, enum class EScrollDirection Temp_byte_Variable_5, bool Temp_bool_Variable_6, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_7, enum class EScrollDirection Temp_byte_Variable_6, enum class EScrollDirection Temp_byte_Variable_7, bool Temp_bool_Variable_8, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, bool Temp_bool_Variable_9, enum class EScrollDirection Temp_byte_Variable_8, enum class EScrollDirection Temp_byte_Variable_9, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText K2Node_Select_Default, enum class EScrollDirection K2Node_Select_Default_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class FText K2Node_Select_Default_2, enum class EScrollDirection K2Node_Select_Default_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_2, int32 CallFunc_Array_Add_ReturnValue_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_3, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_4, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, enum class EScrollDirection K2Node_Select_Default_6, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_5, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, enum class EScrollDirection K2Node_Select_Default_7, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_6, int32 CallFunc_Array_Add_ReturnValue_6, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_4, class FText K2Node_Select_Default_8, enum class EScrollDirection K2Node_Select_Default_9, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_7, int32 CallFunc_Array_Add_ReturnValue_7);
	void QuickHide();
	void Play_Refresh_Anim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateAttachmentInfo(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetAttachmentSlotText_SlotText, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_Variable, class UW_LoadoutInfo_EffectsList_C* CallFunc_Create_ReturnValue, TArray<struct FST_ItemEffects>& CallFunc_SetAttachmentEffects_Effects, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FST_ItemEffects>& CallFunc_SetAttachmentEffects_Effects_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateArmourMaterialInfo(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateAmmoInfo(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetAmmoCategoryText_Text, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetWeaponClassText(class FText* WeaponClass, enum class EItemClass Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText K2Node_Select_Default);
	void UpdateItemInfo(class UW_LoadoutInfo_AttachmentList_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetLoadoutCategoryText_Category_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_GetWeaponClassText_WeaponClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void Construct();
	void RefreshPanelItemInfo(const struct FSavedLoadout& ActiveLoadout, class UClass* ItemClass, enum class EItemCategory LoadoutSlot, bool Restricted);
	void ModifyWeaponClicked(class UClass* ItemToModify);
	void InitializePanel(const struct FSavedLoadout& ActiveLoadout);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem);
	void RefreshPanelAmmoInfo(class FName AmmoType, class UClass* WeaponData);
	void RefreshPanelArmourMaterial(class UArmourMaterial* ArmourMaterial);
	void RefreshPanelAttachment(class UClass* Attachment, class UClass* AttachingWeapon);
	void RemoveAttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem);
	void RefreshPanelLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset);
	void ExecuteUbergraph_W_Loadout_InformationTable(int32 EntryPoint, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout_1, class UClass* K2Node_CustomEvent_ItemClass, enum class EItemCategory K2Node_CustomEvent_LoadoutSlot, bool K2Node_CustomEvent_Restricted, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UClass* K2Node_CustomEvent_ItemToModify, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_AttachmentListItem_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FName K2Node_CustomEvent_AmmoType, class UClass* K2Node_CustomEvent_WeaponData, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UArmourMaterial* K2Node_CustomEvent_ArmourMaterial, class UClass* K2Node_CustomEvent_Attachment, class UClass* K2Node_CustomEvent_AttachingWeapon, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_AttachmentListItem, const struct FLoadoutPreset& K2Node_CustomEvent_LoadoutPreset);
	void OnInfoPanelRemoveAttachmentClicked__DelegateSignature(enum class EWeaponAttachmentType Slot);
	void OnInfoPanelAttachmentClicked__DelegateSignature(enum class EWeaponAttachmentType Slot, class UClass* AttachmentData);
	void OnCancelRefresh__DelegateSignature();
	void OnInfoPanelRemoved__DelegateSignature();
	void OnModifyWeaponButtonClicked__DelegateSignature(class UClass* ItemToModify);
};

}


