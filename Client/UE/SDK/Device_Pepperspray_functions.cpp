#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Pepperspray.Device_Pepperspray_C
// (Actor)

class UClass* ADevice_Pepperspray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Pepperspray_C");

	return Clss;
}


// Device_Pepperspray_C Device_Pepperspray.Default__Device_Pepperspray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Pepperspray_C* ADevice_Pepperspray_C::GetDefaultObj()
{
	static class ADevice_Pepperspray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Pepperspray_C*>(ADevice_Pepperspray_C::StaticClass()->DefaultObject);

	return Default;
}

}


