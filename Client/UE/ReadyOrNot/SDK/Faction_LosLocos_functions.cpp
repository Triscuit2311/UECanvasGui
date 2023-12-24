#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_LosLocos.Faction_LosLocos_C
// (Actor)

class UClass* AFaction_LosLocos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_LosLocos_C");

	return Clss;
}


// Faction_LosLocos_C Faction_LosLocos.Default__Faction_LosLocos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_LosLocos_C* AFaction_LosLocos_C::GetDefaultObj()
{
	static class AFaction_LosLocos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_LosLocos_C*>(AFaction_LosLocos_C::StaticClass()->DefaultObject);

	return Default;
}

}


