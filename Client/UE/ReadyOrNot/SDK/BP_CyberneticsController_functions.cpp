#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CyberneticsController.BP_CyberneticsController_C
// (Actor)

class UClass* ABP_CyberneticsController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CyberneticsController_C");

	return Clss;
}


// BP_CyberneticsController_C BP_CyberneticsController.Default__BP_CyberneticsController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CyberneticsController_C* ABP_CyberneticsController_C::GetDefaultObj()
{
	static class ABP_CyberneticsController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CyberneticsController_C*>(ABP_CyberneticsController_C::StaticClass()->DefaultObject);

	return Default;
}

}


