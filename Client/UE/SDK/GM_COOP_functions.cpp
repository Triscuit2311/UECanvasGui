#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_COOP.GM_COOP_C
// (Actor)

class UClass* AGM_COOP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_COOP_C");

	return Clss;
}


// GM_COOP_C GM_COOP.Default__GM_COOP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_COOP_C* AGM_COOP_C::GetDefaultObj()
{
	static class AGM_COOP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_COOP_C*>(AGM_COOP_C::StaticClass()->DefaultObject);

	return Default;
}

}


