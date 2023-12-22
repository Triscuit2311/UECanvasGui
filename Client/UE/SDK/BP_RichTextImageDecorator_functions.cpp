#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RichTextImageDecorator.BP_RichTextImageDecorator_C
// (None)

class UClass* UBP_RichTextImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichTextImageDecorator_C");

	return Clss;
}


// BP_RichTextImageDecorator_C BP_RichTextImageDecorator.Default__BP_RichTextImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RichTextImageDecorator_C* UBP_RichTextImageDecorator_C::GetDefaultObj()
{
	static class UBP_RichTextImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RichTextImageDecorator_C*>(UBP_RichTextImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


