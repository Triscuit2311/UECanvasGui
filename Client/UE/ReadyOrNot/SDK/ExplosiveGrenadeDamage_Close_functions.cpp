#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosiveGrenadeDamage_Close.ExplosiveGrenadeDamage_Close_C
// (None)

class UClass* UExplosiveGrenadeDamage_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosiveGrenadeDamage_Close_C");

	return Clss;
}


// ExplosiveGrenadeDamage_Close_C ExplosiveGrenadeDamage_Close.Default__ExplosiveGrenadeDamage_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosiveGrenadeDamage_Close_C* UExplosiveGrenadeDamage_Close_C::GetDefaultObj()
{
	static class UExplosiveGrenadeDamage_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosiveGrenadeDamage_Close_C*>(UExplosiveGrenadeDamage_Close_C::StaticClass()->DefaultObject);

	return Default;
}

}


