#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scope_Harris.BP_Scope_Harris_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Scope_Harris_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scope_Harris_C");

	return Clss;
}


// BP_Scope_Harris_C BP_Scope_Harris.Default__BP_Scope_Harris_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Scope_Harris_C* UBP_Scope_Harris_C::GetDefaultObj()
{
	static class UBP_Scope_Harris_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Scope_Harris_C*>(UBP_Scope_Harris_C::StaticClass()->DefaultObject);

	return Default;
}

}


