#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x368 - 0x278)
// WidgetBlueprintGeneratedClass W_SkinCategory.W_SkinCategory_C
class UW_SkinCategory_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ButtonPressed;                                // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_StandardButton_C*                   Button;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridPanel;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SelectedItemInfo_Container;                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CategoryName;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ItemName;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x2B0(0x18)(Edit, BlueprintVisible)
	class FText                                  SkinCategoryName;                                  // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UW_SkinItem_C*>                 SkinItemWidgets;                                   // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bCollapsed;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSkinItemButtonClicked;                           // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UClass*>                        SkinAttachments;                                   // 0x338(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                NullSkinAttachment;                                // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_QuartermasterMenu_C*                Owner;                                             // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bChildSelected;                                    // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bInMenuBounds;                                     // 0x359(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHovered;                                          // 0x35A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAnyKeyDown;                                       // 0x35B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        SelectedRow;                                       // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedColumn;                                    // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumOfColumns;                                      // 0x364(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SkinCategory_C* GetDefaultObj();

	void DeselectAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value);
	void IsValidGridIndex(int32 InRow, int32 InColumn, bool* Return_Value, class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value, bool CallFunc_IsValid_ReturnValue);
	void Find_Grid_Index_From_Skin_Item_Widget(class UW_SkinItem_C* InSkinItemWidget, int32* Out_Row, int32* Out_Column, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue);
	void FindAttachmentItemWidgetAt(int32 InRow, int32 InColumn, class UW_SkinItem_C** Return_Value, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_SkinItem_C* K2Node_DynamicCast_AsW_Skin_Item, bool K2Node_DynamicCast_bSuccess, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	enum class ESlateVisibility Get_SelectedItemInfo_Container_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UnselectSkinItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectSkinItem(class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value);
	void UnhoverSkinItem(class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value);
	void HoverSkinItem(class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value);
	void PreviousColumn(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void NextColumn(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void PreviousRow(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void NextRow(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SimulateClick();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, const struct FKey& CallFunc_GetKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_7, const struct FKey& CallFunc_GetKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, const struct FKey& CallFunc_GetKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, const struct FKey& CallFunc_GetKey_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, const struct FEventReply& CallFunc_Handled_ReturnValue_4);
	void SimulateUnhover();
	void SimulateHover();
	void UpdateSelectedItemName(class FText InItemName, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void RemoveAllAttachmentItemWidgets();
	void UnhoverAllChildrenExcept(class UW_SkinItem_C* SkinItemWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void DeselectAllChildrenExcept(class UW_SkinItem_C* InSkinItemWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnSkinItemClicked(class UW_SkinItem_C* SkinItemWidget);
	void CreateSkinItemWidget(class UClass* SkinClass, int32 InRow, int32 InColumn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_SkinItem_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ExpandChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CollapseChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
	void OnLoadoutLoaded();
	void OnSkinItemButtonHovered(class UW_SkinItem_C* SkinItem);
	void OnGunCleaned();
	void ExecuteUbergraph_W_SkinCategory(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_IsDesignTime, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_3, class UW_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_SkinItem_C* K2Node_CustomEvent_SkinItem, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Row, int32 CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Column, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UW_SkinItem_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class UW_SkinItem_C* CallFunc_Array_Get_Item_4);
	void OnButtonUnhovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory);
	void OnButtonHovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory);
	void OnSkinItemButtonClicked__DelegateSignature(class UClass* SkinClass);
	void OnButtonClicked__DelegateSignature(class UW_SkinCategory_C* SkinCategory);
};

}


