#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scope_M5B.BP_Scope_M5B_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Scope_M5B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scope_M5B_C");

	return Clss;
}


// BP_Scope_M5B_C BP_Scope_M5B.Default__BP_Scope_M5B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Scope_M5B_C* UBP_Scope_M5B_C::GetDefaultObj()
{
	static class UBP_Scope_M5B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Scope_M5B_C*>(UBP_Scope_M5B_C::StaticClass()->DefaultObject);

	return Default;
}

}


