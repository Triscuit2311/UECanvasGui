#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_M14Railmod_ATACR.Scope_M14Railmod_ATACR_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_M14Railmod_ATACR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_M14Railmod_ATACR_C");

	return Clss;
}


// Scope_M14Railmod_ATACR_C Scope_M14Railmod_ATACR.Default__Scope_M14Railmod_ATACR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_M14Railmod_ATACR_C* UScope_M14Railmod_ATACR_C::GetDefaultObj()
{
	static class UScope_M14Railmod_ATACR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_M14Railmod_ATACR_C*>(UScope_M14Railmod_ATACR_C::StaticClass()->DefaultObject);

	return Default;
}

}


