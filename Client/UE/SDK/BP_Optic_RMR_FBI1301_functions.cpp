#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Optic_RMR_FBI1301.BP_Optic_RMR_FBI1301_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Optic_RMR_FBI1301_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Optic_RMR_FBI1301_C");

	return Clss;
}


// BP_Optic_RMR_FBI1301_C BP_Optic_RMR_FBI1301.Default__BP_Optic_RMR_FBI1301_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Optic_RMR_FBI1301_C* UBP_Optic_RMR_FBI1301_C::GetDefaultObj()
{
	static class UBP_Optic_RMR_FBI1301_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Optic_RMR_FBI1301_C*>(UBP_Optic_RMR_FBI1301_C::StaticClass()->DefaultObject);

	return Default;
}

}


