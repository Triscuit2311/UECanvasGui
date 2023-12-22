#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CSGasDamage_Close.CSGasDamage_Close_C
// (None)

class UClass* UCSGasDamage_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGasDamage_Close_C");

	return Clss;
}


// CSGasDamage_Close_C CSGasDamage_Close.Default__CSGasDamage_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCSGasDamage_Close_C* UCSGasDamage_Close_C::GetDefaultObj()
{
	static class UCSGasDamage_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGasDamage_Close_C*>(UCSGasDamage_Close_C::StaticClass()->DefaultObject);

	return Default;
}

}


