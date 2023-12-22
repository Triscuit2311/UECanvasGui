#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_GripAttachment.Null_GripAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_GripAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_GripAttachment_C");

	return Clss;
}


// Null_GripAttachment_C Null_GripAttachment.Default__Null_GripAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_GripAttachment_C* UNull_GripAttachment_C::GetDefaultObj()
{
	static class UNull_GripAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_GripAttachment_C*>(UNull_GripAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


