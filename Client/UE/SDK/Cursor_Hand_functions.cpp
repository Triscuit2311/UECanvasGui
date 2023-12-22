#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cursor_Hand.Cursor_Hand_C
// (None)

class UClass* UCursor_Hand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cursor_Hand_C");

	return Clss;
}


// Cursor_Hand_C Cursor_Hand.Default__Cursor_Hand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursor_Hand_C* UCursor_Hand_C::GetDefaultObj()
{
	static class UCursor_Hand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursor_Hand_C*>(UCursor_Hand_C::StaticClass()->DefaultObject);

	return Default;
}

}


