#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Magazine_PMAG.BP_Magazine_PMAG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Magazine_PMAG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Magazine_PMAG_C");

	return Clss;
}


// BP_Magazine_PMAG_C BP_Magazine_PMAG.Default__BP_Magazine_PMAG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Magazine_PMAG_C* UBP_Magazine_PMAG_C::GetDefaultObj()
{
	static class UBP_Magazine_PMAG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Magazine_PMAG_C*>(UBP_Magazine_PMAG_C::StaticClass()->DefaultObject);

	return Default;
}

}


