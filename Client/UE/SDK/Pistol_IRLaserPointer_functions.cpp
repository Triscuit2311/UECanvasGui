#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_IRLaserPointer.Pistol_IRLaserPointer_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_IRLaserPointer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_IRLaserPointer_C");

	return Clss;
}


// Pistol_IRLaserPointer_C Pistol_IRLaserPointer.Default__Pistol_IRLaserPointer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_IRLaserPointer_C* UPistol_IRLaserPointer_C::GetDefaultObj()
{
	static class UPistol_IRLaserPointer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_IRLaserPointer_C*>(UPistol_IRLaserPointer_C::StaticClass()->DefaultObject);

	return Default;
}

}


