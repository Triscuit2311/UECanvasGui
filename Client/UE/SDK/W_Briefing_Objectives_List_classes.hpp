#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Objectives_List.W_Briefing_Objectives_List_C
class UW_Briefing_Objectives_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                             Txt_Count;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ObjectiveList;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           W_Header;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsChallengeList;                                  // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSimplifiedObjectives;                             // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3ECC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChallenge*                            Objectives;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalObjectives;                                   // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CompletedObjectives;                               // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Objectives_List_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void InitObjectives(TArray<class AObjective*>& Objectives);
	void InitChallenges(TArray<struct FST_SubObjective_Entry>& Challenges);
	void ClearObjectives();
	void ExecuteUbergraph_W_Briefing_Objectives_List(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable, int32 Temp_int_Variable, class FText Temp_text_Variable_1, bool K2Node_Event_IsDesignTime, class UW_Objective_C* CallFunc_Create_ReturnValue, TArray<class AObjective*>& K2Node_CustomEvent_Objectives, bool Temp_bool_Variable, class AObjective* CallFunc_Array_Get_Item, class FText K2Node_Select_Default, bool CallFunc_IsObjectiveCompleted_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FST_SubObjective_Entry>& K2Node_CustomEvent_Challenges, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2);
};

}


