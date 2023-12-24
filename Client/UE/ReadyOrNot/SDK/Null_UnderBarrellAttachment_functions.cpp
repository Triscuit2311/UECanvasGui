#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_UnderBarrellAttachment.Null_UnderbarrellAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_UnderbarrellAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_UnderbarrellAttachment_C");

	return Clss;
}


// Null_UnderbarrellAttachment_C Null_UnderBarrellAttachment.Default__Null_UnderbarrellAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_UnderbarrellAttachment_C* UNull_UnderbarrellAttachment_C::GetDefaultObj()
{
	static class UNull_UnderbarrellAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_UnderbarrellAttachment_C*>(UNull_UnderbarrellAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


