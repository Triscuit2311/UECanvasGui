#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BatteringRam.BP_BatteringRam_C
// (Actor)

class UClass* ABP_BatteringRam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BatteringRam_C");

	return Clss;
}


// BP_BatteringRam_C BP_BatteringRam.Default__BP_BatteringRam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BatteringRam_C* ABP_BatteringRam_C::GetDefaultObj()
{
	static class ABP_BatteringRam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BatteringRam_C*>(ABP_BatteringRam_C::StaticClass()->DefaultObject);

	return Default;
}

}


