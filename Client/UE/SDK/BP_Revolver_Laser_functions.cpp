#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Revolver_Laser.BP_Revolver_Laser_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Revolver_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Revolver_Laser_C");

	return Clss;
}


// BP_Revolver_Laser_C BP_Revolver_Laser.Default__BP_Revolver_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Revolver_Laser_C* UBP_Revolver_Laser_C::GetDefaultObj()
{
	static class UBP_Revolver_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Revolver_Laser_C*>(UBP_Revolver_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


