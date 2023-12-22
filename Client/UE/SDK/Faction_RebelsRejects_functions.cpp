#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_RebelsRejects.Faction_RebelsRejects_C
// (Actor)

class UClass* AFaction_RebelsRejects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_RebelsRejects_C");

	return Clss;
}


// Faction_RebelsRejects_C Faction_RebelsRejects.Default__Faction_RebelsRejects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_RebelsRejects_C* AFaction_RebelsRejects_C::GetDefaultObj()
{
	static class AFaction_RebelsRejects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_RebelsRejects_C*>(AFaction_RebelsRejects_C::StaticClass()->DefaultObject);

	return Default;
}

}


