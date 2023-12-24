#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_NVG_V2.Helmet_NVG_V2_C
// (Actor)

class UClass* AHelmet_NVG_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_NVG_V2_C");

	return Clss;
}


// Helmet_NVG_V2_C Helmet_NVG_V2.Default__Helmet_NVG_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_NVG_V2_C* AHelmet_NVG_V2_C::GetDefaultObj()
{
	static class AHelmet_NVG_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_NVG_V2_C*>(AHelmet_NVG_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AHelmet_NVG_V2_C::OnNightvisionDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_NVG_V2_C", "OnNightvisionDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Helmet_NVG_V2.Helmet_NVG_V2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelmet_NVG_V2_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_NVG_V2_C", "ReceiveTick");

	Params::AHelmet_NVG_V2_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AHelmet_NVG_V2_C::OnNightvisionActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_NVG_V2_C", "OnNightvisionActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Helmet_NVG_V2.Helmet_NVG_V2_C.ExecuteUbergraph_Helmet_NVG_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelmet_NVG_V2_C::ExecuteUbergraph_Helmet_NVG_V2(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_NVG_V2_C", "ExecuteUbergraph_Helmet_NVG_V2");

	Params::AHelmet_NVG_V2_C_ExecuteUbergraph_Helmet_NVG_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


