#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_SRS_Raised.Scope_SRS_Raised_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_SRS_Raised_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_SRS_Raised_C");

	return Clss;
}


// Scope_SRS_Raised_C Scope_SRS_Raised.Default__Scope_SRS_Raised_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_SRS_Raised_C* UScope_SRS_Raised_C::GetDefaultObj()
{
	static class UScope_SRS_Raised_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_SRS_Raised_C*>(UScope_SRS_Raised_C::StaticClass()->DefaultObject);

	return Default;
}

}


