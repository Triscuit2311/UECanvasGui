#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Objectives.W_Briefing_Objectives_C
class UW_Briefing_Objectives_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Briefing_Objectives_List_C*         ChallengesList;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_List_C*         ObjectivesList;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Objectives_C* GetDefaultObj();

	void Initialize();
	void ClearObjectives();
	void ExecuteUbergraph_W_Briefing_Objectives(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


