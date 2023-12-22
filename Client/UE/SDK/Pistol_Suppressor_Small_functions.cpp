#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_Suppressor_Small.Pistol_Suppressor_Small_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_Suppressor_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_Suppressor_Small_C");

	return Clss;
}


// Pistol_Suppressor_Small_C Pistol_Suppressor_Small.Default__Pistol_Suppressor_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_Suppressor_Small_C* UPistol_Suppressor_Small_C::GetDefaultObj()
{
	static class UPistol_Suppressor_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_Suppressor_Small_C*>(UPistol_Suppressor_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


