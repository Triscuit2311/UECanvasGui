#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShotgunImpactEffects.ShotgunImpactEffects_C
// (Actor)

class UClass* AShotgunImpactEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShotgunImpactEffects_C");

	return Clss;
}


// ShotgunImpactEffects_C ShotgunImpactEffects.Default__ShotgunImpactEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShotgunImpactEffects_C* AShotgunImpactEffects_C::GetDefaultObj()
{
	static class AShotgunImpactEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShotgunImpactEffects_C*>(AShotgunImpactEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


