#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultImpactEffects.DefaultImpactEffects_C
// (Actor)

class UClass* ADefaultImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultImpactEffects_C");

	return Clss;
}


// DefaultImpactEffects_C DefaultImpactEffects.Default__DefaultImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADefaultImpactEffects_C* ADefaultImpactEffects_C::GetDefaultObj()
{
	static class ADefaultImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADefaultImpactEffects_C*>(ADefaultImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


