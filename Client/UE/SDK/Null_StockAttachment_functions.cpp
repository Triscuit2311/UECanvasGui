#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_StockAttachment.Null_StockAttachment_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UNull_StockAttachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_StockAttachment_C");

	return Clss;
}


// Null_StockAttachment_C Null_StockAttachment.Default__Null_StockAttachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNull_StockAttachment_C* UNull_StockAttachment_C::GetDefaultObj()
{
	static class UNull_StockAttachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNull_StockAttachment_C*>(UNull_StockAttachment_C::StaticClass()->DefaultObject);

	return Default;
}

}


