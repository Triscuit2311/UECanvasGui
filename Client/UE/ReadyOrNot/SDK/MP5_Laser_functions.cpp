#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP5_Laser.MP5_Laser_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMP5_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP5_Laser_C");

	return Clss;
}


// MP5_Laser_C MP5_Laser.Default__MP5_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMP5_Laser_C* UMP5_Laser_C::GetDefaultObj()
{
	static class UMP5_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMP5_Laser_C*>(UMP5_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


