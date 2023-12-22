#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C
// (None)

class UClass* UW_Briefing_Timeline_TrackWaveElement_vert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Timeline_TrackWaveElement_vert_C");

	return Clss;
}


// W_Briefing_Timeline_TrackWaveElement_vert_C W_Briefing_Timeline_TrackWaveElement_vert.Default__W_Briefing_Timeline_TrackWaveElement_vert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Timeline_TrackWaveElement_vert_C* UW_Briefing_Timeline_TrackWaveElement_vert_C::GetDefaultObj()
{
	static class UW_Briefing_Timeline_TrackWaveElement_vert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Timeline_TrackWaveElement_vert_C*>(UW_Briefing_Timeline_TrackWaveElement_vert_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTimelineEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_vert_C::SetStyle(bool IsTimelineEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "SetStyle");

	Params::UW_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle_Params Parms{};

	Parms.IsTimelineEvent = IsTimelineEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.SetWaveLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_vert_C::SetWaveLength(float Length, float CallFunc_Subtract_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "SetWaveLength");

	Params::UW_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWaveElement_vert_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "Tick");

	Params::UW_Briefing_Timeline_TrackWaveElement_vert_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaveAmp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Freq                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Timeline_TrackWaveElement_vert_C::Update(float WaveAmp, float Freq)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "Update");

	Params::UW_Briefing_Timeline_TrackWaveElement_vert_C_Update_Params Parms{};

	Parms.WaveAmp = WaveAmp;
	Parms.Freq = Freq;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWaveElement_vert_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_vert_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "PreConstruct");

	Params::UW_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WaveAmp                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Freq                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_vert_C::ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_WaveAmp, float K2Node_CustomEvent_Freq, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Ease_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_vert_C", "ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert");

	Params::UW_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_WaveAmp = K2Node_CustomEvent_WaveAmp;
	Parms.K2Node_CustomEvent_Freq = K2Node_CustomEvent_Freq;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


