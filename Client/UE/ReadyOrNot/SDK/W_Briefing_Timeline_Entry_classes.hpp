#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD4 (0x334 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C
class UW_Briefing_Timeline_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_TimelineEntry;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Div_001;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Timestamp;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Description;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Hint;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Timestamp;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Title;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            TimelineEventHovered;                              // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TimelineEventUnhovered;                            // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TimelineEventClicked;                              // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimelineEvent                        EventData;                                         // 0x2D8(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        EventAudioStart;                                   // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioEnd;                                     // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioDuration;                                // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Timeline_Entry_C* GetDefaultObj();

	void Hovered(bool IsHovered, bool Temp_bool_Variable, enum class EHorizontalAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature();
	void BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_Briefing_Timeline_Entry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float CallFunc_Add_FloatFloat_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_IsDesignTime, float CallFunc_Subtract_FloatFloat_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, bool CallFunc_TextIsEmpty_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue);
	void TimelineEventClicked__DelegateSignature(float EventAudioStart, float EventAudioEnd, float EventAudioDuration);
	void TimelineEventUnhovered__DelegateSignature(float EventId);
	void TimelineEventHovered__DelegateSignature(float EventId);
};

}


