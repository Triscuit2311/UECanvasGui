#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Roster_OfficerEvent_Entry.W_Roster_OfficerEvent_Entry_C
// (None)

class UClass* UW_Roster_OfficerEvent_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Roster_OfficerEvent_Entry_C");

	return Clss;
}


// W_Roster_OfficerEvent_Entry_C W_Roster_OfficerEvent_Entry.Default__W_Roster_OfficerEvent_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Roster_OfficerEvent_Entry_C* UW_Roster_OfficerEvent_Entry_C::GetDefaultObj()
{
	static class UW_Roster_OfficerEvent_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Roster_OfficerEvent_Entry_C*>(UW_Roster_OfficerEvent_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Roster_OfficerEvent_Entry.W_Roster_OfficerEvent_Entry_C.UpdateTextTruncation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_OfficerEvent_Entry_C::UpdateTextTruncation(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_OfficerEvent_Entry_C", "UpdateTextTruncation");

	Params::UW_Roster_OfficerEvent_Entry_C_UpdateTextTruncation_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_OfficerEvent_Entry.W_Roster_OfficerEvent_Entry_C.ExpandEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expanded                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_OfficerEvent_Entry_C::ExpandEvent(bool Expanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_OfficerEvent_Entry_C", "ExpandEvent");

	Params::UW_Roster_OfficerEvent_Entry_C_ExpandEvent_Params Parms{};

	Parms.Expanded = Expanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_OfficerEvent_Entry.W_Roster_OfficerEvent_Entry_C.SetEventText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Roster_OfficerEvent_Entry_C::SetEventText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_OfficerEvent_Entry_C", "SetEventText");

	Params::UW_Roster_OfficerEvent_Entry_C_SetEventText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_OfficerEvent_Entry.W_Roster_OfficerEvent_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_OfficerEvent_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_OfficerEvent_Entry_C", "PreConstruct");

	Params::UW_Roster_OfficerEvent_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_OfficerEvent_Entry.W_Roster_OfficerEvent_Entry_C.ExecuteUbergraph_W_Roster_OfficerEvent_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_OfficerEvent_Entry_C::ExecuteUbergraph_W_Roster_OfficerEvent_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_OfficerEvent_Entry_C", "ExecuteUbergraph_W_Roster_OfficerEvent_Entry");

	Params::UW_Roster_OfficerEvent_Entry_C_ExecuteUbergraph_W_Roster_OfficerEvent_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


