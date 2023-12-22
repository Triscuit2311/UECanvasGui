#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C
// (None)

class UClass* UW_Briefing_Timeline_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Timeline_Entry_C");

	return Clss;
}


// W_Briefing_Timeline_Entry_C W_Briefing_Timeline_Entry.Default__W_Briefing_Timeline_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Timeline_Entry_C* UW_Briefing_Timeline_Entry_C::GetDefaultObj()
{
	static class UW_Briefing_Timeline_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Timeline_Entry_C*>(UW_Briefing_Timeline_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHorizontalAlignment    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_Entry_C::Hovered(bool IsHovered, bool Temp_bool_Variable, enum class EHorizontalAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "Hovered");

	Params::UW_Briefing_Timeline_Entry_C_Hovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "PreConstruct");

	Params::UW_Briefing_Timeline_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_Entry_C::BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_Entry_C::BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_Entry_C::BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.ExecuteUbergraph_W_Briefing_Timeline_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_GetTimelineEventTestData_Audio_Asset                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimelineEvent>      CallFunc_GetTimelineEventTestData_Events                         (ReferenceParm)
// TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries                   (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimelineEvent              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_Entry_C::ExecuteUbergraph_W_Briefing_Timeline_Entry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float CallFunc_Add_FloatFloat_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_IsDesignTime, float CallFunc_Subtract_FloatFloat_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, bool CallFunc_TextIsEmpty_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "ExecuteUbergraph_W_Briefing_Timeline_Entry");

	Params::UW_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimelineEventTestData_Audio_Asset = CallFunc_GetTimelineEventTestData_Audio_Asset;
	Parms.CallFunc_GetTimelineEventTestData_Events = CallFunc_GetTimelineEventTestData_Events;
	Parms.CallFunc_GetTimelineEventTestData_EventEntries = CallFunc_GetTimelineEventTestData_EventEntries;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventAudioStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EventAudioEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EventAudioDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_Entry_C::TimelineEventClicked__DelegateSignature(float EventAudioStart, float EventAudioEnd, float EventAudioDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "TimelineEventClicked__DelegateSignature");

	Params::UW_Briefing_Timeline_Entry_C_TimelineEventClicked__DelegateSignature_Params Parms{};

	Parms.EventAudioStart = EventAudioStart;
	Parms.EventAudioEnd = EventAudioEnd;
	Parms.EventAudioDuration = EventAudioDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_Entry_C::TimelineEventUnhovered__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "TimelineEventUnhovered__DelegateSignature");

	Params::UW_Briefing_Timeline_Entry_C_TimelineEventUnhovered__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_Entry_C::TimelineEventHovered__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_Entry_C", "TimelineEventHovered__DelegateSignature");

	Params::UW_Briefing_Timeline_Entry_C_TimelineEventHovered__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}

}


