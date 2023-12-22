#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TelescopicLadder.BP_TelescopicLadder_C
// (Actor)

class UClass* ABP_TelescopicLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TelescopicLadder_C");

	return Clss;
}


// BP_TelescopicLadder_C BP_TelescopicLadder.Default__BP_TelescopicLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TelescopicLadder_C* ABP_TelescopicLadder_C::GetDefaultObj()
{
	static class ABP_TelescopicLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TelescopicLadder_C*>(ABP_TelescopicLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


