#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioHideCursorWidget.ModioHideCursorWidget_C
// (None)

class UClass* UModioHideCursorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioHideCursorWidget_C");

	return Clss;
}


// ModioHideCursorWidget_C ModioHideCursorWidget.Default__ModioHideCursorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioHideCursorWidget_C* UModioHideCursorWidget_C::GetDefaultObj()
{
	static class UModioHideCursorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioHideCursorWidget_C*>(UModioHideCursorWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


