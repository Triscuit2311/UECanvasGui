#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SMG_Laser.BP_SMG_Laser_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_SMG_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SMG_Laser_C");

	return Clss;
}


// BP_SMG_Laser_C BP_SMG_Laser.Default__BP_SMG_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SMG_Laser_C* UBP_SMG_Laser_C::GetDefaultObj()
{
	static class UBP_SMG_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SMG_Laser_C*>(UBP_SMG_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


