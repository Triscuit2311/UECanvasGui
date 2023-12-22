#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Taser_CameraShake.Taser_CameraShake_C
// (None)

class UClass* UTaser_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Taser_CameraShake_C");

	return Clss;
}


// Taser_CameraShake_C Taser_CameraShake.Default__Taser_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTaser_CameraShake_C* UTaser_CameraShake_C::GetDefaultObj()
{
	static class UTaser_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTaser_CameraShake_C*>(UTaser_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Taser_CameraShake.Taser_CameraShake_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTaser_CameraShake_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Taser_CameraShake_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


