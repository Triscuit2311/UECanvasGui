#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass G19_Camera_Holster.G19_Camera_Holster_C
// (None)

class UClass* UG19_Camera_Holster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("G19_Camera_Holster_C");

	return Clss;
}


// G19_Camera_Holster_C G19_Camera_Holster.Default__G19_Camera_Holster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UG19_Camera_Holster_C* UG19_Camera_Holster_C::GetDefaultObj()
{
	static class UG19_Camera_Holster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UG19_Camera_Holster_C*>(UG19_Camera_Holster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function G19_Camera_Holster.G19_Camera_Holster_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UG19_Camera_Holster_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("G19_Camera_Holster_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


