#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModBrowserMenuBarWidget.ModioModBrowserMenuBarWidget_C
// (None)

class UClass* UModioModBrowserMenuBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowserMenuBarWidget_C");

	return Clss;
}


// ModioModBrowserMenuBarWidget_C ModioModBrowserMenuBarWidget.Default__ModioModBrowserMenuBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModBrowserMenuBarWidget_C* UModioModBrowserMenuBarWidget_C::GetDefaultObj()
{
	static class UModioModBrowserMenuBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModBrowserMenuBarWidget_C*>(UModioModBrowserMenuBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


