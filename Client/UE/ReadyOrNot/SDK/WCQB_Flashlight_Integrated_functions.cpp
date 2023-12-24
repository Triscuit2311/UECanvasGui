#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WCQB_Flashlight_Integrated.WCQB_Flashlight_Integrated_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UWCQB_Flashlight_Integrated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WCQB_Flashlight_Integrated_C");

	return Clss;
}


// WCQB_Flashlight_Integrated_C WCQB_Flashlight_Integrated.Default__WCQB_Flashlight_Integrated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWCQB_Flashlight_Integrated_C* UWCQB_Flashlight_Integrated_C::GetDefaultObj()
{
	static class UWCQB_Flashlight_Integrated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWCQB_Flashlight_Integrated_C*>(UWCQB_Flashlight_Integrated_C::StaticClass()->DefaultObject);

	return Default;
}

}


