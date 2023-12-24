#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ImpactMesh_Windshield.BP_ImpactMesh_Windshield_C
// (Actor)

class UClass* ABP_ImpactMesh_Windshield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ImpactMesh_Windshield_C");

	return Clss;
}


// BP_ImpactMesh_Windshield_C BP_ImpactMesh_Windshield.Default__BP_ImpactMesh_Windshield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ImpactMesh_Windshield_C* ABP_ImpactMesh_Windshield_C::GetDefaultObj()
{
	static class ABP_ImpactMesh_Windshield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ImpactMesh_Windshield_C*>(ABP_ImpactMesh_Windshield_C::StaticClass()->DefaultObject);

	return Default;
}

}


