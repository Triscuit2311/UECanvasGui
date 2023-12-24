#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PepperballImpactEffects.PepperballImpactEffects_C
// (Actor)

class UClass* APepperballImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PepperballImpactEffects_C");

	return Clss;
}


// PepperballImpactEffects_C PepperballImpactEffects.Default__PepperballImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APepperballImpactEffects_C* APepperballImpactEffects_C::GetDefaultObj()
{
	static class APepperballImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APepperballImpactEffects_C*>(APepperballImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


