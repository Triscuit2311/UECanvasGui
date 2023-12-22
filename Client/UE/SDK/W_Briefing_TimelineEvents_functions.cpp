#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C
// (None)

class UClass* UW_Briefing_TimelineEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_TimelineEvents_C");

	return Clss;
}


// W_Briefing_TimelineEvents_C W_Briefing_TimelineEvents.Default__W_Briefing_TimelineEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_TimelineEvents_C* UW_Briefing_TimelineEvents_C::GetDefaultObj()
{
	static class UW_Briefing_TimelineEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_TimelineEvents_C*>(UW_Briefing_TimelineEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Finished_CEF1E049428EE21AB58B96A8441038EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_TimelineEvents_C::Finished_CEF1E049428EE21AB58B96A8441038EA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TimelineEvents_C", "Finished_CEF1E049428EE21AB58B96A8441038EA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<float, struct FTimelineEvent> EventEntries                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_TimelineEvents_C::Initialize(TMap<float, struct FTimelineEvent> EventEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TimelineEvents_C", "Initialize");

	Params::UW_Briefing_TimelineEvents_C_Initialize_Params Parms{};

	Parms.EventEntries = EventEntries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TimelineEvents_C::AddEvent(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TimelineEvents_C", "AddEvent");

	Params::UW_Briefing_TimelineEvents_C_AddEvent_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventAudioStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EventAudioDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TimelineEvents_C::EventClicked(float EventAudioStart, float EventAudioDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TimelineEvents_C", "EventClicked");

	Params::UW_Briefing_TimelineEvents_C_EventClicked_Params Parms{};

	Parms.EventAudioStart = EventAudioStart;
	Parms.EventAudioDuration = EventAudioDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EventAudioStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EventAudioDuration                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries                                  (None)
// float                              K2Node_CustomEvent_EventID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Event_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimelineEvent              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_InsertChildAt_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UW_Briefing_TimelineEvents_C::ExecuteUbergraph_W_Briefing_TimelineEvents(int32 EntryPoint, float K2Node_CustomEvent_EventAudioStart, float K2Node_CustomEvent_EventAudioDuration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, float K2Node_CustomEvent_EventID, class UW_Briefing_Event_C* CallFunc_Create_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TimelineEvents_C", "ExecuteUbergraph_W_Briefing_TimelineEvents");

	Params::UW_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventAudioStart = K2Node_CustomEvent_EventAudioStart;
	Parms.K2Node_CustomEvent_EventAudioDuration = K2Node_CustomEvent_EventAudioDuration;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventEntries = K2Node_CustomEvent_EventEntries;
	Parms.K2Node_CustomEvent_EventID = K2Node_CustomEvent_EventID;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_InsertChildAt_ReturnValue = CallFunc_InsertChildAt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventAudioStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EventAudioDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TimelineEvents_C::OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TimelineEvents_C", "OnEventClicked__DelegateSignature");

	Params::UW_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature_Params Parms{};

	Parms.EventAudioStart = EventAudioStart;
	Parms.EventAudioDuration = EventAudioDuration;

	UObject::ProcessEvent(Func, &Parms);

}

}


