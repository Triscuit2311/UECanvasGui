#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_MAWL.Rifle_MAWL_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_MAWL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_MAWL_C");

	return Clss;
}


// Rifle_MAWL_C Rifle_MAWL.Default__Rifle_MAWL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_MAWL_C* URifle_MAWL_C::GetDefaultObj()
{
	static class URifle_MAWL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_MAWL_C*>(URifle_MAWL_C::StaticClass()->DefaultObject);

	return Default;
}

}


