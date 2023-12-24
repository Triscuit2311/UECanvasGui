#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_MethAddicts.Faction_MethAddicts_C
// (Actor)

class UClass* AFaction_MethAddicts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_MethAddicts_C");

	return Clss;
}


// Faction_MethAddicts_C Faction_MethAddicts.Default__Faction_MethAddicts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_MethAddicts_C* AFaction_MethAddicts_C::GetDefaultObj()
{
	static class AFaction_MethAddicts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_MethAddicts_C*>(AFaction_MethAddicts_C::StaticClass()->DefaultObject);

	return Default;
}

}


