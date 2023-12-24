#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C
class UW_Briefing_TimelineEvents_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VB_Events;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           W_Header;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x278(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCanvasPanel*                          TimelineEntryCanvas;                               // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spacing;                                           // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEventClicked;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Briefing_TimelineEvents_C* GetDefaultObj();

	void Finished_CEF1E049428EE21AB58B96A8441038EA();
	void Initialize(TMap<float, struct FTimelineEvent> EventEntries);
	void AddEvent(float EventId);
	void EventClicked(float EventAudioStart, float EventAudioDuration);
	void ExecuteUbergraph_W_Briefing_TimelineEvents(int32 EntryPoint, float K2Node_CustomEvent_EventAudioStart, float K2Node_CustomEvent_EventAudioDuration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, float K2Node_CustomEvent_EventID, class UW_Briefing_Event_C* CallFunc_Create_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration);
};

}


