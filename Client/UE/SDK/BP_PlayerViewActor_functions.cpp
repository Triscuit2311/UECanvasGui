#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerViewActor.BP_PlayerViewActor_C
// (Actor)

class UClass* ABP_PlayerViewActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerViewActor_C");

	return Clss;
}


// BP_PlayerViewActor_C BP_PlayerViewActor.Default__BP_PlayerViewActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerViewActor_C* ABP_PlayerViewActor_C::GetDefaultObj()
{
	static class ABP_PlayerViewActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerViewActor_C*>(ABP_PlayerViewActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


