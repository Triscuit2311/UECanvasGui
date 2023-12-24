#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_Coyotes.Faction_Coyotes_C
// (Actor)

class UClass* AFaction_Coyotes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_Coyotes_C");

	return Clss;
}


// Faction_Coyotes_C Faction_Coyotes.Default__Faction_Coyotes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_Coyotes_C* AFaction_Coyotes_C::GetDefaultObj()
{
	static class AFaction_Coyotes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_Coyotes_C*>(AFaction_Coyotes_C::StaticClass()->DefaultObject);

	return Default;
}

}


