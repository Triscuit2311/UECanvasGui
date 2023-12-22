#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_LaserPointer.Pistol_LaserPointer_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_LaserPointer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_LaserPointer_C");

	return Clss;
}


// Pistol_LaserPointer_C Pistol_LaserPointer.Default__Pistol_LaserPointer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_LaserPointer_C* UPistol_LaserPointer_C::GetDefaultObj()
{
	static class UPistol_LaserPointer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_LaserPointer_C*>(UPistol_LaserPointer_C::StaticClass()->DefaultObject);

	return Default;
}

}


