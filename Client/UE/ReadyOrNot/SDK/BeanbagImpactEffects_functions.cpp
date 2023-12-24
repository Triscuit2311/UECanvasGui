#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeanbagImpactEffects.BeanbagImpactEffects_C
// (Actor)

class UClass* ABeanbagImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeanbagImpactEffects_C");

	return Clss;
}


// BeanbagImpactEffects_C BeanbagImpactEffects.Default__BeanbagImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABeanbagImpactEffects_C* ABeanbagImpactEffects_C::GetDefaultObj()
{
	static class ABeanbagImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABeanbagImpactEffects_C*>(ABeanbagImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


