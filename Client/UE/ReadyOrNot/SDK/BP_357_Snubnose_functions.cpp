#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_357_Snubnose.BP_357_Snubnose_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_357_Snubnose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_357_Snubnose_C");

	return Clss;
}


// BP_357_Snubnose_C BP_357_Snubnose.Default__BP_357_Snubnose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_357_Snubnose_C* UBP_357_Snubnose_C::GetDefaultObj()
{
	static class UBP_357_Snubnose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_357_Snubnose_C*>(UBP_357_Snubnose_C::StaticClass()->DefaultObject);

	return Default;
}

}


