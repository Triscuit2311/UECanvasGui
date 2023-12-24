#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_Compensator.Rifle_Compensator_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_Compensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_Compensator_C");

	return Clss;
}


// Rifle_Compensator_C Rifle_Compensator.Default__Rifle_Compensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_Compensator_C* URifle_Compensator_C::GetDefaultObj()
{
	static class URifle_Compensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_Compensator_C*>(URifle_Compensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


