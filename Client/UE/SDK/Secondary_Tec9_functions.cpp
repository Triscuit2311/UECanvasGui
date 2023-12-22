#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_Tec9.Secondary_Tec9_C
// (Actor)

class UClass* ASecondary_Tec9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_Tec9_C");

	return Clss;
}


// Secondary_Tec9_C Secondary_Tec9.Default__Secondary_Tec9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_Tec9_C* ASecondary_Tec9_C::GetDefaultObj()
{
	static class ASecondary_Tec9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_Tec9_C*>(ASecondary_Tec9_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_Tec9.Secondary_Tec9_C.DestroyPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_Tec9_C::DestroyPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Tec9_C", "DestroyPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_Tec9.Secondary_Tec9_C.SpawnPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_Tec9_C::SpawnPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Tec9_C", "SpawnPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_Tec9.Secondary_Tec9_C.ExecuteUbergraph_Secondary_Tec9
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_Tec9_C::ExecuteUbergraph_Secondary_Tec9(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Tec9_C", "ExecuteUbergraph_Secondary_Tec9");

	Params::ASecondary_Tec9_C_ExecuteUbergraph_Secondary_Tec9_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


