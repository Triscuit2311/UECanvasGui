#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Chemlight.Device_Chemlight_C
// (Actor)

class UClass* ADevice_Chemlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Chemlight_C");

	return Clss;
}


// Device_Chemlight_C Device_Chemlight.Default__Device_Chemlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Chemlight_C* ADevice_Chemlight_C::GetDefaultObj()
{
	static class ADevice_Chemlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Chemlight_C*>(ADevice_Chemlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


