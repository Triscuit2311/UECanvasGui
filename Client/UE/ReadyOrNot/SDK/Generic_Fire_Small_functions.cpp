#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Generic_Fire_Small.Generic_Fire_Small_C
// (None)

class UClass* UGeneric_Fire_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Generic_Fire_Small_C");

	return Clss;
}


// Generic_Fire_Small_C Generic_Fire_Small.Default__Generic_Fire_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGeneric_Fire_Small_C* UGeneric_Fire_Small_C::GetDefaultObj()
{
	static class UGeneric_Fire_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneric_Fire_Small_C*>(UGeneric_Fire_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Generic_Fire_Small.Generic_Fire_Small_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGeneric_Fire_Small_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Generic_Fire_Small_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


