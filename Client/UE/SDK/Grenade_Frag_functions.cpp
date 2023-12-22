#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_Frag.Grenade_Frag_C
// (Actor)

class UClass* AGrenade_Frag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_Frag_C");

	return Clss;
}


// Grenade_Frag_C Grenade_Frag.Default__Grenade_Frag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_Frag_C* AGrenade_Frag_C::GetDefaultObj()
{
	static class AGrenade_Frag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_Frag_C*>(AGrenade_Frag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grenade_Frag.Grenade_Frag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGrenade_Frag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Frag_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenade_Frag.Grenade_Frag_C.ExecuteUbergraph_Grenade_Frag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_Frag_C::ExecuteUbergraph_Grenade_Frag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Frag_C", "ExecuteUbergraph_Grenade_Frag");

	Params::AGrenade_Frag_C_ExecuteUbergraph_Grenade_Frag_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


