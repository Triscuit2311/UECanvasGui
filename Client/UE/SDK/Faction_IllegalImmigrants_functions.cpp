#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_IllegalImmigrants.Faction_IllegalImmigrants_C
// (Actor)

class UClass* AFaction_IllegalImmigrants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_IllegalImmigrants_C");

	return Clss;
}


// Faction_IllegalImmigrants_C Faction_IllegalImmigrants.Default__Faction_IllegalImmigrants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_IllegalImmigrants_C* AFaction_IllegalImmigrants_C::GetDefaultObj()
{
	static class AFaction_IllegalImmigrants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_IllegalImmigrants_C*>(AFaction_IllegalImmigrants_C::StaticClass()->DefaultObject);

	return Default;
}

}


