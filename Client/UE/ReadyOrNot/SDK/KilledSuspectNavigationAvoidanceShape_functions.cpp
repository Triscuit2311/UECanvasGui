#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KilledSuspectNavigationAvoidanceShape.KilledSuspectNavigationAvoidanceShape_C
// (Actor)

class UClass* AKilledSuspectNavigationAvoidanceShape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KilledSuspectNavigationAvoidanceShape_C");

	return Clss;
}


// KilledSuspectNavigationAvoidanceShape_C KilledSuspectNavigationAvoidanceShape.Default__KilledSuspectNavigationAvoidanceShape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKilledSuspectNavigationAvoidanceShape_C* AKilledSuspectNavigationAvoidanceShape_C::GetDefaultObj()
{
	static class AKilledSuspectNavigationAvoidanceShape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKilledSuspectNavigationAvoidanceShape_C*>(AKilledSuspectNavigationAvoidanceShape_C::StaticClass()->DefaultObject);

	return Default;
}

}


