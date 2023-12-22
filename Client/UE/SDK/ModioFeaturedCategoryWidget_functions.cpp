#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioFeaturedCategoryWidget.ModioFeaturedCategoryWidget_C
// (None)

class UClass* UModioFeaturedCategoryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedCategoryWidget_C");

	return Clss;
}


// ModioFeaturedCategoryWidget_C ModioFeaturedCategoryWidget.Default__ModioFeaturedCategoryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioFeaturedCategoryWidget_C* UModioFeaturedCategoryWidget_C::GetDefaultObj()
{
	static class UModioFeaturedCategoryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedCategoryWidget_C*>(UModioFeaturedCategoryWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


