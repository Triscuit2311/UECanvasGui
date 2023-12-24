#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionDamageType.ExplosionDamageType_C
// (None)

class UClass* UExplosionDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionDamageType_C");

	return Clss;
}


// ExplosionDamageType_C ExplosionDamageType.Default__ExplosionDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionDamageType_C* UExplosionDamageType_C::GetDefaultObj()
{
	static class UExplosionDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionDamageType_C*>(UExplosionDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


