#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Doorjam.Device_Doorjam_C
// (Actor)

class UClass* ADevice_Doorjam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Doorjam_C");

	return Clss;
}


// Device_Doorjam_C Device_Doorjam.Default__Device_Doorjam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Doorjam_C* ADevice_Doorjam_C::GetDefaultObj()
{
	static class ADevice_Doorjam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Doorjam_C*>(ADevice_Doorjam_C::StaticClass()->DefaultObject);

	return Default;
}

}


