#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoorRamDamageTypeCrumble.DoorRamDamageTypeCrumble_C
// (None)

class UClass* UDoorRamDamageTypeCrumble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorRamDamageTypeCrumble_C");

	return Clss;
}


// DoorRamDamageTypeCrumble_C DoorRamDamageTypeCrumble.Default__DoorRamDamageTypeCrumble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorRamDamageTypeCrumble_C* UDoorRamDamageTypeCrumble_C::GetDefaultObj()
{
	static class UDoorRamDamageTypeCrumble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorRamDamageTypeCrumble_C*>(UDoorRamDamageTypeCrumble_C::StaticClass()->DefaultObject);

	return Default;
}

}


