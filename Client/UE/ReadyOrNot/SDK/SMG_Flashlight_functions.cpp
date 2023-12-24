#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SMG_Flashlight.SMG_Flashlight_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USMG_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMG_Flashlight_C");

	return Clss;
}


// SMG_Flashlight_C SMG_Flashlight.Default__SMG_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USMG_Flashlight_C* USMG_Flashlight_C::GetDefaultObj()
{
	static class USMG_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USMG_Flashlight_C*>(USMG_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


