#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_Scar_ShortBarrel.Rifle_Scar_ShortBarrel_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_Scar_ShortBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_Scar_ShortBarrel_C");

	return Clss;
}


// Rifle_Scar_ShortBarrel_C Rifle_Scar_ShortBarrel.Default__Rifle_Scar_ShortBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_Scar_ShortBarrel_C* URifle_Scar_ShortBarrel_C::GetDefaultObj()
{
	static class URifle_Scar_ShortBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_Scar_ShortBarrel_C*>(URifle_Scar_ShortBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


