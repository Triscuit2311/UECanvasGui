#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RoN_Farm_Core.RoN_Farm_Core_C
// (Actor)

class UClass* ARoN_Farm_Core_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoN_Farm_Core_C");

	return Clss;
}


// RoN_Farm_Core_C RoN_Farm_Core.Default__RoN_Farm_Core_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARoN_Farm_Core_C* ARoN_Farm_Core_C::GetDefaultObj()
{
	static class ARoN_Farm_Core_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARoN_Farm_Core_C*>(ARoN_Farm_Core_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RoN_Farm_Core.RoN_Farm_Core_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARoN_Farm_Core_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RoN_Farm_Core_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RoN_Farm_Core.RoN_Farm_Core_C.ExecuteUbergraph_RoN_Farm_Core
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoN_Farm_Core_C::ExecuteUbergraph_RoN_Farm_Core(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RoN_Farm_Core_C", "ExecuteUbergraph_RoN_Farm_Core");

	Params::ARoN_Farm_Core_C_ExecuteUbergraph_RoN_Farm_Core_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


