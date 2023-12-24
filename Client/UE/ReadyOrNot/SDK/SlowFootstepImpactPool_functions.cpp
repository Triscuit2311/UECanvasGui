#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlowFootstepImpactPool.SlowFootstepImpactPool_C
// (None)

class UClass* USlowFootstepImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlowFootstepImpactPool_C");

	return Clss;
}


// SlowFootstepImpactPool_C SlowFootstepImpactPool.Default__SlowFootstepImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlowFootstepImpactPool_C* USlowFootstepImpactPool_C::GetDefaultObj()
{
	static class USlowFootstepImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlowFootstepImpactPool_C*>(USlowFootstepImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


