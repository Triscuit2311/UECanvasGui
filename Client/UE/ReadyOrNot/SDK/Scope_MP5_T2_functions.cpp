#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_MP5_T2.Scope_MP5_T2_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_MP5_T2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_MP5_T2_C");

	return Clss;
}


// Scope_MP5_T2_C Scope_MP5_T2.Default__Scope_MP5_T2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_MP5_T2_C* UScope_MP5_T2_C::GetDefaultObj()
{
	static class UScope_MP5_T2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_MP5_T2_C*>(UScope_MP5_T2_C::StaticClass()->DefaultObject);

	return Default;
}

}


