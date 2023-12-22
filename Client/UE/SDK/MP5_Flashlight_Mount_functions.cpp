#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP5_Flashlight_Mount.MP5_Flashlight_Mount_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMP5_Flashlight_Mount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP5_Flashlight_Mount_C");

	return Clss;
}


// MP5_Flashlight_Mount_C MP5_Flashlight_Mount.Default__MP5_Flashlight_Mount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMP5_Flashlight_Mount_C* UMP5_Flashlight_Mount_C::GetDefaultObj()
{
	static class UMP5_Flashlight_Mount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMP5_Flashlight_Mount_C*>(UMP5_Flashlight_Mount_C::StaticClass()->DefaultObject);

	return Default;
}

}


