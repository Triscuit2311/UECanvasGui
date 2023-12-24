#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RicochetImpactEffects.RicochetImpactEffects_C
// (Actor)

class UClass* ARicochetImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RicochetImpactEffects_C");

	return Clss;
}


// RicochetImpactEffects_C RicochetImpactEffects.Default__RicochetImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARicochetImpactEffects_C* ARicochetImpactEffects_C::GetDefaultObj()
{
	static class ARicochetImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARicochetImpactEffects_C*>(ARicochetImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


