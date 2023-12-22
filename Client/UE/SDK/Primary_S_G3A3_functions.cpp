#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_S_G3A3.Primary_S_G3A3_C
// (Actor)

class UClass* APrimary_S_G3A3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_S_G3A3_C");

	return Clss;
}


// Primary_S_G3A3_C Primary_S_G3A3.Default__Primary_S_G3A3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_S_G3A3_C* APrimary_S_G3A3_C::GetDefaultObj()
{
	static class APrimary_S_G3A3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_S_G3A3_C*>(APrimary_S_G3A3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_S_G3A3.Primary_S_G3A3_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_S_G3A3_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_S_G3A3_C", "ReceiveTick");

	Params::APrimary_S_G3A3_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_S_G3A3.Primary_S_G3A3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_S_G3A3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_S_G3A3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_S_G3A3.Primary_S_G3A3_C.ExecuteUbergraph_Primary_S_G3A3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_S_G3A3_C::ExecuteUbergraph_Primary_S_G3A3(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_S_G3A3_C", "ExecuteUbergraph_Primary_S_G3A3");

	Params::APrimary_S_G3A3_C_ExecuteUbergraph_Primary_S_G3A3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


