#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C
// (None)

class UClass* UW_Briefing_Timeline_TrackWave_Simple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Timeline_TrackWave_Simple_C");

	return Clss;
}


// W_Briefing_Timeline_TrackWave_Simple_C W_Briefing_Timeline_TrackWave_Simple.Default__W_Briefing_Timeline_TrackWave_Simple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Timeline_TrackWave_Simple_C* UW_Briefing_Timeline_TrackWave_Simple_C::GetDefaultObj()
{
	static class UW_Briefing_Timeline_TrackWave_Simple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Timeline_TrackWave_Simple_C*>(UW_Briefing_Timeline_TrackWave_Simple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.Playing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentPlayTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_CalculateFrequencySpectrum_OutSpectrum                  (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Briefing_Timeline_TrackWaveElement_vert_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWave_Simple_C::Playing(float CurrentPlayTime, int32 Index, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<float>& CallFunc_CalculateFrequencySpectrum_OutSpectrum, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, float CallFunc_Abs_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "Playing");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_Playing_Params Parms{};

	Parms.CurrentPlayTime = CurrentPlayTime;
	Parms.Index = Index;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_CalculateFrequencySpectrum_OutSpectrum = CallFunc_CalculateFrequencySpectrum_OutSpectrum;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.EventListener
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimelineEvent              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWave_Simple_C::EventListener(int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "EventListener");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_EventListener_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.Scrubbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_Simple_C::Scrubbed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "Scrubbed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.paused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Timeline_TrackWaveElement_vert_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWave_Simple_C::Paused(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "paused");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_Paused_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_Simple_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.Restart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_Simple_C::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "Restart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWave_Simple_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "PreConstruct");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_Simple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "Tick");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                  SoundWave                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<float, struct FTimelineEvent> EventEntries                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Timeline_TrackWave_Simple_C::Initialize(class USoundWave* SoundWave, TMap<float, struct FTimelineEvent> EventEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "Initialize");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_Initialize_Params Parms{};

	Parms.SoundWave = SoundWave;
	Parms.EventEntries = EventEntries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.DemoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_Simple_C::DemoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "DemoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Timeline_TrackWaveElement_vert_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  K2Node_CustomEvent_SoundWave                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_GetTimelineEventTestData_Audio_Asset                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimelineEvent>      CallFunc_GetTimelineEventTestData_Events                         (ReferenceParm)
// TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_CalculateFrequencySpectrum_OutSpectrum                  (ReferenceParm)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UW_Briefing_Timeline_TrackWaveElement_vert_C*K2Node_DynamicCast_AsW_Briefing_Timeline_Track_Wave_Element_Vert (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_Simple_C::ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Simple(int32 EntryPoint, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class USoundWave* K2Node_CustomEvent_SoundWave, TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, int32 Temp_int_Array_Index_Variable, float CallFunc_Add_FloatFloat_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_CalculateFrequencySpectrum_OutSpectrum, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Abs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_Briefing_Timeline_TrackWaveElement_vert_C* K2Node_DynamicCast_AsW_Briefing_Timeline_Track_Wave_Element_Vert, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Simple");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Simple_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_SoundWave = K2Node_CustomEvent_SoundWave;
	Parms.K2Node_CustomEvent_EventEntries = K2Node_CustomEvent_EventEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimelineEventTestData_Audio_Asset = CallFunc_GetTimelineEventTestData_Audio_Asset;
	Parms.CallFunc_GetTimelineEventTestData_Events = CallFunc_GetTimelineEventTestData_Events;
	Parms.CallFunc_GetTimelineEventTestData_EventEntries = CallFunc_GetTimelineEventTestData_EventEntries;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_CalculateFrequencySpectrum_OutSpectrum = CallFunc_CalculateFrequencySpectrum_OutSpectrum;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_DynamicCast_AsW_Briefing_Timeline_Track_Wave_Element_Vert = K2Node_DynamicCast_AsW_Briefing_Timeline_Track_Wave_Element_Vert;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.TimelineEventEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_Simple_C::TimelineEventEnded__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "TimelineEventEnded__DelegateSignature");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_TimelineEventEnded__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C.TimelineEventFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_Simple_C::TimelineEventFired__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_Simple_C", "TimelineEventFired__DelegateSignature");

	Params::UW_Briefing_Timeline_TrackWave_Simple_C_TimelineEventFired__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}

}


