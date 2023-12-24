#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_LaserPointer_1911.Pistol_LaserPointer_1911_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_LaserPointer_1911_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_LaserPointer_1911_C");

	return Clss;
}


// Pistol_LaserPointer_1911_C Pistol_LaserPointer_1911.Default__Pistol_LaserPointer_1911_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_LaserPointer_1911_C* UPistol_LaserPointer_1911_C::GetDefaultObj()
{
	static class UPistol_LaserPointer_1911_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_LaserPointer_1911_C*>(UPistol_LaserPointer_1911_C::StaticClass()->DefaultObject);

	return Default;
}

}


