#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_AK103.Primary_AK103_C
// (Actor)

class UClass* APrimary_AK103_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_AK103_C");

	return Clss;
}


// Primary_AK103_C Primary_AK103.Default__Primary_AK103_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_AK103_C* APrimary_AK103_C::GetDefaultObj()
{
	static class APrimary_AK103_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_AK103_C*>(APrimary_AK103_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_AK103.Primary_AK103_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_AK103_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AK103_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_AK103.Primary_AK103_C.ExecuteUbergraph_Primary_AK103
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AK103_C::ExecuteUbergraph_Primary_AK103(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AK103_C", "ExecuteUbergraph_Primary_AK103");

	Params::APrimary_AK103_C_ExecuteUbergraph_Primary_AK103_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


