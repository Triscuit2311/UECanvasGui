#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Optic_SRO_Pistol.BP_Optic_SRO_Pistol_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Optic_SRO_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Optic_SRO_Pistol_C");

	return Clss;
}


// BP_Optic_SRO_Pistol_C BP_Optic_SRO_Pistol.Default__BP_Optic_SRO_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Optic_SRO_Pistol_C* UBP_Optic_SRO_Pistol_C::GetDefaultObj()
{
	static class UBP_Optic_SRO_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Optic_SRO_Pistol_C*>(UBP_Optic_SRO_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


