#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_MP5_SRO.Scope_MP5_SRO_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_MP5_SRO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_MP5_SRO_C");

	return Clss;
}


// Scope_MP5_SRO_C Scope_MP5_SRO.Default__Scope_MP5_SRO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_MP5_SRO_C* UScope_MP5_SRO_C::GetDefaultObj()
{
	static class UScope_MP5_SRO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_MP5_SRO_C*>(UScope_MP5_SRO_C::StaticClass()->DefaultObject);

	return Default;
}

}


