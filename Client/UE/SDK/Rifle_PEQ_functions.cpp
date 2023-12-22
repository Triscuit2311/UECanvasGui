#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_PEQ.Rifle_PEQ_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_PEQ_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_PEQ_C");

	return Clss;
}


// Rifle_PEQ_C Rifle_PEQ.Default__Rifle_PEQ_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_PEQ_C* URifle_PEQ_C::GetDefaultObj()
{
	static class URifle_PEQ_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_PEQ_C*>(URifle_PEQ_C::StaticClass()->DefaultObject);

	return Default;
}

}


