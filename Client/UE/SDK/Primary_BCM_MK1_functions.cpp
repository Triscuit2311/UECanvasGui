#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_BCM_MK1.Primary_BCM_MK1_C
// (Actor)

class UClass* APrimary_BCM_MK1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_BCM_MK1_C");

	return Clss;
}


// Primary_BCM_MK1_C Primary_BCM_MK1.Default__Primary_BCM_MK1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_BCM_MK1_C* APrimary_BCM_MK1_C::GetDefaultObj()
{
	static class APrimary_BCM_MK1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_BCM_MK1_C*>(APrimary_BCM_MK1_C::StaticClass()->DefaultObject);

	return Default;
}

}


