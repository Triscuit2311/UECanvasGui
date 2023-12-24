#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Audio.W_Briefing_Audio_C
// (None)

class UClass* UW_Briefing_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Audio_C");

	return Clss;
}


// W_Briefing_Audio_C W_Briefing_Audio.Default__W_Briefing_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Audio_C* UW_Briefing_Audio_C::GetDefaultObj()
{
	static class UW_Briefing_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Audio_C*>(UW_Briefing_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Audio.W_Briefing_Audio_C.Set Current Audio Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimerText_TimerText                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Briefing_Audio_C::Set_Current_Audio_Text(float CurrentTime, class FText CallFunc_GetTimerText_TimerText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Set Current Audio Text");

	Params::UW_Briefing_Audio_C_Set_Current_Audio_Text_Params Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.CallFunc_GetTimerText_TimerText = CallFunc_GetTimerText_TimerText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.GetEventEntries
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

void UW_Briefing_Audio_C::GetEventEntries(bool ForceUpdate, TMap<float, struct FTimelineEvent>* EventEntries1, bool Initialized, TMap<float, struct FTimelineEvent> EventEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "GetEventEntries");

	Params::UW_Briefing_Audio_C_GetEventEntries_Params Parms{};

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


// Function W_Briefing_Audio.W_Briefing_Audio_C.SetAudioPlayProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                  PlayingSoundWave                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackPercent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Audio_C::SetAudioPlayProgress(class USoundWave* PlayingSoundWave, float PlaybackPercent, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "SetAudioPlayProgress");

	Params::UW_Briefing_Audio_C_SetAudioPlayProgress_Params Parms{};

	Parms.PlayingSoundWave = PlayingSoundWave;
	Parms.PlaybackPercent = PlaybackPercent;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.SetLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Audio_C::SetLoop(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "SetLoop");

	Params::UW_Briefing_Audio_C_SetLoop_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.Restart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Restart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Audio_C::Stop(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Stop");

	Params::UW_Briefing_Audio_C_Stop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.GetTimerText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Time__sec_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TimerText                                                        (Parm, OutParm)
// struct FTimespan                   CallFunc_FromSeconds_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
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

void UW_Briefing_Audio_C::GetTimerText(float Time__sec_, class FText* TimerText, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "GetTimerText");

	Params::UW_Briefing_Audio_C_GetTimerText_Params Parms{};

	Parms.Time__sec_ = Time__sec_;
	Parms.CallFunc_FromSeconds_ReturnValue = CallFunc_FromSeconds_ReturnValue;
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


// Function W_Briefing_Audio.W_Briefing_Audio_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Audio_C::Play(float StartTime, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Play");

	Params::UW_Briefing_Audio_C_Play_Params Parms{};

	Parms.StartTime = StartTime;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.OnAudioFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::OnAudioFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "OnAudioFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              ClipStartTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Audio_C::BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature(float ClipStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature");

	Params::UW_Briefing_Audio_C_BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature_Params Parms{};

	Parms.ClipStartTime = ClipStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionAudio               Audio                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FTimelineEvent>      TimelineEvents                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Audio_C::Initialize(const struct FMissionAudio& Audio, TArray<struct FTimelineEvent>& TimelineEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Initialize");

	Params::UW_Briefing_Audio_C_Initialize_Params Parms{};

	Parms.Audio = Audio;
	Parms.TimelineEvents = TimelineEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Audio_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Tick");

	Params::UW_Briefing_Audio_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Audio_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "PreConstruct");

	Params::UW_Briefing_Audio_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Audio_C::BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature");

	Params::UW_Briefing_Audio_C_BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              EventAudioStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EventAudioDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Audio_C::BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature");

	Params::UW_Briefing_Audio_C_BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature_Params Parms{};

	Parms.EventAudioStart = EventAudioStart;
	Parms.EventAudioDuration = EventAudioDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Audio_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Audio.W_Briefing_Audio_C.ExecuteUbergraph_W_Briefing_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_ClipStartTime                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionAudio               K2Node_CustomEvent_Audio                                         (ConstParm)
// TArray<struct FTimelineEvent>      K2Node_CustomEvent_TimelineEvents                                (ConstParm, ReferenceParm)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_EventID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EventAudioStart                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EventAudioDuration                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Audio_C::ExecuteUbergraph_W_Briefing_Audio(int32 EntryPoint, float K2Node_ComponentBoundEvent_ClipStartTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FMissionAudio& K2Node_CustomEvent_Audio, TArray<struct FTimelineEvent>& K2Node_CustomEvent_TimelineEvents, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_EventID, float K2Node_ComponentBoundEvent_EventAudioStart, float K2Node_ComponentBoundEvent_EventAudioDuration, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Audio_C", "ExecuteUbergraph_W_Briefing_Audio");

	Params::UW_Briefing_Audio_C_ExecuteUbergraph_W_Briefing_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ClipStartTime = K2Node_ComponentBoundEvent_ClipStartTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Audio = K2Node_CustomEvent_Audio;
	Parms.K2Node_CustomEvent_TimelineEvents = K2Node_CustomEvent_TimelineEvents;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_EventID = K2Node_ComponentBoundEvent_EventID;
	Parms.K2Node_ComponentBoundEvent_EventAudioStart = K2Node_ComponentBoundEvent_EventAudioStart;
	Parms.K2Node_ComponentBoundEvent_EventAudioDuration = K2Node_ComponentBoundEvent_EventAudioDuration;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


