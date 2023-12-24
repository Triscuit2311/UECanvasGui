#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SWAT_GOAP_Controller.BP_SWAT_GOAP_Controller_C
// (Actor)

class UClass* ABP_SWAT_GOAP_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SWAT_GOAP_Controller_C");

	return Clss;
}


// BP_SWAT_GOAP_Controller_C BP_SWAT_GOAP_Controller.Default__BP_SWAT_GOAP_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SWAT_GOAP_Controller_C* ABP_SWAT_GOAP_Controller_C::GetDefaultObj()
{
	static class ABP_SWAT_GOAP_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SWAT_GOAP_Controller_C*>(ABP_SWAT_GOAP_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


