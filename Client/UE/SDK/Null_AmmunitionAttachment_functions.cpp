#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_AmmunitionAttachment.Null_AmmunitionAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_AmmunitionAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_AmmunitionAttachment_C");

	return Clss;
}


// Null_AmmunitionAttachment_C Null_AmmunitionAttachment.Default__Null_AmmunitionAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_AmmunitionAttachment_C* UNull_AmmunitionAttachment_C::GetDefaultObj()
{
	static class UNull_AmmunitionAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_AmmunitionAttachment_C*>(UNull_AmmunitionAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


