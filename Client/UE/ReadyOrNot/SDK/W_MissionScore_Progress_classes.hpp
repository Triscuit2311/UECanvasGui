#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x3A8 - 0x260)
// WidgetBlueprintGeneratedClass W_MissionScore_Progress.W_MissionScore_Progress_C
class UW_MissionScore_Progress_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      GradeReveal;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Fade;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressMeter;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_debug;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_debug_1;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_debug_2;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Grade;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PlusMinus;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Score;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_DEBUG;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HighScore;                                         // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScorePercent;                                      // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Grades;                                            // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Score;                                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ProgressDynMat;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Grade;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_C*          ScorePanel;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_C*          PenaltyPanel;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScoreGroup                           ScoreData;                                         // 0x300(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FScorePenaltyData                     PenaltyData;                                       // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentScore;                                      // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetScore;                                       // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxScore;                                          // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddingScore;                                       // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Failed;                                            // 0x35D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Penalty;                                           // 0x35E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4351[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimTime;                                          // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimDuration;                                      // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimProgress;                                      // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DEBUG_COUNT;                                       // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayingSound;                                      // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4353[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            PenaltyCount;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ScoreCount;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ScoreGrade;                                        // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CountEvent;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            OnGradeRevealed;                                   // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_MissionScore_Progress_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTW_MissionScore_Progress_0();
	void UpdateSound(bool CallFunc_EventInstanceIsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetDebug(class FText DebugText1, class FText DebugText2, class FText DebugText3, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void AddToScore(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Ease_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void UpdateProgressMeter(int32 CurrentScore, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Finished_FBB0C8E14C37FCFA6D2B82B609745084();
	void GradeSound();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateScore(const struct FScoreGroup& ScoreData);
	void UpdatePenalty(const struct FScorePenaltyData& PenaltyData);
	void RevealGrade(const class FString& Grade);
	void Destruct();
	void ExecuteUbergraph_W_MissionScore_Progress(int32 EntryPoint, int32 CallFunc_Abs_Int_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FScoreGroup& K2Node_CustomEvent_ScoreData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetTotalScorePool_MaxScore, const struct FScorePenaltyData& K2Node_CustomEvent_PenaltyData, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& K2Node_CustomEvent_Grade, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, bool CallFunc_EventInstanceIsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, int32 CallFunc_GetTotalGivenScoresFromArray_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 Temp_int_Variable);
	void OnGradeRevealed__DelegateSignature();
};

}


