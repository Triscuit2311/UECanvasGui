#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass W_KeyDisplay.W_KeyDisplay_C
class UW_KeyDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            KeyDisplayName;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeyName;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInputEntry                           InputEntry;                                        // 0x278(0x70)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_KeyDisplay_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomEvent_0();
	void Reconstruct();
	void ExecuteUbergraph_W_KeyDisplay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, const struct FActionMappingStruct& CallFunc_Array_Get_Item, const struct FAxisMappingStruct& CallFunc_Array_Get_Item_1, class FText CallFunc_Key_GetDisplayName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
};

}


