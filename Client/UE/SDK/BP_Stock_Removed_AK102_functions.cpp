#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Stock_Removed_AK102.BP_Stock_Removed_AK102_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Stock_Removed_AK102_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Stock_Removed_AK102_C");

	return Clss;
}


// BP_Stock_Removed_AK102_C BP_Stock_Removed_AK102.Default__BP_Stock_Removed_AK102_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Stock_Removed_AK102_C* UBP_Stock_Removed_AK102_C::GetDefaultObj()
{
	static class UBP_Stock_Removed_AK102_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Stock_Removed_AK102_C*>(UBP_Stock_Removed_AK102_C::StaticClass()->DefaultObject);

	return Default;
}

}


