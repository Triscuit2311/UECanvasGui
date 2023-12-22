#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_MLO.Faction_MLO_C
// (Actor)

class UClass* AFaction_MLO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_MLO_C");

	return Clss;
}


// Faction_MLO_C Faction_MLO.Default__Faction_MLO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_MLO_C* AFaction_MLO_C::GetDefaultObj()
{
	static class AFaction_MLO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_MLO_C*>(AFaction_MLO_C::StaticClass()->DefaultObject);

	return Default;
}

}


