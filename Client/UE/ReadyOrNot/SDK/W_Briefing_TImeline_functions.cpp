#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_TImeline.W_Briefing_TImeline_C
// (None)

class UClass* UW_Briefing_TImeline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_TImeline_C");

	return Clss;
}


// W_Briefing_TImeline_C W_Briefing_TImeline.Default__W_Briefing_TImeline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_TImeline_C* UW_Briefing_TImeline_C::GetDefaultObj()
{
	static class UW_Briefing_TImeline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_TImeline_C*>(UW_Briefing_TImeline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.Playing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentPlayTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TImeline_C::Playing(float CurrentPlayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "Playing");

	Params::UW_Briefing_TImeline_C_Playing_Params Parms{};

	Parms.CurrentPlayTime = CurrentPlayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.SetPlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Briefing_Audio_PlayStatesAudioPlayState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_TImeline_C::SetPlayState(enum class E_Briefing_Audio_PlayStates AudioPlayState, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "SetPlayState");

	Params::UW_Briefing_TImeline_C_SetPlayState_Params Parms{};

	Parms.AudioPlayState = AudioPlayState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Start                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TImeline_C::AudioPlay(float Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "AudioPlay");

	Params::UW_Briefing_TImeline_C_AudioPlay_Params Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioRestart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_TImeline_C::AudioRestart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "AudioRestart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_TImeline_C::AudioPause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "AudioPause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioScrub
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_TImeline_C::AudioScrub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "AudioScrub");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_TImeline_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "PreConstruct");

	Params::UW_Briefing_TImeline_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTimelineEvent>      Events                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USoundWave*                  AudioWaveAsset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TImeline_C::Initialize(TArray<struct FTimelineEvent>& Events, class USoundWave* AudioWaveAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "Initialize");

	Params::UW_Briefing_TImeline_C_Initialize_Params Parms{};

	Parms.Events = Events;
	Parms.AudioWaveAsset = AudioWaveAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.DemoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_TImeline_C::DemoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "DemoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TImeline_C::BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature");

	Params::UW_Briefing_TImeline_C_BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_TImeline.W_Briefing_TImeline_C.ExecuteUbergraph_W_Briefing_TImeline
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTimelineEvent>      K2Node_CustomEvent_Events                                        (ConstParm, ReferenceParm)
// class USoundWave*                  K2Node_CustomEvent_AudioWaveAsset                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimelineEvent              CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Briefing_Timeline_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_GetTimelineEventTestData_Audio_Asset                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimelineEvent>      CallFunc_GetTimelineEventTestData_Events                         (ReferenceParm)
// TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries                   (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EventID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimelineEvent              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_TImeline_C::ExecuteUbergraph_W_Briefing_TImeline(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<struct FTimelineEvent>& K2Node_CustomEvent_Events, class USoundWave* K2Node_CustomEvent_AudioWaveAsset, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Briefing_Timeline_Entry_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float K2Node_ComponentBoundEvent_EventID, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_TImeline_C", "ExecuteUbergraph_W_Briefing_TImeline");

	Params::UW_Briefing_TImeline_C_ExecuteUbergraph_W_Briefing_TImeline_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Events = K2Node_CustomEvent_Events;
	Parms.K2Node_CustomEvent_AudioWaveAsset = K2Node_CustomEvent_AudioWaveAsset;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_GetTimelineEventTestData_Audio_Asset = CallFunc_GetTimelineEventTestData_Audio_Asset;
	Parms.CallFunc_GetTimelineEventTestData_Events = CallFunc_GetTimelineEventTestData_Events;
	Parms.CallFunc_GetTimelineEventTestData_EventEntries = CallFunc_GetTimelineEventTestData_EventEntries;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_EventID = K2Node_ComponentBoundEvent_EventID;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


