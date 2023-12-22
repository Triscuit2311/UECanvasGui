#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M9_Brake.BP_M9_Brake_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_M9_Brake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M9_Brake_C");

	return Clss;
}


// BP_M9_Brake_C BP_M9_Brake.Default__BP_M9_Brake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_M9_Brake_C* UBP_M9_Brake_C::GetDefaultObj()
{
	static class UBP_M9_Brake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_M9_Brake_C*>(UBP_M9_Brake_C::StaticClass()->DefaultObject);

	return Default;
}

}


