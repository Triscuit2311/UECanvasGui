#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_M9_RDS_Holo.Scope_M9_RDS_Holo_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_M9_RDS_Holo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_M9_RDS_Holo_C");

	return Clss;
}


// Scope_M9_RDS_Holo_C Scope_M9_RDS_Holo.Default__Scope_M9_RDS_Holo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_M9_RDS_Holo_C* UScope_M9_RDS_Holo_C::GetDefaultObj()
{
	static class UScope_M9_RDS_Holo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_M9_RDS_Holo_C*>(UScope_M9_RDS_Holo_C::StaticClass()->DefaultObject);

	return Default;
}

}


