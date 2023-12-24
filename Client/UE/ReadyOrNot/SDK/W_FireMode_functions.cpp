#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_FireMode.W_FireMode_C
// (None)

class UClass* UW_FireMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_FireMode_C");

	return Clss;
}


// W_FireMode_C W_FireMode.Default__W_FireMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_FireMode_C* UW_FireMode_C::GetDefaultObj()
{
	static class UW_FireMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_FireMode_C*>(UW_FireMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_FireMode.W_FireMode_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FireMode_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FireMode_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FireMode.W_FireMode_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FireMode_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FireMode_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FireMode.W_FireMode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_FireMode_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FireMode_C", "PreConstruct");

	Params::UW_FireMode_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FireMode.W_FireMode_C.ExecuteUbergraph_W_FireMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_FireMode_C::ExecuteUbergraph_W_FireMode(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FireMode_C", "ExecuteUbergraph_W_FireMode");

	Params::UW_FireMode_C_ExecuteUbergraph_W_FireMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


