#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x3D8 - 0x320)
// WidgetBlueprintGeneratedClass W_MissionScore.W_MissionScore_C
class UW_MissionScore_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_162;                                         // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_BestGrade;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_ModdedScoreNotice;                             // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_C*          Penalties;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_C*          Scores;                                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_BestGrade;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_BestTime;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_CurrentTime;                                   // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_BestGrade;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_List_C*         W_Briefing_Objectives_List;                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_Progress_C*            W_MissionEnd_Rating_Progress_C_1;                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               WidgetFocusButton;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UObject*>                       AllPenalties;                                      // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CurrentScore;                                      // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4063[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RatingFormat;                                      // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerController*                     OwningPlayer;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewBestRating;                                     // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NewBestTime;                                       // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4064[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeElapsed;                                       // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnScoringComplete;                                 // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_MissionScore_C* GetDefaultObj();

	void UpdateLevelStats(class AScoringManager* CallFunc_Get_ReturnValue, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed, int32 CallFunc_GetObjectiveCompletionStatus_TotalObjectives, const struct FBasicLevelStats& CallFunc_LoadLevelStats_OutStats, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_CalculateGradeLetterFromPercentage_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class AScoringManager* CallFunc_Get_ReturnValue_1, float CallFunc_GetCurrentScoreAsPercentage_ReturnValue, const struct FBasicLevelStats& K2Node_MakeStruct_BasicLevelStats, bool CallFunc_SaveLevelStats_NewBestRating, bool CallFunc_SaveLevelStats_NewBestTime);
	enum class ESlateVisibility GetModdedScoreNoticeVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsGameModded_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SaveMetrics(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, float CallFunc_GetCurrentScoreAsPercentage_ReturnValue, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_CalculateGradeLetterFromPercentage_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_GetFriendlyModeFromECoopMode_ReturnValue);
	enum class ESlateVisibility GetMissionNextMapTimerVisibility(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AGS_COOP_C* K2Node_DynamicCast_AsGS_COOP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void AddAllPenalties(class AScoringManager* CallFunc_Get_ReturnValue, TArray<struct FScorePenaltyData>& CallFunc_GetPenaltyScoreGroups_ReturnValue);
	void AddPenalty(class FText Name, int32 Count, int32 Total, int32 Score, class UW_MissionEndBonus_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void AddAllBonuses(class AScoringManager* CallFunc_Get_ReturnValue, TArray<struct FScoreGroup>& CallFunc_GetScoreGroups_ReturnValue);
	void AddBonus(class FText Name, int32 Count, int32 Total, int32 Score, class UW_MissionScore_ScorePanel_Entry_C* CallFunc_Create_ReturnValue);
	class FText GetMapTimeRemaining(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_ConvertFloatToStringMinutes_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature();
	void BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature();
	void BndEvt__W_MissionScore_W_MissionEnd_Rating_Progress_C_1_K2Node_ComponentBoundEvent_2_OnGradeRevealed__DelegateSignature();
	void BP_OnActivated();
	void ExecuteUbergraph_W_MissionScore(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, class AScoringManager* CallFunc_Get_ReturnValue, int32 CallFunc_GetTotalScore_TotalScore, class AScoringManager* CallFunc_Get_ReturnValue_1, const class FString& CallFunc_CalculateGradeLetterFromPlayerScore_ReturnValue, class AMapStatisticsSystem* CallFunc_GetMapStatistics_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, class AScoringManager* CallFunc_Get_ReturnValue_2, TArray<struct FScorePenaltyData>& CallFunc_GetPenaltyScoreGroups_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_2);
	void OnScoringComplete__DelegateSignature();
};

}


