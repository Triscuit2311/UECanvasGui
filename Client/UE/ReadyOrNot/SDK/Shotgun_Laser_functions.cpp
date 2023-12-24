#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_Laser.Shotgun_Laser_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_Laser_C");

	return Clss;
}


// Shotgun_Laser_C Shotgun_Laser.Default__Shotgun_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_Laser_C* UShotgun_Laser_C::GetDefaultObj()
{
	static class UShotgun_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_Laser_C*>(UShotgun_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


