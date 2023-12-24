#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Suppressor_MP9.BP_Suppressor_MP9_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Suppressor_MP9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Suppressor_MP9_C");

	return Clss;
}


// BP_Suppressor_MP9_C BP_Suppressor_MP9.Default__BP_Suppressor_MP9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Suppressor_MP9_C* UBP_Suppressor_MP9_C::GetDefaultObj()
{
	static class UBP_Suppressor_MP9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Suppressor_MP9_C*>(UBP_Suppressor_MP9_C::StaticClass()->DefaultObject);

	return Default;
}

}


