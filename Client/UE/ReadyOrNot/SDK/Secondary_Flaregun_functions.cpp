#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_Flaregun.Secondary_Flaregun_C
// (Actor)

class UClass* ASecondary_Flaregun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_Flaregun_C");

	return Clss;
}


// Secondary_Flaregun_C Secondary_Flaregun.Default__Secondary_Flaregun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_Flaregun_C* ASecondary_Flaregun_C::GetDefaultObj()
{
	static class ASecondary_Flaregun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_Flaregun_C*>(ASecondary_Flaregun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_Flaregun.Secondary_Flaregun_C.DestroyPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_Flaregun_C::DestroyPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Flaregun_C", "DestroyPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_Flaregun.Secondary_Flaregun_C.SpawnPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_Flaregun_C::SpawnPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Flaregun_C", "SpawnPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_Flaregun.Secondary_Flaregun_C.ExecuteUbergraph_Secondary_Flaregun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_Flaregun_C::ExecuteUbergraph_Secondary_Flaregun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Flaregun_C", "ExecuteUbergraph_Secondary_Flaregun");

	Params::ASecondary_Flaregun_C_ExecuteUbergraph_Secondary_Flaregun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


