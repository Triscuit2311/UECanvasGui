#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_OverbarrelAttachment.Null_OverbarrelAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_OverbarrelAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_OverbarrelAttachment_C");

	return Clss;
}


// Null_OverbarrelAttachment_C Null_OverbarrelAttachment.Default__Null_OverbarrelAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_OverbarrelAttachment_C* UNull_OverbarrelAttachment_C::GetDefaultObj()
{
	static class UNull_OverbarrelAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_OverbarrelAttachment_C*>(UNull_OverbarrelAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


