#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C
// (Actor)

class UClass* ASecondary_FiveSeven_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_FiveSeven_V2_C");

	return Clss;
}


// Secondary_FiveSeven_V2_C Secondary_FiveSeven_V2.Default__Secondary_FiveSeven_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_FiveSeven_V2_C* ASecondary_FiveSeven_V2_C::GetDefaultObj()
{
	static class ASecondary_FiveSeven_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_FiveSeven_V2_C*>(ASecondary_FiveSeven_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.DestroyPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_FiveSeven_V2_C::DestroyPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_FiveSeven_V2_C", "DestroyPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.SpawnPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_FiveSeven_V2_C::SpawnPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_FiveSeven_V2_C", "SpawnPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.ExecuteUbergraph_Secondary_FiveSeven_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_FiveSeven_V2_C::ExecuteUbergraph_Secondary_FiveSeven_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_FiveSeven_V2_C", "ExecuteUbergraph_Secondary_FiveSeven_V2");

	Params::ASecondary_FiveSeven_V2_C_ExecuteUbergraph_Secondary_FiveSeven_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


