#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_NoAccessory.Helmet_NoAccessory_C
// (Actor)

class UClass* AHelmet_NoAccessory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_NoAccessory_C");

	return Clss;
}


// Helmet_NoAccessory_C Helmet_NoAccessory.Default__Helmet_NoAccessory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_NoAccessory_C* AHelmet_NoAccessory_C::GetDefaultObj()
{
	static class AHelmet_NoAccessory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_NoAccessory_C*>(AHelmet_NoAccessory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Helmet_NoAccessory.Helmet_NoAccessory_C.ExecuteUbergraph_Helmet_NoAccessory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelmet_NoAccessory_C::ExecuteUbergraph_Helmet_NoAccessory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_NoAccessory_C", "ExecuteUbergraph_Helmet_NoAccessory");

	Params::AHelmet_NoAccessory_C_ExecuteUbergraph_Helmet_NoAccessory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


