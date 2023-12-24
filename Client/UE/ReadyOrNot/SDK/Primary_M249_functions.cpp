#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M249.Primary_M249_C
// (Actor)

class UClass* APrimary_M249_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M249_C");

	return Clss;
}


// Primary_M249_C Primary_M249.Default__Primary_M249_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M249_C* APrimary_M249_C::GetDefaultObj()
{
	static class APrimary_M249_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M249_C*>(APrimary_M249_C::StaticClass()->DefaultObject);

	return Default;
}

}


