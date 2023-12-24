#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x2E9 - 0x278)
// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C
class UW_ItemSelection_ItemGroupList_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ItemList_Container;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          W_ItemSelection_ItemGroup_1;                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          W_ItemSelection_ItemGroup_2;                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          W_ItemSelection_ItemGroup_3;                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          W_ItemSelection_ItemGroup_4;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          W_ItemSelection_ItemGroup_5;                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          W_ItemSelection_ItemGroup_74;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedColumn;                                    // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousSelectedColumn;                            // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ItemSelection_ItemList_C*>   ItemLists;                                         // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FItemSelectionGroup>           ItemGroups;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerCharacter*                      PlayerCharacter;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNVGOn;                                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_ItemSelection_ItemGroupList_C* GetDefaultObj();

	void UpdateKeybinds(TArray<struct FItemSelectionGroup>& InItemGroups, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsInsideList(bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_IsInsideList_Return_Value);
	void SplitItemList(bool bSplit);
	void Event_UnfocusAll();
	void Event_FocusAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void FadeOutOverview(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void FadeInOverview(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void FadeOutMagCount();
	void FadeInMagCount();
	void UnfocusAll(bool bForce, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FadeOutAllItemLists(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FadeInAllItemLists(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnInputReleased(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FocusAll(bool bForce, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void GetListAtColumnIndex(int32 Index, class UW_ItemSelection_ItemList_C** Return_Value, bool CallFunc_Less_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item);
	void Initialize(TArray<struct FItemSelectionGroup>& InItemGroupArray);
	void Previous(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item);
	void Next(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item);
	void CreateNewItemList(TArray<class ABaseItem*>& Items, int32 Index, class UW_ItemSelection_ItemList_C** Return_Value, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_ItemSelection_ItemList_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void SelectColumn(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void OnNightVisionGogglesToggled_Event_0(bool bNVGOn);
	void OnInitialized();
	void ExecuteUbergraph_W_ItemSelection_ItemGroupList(int32 EntryPoint, bool K2Node_CustomEvent_bNVGOn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


