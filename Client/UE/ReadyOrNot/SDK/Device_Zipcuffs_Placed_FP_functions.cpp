#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Zipcuffs_Placed_FP.Device_Zipcuffs_Placed_FP_C
// (Actor)

class UClass* ADevice_Zipcuffs_Placed_FP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Zipcuffs_Placed_FP_C");

	return Clss;
}


// Device_Zipcuffs_Placed_FP_C Device_Zipcuffs_Placed_FP.Default__Device_Zipcuffs_Placed_FP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Zipcuffs_Placed_FP_C* ADevice_Zipcuffs_Placed_FP_C::GetDefaultObj()
{
	static class ADevice_Zipcuffs_Placed_FP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Zipcuffs_Placed_FP_C*>(ADevice_Zipcuffs_Placed_FP_C::StaticClass()->DefaultObject);

	return Default;
}

}


