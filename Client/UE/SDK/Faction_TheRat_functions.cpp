#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_TheRat.Faction_TheRat_C
// (Actor)

class UClass* AFaction_TheRat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_TheRat_C");

	return Clss;
}


// Faction_TheRat_C Faction_TheRat.Default__Faction_TheRat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_TheRat_C* AFaction_TheRat_C::GetDefaultObj()
{
	static class AFaction_TheRat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_TheRat_C*>(AFaction_TheRat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Faction_TheRat.Faction_TheRat_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFaction_TheRat_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_TheRat_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Faction_TheRat.Faction_TheRat_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_TheRat_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_TheRat_C", "ReceiveTick");

	Params::AFaction_TheRat_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Faction_TheRat.Faction_TheRat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFaction_TheRat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_TheRat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Faction_TheRat.Faction_TheRat_C.ExecuteUbergraph_Faction_TheRat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_TheRat_C::ExecuteUbergraph_Faction_TheRat(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_TheRat_C", "ExecuteUbergraph_Faction_TheRat");

	Params::AFaction_TheRat_C_ExecuteUbergraph_Faction_TheRat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


