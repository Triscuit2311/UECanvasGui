#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArmorPiercingBulletDamage.ArmorPiercingBulletDamage_C
// (None)

class UClass* UArmorPiercingBulletDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArmorPiercingBulletDamage_C");

	return Clss;
}


// ArmorPiercingBulletDamage_C ArmorPiercingBulletDamage.Default__ArmorPiercingBulletDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArmorPiercingBulletDamage_C* UArmorPiercingBulletDamage_C::GetDefaultObj()
{
	static class UArmorPiercingBulletDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArmorPiercingBulletDamage_C*>(UArmorPiercingBulletDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


