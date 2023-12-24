#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_RPD.Primary_RPD_C
// (Actor)

class UClass* APrimary_RPD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_RPD_C");

	return Clss;
}


// Primary_RPD_C Primary_RPD.Default__Primary_RPD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_RPD_C* APrimary_RPD_C::GetDefaultObj()
{
	static class APrimary_RPD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_RPD_C*>(APrimary_RPD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_RPD.Primary_RPD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_RPD_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_RPD_C", "ReceiveTick");

	Params::APrimary_RPD_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_RPD.Primary_RPD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_RPD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_RPD_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_RPD.Primary_RPD_C.ExecuteUbergraph_Primary_RPD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_RPD_C::ExecuteUbergraph_Primary_RPD(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_RPD_C", "ExecuteUbergraph_Primary_RPD");

	Params::APrimary_RPD_C_ExecuteUbergraph_Primary_RPD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


