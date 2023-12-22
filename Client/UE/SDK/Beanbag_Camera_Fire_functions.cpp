#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Beanbag_Camera_Fire.Beanbag_Camera_Fire_C
// (None)

class UClass* UBeanbag_Camera_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Beanbag_Camera_Fire_C");

	return Clss;
}


// Beanbag_Camera_Fire_C Beanbag_Camera_Fire.Default__Beanbag_Camera_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeanbag_Camera_Fire_C* UBeanbag_Camera_Fire_C::GetDefaultObj()
{
	static class UBeanbag_Camera_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeanbag_Camera_Fire_C*>(UBeanbag_Camera_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Beanbag_Camera_Fire.Beanbag_Camera_Fire_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBeanbag_Camera_Fire_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Beanbag_Camera_Fire_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


