#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x338 - 0x278)
// WidgetBlueprintGeneratedClass W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C
class UW_WeaponWheel_RadialSelection_C : public UW_RadialSelectionBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Expand;                                       // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Item_Icon;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainArea;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainArea_Overlay;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RootWidget;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_420;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WeaponWheel_MagazineDisplay_C*      WeaponWheel_MagazineDisplay;                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABaseItem*                             Item;                                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ItemIconSize;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CategoryIndex;                                     // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  ItemCategory;                                      // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class ABaseItem*>                     Items;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UWeaponWheelScript*>            ExecutableItems;                                   // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                       AllItems;                                          // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        WheelSize;                                         // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MaxWheelSize;                                      // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UImage*>                        Icons;                                             // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        StackedItems;                                      // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_WeaponWheel_RadialSelection_C* GetDefaultObj();

	class UImage* CreateIcon(struct FSlateBrush& InBrush, int32 CallFunc_Array_LastIndex_ReturnValue, class UImage* CallFunc_Array_Get_Item, class UImage* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue);
	void RemoveNullItems__Internal_(TArray<class UObject*>& ItemArray, const TArray<int32>& Indicies_FoundNullItems, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void RemoveNullItems();
	void IsInExecutablesArray(bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveExecutableItemFromCategory(class UWeaponWheelScript* WeaponWheelScript, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue);
	void AddExecutableItemToCategory(class UWeaponWheelScript* WeaponWheelScript, int32 AtIndex, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void ShuffleItems();
	void ShiftItemToNewSpot(class ABaseItem* Item, int32 NewIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void MoveToBack(class ABaseItem* Item, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void MoveToFront(class ABaseItem* Item, bool CallFunc_Array_RemoveItem_ReturnValue);
	void UpdateIcon(int32 SelectionIndex, const struct FSlateBrush& InBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, class UObject* CallFunc_Array_Get_Item, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, class UWeaponWheelScript* K2Node_DynamicCast_AsWeapon_Wheel_Script, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	void Select(int32 Index, class UObject* CallFunc_Array_Get_Item, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess);
	void ExecuteRadial(enum class EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Array_Get_Item, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_PutItemInHands_ReturnValue, class UWeaponWheelScript* K2Node_DynamicCast_AsWeapon_Wheel_Script, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanEquip_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1);
	void OnDeselected(bool Play_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnSelected(bool Play_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Previous(bool* bSuccess, bool bSucceeded, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Previous_bSuccess);
	void Next(bool* bSuccess, bool bSucceeded, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Next_bSuccess);
	void RemoveItemFromCategory(class ABaseItem*& Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void AddItemToCategory(class ABaseItem*& NewItem, int32 AtIndex, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UImage* CallFunc_CreateIcon_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void IsEquipping(bool* IsEquipping, TArray<enum class EBlockingAnimationExclusion>& K2Node_MakeArray_Array, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsBlockingAnimationPlaying_ReturnValue);
	void GetItemName(class FName* Item_Name, const class FString& FinalString, const class FString& Temp_string_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& Temp_string_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_Array_Get_Item, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, class UWeaponWheelScript* K2Node_DynamicCast_AsWeapon_Wheel_Script, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void GetCategory(class FText* Category);
	void PreConstruct(bool IsDesignTime);
	void On_Wheel_Created();
	void ExecuteUbergraph_W_WeaponWheel_RadialSelection(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item_1, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
};

}


