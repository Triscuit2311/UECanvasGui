#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RunImpactEffects.RunImpactEffects_C
// (Actor)

class UClass* ARunImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RunImpactEffects_C");

	return Clss;
}


// RunImpactEffects_C RunImpactEffects.Default__RunImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARunImpactEffects_C* ARunImpactEffects_C::GetDefaultObj()
{
	static class ARunImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARunImpactEffects_C*>(ARunImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


