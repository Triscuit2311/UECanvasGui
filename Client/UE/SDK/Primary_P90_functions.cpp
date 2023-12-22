#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_P90.Primary_P90_C
// (Actor)

class UClass* APrimary_P90_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_P90_C");

	return Clss;
}


// Primary_P90_C Primary_P90.Default__Primary_P90_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_P90_C* APrimary_P90_C::GetDefaultObj()
{
	static class APrimary_P90_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_P90_C*>(APrimary_P90_C::StaticClass()->DefaultObject);

	return Default;
}

}


