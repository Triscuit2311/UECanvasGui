#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x390 - 0x278)
// WidgetBlueprintGeneratedClass W_ItemSelectionMenu.W_ItemSelectionMenu_C
class UW_ItemSelectionMenu_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SlideIn;                                           // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOut;                                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_DebugInfoContainer_C*               DebugInfoContainer_Menu;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroupList_C*      ItemGroupList;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MouseWheelDelta;                                   // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_226D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  OpeningMenuKey;                                    // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                  PreviousMenuTriggerKey;                            // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FKey>                          MenuOpenKeyTriggers;                               // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FItemSelectionGroup>           ItemGroups;                                        // 0x2E8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bInitialized;                                      // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedColumn;                                    // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadedOut;                                         // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2270[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      PlayerCharacter;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsActive;                                         // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2271[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_FadeOut;                                        // 0x318(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FKey, int32>                     QueuedSelections;                                  // 0x320(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        OpenMenuTriggerCount;                              // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2274[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_FadeOutSelected;                                // 0x378(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMenuOpened;                                      // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ItemSelectionMenu_C* GetDefaultObj();

	void ResetAnimationFadeOutState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_FindItemFromColumnIndex_Return_Value, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FindItemFromColumnIndex(class UW_ItemSelection_ItemList_C** Return_Value, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value);
	void FadeOutSelectedColumn(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_ItemSelection_ItemList_C* CallFunc_FindItemFromColumnIndex_Return_Value);
	void CanQueueSelection(bool* Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationBlocking_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void QueuedExecuteSelection();
	void FindColumnIndexFromItem(class ABaseItem* InItem, int32* Return_Value, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EItemCategory CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_ContainsItemCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void IsOpen(bool* Return_Value);
	void HideMenu();
	void RemoveItemFromMenu(class ABaseItem* ItemToRemove, int32 List_Index, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value, bool CallFunc_IsValid_ReturnValue);
	bool UpdateDebugInfo(const class FString& TriggerKeysString, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, enum class ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Key_GetDisplayName_ReturnValue, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& K2Node_Select_Default, const struct FKey& CallFunc_Array_Get_Item, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget_1, class FText CallFunc_Key_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget_2, class ABaseItem* CallFunc_GetSelectedItem_Return_Value, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value_1, class FText CallFunc_Conv_IntToText_ReturnValue, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget_3, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget_4);
	void CanNavigate(bool* Return_Value, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value);
	void SetMouseWheelDelta(float NewMouseWheelDelta);
	void ExecuteSelection(int32 Index, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CanQueueSelection_Return_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsOpen_Return_Value, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, int32 CallFunc_FindColumnIndexFromItem_Return_Value, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_CanNavigate_Return_Value, int32 K2Node_Select_Default, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value, class UW_ItemSelection_ItemList_C* CallFunc_GetListAtColumnIndex_Return_Value_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CloseMenu(int32 QueuedIndex, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsOpen_Return_Value, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, int32 CallFunc_FindColumnIndexFromItem_Return_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<struct FKey>& CallFunc_Map_Keys_Keys, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Map_Remove_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OpenMenu(const struct FKey& TriggerKey, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FKey>& CallFunc_Map_Keys_Keys, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnWeaponMagCheck_Event_0(class ABaseMagazineWeapon* MagazineWeapon);
	void OnInitialized();
	void OnFadeOutFinished();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Initialize(bool bForce, TArray<struct FItemSelectionGroup>& InItemSelectionGroups);
	void CustomEvent_0();
	void ExecuteUbergraph_W_ItemSelectionMenu(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class ABaseMagazineWeapon* K2Node_CustomEvent_MagazineWeapon, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_CustomEvent_bForce, TArray<struct FItemSelectionGroup>& K2Node_CustomEvent_InItemSelectionGroups, enum class ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanNavigate_Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, int32 CallFunc_FindColumnIndexFromItem_Return_Value, bool CallFunc_IsInsideList_Return_Value, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FKey& CallFunc_ConvertIntToFKey_ReturnValue, const struct FItemSelectionGroup& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void OnMenuOpened__DelegateSignature();
};

}

