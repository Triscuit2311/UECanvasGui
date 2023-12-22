#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModBrowserWidget.ModioModBrowserWidget_C
// (None)

class UClass* UModioModBrowserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowserWidget_C");

	return Clss;
}


// ModioModBrowserWidget_C ModioModBrowserWidget.Default__ModioModBrowserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModBrowserWidget_C* UModioModBrowserWidget_C::GetDefaultObj()
{
	static class UModioModBrowserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModBrowserWidget_C*>(UModioModBrowserWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


