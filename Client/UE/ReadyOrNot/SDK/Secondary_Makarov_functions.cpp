#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_Makarov.Secondary_Makarov_C
// (Actor)

class UClass* ASecondary_Makarov_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_Makarov_C");

	return Clss;
}


// Secondary_Makarov_C Secondary_Makarov.Default__Secondary_Makarov_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_Makarov_C* ASecondary_Makarov_C::GetDefaultObj()
{
	static class ASecondary_Makarov_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_Makarov_C*>(ASecondary_Makarov_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_Makarov.Secondary_Makarov_C.DestroyPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_Makarov_C::DestroyPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Makarov_C", "DestroyPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_Makarov.Secondary_Makarov_C.SpawnPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_Makarov_C::SpawnPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Makarov_C", "SpawnPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_Makarov.Secondary_Makarov_C.ExecuteUbergraph_Secondary_Makarov
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_Makarov_C::ExecuteUbergraph_Secondary_Makarov(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Makarov_C", "ExecuteUbergraph_Secondary_Makarov");

	Params::ASecondary_Makarov_C_ExecuteUbergraph_Secondary_Makarov_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


