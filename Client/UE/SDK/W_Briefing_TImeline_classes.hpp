#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_TImeline.W_Briefing_TImeline_C
class UW_Briefing_TImeline_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Header_C*                           H_Timeline;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Timeline;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          TimelineEntryCanvas;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Timeline_TrackWave_C*      W_Briefing_Timeline_TrackWave;                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                               AudioControlWidget;                                // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_Briefing_Audio_PlayStates       PlayState;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_398D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioCurrentTime;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_TImeline_C* GetDefaultObj();

	void Playing(float CurrentPlayTime);
	void SetPlayState(enum class E_Briefing_Audio_PlayStates AudioPlayState, bool K2Node_SwitchEnum_CmpSuccess);
	void AudioPlay(float Start);
	void AudioRestart();
	void AudioPause();
	void AudioScrub();
	void PreConstruct(bool IsDesignTime);
	void Initialize(TArray<struct FTimelineEvent>& Events, class USoundWave* AudioWaveAsset);
	void DemoMode();
	void BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature(float EventId);
	void ExecuteUbergraph_W_Briefing_TImeline(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<struct FTimelineEvent>& K2Node_CustomEvent_Events, class USoundWave* K2Node_CustomEvent_AudioWaveAsset, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Briefing_Timeline_Entry_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float K2Node_ComponentBoundEvent_EventID, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
};

}


