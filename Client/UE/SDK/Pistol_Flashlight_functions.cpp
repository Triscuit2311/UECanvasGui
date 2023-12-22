#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_Flashlight.Pistol_Flashlight_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_Flashlight_C");

	return Clss;
}


// Pistol_Flashlight_C Pistol_Flashlight.Default__Pistol_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_Flashlight_C* UPistol_Flashlight_C::GetDefaultObj()
{
	static class UPistol_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_Flashlight_C*>(UPistol_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


