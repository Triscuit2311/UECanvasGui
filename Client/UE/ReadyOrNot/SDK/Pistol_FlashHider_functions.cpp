#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_FlashHider.Pistol_FlashHider_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_FlashHider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_FlashHider_C");

	return Clss;
}


// Pistol_FlashHider_C Pistol_FlashHider.Default__Pistol_FlashHider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_FlashHider_C* UPistol_FlashHider_C::GetDefaultObj()
{
	static class UPistol_FlashHider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_FlashHider_C*>(UPistol_FlashHider_C::StaticClass()->DefaultObject);

	return Default;
}

}


