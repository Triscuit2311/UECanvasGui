#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_MuzzleAttachment.Null_MuzzleAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_MuzzleAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_MuzzleAttachment_C");

	return Clss;
}


// Null_MuzzleAttachment_C Null_MuzzleAttachment.Default__Null_MuzzleAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_MuzzleAttachment_C* UNull_MuzzleAttachment_C::GetDefaultObj()
{
	static class UNull_MuzzleAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_MuzzleAttachment_C*>(UNull_MuzzleAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


