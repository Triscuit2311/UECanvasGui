#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasDamage.GasDamage_C
// (None)

class UClass* UGasDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasDamage_C");

	return Clss;
}


// GasDamage_C GasDamage.Default__GasDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGasDamage_C* UGasDamage_C::GetDefaultObj()
{
	static class UGasDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGasDamage_C*>(UGasDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


