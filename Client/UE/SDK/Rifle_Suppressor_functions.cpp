#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_Suppressor.Rifle_Suppressor_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_Suppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_Suppressor_C");

	return Clss;
}


// Rifle_Suppressor_C Rifle_Suppressor.Default__Rifle_Suppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_Suppressor_C* URifle_Suppressor_C::GetDefaultObj()
{
	static class URifle_Suppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_Suppressor_C*>(URifle_Suppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


