#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_Reflex.Scope_Reflex_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_Reflex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_Reflex_C");

	return Clss;
}


// Scope_Reflex_C Scope_Reflex.Default__Scope_Reflex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_Reflex_C* UScope_Reflex_C::GetDefaultObj()
{
	static class UScope_Reflex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_Reflex_C*>(UScope_Reflex_C::StaticClass()->DefaultObject);

	return Default;
}

}


