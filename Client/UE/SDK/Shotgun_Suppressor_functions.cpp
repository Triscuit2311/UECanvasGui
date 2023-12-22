#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_Suppressor.Shotgun_Suppressor_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_Suppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_Suppressor_C");

	return Clss;
}


// Shotgun_Suppressor_C Shotgun_Suppressor.Default__Shotgun_Suppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_Suppressor_C* UShotgun_Suppressor_C::GetDefaultObj()
{
	static class UShotgun_Suppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_Suppressor_C*>(UShotgun_Suppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


