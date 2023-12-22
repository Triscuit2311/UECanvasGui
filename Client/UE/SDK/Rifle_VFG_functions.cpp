#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_VFG.Rifle_VFG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_VFG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_VFG_C");

	return Clss;
}


// Rifle_VFG_C Rifle_VFG.Default__Rifle_VFG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_VFG_C* URifle_VFG_C::GetDefaultObj()
{
	static class URifle_VFG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_VFG_C*>(URifle_VFG_C::StaticClass()->DefaultObject);

	return Default;
}

}


