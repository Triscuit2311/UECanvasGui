#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_Flashlight.Rifle_Flashlight_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_Flashlight_C");

	return Clss;
}


// Rifle_Flashlight_C Rifle_Flashlight.Default__Rifle_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_Flashlight_C* URifle_Flashlight_C::GetDefaultObj()
{
	static class URifle_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_Flashlight_C*>(URifle_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


