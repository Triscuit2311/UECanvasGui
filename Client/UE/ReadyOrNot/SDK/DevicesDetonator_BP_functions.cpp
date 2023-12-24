#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DevicesDetonator_BP.DevicesDetonator_BP_C
// (Actor)

class UClass* ADevicesDetonator_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DevicesDetonator_BP_C");

	return Clss;
}


// DevicesDetonator_BP_C DevicesDetonator_BP.Default__DevicesDetonator_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevicesDetonator_BP_C* ADevicesDetonator_BP_C::GetDefaultObj()
{
	static class ADevicesDetonator_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevicesDetonator_BP_C*>(ADevicesDetonator_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


