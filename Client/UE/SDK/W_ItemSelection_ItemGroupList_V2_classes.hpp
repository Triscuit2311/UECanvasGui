#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C
class UW_ItemSelection_ItemGroupList_V2_C : public UBaseWidget
{
public:
	class UHorizontalBox*                        ItemList_Container;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_V2_C*       W_ItemSelection_ItemGroup_V2;                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_V2_C*       W_ItemSelection_ItemGroup_V2_1;                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_V2_C*       W_ItemSelection_ItemGroup_V2_2;                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_V2_C*       W_ItemSelection_ItemGroup_V2_3;                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_V2_C*       W_ItemSelection_ItemGroup_V2_4;                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_V2_C*       W_ItemSelection_ItemGroup_V2_5;                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_ItemSelection_ItemList_V2_C*> ItemLists;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_ItemSelection_ItemGroupList_V2_C* GetDefaultObj();

	void Get_List_At_Index(int32 Index, class UW_ItemSelection_ItemList_V2_C** Return_Value, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item);
	void ResetAnimationState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FadeOutAllExcept(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateKeybinds(TArray<struct FItemSelectionGroup>& InItemGroups, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectCategory(int32 GroupIndex, int32 CategoryIndex, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item);
	void SelectList(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item, class UW_ItemSelection_ItemList_V2_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize(TArray<struct FItemSelectionGroup>& InItemGroupArray, const TArray<class ABaseItem*>& Items, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_ItemSelection_ItemList_V2_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}


