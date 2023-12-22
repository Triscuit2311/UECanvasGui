#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol_Compensator_Single.Pistol_Compensator_Single_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UPistol_Compensator_Single_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_Compensator_Single_C");

	return Clss;
}


// Pistol_Compensator_Single_C Pistol_Compensator_Single.Default__Pistol_Compensator_Single_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_Compensator_Single_C* UPistol_Compensator_Single_C::GetDefaultObj()
{
	static class UPistol_Compensator_Single_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_Compensator_Single_C*>(UPistol_Compensator_Single_C::StaticClass()->DefaultObject);

	return Default;
}

}


