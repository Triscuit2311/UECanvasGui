#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LensFlare_MAWL.BP_LensFlare_MAWL_C
// (Actor)

class UClass* ABP_LensFlare_MAWL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LensFlare_MAWL_C");

	return Clss;
}


// BP_LensFlare_MAWL_C BP_LensFlare_MAWL.Default__BP_LensFlare_MAWL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LensFlare_MAWL_C* ABP_LensFlare_MAWL_C::GetDefaultObj()
{
	static class ABP_LensFlare_MAWL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LensFlare_MAWL_C*>(ABP_LensFlare_MAWL_C::StaticClass()->DefaultObject);

	return Default;
}

}


