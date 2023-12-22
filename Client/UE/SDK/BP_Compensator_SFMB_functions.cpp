#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Compensator_SFMB.BP_Compensator_SFMB_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Compensator_SFMB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Compensator_SFMB_C");

	return Clss;
}


// BP_Compensator_SFMB_C BP_Compensator_SFMB.Default__BP_Compensator_SFMB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Compensator_SFMB_C* UBP_Compensator_SFMB_C::GetDefaultObj()
{
	static class UBP_Compensator_SFMB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Compensator_SFMB_C*>(UBP_Compensator_SFMB_C::StaticClass()->DefaultObject);

	return Default;
}

}


