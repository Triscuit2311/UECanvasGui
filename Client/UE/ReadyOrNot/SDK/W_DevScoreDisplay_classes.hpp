#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass W_DevScoreDisplay.W_DevScoreDisplay_C
class UW_DevScoreDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ArrestedCivilianCount;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ArrestedSuspectCount;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EvidenceCollectedText;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KilledCivilianCount;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KilledSuspectCount;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MissionCompleteText;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MissionFailedText;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MissionSoftCompleteText;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RemainingEvidenceCount;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReportedCivilianCount;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReportedSuspectCount;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReportsMadeText;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReportsRemainingText;                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReportsTotal;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RulesOfEngagementBrokenCount;                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ScenarioText;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TotalCivilianCount;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TotalEvidence;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TotalSuspectCount;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DevScoreDisplay_C* GetDefaultObj();

	void UpdateText(const class FString& Scenarios, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSuspectCount_OutReported, int32 CallFunc_GetSuspectCount_OutArrested, int32 CallFunc_GetSuspectCount_OutKilled, int32 CallFunc_GetSuspectCount_OutTotal, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_GetReportCount_ReportedCount, int32 CallFunc_GetReportCount_TotalReports, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_5, class FText CallFunc_Conv_IntToText_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasClearedMission_bHasClearedMission, bool CallFunc_HasClearedMission_bSoftClearedMission, bool CallFunc_HasClearedMission_bMissionFailed, int32 CallFunc_GetEvidenceCount_EvidenceCollected, int32 CallFunc_GetEvidenceCount_TotalEvidence, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_7, class FText CallFunc_Conv_IntToText_ReturnValue_8, class FText CallFunc_Conv_IntToText_ReturnValue_9, int32 CallFunc_GetCivilianCount_OutReported, int32 CallFunc_GetCivilianCount_OutInjured, int32 CallFunc_GetCivilianCount_OutKilled, int32 CallFunc_GetCivilianCount_OutArrested, int32 CallFunc_GetCivilianCount_OutTotal, class FText CallFunc_Conv_IntToText_ReturnValue_10, class FText CallFunc_Conv_IntToText_ReturnValue_11, class FText CallFunc_Conv_IntToText_ReturnValue_12, class FText CallFunc_Conv_IntToText_ReturnValue_13, class FText CallFunc_Conv_IntToText_ReturnValue_14);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_DevScoreDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsShippingBuild_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


