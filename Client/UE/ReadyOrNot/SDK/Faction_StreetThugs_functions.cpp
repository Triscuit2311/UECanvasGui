#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_StreetThugs.Faction_StreetThugs_C
// (Actor)

class UClass* AFaction_StreetThugs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_StreetThugs_C");

	return Clss;
}


// Faction_StreetThugs_C Faction_StreetThugs.Default__Faction_StreetThugs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_StreetThugs_C* AFaction_StreetThugs_C::GetDefaultObj()
{
	static class AFaction_StreetThugs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_StreetThugs_C*>(AFaction_StreetThugs_C::StaticClass()->DefaultObject);

	return Default;
}

}


