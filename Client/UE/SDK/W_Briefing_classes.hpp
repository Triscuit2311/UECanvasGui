#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7E0 (0xAB0 - 0x2D0)
// WidgetBlueprintGeneratedClass W_Briefing.W_Briefing_C
class UW_Briefing_C : public UBriefingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimHide;                                          // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Fade;                                              // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Audio_C*                   Audio;                                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Intel_C*                   Intel;                                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_C*              Objectives;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPreMissionPlanning*                   PreMissionPlanning;                                // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_BriefingTaskButton_C*>       BriefingTaskButtons;                               // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_Briefing_Evidence>         DocumentsPlaceholder;                              // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLevelDataLookupTable                 LevelData;                                         // 0x328(0x788)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Briefing_C* GetDefaultObj();

	void GetObjectives(TArray<TSoftClassPtr<class AObjective>>* Objectives, TArray<TSoftClassPtr<class UChallenge>>* Challenges);
	void GetBriefingAudio(TArray<struct FMissionAudio>* Audio, TArray<struct FTimelineEvent>* TimelineEvents);
	void Original(int32 Temp_int_Array_Index_Variable, class UW_BriefingBio_ProfileLeft_C* CallFunc_Create_ReturnValue, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_BriefingTaskButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingBio_ProfileRight_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, int32 Temp_int_Loop_Counter_Variable_2, const struct FCharacterBio& CallFunc_Array_Get_Item, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet, class UTexture2D* CallFunc_GetBioDetails_ProfileImage, const class FString& CallFunc_GetBioDetails_OutDescription, const class FString& CallFunc_GetBioDetails_OutBioText, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item_1, const struct FCharacterBio& CallFunc_Array_Get_Item_2, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet_1, class UTexture2D* CallFunc_GetBioDetails_ProfileImage_1, const class FString& CallFunc_GetBioDetails_OutDescription_1, const class FString& CallFunc_GetBioDetails_OutBioText_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2);
	void SetBriefingTaskButtonsActive(bool Active, bool IsActive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Hide();
	void Reveal();
	void ExecuteUbergraph_W_Briefing(int32 EntryPoint, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, const struct FST_Briefing_Intel& K2Node_MakeStruct_ST_Briefing_Intel, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, TArray<struct FMissionAudio>& CallFunc_GetBriefingAudio_Audio, TArray<struct FTimelineEvent>& CallFunc_GetBriefingAudio_TimelineEvents, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue_1, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_2, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_3, const struct FST_Briefing_Intel& K2Node_MakeStruct_ST_Briefing_Intel_1, TArray<struct FMissionAudio>& CallFunc_GetBriefingAudio_Audio_1, TArray<struct FTimelineEvent>& CallFunc_GetBriefingAudio_TimelineEvents_1, bool K2Node_Event_IsDesignTime, const struct FMissionAudio& CallFunc_GetBriefing_OutBriefing, const struct FMissionAudio& CallFunc_GetBriefing_OutBriefing_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


