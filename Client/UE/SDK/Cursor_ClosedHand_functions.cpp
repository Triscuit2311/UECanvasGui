#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cursor_ClosedHand.Cursor_ClosedHand_C
// (None)

class UClass* UCursor_ClosedHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cursor_ClosedHand_C");

	return Clss;
}


// Cursor_ClosedHand_C Cursor_ClosedHand.Default__Cursor_ClosedHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursor_ClosedHand_C* UCursor_ClosedHand_C::GetDefaultObj()
{
	static class UCursor_ClosedHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursor_ClosedHand_C*>(UCursor_ClosedHand_C::StaticClass()->DefaultObject);

	return Default;
}

}


