#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PageHeaderCarouselSpacer.PageHeaderCarouselSpacer_C
// (None)

class UClass* UPageHeaderCarouselSpacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PageHeaderCarouselSpacer_C");

	return Clss;
}


// PageHeaderCarouselSpacer_C PageHeaderCarouselSpacer.Default__PageHeaderCarouselSpacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPageHeaderCarouselSpacer_C* UPageHeaderCarouselSpacer_C::GetDefaultObj()
{
	static class UPageHeaderCarouselSpacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPageHeaderCarouselSpacer_C*>(UPageHeaderCarouselSpacer_C::StaticClass()->DefaultObject);

	return Default;
}

}


