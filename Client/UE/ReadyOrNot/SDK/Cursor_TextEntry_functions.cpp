#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cursor_TextEntry.Cursor_TextEntry_C
// (None)

class UClass* UCursor_TextEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cursor_TextEntry_C");

	return Clss;
}


// Cursor_TextEntry_C Cursor_TextEntry.Default__Cursor_TextEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursor_TextEntry_C* UCursor_TextEntry_C::GetDefaultObj()
{
	static class UCursor_TextEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursor_TextEntry_C*>(UCursor_TextEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


