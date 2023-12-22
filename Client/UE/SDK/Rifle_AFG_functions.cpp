#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_AFG.Rifle_AFG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_AFG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_AFG_C");

	return Clss;
}


// Rifle_AFG_C Rifle_AFG.Default__Rifle_AFG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_AFG_C* URifle_AFG_C::GetDefaultObj()
{
	static class URifle_AFG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_AFG_C*>(URifle_AFG_C::StaticClass()->DefaultObject);

	return Default;
}

}


