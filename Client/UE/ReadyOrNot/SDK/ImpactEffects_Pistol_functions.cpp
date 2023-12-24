#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ImpactEffects_Pistol.ImpactEffects_Pistol_C
// (Actor)

class UClass* AImpactEffects_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImpactEffects_Pistol_C");

	return Clss;
}


// ImpactEffects_Pistol_C ImpactEffects_Pistol.Default__ImpactEffects_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AImpactEffects_Pistol_C* AImpactEffects_Pistol_C::GetDefaultObj()
{
	static class AImpactEffects_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AImpactEffects_Pistol_C*>(AImpactEffects_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


