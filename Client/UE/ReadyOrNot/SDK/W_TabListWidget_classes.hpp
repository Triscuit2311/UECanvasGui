#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3E8 - 0x360)
// WidgetBlueprintGeneratedClass W_TabListWidget.W_TabListWidget_C
class UW_TabListWidget_C : public UCommonTabListWidgetImplementation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              NavLeftContainer;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NavRightContainer;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Tabs;                                              // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          W_SubMenu;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          Entries;                                           // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FST_TabListEntry>   EntryLookup;                                       // 0x398(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_TabListWidget_C* GetDefaultObj();

	void FindIDForButton(class UCommonButtonBase* Button, class FName* ID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FST_TabListEntry& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void IDForButton(class UW_Button_C* Button, class FName* Name, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Select_Tab(class UW_Button_C* Button, class FName CallFunc_IDForButton_Name, bool CallFunc_SelectTabByID_ReturnValue);
	void InputMethodChanged(enum class ECommonInputType InputType, enum class ECommonInputType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue);
	void ClearTabs(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void AddTab(class UW_Button_C* Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName CallFunc_IDForButton_Name, bool CallFunc_RegisterTab_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FST_TabListEntry& K2Node_MakeStruct_ST_TabListEntry, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_2, const class FString& CallFunc_AppendMultiple_ReturnValue_3);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void TabSelected(class UCommonButtonBase* Button, bool Selected);
	void Construct();
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature();
	void BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature();
	void ExecuteUbergraph_W_TabListWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, bool K2Node_CustomEvent_Selected, class FName K2Node_Event_TabNameID, class UCommonButtonBase* K2Node_Event_TabButton, class FName CallFunc_FindIDForButton_ID, class FName K2Node_Event_TabNameID_1, class UCommonButtonBase* K2Node_Event_TabButton_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FST_TabListEntry& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FST_TabListEntry& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FST_TabListEntry& K2Node_SetFieldsInStruct_StructOut, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, const struct FST_TabListEntry& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2);
};

}


