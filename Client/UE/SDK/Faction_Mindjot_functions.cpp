#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_Mindjot.Faction_Mindjot_C
// (Actor)

class UClass* AFaction_Mindjot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_Mindjot_C");

	return Clss;
}


// Faction_Mindjot_C Faction_Mindjot.Default__Faction_Mindjot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_Mindjot_C* AFaction_Mindjot_C::GetDefaultObj()
{
	static class AFaction_Mindjot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_Mindjot_C*>(AFaction_Mindjot_C::StaticClass()->DefaultObject);

	return Default;
}

}


