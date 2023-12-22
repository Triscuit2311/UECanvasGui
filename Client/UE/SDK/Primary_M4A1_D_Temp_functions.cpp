#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M4A1_D_Temp.Primary_M4A1_D_Temp_C
// (Actor)

class UClass* APrimary_M4A1_D_Temp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M4A1_D_Temp_C");

	return Clss;
}


// Primary_M4A1_D_Temp_C Primary_M4A1_D_Temp.Default__Primary_M4A1_D_Temp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M4A1_D_Temp_C* APrimary_M4A1_D_Temp_C::GetDefaultObj()
{
	static class APrimary_M4A1_D_Temp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M4A1_D_Temp_C*>(APrimary_M4A1_D_Temp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_M4A1_D_Temp.Primary_M4A1_D_Temp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_M4A1_D_Temp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_M4A1_D_Temp_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_M4A1_D_Temp.Primary_M4A1_D_Temp_C.ExecuteUbergraph_Primary_M4A1_D_Temp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_M4A1_D_Temp_C::ExecuteUbergraph_Primary_M4A1_D_Temp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_M4A1_D_Temp_C", "ExecuteUbergraph_Primary_M4A1_D_Temp");

	Params::APrimary_M4A1_D_Temp_C_ExecuteUbergraph_Primary_M4A1_D_Temp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


