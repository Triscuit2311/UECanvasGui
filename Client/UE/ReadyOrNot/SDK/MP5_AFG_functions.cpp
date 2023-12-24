#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP5_AFG.MP5_AFG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMP5_AFG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP5_AFG_C");

	return Clss;
}


// MP5_AFG_C MP5_AFG.Default__MP5_AFG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMP5_AFG_C* UMP5_AFG_C::GetDefaultObj()
{
	static class UMP5_AFG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMP5_AFG_C*>(UMP5_AFG_C::StaticClass()->DefaultObject);

	return Default;
}

}


