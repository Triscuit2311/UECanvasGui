#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_M14_ShortBarrel.Rifle_M14_ShortBarrel_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_M14_ShortBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_M14_ShortBarrel_C");

	return Clss;
}


// Rifle_M14_ShortBarrel_C Rifle_M14_ShortBarrel.Default__Rifle_M14_ShortBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_M14_ShortBarrel_C* URifle_M14_ShortBarrel_C::GetDefaultObj()
{
	static class URifle_M14_ShortBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_M14_ShortBarrel_C*>(URifle_M14_ShortBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


