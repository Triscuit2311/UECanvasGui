#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_LVAW.Primary_LVAW_C
// (Actor)

class UClass* APrimary_LVAW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_LVAW_C");

	return Clss;
}


// Primary_LVAW_C Primary_LVAW.Default__Primary_LVAW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_LVAW_C* APrimary_LVAW_C::GetDefaultObj()
{
	static class APrimary_LVAW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_LVAW_C*>(APrimary_LVAW_C::StaticClass()->DefaultObject);

	return Default;
}

}


