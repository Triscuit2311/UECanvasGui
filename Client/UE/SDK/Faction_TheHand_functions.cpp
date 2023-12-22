#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_TheHand.Faction_TheHand_C
// (Actor)

class UClass* AFaction_TheHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_TheHand_C");

	return Clss;
}


// Faction_TheHand_C Faction_TheHand.Default__Faction_TheHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_TheHand_C* AFaction_TheHand_C::GetDefaultObj()
{
	static class AFaction_TheHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_TheHand_C*>(AFaction_TheHand_C::StaticClass()->DefaultObject);

	return Default;
}

}


