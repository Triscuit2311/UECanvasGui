#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Collectable_Sins_THXCamera.BP_Collectable_Sins_THXCamera_C
// (Actor)

class UClass* ABP_Collectable_Sins_THXCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Collectable_Sins_THXCamera_C");

	return Clss;
}


// BP_Collectable_Sins_THXCamera_C BP_Collectable_Sins_THXCamera.Default__BP_Collectable_Sins_THXCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Collectable_Sins_THXCamera_C* ABP_Collectable_Sins_THXCamera_C::GetDefaultObj()
{
	static class ABP_Collectable_Sins_THXCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Collectable_Sins_THXCamera_C*>(ABP_Collectable_Sins_THXCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


