#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_GenericSuspects.Faction_GenericSuspects_C
// (Actor)

class UClass* AFaction_GenericSuspects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_GenericSuspects_C");

	return Clss;
}


// Faction_GenericSuspects_C Faction_GenericSuspects.Default__Faction_GenericSuspects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_GenericSuspects_C* AFaction_GenericSuspects_C::GetDefaultObj()
{
	static class AFaction_GenericSuspects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_GenericSuspects_C*>(AFaction_GenericSuspects_C::StaticClass()->DefaultObject);

	return Default;
}

}


