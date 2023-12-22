#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_LockPick_Gun.Device_LockPick_Gun_C
// (Actor)

class UClass* ADevice_LockPick_Gun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_LockPick_Gun_C");

	return Clss;
}


// Device_LockPick_Gun_C Device_LockPick_Gun.Default__Device_LockPick_Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_LockPick_Gun_C* ADevice_LockPick_Gun_C::GetDefaultObj()
{
	static class ADevice_LockPick_Gun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_LockPick_Gun_C*>(ADevice_LockPick_Gun_C::StaticClass()->DefaultObject);

	return Default;
}

}


