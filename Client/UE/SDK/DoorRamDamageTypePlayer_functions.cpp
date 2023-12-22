#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoorRamDamageTypePlayer.DoorRamDamageTypePlayer_C
// (None)

class UClass* UDoorRamDamageTypePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorRamDamageTypePlayer_C");

	return Clss;
}


// DoorRamDamageTypePlayer_C DoorRamDamageTypePlayer.Default__DoorRamDamageTypePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorRamDamageTypePlayer_C* UDoorRamDamageTypePlayer_C::GetDefaultObj()
{
	static class UDoorRamDamageTypePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorRamDamageTypePlayer_C*>(UDoorRamDamageTypePlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


