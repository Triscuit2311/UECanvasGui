#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CSGasDamage_Far.CSGasDamage_Far_C
// (None)

class UClass* UCSGasDamage_Far_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGasDamage_Far_C");

	return Clss;
}


// CSGasDamage_Far_C CSGasDamage_Far.Default__CSGasDamage_Far_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCSGasDamage_Far_C* UCSGasDamage_Far_C::GetDefaultObj()
{
	static class UCSGasDamage_Far_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGasDamage_Far_C*>(UCSGasDamage_Far_C::StaticClass()->DefaultObject);

	return Default;
}

}


