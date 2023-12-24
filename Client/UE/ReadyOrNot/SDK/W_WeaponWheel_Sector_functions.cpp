#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_Sector.W_WeaponWheel_Sector_C
// (None)

class UClass* UW_WeaponWheel_Sector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_Sector_C");

	return Clss;
}


// W_WeaponWheel_Sector_C W_WeaponWheel_Sector.Default__W_WeaponWheel_Sector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_Sector_C* UW_WeaponWheel_Sector_C::GetDefaultObj()
{
	static class UW_WeaponWheel_Sector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_Sector_C*>(UW_WeaponWheel_Sector_C::StaticClass()->DefaultObject);

	return Default;
}

}


