#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_8x.Scope_8x_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_8x_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_8x_C");

	return Clss;
}


// Scope_8x_C Scope_8x.Default__Scope_8x_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_8x_C* UScope_8x_C::GetDefaultObj()
{
	static class UScope_8x_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_8x_C*>(UScope_8x_C::StaticClass()->DefaultObject);

	return Default;
}

}


