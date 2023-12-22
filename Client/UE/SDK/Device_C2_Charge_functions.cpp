#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_C2_Charge.Device_C2_Charge_C
// (Actor)

class UClass* ADevice_C2_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_C2_Charge_C");

	return Clss;
}


// Device_C2_Charge_C Device_C2_Charge.Default__Device_C2_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_C2_Charge_C* ADevice_C2_Charge_C::GetDefaultObj()
{
	static class ADevice_C2_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_C2_Charge_C*>(ADevice_C2_Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


