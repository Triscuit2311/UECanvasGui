#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDE (0x356 - 0x278)
// WidgetBlueprintGeneratedClass W_ItemSelection_ItemList.W_ItemSelection_ItemList_C
class UW_ItemSelection_ItemList_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Focus;                                        // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Unfocus;                                      // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                            GridPanel_Items;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*          ItemGroup;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Items;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Main;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Style;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class ABaseItem*>                     Items;                                             // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	int32                                        SelectionIndex;                                    // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ItemSelection_Item_C*>       ItemWidgets;                                       // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemSelectionGroup                   ItemGroupSetting;                                  // 0x2F0(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class ABasePlayer_C*                         PlayerCharacter;                                   // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFocused;                                        // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCanNavigate;                                      // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEnteredOnce;                                      // 0x342(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A5E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             NudgeAmount;                                       // 0x344(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WorkingRenderOpacity;                              // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DuplicateRow;                                      // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLastGroup;                                      // 0x354(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bInOverviewMode;                                   // 0x355(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_ItemSelection_ItemList_C* GetDefaultObj();

	void IsInsideList(bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateItemList(bool bPreviousCanNavigate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABaseItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SwapItemWithGroup(int32 ItemIndex, class ABaseItem* PreviousItem);
	void OnGrenadeThrown(class ABaseGrenade* ThrownGrenade, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HideArrow();
	void ShowArrow(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveItem__Index_(int32 ItemIndex, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RemoveItem(class ABaseItem* ItemToRemove, bool bRemoveFromItems);
	void FindDuplicateItems(class ABaseItem* InItem, TArray<class ABaseItem*>* Return_Value, TArray<class FString>* Names, const TArray<class FString>& NewLocalVar_0, const TArray<class ABaseItem*>& DuplicateItems, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3);
	void ShowList(int32 Temp_int_Array_Index_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HideList(bool bPlaySound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void CreateItem(class ABaseItem* Item, int32 Index, bool bSwapping, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize);
	void SwapItem(int32 FromIndex, int32 ToIndex, class UW_ItemSelection_Item_C* PreviousItemWidget, class ABaseItem* PreviousItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_1, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue_1, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void OnAnimFadeOutFinished();
	void OnAnimSelectFinished(int32 CallFunc_Array_Length_ReturnValue);
	void Focus(bool bForce, bool CallFunc_HasAnyItems_Return_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyItems_Return_Value_1, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Unfocus(bool bForce, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, bool CallFunc_HasAnyItems_Return_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void EquipItem(bool* ItemEquipped, bool CallFunc_EquipItem_ItemEquipped);
	void ExecuteSelection(bool bSoftSelection, int32 Temp_int_Array_Index_Variable, class ABaseItem* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_1, class ABaseItem* CallFunc_Array_Get_Item_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_3, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_4, bool CallFunc_EquipItem_ItemEquipped, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_PutItemInHands_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item_6, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
	void GetSelectedItem(class ABaseItem** Return_Value, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item);
	void FadeIn(bool bFocusRequired, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void FadeOut(bool bFocusRequired, bool CallFunc_IsVisible_ReturnValue);
	void Deselect(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item);
	void Select(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item);
	void Previous(int32 CallFunc_Array_Length_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Next(int32 CallFunc_Array_Length_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void PopulateList(const TArray<class ABaseItem*>& SortedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Initialize();
	void Construct();
	void OnInitialized();
	void CustomEvent_0();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_1();
	void ExecuteUbergraph_W_ItemSelection_ItemList(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue_1);
};

}


