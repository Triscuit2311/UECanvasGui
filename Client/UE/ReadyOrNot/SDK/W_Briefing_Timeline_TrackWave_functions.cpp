#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C
// (None)

class UClass* UW_Briefing_Timeline_TrackWave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Timeline_TrackWave_C");

	return Clss;
}


// W_Briefing_Timeline_TrackWave_C W_Briefing_Timeline_TrackWave.Default__W_Briefing_Timeline_TrackWave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Timeline_TrackWave_C* UW_Briefing_Timeline_TrackWave_C::GetDefaultObj()
{
	static class UW_Briefing_Timeline_TrackWave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Timeline_TrackWave_C*>(UW_Briefing_Timeline_TrackWave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Playing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentPlayTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Briefing_Timeline_TrackWaveElement_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetAmplitude_OutAmplitudes                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_C::Playing(float CurrentPlayTime, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UW_Briefing_Timeline_TrackWaveElement_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<float>& CallFunc_GetAmplitude_OutAmplitudes, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "Playing");

	Params::UW_Briefing_Timeline_TrackWave_C_Playing_Params Parms{};

	Parms.CurrentPlayTime = CurrentPlayTime;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetAmplitude_OutAmplitudes = CallFunc_GetAmplitude_OutAmplitudes;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.EventListener
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

void UW_Briefing_Timeline_TrackWave_C::EventListener(int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "EventListener");

	Params::UW_Briefing_Timeline_TrackWave_C_EventListener_Params Parms{};

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


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Scrubbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_C::Scrubbed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "Scrubbed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.paused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_C::Paused(bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "paused");

	Params::UW_Briefing_Timeline_TrackWave_C_Paused_Params Parms{};

	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Restart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_C::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "Restart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWave_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "PreConstruct");

	Params::UW_Briefing_Timeline_TrackWave_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "Tick");

	Params::UW_Briefing_Timeline_TrackWave_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                  SoundWave                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<float, struct FTimelineEvent> EventEntries                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Timeline_TrackWave_C::Initialize(class USoundWave* SoundWave, TMap<float, struct FTimelineEvent>& EventEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "Initialize");

	Params::UW_Briefing_Timeline_TrackWave_C_Initialize_Params Parms{};

	Parms.SoundWave = SoundWave;
	Parms.EventEntries = EventEntries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.DemoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWave_C::DemoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "DemoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Timeline_TrackWaveElement_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  K2Node_CustomEvent_SoundWave                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries                                  (ConstParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetAmplitude_OutAmplitudes                              (ReferenceParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_GetTimelineEventTestData_Audio_Asset                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimelineEvent>      CallFunc_GetTimelineEventTestData_Events                         (ReferenceParm)
// TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries                   (None)
// TArray<float>                      CallFunc_GetAmplitude_OutAmplitudes_1                            (ReferenceParm)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Briefing_Timeline_TrackWaveElement_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_C::ExecuteUbergraph_W_Briefing_Timeline_TrackWave(int32 EntryPoint, class UW_Briefing_Timeline_TrackWaveElement_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class USoundWave* K2Node_CustomEvent_SoundWave, TMap<float, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<float>& CallFunc_GetAmplitude_OutAmplitudes, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Array_Get_Item, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<float, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, TArray<float>& CallFunc_GetAmplitude_OutAmplitudes_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UW_Briefing_Timeline_TrackWaveElement_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "ExecuteUbergraph_W_Briefing_Timeline_TrackWave");

	Params::UW_Briefing_Timeline_TrackWave_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_SoundWave = K2Node_CustomEvent_SoundWave;
	Parms.K2Node_CustomEvent_EventEntries = K2Node_CustomEvent_EventEntries;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAmplitude_OutAmplitudes = CallFunc_GetAmplitude_OutAmplitudes;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTimelineEventTestData_Audio_Asset = CallFunc_GetTimelineEventTestData_Audio_Asset;
	Parms.CallFunc_GetTimelineEventTestData_Events = CallFunc_GetTimelineEventTestData_Events;
	Parms.CallFunc_GetTimelineEventTestData_EventEntries = CallFunc_GetTimelineEventTestData_EventEntries;
	Parms.CallFunc_GetAmplitude_OutAmplitudes_1 = CallFunc_GetAmplitude_OutAmplitudes_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.TimelineEventEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_C::TimelineEventEnded__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "TimelineEventEnded__DelegateSignature");

	Params::UW_Briefing_Timeline_TrackWave_C_TimelineEventEnded__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.TimelineEventFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWave_C::TimelineEventFired__DelegateSignature(float EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWave_C", "TimelineEventFired__DelegateSignature");

	Params::UW_Briefing_Timeline_TrackWave_C_TimelineEventFired__DelegateSignature_Params Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}

}


