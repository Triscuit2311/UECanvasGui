#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_AFG_MLOK.Rifle_AFG_MLOK_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_AFG_MLOK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_AFG_MLOK_C");

	return Clss;
}


// Rifle_AFG_MLOK_C Rifle_AFG_MLOK.Default__Rifle_AFG_MLOK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_AFG_MLOK_C* URifle_AFG_MLOK_C::GetDefaultObj()
{
	static class URifle_AFG_MLOK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_AFG_MLOK_C*>(URifle_AFG_MLOK_C::StaticClass()->DefaultObject);

	return Default;
}

}


