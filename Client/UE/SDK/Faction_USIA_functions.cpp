#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_USIA.Faction_USIA_C
// (Actor)

class UClass* AFaction_USIA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_USIA_C");

	return Clss;
}


// Faction_USIA_C Faction_USIA.Default__Faction_USIA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_USIA_C* AFaction_USIA_C::GetDefaultObj()
{
	static class AFaction_USIA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_USIA_C*>(AFaction_USIA_C::StaticClass()->DefaultObject);

	return Default;
}

}


