#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_870mcs.Primary_870mcs_C
// (Actor)

class UClass* APrimary_870mcs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_870mcs_C");

	return Clss;
}


// Primary_870mcs_C Primary_870mcs.Default__Primary_870mcs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_870mcs_C* APrimary_870mcs_C::GetDefaultObj()
{
	static class APrimary_870mcs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_870mcs_C*>(APrimary_870mcs_C::StaticClass()->DefaultObject);

	return Default;
}

}


