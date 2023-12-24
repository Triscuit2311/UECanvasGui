#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModDetailsImageGalleryNavButtonWidget.ModioModDetailsImageGalleryNavButtonWidget_C
// (None)

class UClass* UModioModDetailsImageGalleryNavButtonWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsImageGalleryNavButtonWidget_C");

	return Clss;
}


// ModioModDetailsImageGalleryNavButtonWidget_C ModioModDetailsImageGalleryNavButtonWidget.Default__ModioModDetailsImageGalleryNavButtonWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModDetailsImageGalleryNavButtonWidget_C* UModioModDetailsImageGalleryNavButtonWidget_C::GetDefaultObj()
{
	static class UModioModDetailsImageGalleryNavButtonWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsImageGalleryNavButtonWidget_C*>(UModioModDetailsImageGalleryNavButtonWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


