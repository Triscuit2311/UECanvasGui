#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_B1301_Entryman.Primary_B1301_Entryman_C
// (Actor)

class UClass* APrimary_B1301_Entryman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_B1301_Entryman_C");

	return Clss;
}


// Primary_B1301_Entryman_C Primary_B1301_Entryman.Default__Primary_B1301_Entryman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_B1301_Entryman_C* APrimary_B1301_Entryman_C::GetDefaultObj()
{
	static class APrimary_B1301_Entryman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_B1301_Entryman_C*>(APrimary_B1301_Entryman_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_B1301_Entryman.Primary_B1301_Entryman_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_B1301_Entryman_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_B1301_Entryman_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_B1301_Entryman.Primary_B1301_Entryman_C.ExecuteUbergraph_Primary_B1301_Entryman
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_B1301_Entryman_C::ExecuteUbergraph_Primary_B1301_Entryman(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_B1301_Entryman_C", "ExecuteUbergraph_Primary_B1301_Entryman");

	Params::APrimary_B1301_Entryman_C_ExecuteUbergraph_Primary_B1301_Entryman_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


