#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModDetailsPropertyInspectorWidget.ModioModDetailsPropertyInspectorWidget_C
// (None)

class UClass* UModioModDetailsPropertyInspectorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsPropertyInspectorWidget_C");

	return Clss;
}


// ModioModDetailsPropertyInspectorWidget_C ModioModDetailsPropertyInspectorWidget.Default__ModioModDetailsPropertyInspectorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModDetailsPropertyInspectorWidget_C* UModioModDetailsPropertyInspectorWidget_C::GetDefaultObj()
{
	static class UModioModDetailsPropertyInspectorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsPropertyInspectorWidget_C*>(UModioModDetailsPropertyInspectorWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


