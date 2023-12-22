#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_VFG_MLOK.Rifle_VFG_MLOK_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_VFG_MLOK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_VFG_MLOK_C");

	return Clss;
}


// Rifle_VFG_MLOK_C Rifle_VFG_MLOK.Default__Rifle_VFG_MLOK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_VFG_MLOK_C* URifle_VFG_MLOK_C::GetDefaultObj()
{
	static class URifle_VFG_MLOK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_VFG_MLOK_C*>(URifle_VFG_MLOK_C::StaticClass()->DefaultObject);

	return Default;
}

}


