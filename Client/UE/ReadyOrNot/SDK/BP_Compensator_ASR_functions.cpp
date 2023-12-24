#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Compensator_ASR.BP_Compensator_ASR_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Compensator_ASR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Compensator_ASR_C");

	return Clss;
}


// BP_Compensator_ASR_C BP_Compensator_ASR.Default__BP_Compensator_ASR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Compensator_ASR_C* UBP_Compensator_ASR_C::GetDefaultObj()
{
	static class UBP_Compensator_ASR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Compensator_ASR_C*>(UBP_Compensator_ASR_C::StaticClass()->DefaultObject);

	return Default;
}

}


