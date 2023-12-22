#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x791 - 0x6D8)
// WidgetBlueprintGeneratedClass W_CustomizationTest.W_CustomizationTest_C
class UW_CustomizationTest_C : public UCustomizationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AnimsVerticalBox;                                  // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Clickrotatearea;                                   // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DoneButton;                                        // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DoneButton_1;                                      // 0x6F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ensureclickablearea;                               // 0x700(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EquippedList;                                      // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x710(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_163;                                         // 0x718(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Reqtext;                                           // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SelectionList;                                     // 0x728(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  W_LoadoutV2_Slot;                                  // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MiniLoadout_C*                      W_MiniLoadout;                                     // 0x738(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageHeader;                                      // 0x740(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_86;                                 // 0x748(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               ListMargin;                                        // 0x750(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                        Tempactors;                                        // 0x760(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FString>                        Previewanims;                                      // 0x770(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class ECustomizationType>        CustomizationTypes;                                // 0x780(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Rot;                                               // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_CustomizationTest_C* GetDefaultObj();

	void NewItem(class UClass* Class, class ABaseItem* Inold, class ABaseItem** Out);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetupEquippedList();
	void Destruct();
	void BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__W_CustomizationTest_DoneButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void EquippedItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void ListItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature(class UClass* Class);
	void BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature(class UClass* Class);
	void BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature(class UClass* Class);
	void BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature(class UClass* Class);
	void ExecuteUbergraph_W_CustomizationTest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECustomizationType CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ULoadoutItem* K2Node_CustomEvent_Item_1, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot_1, class ULoadoutItem* K2Node_CustomEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot, class ULoadoutCustomization* K2Node_DynamicCast_AsLoadout_Customization, bool K2Node_DynamicCast_bSuccess, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue_1, TArray<class ULoadoutCustomization*>& CallFunc_GetCustomizationItems_ReturnValue, class ULoadoutCustomization* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* K2Node_ComponentBoundEvent_Class_3, class UClass* K2Node_ComponentBoundEvent_Class_2, class UClass* K2Node_ComponentBoundEvent_Class_1, class UClass* K2Node_ComponentBoundEvent_Class, class ABaseItem* CallFunc_newitem_out, class ABaseItem* CallFunc_newitem_out_1, class ABaseItem* CallFunc_newitem_out_2, class ABaseItem* CallFunc_newitem_out_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


