#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_B1301.Primary_B1301_C
// (Actor)

class UClass* APrimary_B1301_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_B1301_C");

	return Clss;
}


// Primary_B1301_C Primary_B1301.Default__Primary_B1301_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_B1301_C* APrimary_B1301_C::GetDefaultObj()
{
	static class APrimary_B1301_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_B1301_C*>(APrimary_B1301_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_B1301.Primary_B1301_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_B1301_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_B1301_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_B1301.Primary_B1301_C.ExecuteUbergraph_Primary_B1301
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_B1301_C::ExecuteUbergraph_Primary_B1301(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_B1301_C", "ExecuteUbergraph_Primary_B1301");

	Params::APrimary_B1301_C_ExecuteUbergraph_Primary_B1301_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


