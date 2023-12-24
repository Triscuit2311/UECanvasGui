#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MPL.Primary_MPL_C
// (Actor)

class UClass* APrimary_MPL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MPL_C");

	return Clss;
}


// Primary_MPL_C Primary_MPL.Default__Primary_MPL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MPL_C* APrimary_MPL_C::GetDefaultObj()
{
	static class APrimary_MPL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MPL_C*>(APrimary_MPL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_MPL.Primary_MPL_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_MPL_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_MPL_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_MPL.Primary_MPL_C.ExecuteUbergraph_Primary_MPL
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_MPL_C::ExecuteUbergraph_Primary_MPL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_MPL_C", "ExecuteUbergraph_Primary_MPL");

	Params::APrimary_MPL_C_ExecuteUbergraph_Primary_MPL_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


