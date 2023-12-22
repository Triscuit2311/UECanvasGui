#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BreachingShotgunDamageType.BreachingShotgunDamageType_C
// (None)

class UClass* UBreachingShotgunDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BreachingShotgunDamageType_C");

	return Clss;
}


// BreachingShotgunDamageType_C BreachingShotgunDamageType.Default__BreachingShotgunDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBreachingShotgunDamageType_C* UBreachingShotgunDamageType_C::GetDefaultObj()
{
	static class UBreachingShotgunDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBreachingShotgunDamageType_C*>(UBreachingShotgunDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


