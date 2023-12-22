#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MP7_PistolSights.BP_MP7_PistolSights_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_MP7_PistolSights_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MP7_PistolSights_C");

	return Clss;
}


// BP_MP7_PistolSights_C BP_MP7_PistolSights.Default__BP_MP7_PistolSights_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MP7_PistolSights_C* UBP_MP7_PistolSights_C::GetDefaultObj()
{
	static class UBP_MP7_PistolSights_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MP7_PistolSights_C*>(UBP_MP7_PistolSights_C::StaticClass()->DefaultObject);

	return Default;
}

}


