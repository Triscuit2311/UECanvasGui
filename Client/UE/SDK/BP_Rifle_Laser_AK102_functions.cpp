#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rifle_Laser_AK102.BP_Rifle_Laser_AK102_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Rifle_Laser_AK102_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rifle_Laser_AK102_C");

	return Clss;
}


// BP_Rifle_Laser_AK102_C BP_Rifle_Laser_AK102.Default__BP_Rifle_Laser_AK102_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Rifle_Laser_AK102_C* UBP_Rifle_Laser_AK102_C::GetDefaultObj()
{
	static class UBP_Rifle_Laser_AK102_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Rifle_Laser_AK102_C*>(UBP_Rifle_Laser_AK102_C::StaticClass()->DefaultObject);

	return Default;
}

}


