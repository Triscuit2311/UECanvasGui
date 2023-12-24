#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FastFootstepImpactPool.FastFootstepImpactPool_C
// (None)

class UClass* UFastFootstepImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastFootstepImpactPool_C");

	return Clss;
}


// FastFootstepImpactPool_C FastFootstepImpactPool.Default__FastFootstepImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFastFootstepImpactPool_C* UFastFootstepImpactPool_C::GetDefaultObj()
{
	static class UFastFootstepImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastFootstepImpactPool_C*>(UFastFootstepImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


