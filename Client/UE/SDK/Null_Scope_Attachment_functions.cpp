#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_Scope_Attachment.Null_Scope_Attachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_Scope_Attachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_Scope_Attachment_C");

	return Clss;
}


// Null_Scope_Attachment_C Null_Scope_Attachment.Default__Null_Scope_Attachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_Scope_Attachment_C* UNull_Scope_Attachment_C::GetDefaultObj()
{
	static class UNull_Scope_Attachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_Scope_Attachment_C*>(UNull_Scope_Attachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


