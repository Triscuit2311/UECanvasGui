#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_AR18.Primary_AR18_C
// (Actor)

class UClass* APrimary_AR18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_AR18_C");

	return Clss;
}


// Primary_AR18_C Primary_AR18.Default__Primary_AR18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_AR18_C* APrimary_AR18_C::GetDefaultObj()
{
	static class APrimary_AR18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_AR18_C*>(APrimary_AR18_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_AR18.Primary_AR18_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AR18_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AR18_C", "ReceiveTick");

	Params::APrimary_AR18_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_AR18.Primary_AR18_C.ExecuteUbergraph_Primary_AR18
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AR18_C::ExecuteUbergraph_Primary_AR18(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AR18_C", "ExecuteUbergraph_Primary_AR18");

	Params::APrimary_AR18_C_ExecuteUbergraph_Primary_AR18_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


