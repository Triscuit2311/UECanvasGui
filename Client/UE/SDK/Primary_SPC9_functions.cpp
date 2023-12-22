#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_SPC9.Primary_SPC9_C
// (Actor)

class UClass* APrimary_SPC9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_SPC9_C");

	return Clss;
}


// Primary_SPC9_C Primary_SPC9.Default__Primary_SPC9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_SPC9_C* APrimary_SPC9_C::GetDefaultObj()
{
	static class APrimary_SPC9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_SPC9_C*>(APrimary_SPC9_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_SPC9.Primary_SPC9_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_SPC9_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SPC9_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SPC9.Primary_SPC9_C.ExecuteUbergraph_Primary_SPC9
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_SPC9_C::ExecuteUbergraph_Primary_SPC9(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SPC9_C", "ExecuteUbergraph_Primary_SPC9");

	Params::APrimary_SPC9_C_ExecuteUbergraph_Primary_SPC9_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


