#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_COOP.HUD_COOP_C
// (Actor)

class UClass* AHUD_COOP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_COOP_C");

	return Clss;
}


// HUD_COOP_C HUD_COOP.Default__HUD_COOP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_COOP_C* AHUD_COOP_C::GetDefaultObj()
{
	static class AHUD_COOP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_COOP_C*>(AHUD_COOP_C::StaticClass()->DefaultObject);

	return Default;
}

}


