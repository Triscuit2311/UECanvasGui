#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LadderSnapZone.BP_LadderSnapZone_C
// (Actor)

class UClass* ABP_LadderSnapZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LadderSnapZone_C");

	return Clss;
}


// BP_LadderSnapZone_C BP_LadderSnapZone.Default__BP_LadderSnapZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LadderSnapZone_C* ABP_LadderSnapZone_C::GetDefaultObj()
{
	static class ABP_LadderSnapZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LadderSnapZone_C*>(ABP_LadderSnapZone_C::StaticClass()->DefaultObject);

	return Default;
}

}


