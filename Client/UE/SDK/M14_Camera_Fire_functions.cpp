#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass M14_Camera_Fire.M14_Camera_Fire_C
// (None)

class UClass* UM14_Camera_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M14_Camera_Fire_C");

	return Clss;
}


// M14_Camera_Fire_C M14_Camera_Fire.Default__M14_Camera_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM14_Camera_Fire_C* UM14_Camera_Fire_C::GetDefaultObj()
{
	static class UM14_Camera_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM14_Camera_Fire_C*>(UM14_Camera_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M14_Camera_Fire.M14_Camera_Fire_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UM14_Camera_Fire_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M14_Camera_Fire_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


