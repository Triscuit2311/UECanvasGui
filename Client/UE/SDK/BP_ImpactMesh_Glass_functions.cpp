#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ImpactMesh_Glass.BP_ImpactMesh_Glass_C
// (Actor)

class UClass* ABP_ImpactMesh_Glass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ImpactMesh_Glass_C");

	return Clss;
}


// BP_ImpactMesh_Glass_C BP_ImpactMesh_Glass.Default__BP_ImpactMesh_Glass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ImpactMesh_Glass_C* ABP_ImpactMesh_Glass_C::GetDefaultObj()
{
	static class ABP_ImpactMesh_Glass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ImpactMesh_Glass_C*>(ABP_ImpactMesh_Glass_C::StaticClass()->DefaultObject);

	return Default;
}

}


