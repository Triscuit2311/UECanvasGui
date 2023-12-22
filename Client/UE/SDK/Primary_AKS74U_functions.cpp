#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_AKS74U.Primary_AKS74U_C
// (Actor)

class UClass* APrimary_AKS74U_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_AKS74U_C");

	return Clss;
}


// Primary_AKS74U_C Primary_AKS74U.Default__Primary_AKS74U_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_AKS74U_C* APrimary_AKS74U_C::GetDefaultObj()
{
	static class APrimary_AKS74U_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_AKS74U_C*>(APrimary_AKS74U_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_AKS74U.Primary_AKS74U_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AKS74U_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AKS74U_C", "ReceiveTick");

	Params::APrimary_AKS74U_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_AKS74U.Primary_AKS74U_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_AKS74U_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AKS74U_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_AKS74U.Primary_AKS74U_C.ExecuteUbergraph_Primary_AKS74U
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AKS74U_C::ExecuteUbergraph_Primary_AKS74U(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_AKS74U_C", "ExecuteUbergraph_Primary_AKS74U");

	Params::APrimary_AKS74U_C_ExecuteUbergraph_Primary_AKS74U_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


