#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_SRS.Scope_SRS_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_SRS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_SRS_C");

	return Clss;
}


// Scope_SRS_C Scope_SRS.Default__Scope_SRS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_SRS_C* UScope_SRS_C::GetDefaultObj()
{
	static class UScope_SRS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_SRS_C*>(UScope_SRS_C::StaticClass()->DefaultObject);

	return Default;
}

}


