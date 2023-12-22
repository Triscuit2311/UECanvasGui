#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModDetailsImageWidget.ModioModDetailsImageWidget_C
// (None)

class UClass* UModioModDetailsImageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsImageWidget_C");

	return Clss;
}


// ModioModDetailsImageWidget_C ModioModDetailsImageWidget.Default__ModioModDetailsImageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModDetailsImageWidget_C* UModioModDetailsImageWidget_C::GetDefaultObj()
{
	static class UModioModDetailsImageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsImageWidget_C*>(UModioModDetailsImageWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


