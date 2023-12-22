#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Optic_SRO.BP_Optic_SRO_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Optic_SRO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Optic_SRO_C");

	return Clss;
}


// BP_Optic_SRO_C BP_Optic_SRO.Default__BP_Optic_SRO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Optic_SRO_C* UBP_Optic_SRO_C::GetDefaultObj()
{
	static class UBP_Optic_SRO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Optic_SRO_C*>(UBP_Optic_SRO_C::StaticClass()->DefaultObject);

	return Default;
}

}


