#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass W_NeoLoadout_Slot.W_NeoLoadout_Slot_C
class UW_NeoLoadout_Slot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BorderImage;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              EquippedOverlay;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_212;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ItemButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemImage;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemSubtext;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SideImage;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadoutItem*                          Item;                                              // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewEquipped;                                   // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PreviewHighlighted;                                // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4077[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class ECustomizationType                CustomizationType;                                 // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_NeoLoadout_Slot_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetEquippedItem(class ULoadoutItem* Item, class FText Subtext);
	void SetSelectableItem(class ULoadoutItem* Item, bool IsEquipped);
	void BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void SetHighlighted(bool Highlighted);
	void SetItemDetails(class ULoadoutItem* Item, class FText Subtext);
	void BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_NeoLoadout_Slot(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, class ULoadoutItem* K2Node_CustomEvent_Item_2, class FText K2Node_CustomEvent_Subtext_1, class ULoadoutItem* K2Node_CustomEvent_Item_1, bool K2Node_CustomEvent_IsEquipped, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_Highlighted, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ULoadoutItem* K2Node_CustomEvent_Item, class FText K2Node_CustomEvent_Subtext, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
};

}


