#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Objective_Farm_ArrestRaskin.BP_Objective_Farm_ArrestRaskin_C
// (Actor)

class UClass* ABP_Objective_Farm_ArrestRaskin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Objective_Farm_ArrestRaskin_C");

	return Clss;
}


// BP_Objective_Farm_ArrestRaskin_C BP_Objective_Farm_ArrestRaskin.Default__BP_Objective_Farm_ArrestRaskin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Objective_Farm_ArrestRaskin_C* ABP_Objective_Farm_ArrestRaskin_C::GetDefaultObj()
{
	static class ABP_Objective_Farm_ArrestRaskin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Objective_Farm_ArrestRaskin_C*>(ABP_Objective_Farm_ArrestRaskin_C::StaticClass()->DefaultObject);

	return Default;
}

}


