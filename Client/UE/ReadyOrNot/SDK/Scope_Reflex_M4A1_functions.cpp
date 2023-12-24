#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_Reflex_M4A1.Scope_Reflex_M4A1_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_Reflex_M4A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_Reflex_M4A1_C");

	return Clss;
}


// Scope_Reflex_M4A1_C Scope_Reflex_M4A1.Default__Scope_Reflex_M4A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_Reflex_M4A1_C* UScope_Reflex_M4A1_C::GetDefaultObj()
{
	static class UScope_Reflex_M4A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_Reflex_M4A1_C*>(UScope_Reflex_M4A1_C::StaticClass()->DefaultObject);

	return Default;
}

}


