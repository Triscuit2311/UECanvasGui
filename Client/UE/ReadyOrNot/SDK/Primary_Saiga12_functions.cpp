#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_Saiga12.Primary_Saiga12_C
// (Actor)

class UClass* APrimary_Saiga12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_Saiga12_C");

	return Clss;
}


// Primary_Saiga12_C Primary_Saiga12.Default__Primary_Saiga12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_Saiga12_C* APrimary_Saiga12_C::GetDefaultObj()
{
	static class APrimary_Saiga12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_Saiga12_C*>(APrimary_Saiga12_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_Saiga12.Primary_Saiga12_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_Saiga12_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_Saiga12_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_Saiga12.Primary_Saiga12_C.ExecuteUbergraph_Primary_Saiga12
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_Saiga12_C::ExecuteUbergraph_Primary_Saiga12(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_Saiga12_C", "ExecuteUbergraph_Primary_Saiga12");

	Params::APrimary_Saiga12_C_ExecuteUbergraph_Primary_Saiga12_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


