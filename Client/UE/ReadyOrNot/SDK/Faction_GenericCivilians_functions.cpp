#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_GenericCivilians.Faction_GenericCivilians_C
// (Actor)

class UClass* AFaction_GenericCivilians_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_GenericCivilians_C");

	return Clss;
}


// Faction_GenericCivilians_C Faction_GenericCivilians.Default__Faction_GenericCivilians_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_GenericCivilians_C* AFaction_GenericCivilians_C::GetDefaultObj()
{
	static class AFaction_GenericCivilians_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_GenericCivilians_C*>(AFaction_GenericCivilians_C::StaticClass()->DefaultObject);

	return Default;
}

}


