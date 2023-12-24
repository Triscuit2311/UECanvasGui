#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C
class UW_ItemSelectionMenu_V2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_ItemSelection_ItemGroupList_V2_C*   ItemGroupList;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bInitialized;                                      // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedColumn;                                    // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousSelectedColumn;                            // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMenuOpened;                                      // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ItemSelectionMenu_V2_C* GetDefaultObj();

	void ConfirmSelection(int32 Index, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Get_List_At_Index_Return_Value, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SelectCategory(int32 Index);
	void Update_Menu(TArray<struct FItemSelectionGroup>& InItemGroups);
	void CloseMenu();
	void OpenMenu(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Initialize(bool bForce, TArray<struct FItemSelectionGroup>& InItemSelectionGroups);
	void ExecuteUbergraph_W_ItemSelectionMenu_V2(int32 EntryPoint, bool K2Node_CustomEvent_bForce, TArray<struct FItemSelectionGroup>& K2Node_CustomEvent_InItemSelectionGroups);
	void OnMenuOpened__DelegateSignature();
};

}


