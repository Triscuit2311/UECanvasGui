#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x104 (0x364 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C
class UW_Briefing_Timeline_TrackWave_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                             Txt_debug;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Waveform;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsPlaying;                                        // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsEvent;                                          // 0x27A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEventInProgress;                                  // 0x27B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFinished;                                       // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentPlayTime;                                   // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            SoundWaveAsset;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProgressMade;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmpUpdateFrequency;                                // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            TimelineEventFired;                                // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TimelineEventEnded;                                // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        CurrentEventID;                                    // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, class UW_Briefing_Timeline_TrackWaveElement_C*> EventWaveSegments;                                 // 0x310(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        TickInterval;                                      // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Timeline_TrackWave_C* GetDefaultObj();

	void Playing(float CurrentPlayTime, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UW_Briefing_Timeline_TrackWaveElement_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<float>& CallFunc_GetAmplitude_OutAmplitudes, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void EventListener(int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Scrubbed();
	void Paused(bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void Clear();
	void Restart();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Initialize(class USoundWave* SoundWave, TMap<float, struct FTimelineEvent>& EventEntries);
	void DemoMode();
	void ExecuteUbergraph_W_Briefing_Timeline_TrackWave(int32 EntryPoint, class UW_Briefing_Timeline_TrackWaveElement_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class USoundWave* K2Node_CustomEvent_SoundWave, TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<float>& CallFunc_GetAmplitude_OutAmplitudes, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Array_Get_Item, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, TArray<float>& CallFunc_GetAmplitude_OutAmplitudes_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UW_Briefing_Timeline_TrackWaveElement_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void TimelineEventEnded__DelegateSignature(float EventId);
	void TimelineEventFired__DelegateSignature(float EventId);
};

}


