#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_Uzi.Primary_UZI_C
// (Actor)

class UClass* APrimary_UZI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_UZI_C");

	return Clss;
}


// Primary_UZI_C Primary_Uzi.Default__Primary_UZI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_UZI_C* APrimary_UZI_C::GetDefaultObj()
{
	static class APrimary_UZI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_UZI_C*>(APrimary_UZI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_Uzi.Primary_UZI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_UZI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_UZI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_Uzi.Primary_UZI_C.ExecuteUbergraph_Primary_UZI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_UZI_C::ExecuteUbergraph_Primary_UZI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_UZI_C", "ExecuteUbergraph_Primary_UZI");

	Params::APrimary_UZI_C_ExecuteUbergraph_Primary_UZI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


