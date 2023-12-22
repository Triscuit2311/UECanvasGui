#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CivilianController.BP_CivilianController_C
// (Actor)

class UClass* ABP_CivilianController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CivilianController_C");

	return Clss;
}


// BP_CivilianController_C BP_CivilianController.Default__BP_CivilianController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CivilianController_C* ABP_CivilianController_C::GetDefaultObj()
{
	static class ABP_CivilianController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CivilianController_C*>(ABP_CivilianController_C::StaticClass()->DefaultObject);

	return Default;
}

}


