#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C
// (None)

class UClass* UW_Briefing_Timeline_TrackWaveElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Timeline_TrackWaveElement_C");

	return Clss;
}


// W_Briefing_Timeline_TrackWaveElement_C W_Briefing_Timeline_TrackWaveElement.Default__W_Briefing_Timeline_TrackWaveElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Timeline_TrackWaveElement_C* UW_Briefing_Timeline_TrackWaveElement_C::GetDefaultObj()
{
	static class UW_Briefing_Timeline_TrackWaveElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Timeline_TrackWaveElement_C*>(UW_Briefing_Timeline_TrackWaveElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTimelineEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_C::SetStyle(bool IsTimelineEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_C", "SetStyle");

	Params::UW_Briefing_Timeline_TrackWaveElement_C_SetStyle_Params Parms{};

	Parms.IsTimelineEvent = IsTimelineEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.SetWaveLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_C::SetWaveLength(float Length, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_C", "SetWaveLength");

	Params::UW_Briefing_Timeline_TrackWaveElement_C_SetWaveLength_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_C", "PreConstruct");

	Params::UW_Briefing_Timeline_TrackWaveElement_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Timeline_TrackWaveElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Timeline_TrackWaveElement_C::ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement(int32 EntryPoint, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Timeline_TrackWaveElement_C", "ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement");

	Params::UW_Briefing_Timeline_TrackWaveElement_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}


