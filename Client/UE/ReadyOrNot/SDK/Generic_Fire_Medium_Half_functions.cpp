#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Generic_Fire_Medium_Half.Generic_Fire_Medium_Half_C
// (None)

class UClass* UGeneric_Fire_Medium_Half_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Generic_Fire_Medium_Half_C");

	return Clss;
}


// Generic_Fire_Medium_Half_C Generic_Fire_Medium_Half.Default__Generic_Fire_Medium_Half_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGeneric_Fire_Medium_Half_C* UGeneric_Fire_Medium_Half_C::GetDefaultObj()
{
	static class UGeneric_Fire_Medium_Half_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneric_Fire_Medium_Half_C*>(UGeneric_Fire_Medium_Half_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Generic_Fire_Medium_Half.Generic_Fire_Medium_Half_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGeneric_Fire_Medium_Half_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Generic_Fire_Medium_Half_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


