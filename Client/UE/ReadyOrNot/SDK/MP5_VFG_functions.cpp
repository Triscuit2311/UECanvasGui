#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP5_VFG.MP5_VFG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMP5_VFG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP5_VFG_C");

	return Clss;
}


// MP5_VFG_C MP5_VFG.Default__MP5_VFG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMP5_VFG_C* UMP5_VFG_C::GetDefaultObj()
{
	static class UMP5_VFG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMP5_VFG_C*>(UMP5_VFG_C::StaticClass()->DefaultObject);

	return Default;
}

}


