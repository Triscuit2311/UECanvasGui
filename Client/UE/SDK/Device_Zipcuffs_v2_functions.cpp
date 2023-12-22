#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Zipcuffs_v2.Device_Zipcuffs_v2_C
// (Actor)

class UClass* ADevice_Zipcuffs_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Zipcuffs_v2_C");

	return Clss;
}


// Device_Zipcuffs_v2_C Device_Zipcuffs_v2.Default__Device_Zipcuffs_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Zipcuffs_v2_C* ADevice_Zipcuffs_v2_C::GetDefaultObj()
{
	static class ADevice_Zipcuffs_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Zipcuffs_v2_C*>(ADevice_Zipcuffs_v2_C::StaticClass()->DefaultObject);

	return Default;
}

}


