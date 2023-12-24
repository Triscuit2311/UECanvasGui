#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scope_HAMR_V2.BP_Scope_HAMR_V2_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Scope_HAMR_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scope_HAMR_V2_C");

	return Clss;
}


// BP_Scope_HAMR_V2_C BP_Scope_HAMR_V2.Default__BP_Scope_HAMR_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Scope_HAMR_V2_C* UBP_Scope_HAMR_V2_C::GetDefaultObj()
{
	static class UBP_Scope_HAMR_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Scope_HAMR_V2_C*>(UBP_Scope_HAMR_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


