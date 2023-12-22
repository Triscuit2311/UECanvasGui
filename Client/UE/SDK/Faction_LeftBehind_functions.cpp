#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_LeftBehind.Faction_LeftBehind_C
// (Actor)

class UClass* AFaction_LeftBehind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_LeftBehind_C");

	return Clss;
}


// Faction_LeftBehind_C Faction_LeftBehind.Default__Faction_LeftBehind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_LeftBehind_C* AFaction_LeftBehind_C::GetDefaultObj()
{
	static class AFaction_LeftBehind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_LeftBehind_C*>(AFaction_LeftBehind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Faction_LeftBehind.Faction_LeftBehind_C.ExecuteUbergraph_Faction_LeftBehind
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_LeftBehind_C::ExecuteUbergraph_Faction_LeftBehind(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_LeftBehind_C", "ExecuteUbergraph_Faction_LeftBehind");

	Params::AFaction_LeftBehind_C_ExecuteUbergraph_Faction_LeftBehind_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


