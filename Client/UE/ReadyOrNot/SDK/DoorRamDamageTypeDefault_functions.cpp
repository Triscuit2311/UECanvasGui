#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoorRamDamageTypeDefault.DoorRamDamageTypeDefault_C
// (None)

class UClass* UDoorRamDamageTypeDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorRamDamageTypeDefault_C");

	return Clss;
}


// DoorRamDamageTypeDefault_C DoorRamDamageTypeDefault.Default__DoorRamDamageTypeDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorRamDamageTypeDefault_C* UDoorRamDamageTypeDefault_C::GetDefaultObj()
{
	static class UDoorRamDamageTypeDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorRamDamageTypeDefault_C*>(UDoorRamDamageTypeDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


