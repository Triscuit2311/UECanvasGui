#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C
// (None)

class UClass* UW_PreMission_PlanningMap_Line_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_PlanningMap_Line_C");

	return Clss;
}


// W_PreMission_PlanningMap_Line_C W_PreMission_PlanningMap_Line.Default__W_PreMission_PlanningMap_Line_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_PlanningMap_Line_C* UW_PreMission_PlanningMap_Line_C::GetDefaultObj()
{
	static class UW_PreMission_PlanningMap_Line_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_PlanningMap_Line_C*>(UW_PreMission_PlanningMap_Line_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ScaleThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::ScaleThickness(float Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "ScaleThickness");

	Params::UW_PreMission_PlanningMap_Line_C_ScaleThickness_Params Parms{};

	Parms.Multiplier = Multiplier;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetOffset(float StartOffset, float EndOffset, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetOffset");

	Params::UW_PreMission_PlanningMap_Line_C_SetOffset_Params Parms{};

	Parms.StartOffset = StartOffset;
	Parms.EndOffset = EndOffset;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetLength(float Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetLength");

	Params::UW_PreMission_PlanningMap_Line_C_SetLength_Params Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetAngle(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetAngle");

	Params::UW_PreMission_PlanningMap_Line_C_SetAngle_Params Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_PlanningMap_Line_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "PreConstruct");

	Params::UW_PreMission_PlanningMap_Line_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_PlanningMap_Line_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "Tick");

	Params::UW_PreMission_PlanningMap_Line_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ScaleLineWeightByZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentZoom                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::ScaleLineWeightByZoom(float CurrentZoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "ScaleLineWeightByZoom");

	Params::UW_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom_Params Parms{};

	Parms.CurrentZoom = CurrentZoom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ExecuteUbergraph_W_PreMission_PlanningMap_Line
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_CurrentZoom                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::ExecuteUbergraph_W_PreMission_PlanningMap_Line(int32 EntryPoint, float K2Node_Event_CurrentZoom, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "ExecuteUbergraph_W_PreMission_PlanningMap_Line");

	Params::UW_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CurrentZoom = K2Node_Event_CurrentZoom;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


