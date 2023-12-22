#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_IlluminatorAttachment.Null_IlluminatorAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_IlluminatorAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_IlluminatorAttachment_C");

	return Clss;
}


// Null_IlluminatorAttachment_C Null_IlluminatorAttachment.Default__Null_IlluminatorAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_IlluminatorAttachment_C* UNull_IlluminatorAttachment_C::GetDefaultObj()
{
	static class UNull_IlluminatorAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_IlluminatorAttachment_C*>(UNull_IlluminatorAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


