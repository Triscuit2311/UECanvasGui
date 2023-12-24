#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_M9_RDS_Harris.Scope_M9_RDS_Harris_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_M9_RDS_Harris_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_M9_RDS_Harris_C");

	return Clss;
}


// Scope_M9_RDS_Harris_C Scope_M9_RDS_Harris.Default__Scope_M9_RDS_Harris_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_M9_RDS_Harris_C* UScope_M9_RDS_Harris_C::GetDefaultObj()
{
	static class UScope_M9_RDS_Harris_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_M9_RDS_Harris_C*>(UScope_M9_RDS_Harris_C::StaticClass()->DefaultObject);

	return Default;
}

}


