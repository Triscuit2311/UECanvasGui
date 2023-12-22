#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlareImpactEffects.FlareImpactEffects_C
// (Actor)

class UClass* AFlareImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlareImpactEffects_C");

	return Clss;
}


// FlareImpactEffects_C FlareImpactEffects.Default__FlareImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlareImpactEffects_C* AFlareImpactEffects_C::GetDefaultObj()
{
	static class AFlareImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlareImpactEffects_C*>(AFlareImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


