#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Grip_Combat.BP_Grip_Combat_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_Grip_Combat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Grip_Combat_C");

	return Clss;
}


// BP_Grip_Combat_C BP_Grip_Combat.Default__BP_Grip_Combat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Grip_Combat_C* UBP_Grip_Combat_C::GetDefaultObj()
{
	static class UBP_Grip_Combat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Grip_Combat_C*>(UBP_Grip_Combat_C::StaticClass()->DefaultObject);

	return Default;
}

}


