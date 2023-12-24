#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flashlight_M600V_UMP45.BP_Flashlight_M600V_UMP45_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Flashlight_M600V_UMP45_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flashlight_M600V_UMP45_C");

	return Clss;
}


// BP_Flashlight_M600V_UMP45_C BP_Flashlight_M600V_UMP45.Default__BP_Flashlight_M600V_UMP45_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flashlight_M600V_UMP45_C* UBP_Flashlight_M600V_UMP45_C::GetDefaultObj()
{
	static class UBP_Flashlight_M600V_UMP45_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flashlight_M600V_UMP45_C*>(UBP_Flashlight_M600V_UMP45_C::StaticClass()->DefaultObject);

	return Default;
}

}


