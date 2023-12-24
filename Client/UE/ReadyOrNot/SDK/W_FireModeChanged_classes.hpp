#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass W_FireModeChanged.W_FireModeChanged_C
class UW_FireModeChanged_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            NewFireMode;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_FireModeChanged_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_W_FireModeChanged(int32 EntryPoint, TArray<class UW_MagazineAmmoCheck_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UW_MagazineAmmoCheck_C* CallFunc_Array_Get_Item, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UW_FireModeChanged_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 Temp_int_Loop_Counter_Variable_1, class UW_FireModeChanged_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
};

}


