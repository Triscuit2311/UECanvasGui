#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x370 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C
class UW_Briefing_Timeline_TrackWave_Simple_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Waveform;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsPlaying;                                        // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsEvent;                                          // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEventInProgress;                                  // 0x273(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFinished;                                       // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentPlayTime;                                   // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            SoundWaveAsset;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProgressMade;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmpUpdateFrequency;                                // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            TimelineEventFired;                                // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TimelineEventEnded;                                // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        CurrentEventID;                                    // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, class UW_Briefing_Timeline_TrackWaveElement_C*> EventWaveSegments;                                 // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        TickInterval;                                      // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaveSegments;                                      // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_Briefing_Timeline_TrackWaveElement_vert_C*> Segments;                                          // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_Briefing_Timeline_TrackWave_Simple_C* GetDefaultObj();

	void Playing(float CurrentPlayTime, int32 Index, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<float>& CallFunc_CalculateFrequencySpectrum_OutSpectrum, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, float CallFunc_Abs_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void EventListener(int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Scrubbed();
	void Paused(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Clear();
	void Restart();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Initialize(class USoundWave* SoundWave, TMap<float, struct FTimelineEvent> EventEntries);
	void DemoMode();
	void ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Simple(int32 EntryPoint, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class USoundWave* K2Node_CustomEvent_SoundWave, TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, int32 Temp_int_Array_Index_Variable, float CallFunc_Add_FloatFloat_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_CalculateFrequencySpectrum_OutSpectrum, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Abs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_Briefing_Timeline_TrackWaveElement_vert_C* K2Node_DynamicCast_AsW_Briefing_Timeline_Track_Wave_Element_Vert, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void TimelineEventEnded__DelegateSignature(float EventId);
	void TimelineEventFired__DelegateSignature(float EventId);
};

}


