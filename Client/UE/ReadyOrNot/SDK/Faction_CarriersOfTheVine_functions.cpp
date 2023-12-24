#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_CarriersOfTheVine.Faction_CarriersOfTheVine_C
// (Actor)

class UClass* AFaction_CarriersOfTheVine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_CarriersOfTheVine_C");

	return Clss;
}


// Faction_CarriersOfTheVine_C Faction_CarriersOfTheVine.Default__Faction_CarriersOfTheVine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_CarriersOfTheVine_C* AFaction_CarriersOfTheVine_C::GetDefaultObj()
{
	static class AFaction_CarriersOfTheVine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_CarriersOfTheVine_C*>(AFaction_CarriersOfTheVine_C::StaticClass()->DefaultObject);

	return Default;
}

}


