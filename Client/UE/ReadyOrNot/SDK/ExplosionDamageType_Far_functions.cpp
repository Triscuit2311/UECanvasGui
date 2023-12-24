#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionDamageType_Far.ExplosionDamageType_Far_C
// (None)

class UClass* UExplosionDamageType_Far_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionDamageType_Far_C");

	return Clss;
}


// ExplosionDamageType_Far_C ExplosionDamageType_Far.Default__ExplosionDamageType_Far_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionDamageType_Far_C* UExplosionDamageType_Far_C::GetDefaultObj()
{
	static class UExplosionDamageType_Far_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionDamageType_Far_C*>(UExplosionDamageType_Far_C::StaticClass()->DefaultObject);

	return Default;
}

}


