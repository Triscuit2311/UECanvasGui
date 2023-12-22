#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_MicroT1_Raised.Scope_MicroT1_Raised_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_MicroT1_Raised_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_MicroT1_Raised_C");

	return Clss;
}


// Scope_MicroT1_Raised_C Scope_MicroT1_Raised.Default__Scope_MicroT1_Raised_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_MicroT1_Raised_C* UScope_MicroT1_Raised_C::GetDefaultObj()
{
	static class UScope_MicroT1_Raised_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_MicroT1_Raised_C*>(UScope_MicroT1_Raised_C::StaticClass()->DefaultObject);

	return Default;
}

}


