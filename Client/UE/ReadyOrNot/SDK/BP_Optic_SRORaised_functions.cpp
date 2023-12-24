#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Optic_SRORaised.BP_Optic_SRORaised_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Optic_SRORaised_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Optic_SRORaised_C");

	return Clss;
}


// BP_Optic_SRORaised_C BP_Optic_SRORaised.Default__BP_Optic_SRORaised_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Optic_SRORaised_C* UBP_Optic_SRORaised_C::GetDefaultObj()
{
	static class UBP_Optic_SRORaised_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Optic_SRORaised_C*>(UBP_Optic_SRORaised_C::StaticClass()->DefaultObject);

	return Default;
}

}


