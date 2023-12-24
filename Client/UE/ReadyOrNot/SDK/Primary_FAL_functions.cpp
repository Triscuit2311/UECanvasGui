#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_FAL.Primary_FAL_C
// (Actor)

class UClass* APrimary_FAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_FAL_C");

	return Clss;
}


// Primary_FAL_C Primary_FAL.Default__Primary_FAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_FAL_C* APrimary_FAL_C::GetDefaultObj()
{
	static class APrimary_FAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_FAL_C*>(APrimary_FAL_C::StaticClass()->DefaultObject);

	return Default;
}

}


