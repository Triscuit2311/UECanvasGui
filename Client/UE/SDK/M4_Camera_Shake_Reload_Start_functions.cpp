#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass M4_Camera_Shake_Reload_Start.M4_Camera_Shake_Reload_Start_C
// (None)

class UClass* UM4_Camera_Shake_Reload_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M4_Camera_Shake_Reload_Start_C");

	return Clss;
}


// M4_Camera_Shake_Reload_Start_C M4_Camera_Shake_Reload_Start.Default__M4_Camera_Shake_Reload_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM4_Camera_Shake_Reload_Start_C* UM4_Camera_Shake_Reload_Start_C::GetDefaultObj()
{
	static class UM4_Camera_Shake_Reload_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM4_Camera_Shake_Reload_Start_C*>(UM4_Camera_Shake_Reload_Start_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M4_Camera_Shake_Reload_Start.M4_Camera_Shake_Reload_Start_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UM4_Camera_Shake_Reload_Start_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M4_Camera_Shake_Reload_Start_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


