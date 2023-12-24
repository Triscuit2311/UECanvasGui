#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP5_Flashlight.MP5_Flashlight_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMP5_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP5_Flashlight_C");

	return Clss;
}


// MP5_Flashlight_C MP5_Flashlight.Default__MP5_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMP5_Flashlight_C* UMP5_Flashlight_C::GetDefaultObj()
{
	static class UMP5_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMP5_Flashlight_C*>(UMP5_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


