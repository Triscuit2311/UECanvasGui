#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_Handstop.Rifle_Handstop_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_Handstop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_Handstop_C");

	return Clss;
}


// Rifle_Handstop_C Rifle_Handstop.Default__Rifle_Handstop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_Handstop_C* URifle_Handstop_C::GetDefaultObj()
{
	static class URifle_Handstop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_Handstop_C*>(URifle_Handstop_C::StaticClass()->DefaultObject);

	return Default;
}

}


