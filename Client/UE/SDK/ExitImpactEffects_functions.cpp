#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExitImpactEffects.ExitImpactEffects_C
// (Actor)

class UClass* AExitImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExitImpactEffects_C");

	return Clss;
}


// ExitImpactEffects_C ExitImpactEffects.Default__ExitImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AExitImpactEffects_C* AExitImpactEffects_C::GetDefaultObj()
{
	static class AExitImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AExitImpactEffects_C*>(AExitImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


