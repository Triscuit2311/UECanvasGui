#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WalkImpactEffects.WalkImpactEffects_C
// (Actor)

class UClass* AWalkImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WalkImpactEffects_C");

	return Clss;
}


// WalkImpactEffects_C WalkImpactEffects.Default__WalkImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWalkImpactEffects_C* AWalkImpactEffects_C::GetDefaultObj()
{
	static class AWalkImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWalkImpactEffects_C*>(AWalkImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


