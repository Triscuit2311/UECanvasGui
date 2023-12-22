#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_HasEquippedWeapon.AG_HasEquippedWeapon_C
// (None)

class UClass* UAG_HasEquippedWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_HasEquippedWeapon_C");

	return Clss;
}


// AG_HasEquippedWeapon_C AG_HasEquippedWeapon.Default__AG_HasEquippedWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_HasEquippedWeapon_C* UAG_HasEquippedWeapon_C::GetDefaultObj()
{
	static class UAG_HasEquippedWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_HasEquippedWeapon_C*>(UAG_HasEquippedWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


