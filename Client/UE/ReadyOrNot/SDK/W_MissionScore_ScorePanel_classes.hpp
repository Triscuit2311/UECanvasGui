#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x408 - 0x260)
// WidgetBlueprintGeneratedClass W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C
class UW_MissionScore_ScorePanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                       HeaderSwitcher;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Minus;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Penalties;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Plus;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Scores;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_debug;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Header_Penalties;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Header_Scores;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ScoreList;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_Entry_C*    W_MissionEnd_RatingScoreEntry;                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_Entry_C*    W_MissionEnd_RatingScoreEntry_1;                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         PenaltyScores;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ScoresComplete;                                    // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScoreGroup                           ScoreGroup;                                        // 0x2D0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UW_MissionScore_ScorePanel_Entry_C*, struct FScoreGroup> ScoreEntries;                                      // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_MissionScore_Progress_C*            RatingProgressMeter;                               // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class UW_MissionScore_ScorePanel_Entry_C*, struct FScorePenaltyData> PenaltyEntries;                                    // 0x360(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FScorePenaltyData                     PenaltyData;                                       // 0x3B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            AllScoresAdded;                                    // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PenaltiesComplete;                                 // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            AllPenaltiesAdded;                                 // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        DEBUG_COUNT;                                       // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_MissionScore_ScorePanel_Entry_C*    MissionObjectivesEntry;                            // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_Entry_C*    SoftObjectivesEntry;                               // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MissionScore_ScorePanel_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetMissionObjectiveFromScoringComponent(class UScoringComponent* ScoringComponent, class AObjective** MatchingObjective, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class AObjective* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SoftObjectivesReady(class UW_MissionScore_ScorePanel_SubEntry_C* EntryWidget, int32 Score);
	void PrimaryObjectivesReady(class UW_MissionScore_ScorePanel_SubEntry_C* EntryWidget, int32 Score);
	void PopulateObjectives(TArray<struct FScoreData>& Scores, enum class EObjectiveLevel ObjectiveLevel, class UW_MissionScore_ScorePanel_SubEntry_C* LastAddedSubEntry, bool bLastEntryBound, int32 LastIndex, float RevealDelay, int32 Index, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FScoreData& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess_1, class AObjective* CallFunc_GetMissionObjectiveFromScoringComponent_MatchingObjective, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsObjectiveCompleted_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_MissionScore_ScorePanel_SubEntry_C* CallFunc_Create_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void AddScores(TArray<struct FScoreGroup>& Scores);
	void NextScore();
	void AddPenalties(TArray<struct FScorePenaltyData>& Scores);
	void NextPenalty();
	void Reveal(float Delay);
	void PenalizeProgress(class UW_MissionScore_ScorePanel_Entry_C* EntryWidget, int32 Score);
	void AddToProgress(class UW_MissionScore_ScorePanel_Entry_C* EntryWidget, int32 Score);
	void ExecuteUbergraph_W_MissionScore_ScorePanel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, TArray<struct FScoreGroup>& K2Node_CustomEvent_Scores_1, const struct FScoreGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FScorePenaltyData>& K2Node_CustomEvent_Scores, const struct FScorePenaltyData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Event_Delay, int32 Temp_int_Loop_Counter_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UW_MissionScore_ScorePanel_Entry_C* K2Node_CustomEvent_EntryWidget_1, int32 K2Node_CustomEvent_Score_1, const struct FScorePenaltyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UW_MissionScore_ScorePanel_Entry_C* CallFunc_Create_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, class UW_MissionScore_ScorePanel_Entry_C* K2Node_CustomEvent_EntryWidget, int32 K2Node_CustomEvent_Score, class AScoringManager* CallFunc_Get_ReturnValue, const struct FScoreGroup& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_GetTotalGivenScoresFromArray_ReturnValue, int32 CallFunc_GetTotalScoreCountFromArray_ReturnValue, int32 CallFunc_GetGivenScoreCountFromArray_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_MissionScore_ScorePanel_Entry_C* CallFunc_Create_ReturnValue_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1);
	void AllPenaltiesAdded__DelegateSignature();
	void AllScoresAdded__DelegateSignature();
};

}


