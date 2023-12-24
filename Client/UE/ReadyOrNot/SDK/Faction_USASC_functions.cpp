#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_USASC.Faction_USASC_C
// (Actor)

class UClass* AFaction_USASC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_USASC_C");

	return Clss;
}


// Faction_USASC_C Faction_USASC.Default__Faction_USASC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_USASC_C* AFaction_USASC_C::GetDefaultObj()
{
	static class AFaction_USASC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_USASC_C*>(AFaction_USASC_C::StaticClass()->DefaultObject);

	return Default;
}

}


