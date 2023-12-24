#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP5_CombatGrip.MP5_CombatGrip_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMP5_CombatGrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP5_CombatGrip_C");

	return Clss;
}


// MP5_CombatGrip_C MP5_CombatGrip.Default__MP5_CombatGrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMP5_CombatGrip_C* UMP5_CombatGrip_C::GetDefaultObj()
{
	static class UMP5_CombatGrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMP5_CombatGrip_C*>(UMP5_CombatGrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


