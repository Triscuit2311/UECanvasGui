#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_COOP_BarricadedSuspects.GS_COOP_BarricadedSuspects_C
// (Actor)

class UClass* AGS_COOP_BarricadedSuspects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_COOP_BarricadedSuspects_C");

	return Clss;
}


// GS_COOP_BarricadedSuspects_C GS_COOP_BarricadedSuspects.Default__GS_COOP_BarricadedSuspects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_COOP_BarricadedSuspects_C* AGS_COOP_BarricadedSuspects_C::GetDefaultObj()
{
	static class AGS_COOP_BarricadedSuspects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_COOP_BarricadedSuspects_C*>(AGS_COOP_BarricadedSuspects_C::StaticClass()->DefaultObject);

	return Default;
}

}


