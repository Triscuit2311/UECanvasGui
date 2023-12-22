#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Stock_Removed_UMP45.BP_Stock_Removed_UMP45_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Stock_Removed_UMP45_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Stock_Removed_UMP45_C");

	return Clss;
}


// BP_Stock_Removed_UMP45_C BP_Stock_Removed_UMP45.Default__BP_Stock_Removed_UMP45_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Stock_Removed_UMP45_C* UBP_Stock_Removed_UMP45_C::GetDefaultObj()
{
	static class UBP_Stock_Removed_UMP45_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Stock_Removed_UMP45_C*>(UBP_Stock_Removed_UMP45_C::StaticClass()->DefaultObject);

	return Default;
}

}


