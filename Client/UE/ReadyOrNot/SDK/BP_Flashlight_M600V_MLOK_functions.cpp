#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flashlight_M600V_MLOK.BP_Flashlight_M600V_MLOK_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Flashlight_M600V_MLOK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flashlight_M600V_MLOK_C");

	return Clss;
}


// BP_Flashlight_M600V_MLOK_C BP_Flashlight_M600V_MLOK.Default__BP_Flashlight_M600V_MLOK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flashlight_M600V_MLOK_C* UBP_Flashlight_M600V_MLOK_C::GetDefaultObj()
{
	static class UBP_Flashlight_M600V_MLOK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flashlight_M600V_MLOK_C*>(UBP_Flashlight_M600V_MLOK_C::StaticClass()->DefaultObject);

	return Default;
}

}


