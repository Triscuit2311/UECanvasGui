#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_Flashlight_Integrated.Shotgun_Flashlight_Integrated_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_Flashlight_Integrated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_Flashlight_Integrated_C");

	return Clss;
}


// Shotgun_Flashlight_Integrated_C Shotgun_Flashlight_Integrated.Default__Shotgun_Flashlight_Integrated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_Flashlight_Integrated_C* UShotgun_Flashlight_Integrated_C::GetDefaultObj()
{
	static class UShotgun_Flashlight_Integrated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_Flashlight_Integrated_C*>(UShotgun_Flashlight_Integrated_C::StaticClass()->DefaultObject);

	return Default;
}

}


