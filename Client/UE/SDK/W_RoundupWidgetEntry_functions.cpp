#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RoundupWidgetEntry.W_RoundupWidgetEntry_C
// (None)

class UClass* UW_RoundupWidgetEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RoundupWidgetEntry_C");

	return Clss;
}


// W_RoundupWidgetEntry_C W_RoundupWidgetEntry.Default__W_RoundupWidgetEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RoundupWidgetEntry_C* UW_RoundupWidgetEntry_C::GetDefaultObj()
{
	static class UW_RoundupWidgetEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RoundupWidgetEntry_C*>(UW_RoundupWidgetEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RoundupWidgetEntry.W_RoundupWidgetEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RoundupWidgetEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidgetEntry_C", "PreConstruct");

	Params::UW_RoundupWidgetEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidgetEntry.W_RoundupWidgetEntry_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_RoundupWidgetEntry_C::Set_Text(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidgetEntry_C", "Set Text");

	Params::UW_RoundupWidgetEntry_C_Set_Text_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidgetEntry.W_RoundupWidgetEntry_C.ExecuteUbergraph_W_RoundupWidgetEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Text                                          (None)

void UW_RoundupWidgetEntry_C::ExecuteUbergraph_W_RoundupWidgetEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidgetEntry_C", "ExecuteUbergraph_W_RoundupWidgetEntry");

	Params::UW_RoundupWidgetEntry_C_ExecuteUbergraph_W_RoundupWidgetEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


