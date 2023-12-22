#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FeaturedModCarousel.FeaturedModCarousel_C
// (None)

class UClass* UFeaturedModCarousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeaturedModCarousel_C");

	return Clss;
}


// FeaturedModCarousel_C FeaturedModCarousel.Default__FeaturedModCarousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeaturedModCarousel_C* UFeaturedModCarousel_C::GetDefaultObj()
{
	static class UFeaturedModCarousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeaturedModCarousel_C*>(UFeaturedModCarousel_C::StaticClass()->DefaultObject);

	return Default;
}

}


