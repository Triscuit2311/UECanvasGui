#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_VFG.Shotgun_VFG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_VFG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_VFG_C");

	return Clss;
}


// Shotgun_VFG_C Shotgun_VFG.Default__Shotgun_VFG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_VFG_C* UShotgun_VFG_C::GetDefaultObj()
{
	static class UShotgun_VFG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_VFG_C*>(UShotgun_VFG_C::StaticClass()->DefaultObject);

	return Default;
}

}


