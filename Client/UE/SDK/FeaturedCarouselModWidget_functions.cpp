#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FeaturedCarouselModWidget.FeaturedCarouselModWidget_C
// (None)

class UClass* UFeaturedCarouselModWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeaturedCarouselModWidget_C");

	return Clss;
}


// FeaturedCarouselModWidget_C FeaturedCarouselModWidget.Default__FeaturedCarouselModWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeaturedCarouselModWidget_C* UFeaturedCarouselModWidget_C::GetDefaultObj()
{
	static class UFeaturedCarouselModWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeaturedCarouselModWidget_C*>(UFeaturedCarouselModWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


