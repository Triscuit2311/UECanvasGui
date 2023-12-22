#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_870MCS_Breach.Device_870MCS_Breach_C
// (Actor)

class UClass* ADevice_870MCS_Breach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_870MCS_Breach_C");

	return Clss;
}


// Device_870MCS_Breach_C Device_870MCS_Breach.Default__Device_870MCS_Breach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_870MCS_Breach_C* ADevice_870MCS_Breach_C::GetDefaultObj()
{
	static class ADevice_870MCS_Breach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_870MCS_Breach_C*>(ADevice_870MCS_Breach_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Device_870MCS_Breach.Device_870MCS_Breach_C.DoReloadComplete_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_870MCS_Breach_C::DoReloadComplete_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_870MCS_Breach_C", "DoReloadComplete_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_870MCS_Breach.Device_870MCS_Breach_C.ExecuteUbergraph_Device_870MCS_Breach
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_870MCS_Breach_C::ExecuteUbergraph_Device_870MCS_Breach(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_870MCS_Breach_C", "ExecuteUbergraph_Device_870MCS_Breach");

	Params::ADevice_870MCS_Breach_C_ExecuteUbergraph_Device_870MCS_Breach_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


