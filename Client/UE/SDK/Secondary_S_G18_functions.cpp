#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_S_G18.Secondary_S_G18_C
// (Actor)

class UClass* ASecondary_S_G18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_S_G18_C");

	return Clss;
}


// Secondary_S_G18_C Secondary_S_G18.Default__Secondary_S_G18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_S_G18_C* ASecondary_S_G18_C::GetDefaultObj()
{
	static class ASecondary_S_G18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_S_G18_C*>(ASecondary_S_G18_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_S_G18.Secondary_S_G18_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASecondary_S_G18_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_S_G18_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_S_G18.Secondary_S_G18_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_S_G18_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_S_G18_C", "ReceiveTick");

	Params::ASecondary_S_G18_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Secondary_S_G18.Secondary_S_G18_C.ExecuteUbergraph_Secondary_S_G18
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_S_G18_C::ExecuteUbergraph_Secondary_S_G18(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_S_G18_C", "ExecuteUbergraph_Secondary_S_G18");

	Params::ASecondary_S_G18_C_ExecuteUbergraph_Secondary_S_G18_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


