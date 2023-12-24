#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_Calico.Primary_Calico_C
// (Actor)

class UClass* APrimary_Calico_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_Calico_C");

	return Clss;
}


// Primary_Calico_C Primary_Calico.Default__Primary_Calico_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_Calico_C* APrimary_Calico_C::GetDefaultObj()
{
	static class APrimary_Calico_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_Calico_C*>(APrimary_Calico_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_Calico.Primary_Calico_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_Calico_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_Calico_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_Calico.Primary_Calico_C.ExecuteUbergraph_Primary_Calico
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_Calico_C::ExecuteUbergraph_Primary_Calico(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_Calico_C", "ExecuteUbergraph_Primary_Calico");

	Params::APrimary_Calico_C_ExecuteUbergraph_Primary_Calico_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


