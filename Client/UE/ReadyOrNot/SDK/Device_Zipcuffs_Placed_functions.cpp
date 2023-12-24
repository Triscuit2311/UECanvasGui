#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Zipcuffs_Placed.Device_Zipcuffs_Placed_C
// (Actor)

class UClass* ADevice_Zipcuffs_Placed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Zipcuffs_Placed_C");

	return Clss;
}


// Device_Zipcuffs_Placed_C Device_Zipcuffs_Placed.Default__Device_Zipcuffs_Placed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Zipcuffs_Placed_C* ADevice_Zipcuffs_Placed_C::GetDefaultObj()
{
	static class ADevice_Zipcuffs_Placed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Zipcuffs_Placed_C*>(ADevice_Zipcuffs_Placed_C::StaticClass()->DefaultObject);

	return Default;
}

}


