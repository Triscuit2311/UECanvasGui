#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x378 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Transcript.W_Briefing_Transcript_C
class UW_Briefing_Transcript_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Header_C*                           H_Transcript;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TranscriptEntries;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            BriefingData;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MissionName;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<float, struct FTranscript>              TranscriptEntries;                                 // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CurrentPlayTime;                                   // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B13[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, class UW_Briefing_Transcript_Entry_C*> TranscriptWidgets;                                 // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_Briefing_Transcript_Entry_C*> DimmedEntries;                                     // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            TranscriptClicked;                                 // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Spacing;                                           // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B18[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Briefing_Transcript_Entry_C*        CurrentTranscript;                                 // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTranscript>                   DebugTranscript;                                   // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Briefing_Transcript_C* GetDefaultObj();

	void CreateEntry(struct FTranscript& Transcript, class UW_Briefing_Transcript_Entry_Minimal_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void HighlightEntry(float EntryID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_Briefing_Transcript_Entry_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_Briefing_Transcript_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Briefing_Transcript_Entry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void Playing(float CurrentPlayTime, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_Briefing_Transcript_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTranscript& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Briefing_Transcript_Entry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Initialize(TArray<struct FTranscript>& TranscriptEvents);
	void OnTranscriptEntryClicked(float EntryID);
	void ExecuteUbergraph_W_Briefing_Transcript(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTranscript& CallFunc_Array_Get_Item, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FTranscript>& K2Node_CustomEvent_TranscriptEvents, float K2Node_CustomEvent_EntryID, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FTranscript& CallFunc_Array_Get_Item_1);
	void TranscriptClicked__DelegateSignature(float ClipStartTime);
};

}


