#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AllImpactEffects.AllImpactEffects_C
// (Actor)

class UClass* AAllImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllImpactEffects_C");

	return Clss;
}


// AllImpactEffects_C AllImpactEffects.Default__AllImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAllImpactEffects_C* AAllImpactEffects_C::GetDefaultObj()
{
	static class AAllImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAllImpactEffects_C*>(AAllImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


