#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultCarouselTextStyle.DefaultCarouselTextStyle_C
// (None)

class UClass* UDefaultCarouselTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultCarouselTextStyle_C");

	return Clss;
}


// DefaultCarouselTextStyle_C DefaultCarouselTextStyle.Default__DefaultCarouselTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultCarouselTextStyle_C* UDefaultCarouselTextStyle_C::GetDefaultObj()
{
	static class UDefaultCarouselTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultCarouselTextStyle_C*>(UDefaultCarouselTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


