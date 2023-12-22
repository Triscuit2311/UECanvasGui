#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoffeeCup.BP_CoffeeCup_C
// (Actor)

class UClass* ABP_CoffeeCup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoffeeCup_C");

	return Clss;
}


// BP_CoffeeCup_C BP_CoffeeCup.Default__BP_CoffeeCup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CoffeeCup_C* ABP_CoffeeCup_C::GetDefaultObj()
{
	static class ABP_CoffeeCup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CoffeeCup_C*>(ABP_CoffeeCup_C::StaticClass()->DefaultObject);

	return Default;
}

}


