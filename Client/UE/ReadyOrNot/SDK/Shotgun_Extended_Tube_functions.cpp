#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_Extended_Tube.Shotgun_Extended_Tube_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_Extended_Tube_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_Extended_Tube_C");

	return Clss;
}


// Shotgun_Extended_Tube_C Shotgun_Extended_Tube.Default__Shotgun_Extended_Tube_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_Extended_Tube_C* UShotgun_Extended_Tube_C::GetDefaultObj()
{
	static class UShotgun_Extended_Tube_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_Extended_Tube_C*>(UShotgun_Extended_Tube_C::StaticClass()->DefaultObject);

	return Default;
}

}


