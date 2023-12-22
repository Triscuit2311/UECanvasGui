#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scope_ACOG.BP_Scope_ACOG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Scope_ACOG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scope_ACOG_C");

	return Clss;
}


// BP_Scope_ACOG_C BP_Scope_ACOG.Default__BP_Scope_ACOG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Scope_ACOG_C* UBP_Scope_ACOG_C::GetDefaultObj()
{
	static class UBP_Scope_ACOG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Scope_ACOG_C*>(UBP_Scope_ACOG_C::StaticClass()->DefaultObject);

	return Default;
}

}


