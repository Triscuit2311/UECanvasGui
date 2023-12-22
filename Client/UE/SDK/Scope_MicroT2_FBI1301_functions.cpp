#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_MicroT2_FBI1301.Scope_MicroT2_FBI1301_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_MicroT2_FBI1301_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_MicroT2_FBI1301_C");

	return Clss;
}


// Scope_MicroT2_FBI1301_C Scope_MicroT2_FBI1301.Default__Scope_MicroT2_FBI1301_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_MicroT2_FBI1301_C* UScope_MicroT2_FBI1301_C::GetDefaultObj()
{
	static class UScope_MicroT2_FBI1301_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_MicroT2_FBI1301_C*>(UScope_MicroT2_FBI1301_C::StaticClass()->DefaultObject);

	return Default;
}

}


