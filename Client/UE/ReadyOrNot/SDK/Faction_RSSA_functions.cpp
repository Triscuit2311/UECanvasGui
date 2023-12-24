#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_RSSA.Faction_RSSA_C
// (Actor)

class UClass* AFaction_RSSA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_RSSA_C");

	return Clss;
}


// Faction_RSSA_C Faction_RSSA.Default__Faction_RSSA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_RSSA_C* AFaction_RSSA_C::GetDefaultObj()
{
	static class AFaction_RSSA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_RSSA_C*>(AFaction_RSSA_C::StaticClass()->DefaultObject);

	return Default;
}

}


