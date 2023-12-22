#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_MP5_512.Scope_MP5_512_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_MP5_512_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_MP5_512_C");

	return Clss;
}


// Scope_MP5_512_C Scope_MP5_512.Default__Scope_MP5_512_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_MP5_512_C* UScope_MP5_512_C::GetDefaultObj()
{
	static class UScope_MP5_512_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_MP5_512_C*>(UScope_MP5_512_C::StaticClass()->DefaultObject);

	return Default;
}

}


