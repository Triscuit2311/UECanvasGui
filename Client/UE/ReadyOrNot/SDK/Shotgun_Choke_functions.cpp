#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_Choke.Shotgun_Choke_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_Choke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_Choke_C");

	return Clss;
}


// Shotgun_Choke_C Shotgun_Choke.Default__Shotgun_Choke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_Choke_C* UShotgun_Choke_C::GetDefaultObj()
{
	static class UShotgun_Choke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_Choke_C*>(UShotgun_Choke_C::StaticClass()->DefaultObject);

	return Default;
}

}


