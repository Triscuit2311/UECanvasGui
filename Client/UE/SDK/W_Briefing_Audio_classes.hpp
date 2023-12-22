#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x3C0 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Audio.W_Briefing_Audio_C
class UW_Briefing_Audio_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimHide;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_AudioPlayer_C*                      AudioControl;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_TimelineEvents_C*          Events;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           H_Audio;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           H_Audio_1;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Timeline_TrackWave_Simple_C* TrackWave;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Transcript_C*              Transcript;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PlayTime;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PlayTime_1;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_C*                      W_Briefing_AudioControls;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_TImeline_C*                W_Briefing_TImeline;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                  W_HotkeyBar_Entry;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            BriefingData;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MissionName;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            AudioAsset;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DesignTime;                                        // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AudioComponent;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoopAudio;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Rewinding;                                         // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Paused;                                            // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioDuration;                                     // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioLoopDelay;                                    // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioCurrentTime;                                  // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkipTimeIncrement;                                 // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Volume;                                            // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionAudio                         DebugMissionAudio;                                 // 0x310(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimelineEvent>                DebugTimelineEvents;                               // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        PlaybackOffset;                                    // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TimerDurationText;                                 // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimelineEvent>                TimelineEvents;                                    // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ReturnTime;                                        // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Snippet;                                           // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnippetResumeDelay;                                // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioStartDelay;                                   // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Audio_C* GetDefaultObj();

	void Set_Current_Audio_Text(float CurrentTime, class FText CallFunc_GetTimerText_TimerText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetEventEntries(bool ForceUpdate, TMap<float, struct FTimelineEvent>* EventEntries1, bool Initialized, TMap<float, struct FTimelineEvent> EventEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetAudioPlayProgress(class USoundWave* PlayingSoundWave, float PlaybackPercent, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void SetLoop(bool CallFunc_Not_PreBool_ReturnValue);
	void Restart();
	void Stop(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
	void GetTimerText(float Time__sec_, class FText* TimerText, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Play(float StartTime, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
	void OnAudioFinished();
	void BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature();
	void BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature(float ClipStartTime);
	void Initialize(const struct FMissionAudio& Audio, TArray<struct FTimelineEvent>& TimelineEvents);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature();
	void BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature(float EventId);
	void BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature();
	void BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration);
	void BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_W_Briefing_Audio(int32 EntryPoint, float K2Node_ComponentBoundEvent_ClipStartTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FMissionAudio& K2Node_CustomEvent_Audio, TArray<struct FTimelineEvent>& K2Node_CustomEvent_TimelineEvents, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_EventID, float K2Node_ComponentBoundEvent_EventAudioStart, float K2Node_ComponentBoundEvent_EventAudioDuration, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


