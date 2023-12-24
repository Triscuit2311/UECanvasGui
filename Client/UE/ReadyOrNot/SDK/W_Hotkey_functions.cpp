#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Hotkey.W_Hotkey_C
// (None)

class UClass* UW_Hotkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Hotkey_C");

	return Clss;
}


// W_Hotkey_C W_Hotkey.Default__W_Hotkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Hotkey_C* UW_Hotkey_C::GetDefaultObj()
{
	static class UW_Hotkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Hotkey_C*>(UW_Hotkey_C::StaticClass()->DefaultObject);

	return Default;
}

}


