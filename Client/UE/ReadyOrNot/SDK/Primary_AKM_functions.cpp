#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_AKM.Primary_AKM_C
// (Actor)

class UClass* APrimary_AKM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_AKM_C");

	return Clss;
}


// Primary_AKM_C Primary_AKM.Default__Primary_AKM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_AKM_C* APrimary_AKM_C::GetDefaultObj()
{
	static class APrimary_AKM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_AKM_C*>(APrimary_AKM_C::StaticClass()->DefaultObject);

	return Default;
}

}


