#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_S590_Breach_v2.Device_S590_Breach_v2_C
// (Actor)

class UClass* ADevice_S590_Breach_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_S590_Breach_v2_C");

	return Clss;
}


// Device_S590_Breach_v2_C Device_S590_Breach_v2.Default__Device_S590_Breach_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_S590_Breach_v2_C* ADevice_S590_Breach_v2_C::GetDefaultObj()
{
	static class ADevice_S590_Breach_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_S590_Breach_v2_C*>(ADevice_S590_Breach_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Device_S590_Breach_v2.Device_S590_Breach_v2_C.DoReloadComplete_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_S590_Breach_v2_C::DoReloadComplete_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_S590_Breach_v2_C", "DoReloadComplete_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_S590_Breach_v2.Device_S590_Breach_v2_C.ExecuteUbergraph_Device_S590_Breach_v2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_S590_Breach_v2_C::ExecuteUbergraph_Device_S590_Breach_v2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_S590_Breach_v2_C", "ExecuteUbergraph_Device_S590_Breach_v2");

	Params::ADevice_S590_Breach_v2_C_ExecuteUbergraph_Device_S590_Breach_v2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


