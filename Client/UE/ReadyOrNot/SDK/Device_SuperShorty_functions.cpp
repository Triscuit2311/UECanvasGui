#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_SuperShorty.Device_SuperShorty_C
// (Actor)

class UClass* ADevice_SuperShorty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_SuperShorty_C");

	return Clss;
}


// Device_SuperShorty_C Device_SuperShorty.Default__Device_SuperShorty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_SuperShorty_C* ADevice_SuperShorty_C::GetDefaultObj()
{
	static class ADevice_SuperShorty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_SuperShorty_C*>(ADevice_SuperShorty_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Device_SuperShorty.Device_SuperShorty_C.DoReloadComplete_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_SuperShorty_C::DoReloadComplete_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_SuperShorty_C", "DoReloadComplete_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_SuperShorty.Device_SuperShorty_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_SuperShorty_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_SuperShorty_C", "ReceiveTick");

	Params::ADevice_SuperShorty_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_SuperShorty.Device_SuperShorty_C.ExecuteUbergraph_Device_SuperShorty
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_SuperShorty_C::ExecuteUbergraph_Device_SuperShorty(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_SuperShorty_C", "ExecuteUbergraph_Device_SuperShorty");

	Params::ADevice_SuperShorty_C_ExecuteUbergraph_Device_SuperShorty_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


