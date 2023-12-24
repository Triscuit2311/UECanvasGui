#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B6 (0x416 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C
class UW_PreMission_Tablet_Brief_Audio_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimHide;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_AudioPlayer_C*                      AudioPlayer;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_TimelineEvents_C*          Events;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           H_Audio_1;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_Transcript;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Timeline_TrackWave_Simple_C* TrackWave;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Transcript_C*              Transcript;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PlayTime;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                  W_HotkeyBar_Entry;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            BriefingData;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MissionName;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            AudioAsset;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DesignTime;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3774[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AudioComponent;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoopAudio;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Rewinding;                                         // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPaused;                                           // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3775[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AudioDuration;                                     // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioLoopDelay;                                    // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioCurrentTime;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SkipTimeIncrement;                                 // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Volume;                                            // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3776[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionAudio                         DebugMissionAudio;                                 // 0x2F8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimelineEvent>                DebugTimelineEvents;                               // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        PlaybackOffset;                                    // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3777[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TimerDurationText;                                 // 0x370(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimelineEvent>                TimelineEvents;                                    // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ReturnTime;                                        // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Snippet;                                           // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3778[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnippetResumeDelay;                                // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AutoStartDelay;                                    // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODComponent;                                     // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMissionAudio                         MissionAudio;                                      // 0x3B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TimelinePosition;                                  // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stopped;                                           // 0x414(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasPlayed;                                        // 0x415(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Brief_Audio_C* GetDefaultObj();

	void IsPlayingAudio(bool* Playing, bool CallFunc_IsPlaying_ReturnValue);
	void Pause();
	void ScrubTime(bool Rewinding, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetScrubbedTime_ReturnValue);
	int32 GetScrubbedTime(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Set_Current_Audio_Text(int32 CurrentTime, class FText CallFunc_Get_Timer_Text_TimerText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetEventEntries(bool ForceUpdate, TMap<float, struct FTimelineEvent>* EventEntries1, bool Initialized, TMap<float, struct FTimelineEvent> EventEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetAudioPlayProgress(class USoundWave* PlayingSoundWave, float PlaybackPercent, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void ToggleLooping();
	void Restart();
	void Stop();
	void Get_Timer_Text(int32 Time, class FText* TimerText, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimespan& CallFunc_FromMilliseconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Play();
	void BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature(float EventId);
	void BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration);
	void Initialize(const struct FMissionAudio& Audio);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature(float ClipStartTime);
	void BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_0_OnAudioCompleted__DelegateSignature();
	void BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_1_OnPlay__DelegateSignature();
	void BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature();
	void ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, const struct FMissionAudio& K2Node_CustomEvent_Audio, float K2Node_ComponentBoundEvent_EventAudioStart, float K2Node_ComponentBoundEvent_EventAudioDuration, float K2Node_ComponentBoundEvent_EventID, class ATablet* CallFunc_GetPlayerTablet_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_ClipStartTime);
};

}


