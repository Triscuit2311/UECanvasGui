#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M37.Primary_M37_C
// (Actor)

class UClass* APrimary_M37_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M37_C");

	return Clss;
}


// Primary_M37_C Primary_M37.Default__Primary_M37_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M37_C* APrimary_M37_C::GetDefaultObj()
{
	static class APrimary_M37_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M37_C*>(APrimary_M37_C::StaticClass()->DefaultObject);

	return Default;
}

}


