#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDF8 (0x1058 - 0x260)
// WidgetBlueprintGeneratedClass W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C
class UW_LoadoutSlot_Attachment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_DivBot;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemImage;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemImage_Minimal;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Equipped;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Fullsize;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SB_Icon;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SB_Icon_Minimal;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Minimal;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Scale_Name;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Scale_Name_Minimal;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           SlotButton;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           SlotButton_Minimal;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Category;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Category_Minimal;                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Name;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Name_Minimal;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                AttachingWeapon;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentSlot;                                    // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_E1D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AttachmentData;                                    // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x308(0x18)(Edit, BlueprintVisible)
	class FText                                  Category;                                          // 0x320(0x18)(Edit, BlueprintVisible)
	bool                                         HasAugment;                                        // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MinimalLayout;                                     // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_E21[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ItemIcon;                                          // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartActive;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is_Active;                                         // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E24[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Style_Text                        NameTextStyle;                                     // 0x350(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FMargin                               NormalNamePadding;                                 // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FButtonStyle                          NormalButtonStyle;                                 // 0x400(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_Style_Text                        NameTextStyle_Active;                              // 0x678(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                          ActiveButtonStyle;                                 // 0x718(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x990(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x9A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x9B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EItemClass                        Item_Class;                                        // 0x9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E29[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Item_Categories;                                   // 0x9C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemVisualData                       Visuals;                                           // 0x9D8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Icon;                                              // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDoubleClicked;                                   // 0xA10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FLoadoutCategory>              Gear_Category_Classes;                             // 0xA20(0x10)(Edit, BlueprintVisible)
	struct FST_Style_Text                        MinimalNameTextStyle;                              // 0xA30(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FMargin                               MinimalNamePadding;                                // 0xAD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FST_Style_Text                        MinimalNameTextStyle_Active;                       // 0xAE0(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsListItem;                                        // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Equipped;                                          // 0xB81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_E31[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          EquippedColor;                                     // 0xB84(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AugmentTextColor;                                  // 0xB94(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E33[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          EquippedButtonStyle;                               // 0xBA8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EItemType                         ItemType;                                          // 0xE20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0xE21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E35[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlotWidth;                                         // 0xE24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmptySlotWidth;                                    // 0xE28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E37[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Style_Text                        NameTextStyleNull;                                 // 0xE30(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSavedLoadout                         ActiveLoadout;                                     // 0xED0(0x188)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_LoadoutSlot_Attachment_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void GetIsNullAttachment(class UClass* AttachmentData, bool* IsNull, enum class EWeaponAttachmentType Temp_byte_Variable, bool CallFunc_IsValidClass_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, class UClass* K2Node_Select_Default, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetEquipped(bool Equipped, bool CallFunc_GetIsNullAttachment_IsNull, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RefreshItemInfo(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetMinimalLayout(bool MinimalLayout, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float K2Node_Select_Default_2);
	bool GetHoverState();
	void SetActive(bool IsActive, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, bool CallFunc_GetHoverState_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FST_Style_Text& K2Node_Select_Default, const struct FST_Style_Text& K2Node_Select_Default_1, const struct FST_Style_Text& K2Node_Select_Default_2);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetInputMode(bool IsGamepad);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void InitializeAsSlot();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void InitializeAttachmentData(class UClass* AttachmentData);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void InitializeAsListItem();
	void BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature();
	void BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void ForceClick();
	void BP_OnEntryReleased();
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void ChangePage(class FName PageName);
	void ExecuteUbergraph_W_LoadoutSlot_Attachment(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_IsGamepad, class FName K2Node_Event_OptionNameID, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UObject* K2Node_Event_ListItemObject, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class FText CallFunc_GetAttachmentSlotText_SlotText, class UClass* K2Node_CustomEvent_AttachmentData, bool CallFunc_IsValidClass_ReturnValue, bool K2Node_Event_bIsSelected, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, const struct FVector2D& K2Node_Select_Default_1, bool K2Node_Event_bIsExpanded, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, bool CallFunc_GetIsNullAttachment_IsNull, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class FName K2Node_Event_PageName);
	void OnDoubleClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot);
	void OnUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot);
	void OnHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot);
	void OnClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot);
};

}


