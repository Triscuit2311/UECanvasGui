#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C
// (None)

class UClass* UW_PreMission_Tablet_Brief_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Brief_Audio_C");

	return Clss;
}


// W_PreMission_Tablet_Brief_Audio_C W_PreMission_Tablet_Brief_Audio.Default__W_PreMission_Tablet_Brief_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Brief_Audio_C* UW_PreMission_Tablet_Brief_Audio_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Brief_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Brief_Audio_C*>(UW_PreMission_Tablet_Brief_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.IsPlayingAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_Audio_C::IsPlayingAudio(bool* Playing, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "IsPlayingAudio");

	Params::UW_PreMission_Tablet_Brief_Audio_C_IsPlayingAudio_Params Parms{};

	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.ScrubTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Rewinding                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetScrubbedTime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::ScrubTime(bool Rewinding, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetScrubbedTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "ScrubTime");

	Params::UW_PreMission_Tablet_Brief_Audio_C_ScrubTime_Params Parms{};

	Parms.Rewinding = Rewinding;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScrubbedTime_ReturnValue = CallFunc_GetScrubbedTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.GetScrubbedTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UW_PreMission_Tablet_Brief_Audio_C::GetScrubbedTime(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "GetScrubbedTime");

	Params::UW_PreMission_Tablet_Brief_Audio_C_GetScrubbedTime_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Set Current Audio Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Timer_Text_TimerText                                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_PreMission_Tablet_Brief_Audio_C::Set_Current_Audio_Text(int32 CurrentTime, class FText CallFunc_Get_Timer_Text_TimerText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Set Current Audio Text");

	Params::UW_PreMission_Tablet_Brief_Audio_C_Set_Current_Audio_Text_Params Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.CallFunc_Get_Timer_Text_TimerText = CallFunc_Get_Timer_Text_TimerText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.GetEventEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ForceUpdate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<float, struct FTimelineEvent> EventEntries1                                                    (Parm, OutParm)
// bool                               Initialized                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<float, struct FTimelineEvent> EventEntries                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimelineEvent              CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_Audio_C::GetEventEntries(bool ForceUpdate, TMap<float, struct FTimelineEvent>* EventEntries1, bool Initialized, TMap<float, struct FTimelineEvent> EventEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "GetEventEntries");

	Params::UW_PreMission_Tablet_Brief_Audio_C_GetEventEntries_Params Parms{};

	Parms.ForceUpdate = ForceUpdate;
	Parms.Initialized = Initialized;
	Parms.EventEntries = EventEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventEntries1 != nullptr)
		*EventEntries1 = Parms.EventEntries1;

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.SetAudioPlayProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                  PlayingSoundWave                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackPercent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::SetAudioPlayProgress(class USoundWave* PlayingSoundWave, float PlaybackPercent, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "SetAudioPlayProgress");

	Params::UW_PreMission_Tablet_Brief_Audio_C_SetAudioPlayProgress_Params Parms{};

	Parms.PlayingSoundWave = PlayingSoundWave;
	Parms.PlaybackPercent = PlaybackPercent;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.ToggleLooping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::ToggleLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "ToggleLooping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Restart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Restart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Get Timer Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TimerText                                                        (Parm, OutParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_FromMilliseconds_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_PreMission_Tablet_Brief_Audio_C::Get_Timer_Text(int32 Time, class FText* TimerText, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimespan& CallFunc_FromMilliseconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Get Timer Text");

	Params::UW_PreMission_Tablet_Brief_Audio_C_Get_Timer_Text_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FromMilliseconds_ReturnValue = CallFunc_FromMilliseconds_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimerText != nullptr)
		*TimerText = Parms.TimerText;

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_Audio_C_BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              EventAudioStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EventAudioDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_Audio_C_BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature_Params Parms{};

	Parms.EventAudioStart = EventAudioStart;
	Parms.EventAudioDuration = EventAudioDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionAudio               Audio                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PreMission_Tablet_Brief_Audio_C::Initialize(const struct FMissionAudio& Audio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Initialize");

	Params::UW_PreMission_Tablet_Brief_Audio_C_Initialize_Params Parms{};

	Parms.Audio = Audio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Tick");

	Params::UW_PreMission_Tablet_Brief_Audio_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_Audio_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "PreConstruct");

	Params::UW_PreMission_Tablet_Brief_Audio_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              ClipStartTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature(float ClipStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_Audio_C_BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature_Params Parms{};

	Parms.ClipStartTime = ClipStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_0_OnAudioCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_0_OnAudioCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_0_OnAudioCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_1_OnPlay__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_1_OnPlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_1_OnPlay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_Audio_C::BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "BndEvt__W_PreMission_Tablet_Brief_Audio_AudioPlayer_K2Node_ComponentBoundEvent_2_OnPause__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMissionAudio               K2Node_CustomEvent_Audio                                         (ConstParm)
// float                              K2Node_ComponentBoundEvent_EventAudioStart                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EventAudioDuration                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EventID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATablet*                     CallFunc_GetPlayerTablet_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_ClipStartTime                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Audio_C::ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, const struct FMissionAudio& K2Node_CustomEvent_Audio, float K2Node_ComponentBoundEvent_EventAudioStart, float K2Node_ComponentBoundEvent_EventAudioDuration, float K2Node_ComponentBoundEvent_EventID, class ATablet* CallFunc_GetPlayerTablet_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_ClipStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Audio_C", "ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio");

	Params::UW_PreMission_Tablet_Brief_Audio_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Audio = K2Node_CustomEvent_Audio;
	Parms.K2Node_ComponentBoundEvent_EventAudioStart = K2Node_ComponentBoundEvent_EventAudioStart;
	Parms.K2Node_ComponentBoundEvent_EventAudioDuration = K2Node_ComponentBoundEvent_EventAudioDuration;
	Parms.K2Node_ComponentBoundEvent_EventID = K2Node_ComponentBoundEvent_EventID;
	Parms.CallFunc_GetPlayerTablet_ReturnValue = CallFunc_GetPlayerTablet_ReturnValue;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ClipStartTime = K2Node_ComponentBoundEvent_ClipStartTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


