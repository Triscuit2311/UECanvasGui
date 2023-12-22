#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TaserDamage.TaserDamage_C
// (None)

class UClass* UTaserDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TaserDamage_C");

	return Clss;
}


// TaserDamage_C TaserDamage.Default__TaserDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTaserDamage_C* UTaserDamage_C::GetDefaultObj()
{
	static class UTaserDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTaserDamage_C*>(UTaserDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


