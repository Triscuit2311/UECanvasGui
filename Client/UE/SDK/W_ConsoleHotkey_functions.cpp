#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleHotkey.W_ConsoleHotkey_C
// (None)

class UClass* UW_ConsoleHotkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleHotkey_C");

	return Clss;
}


// W_ConsoleHotkey_C W_ConsoleHotkey.Default__W_ConsoleHotkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleHotkey_C* UW_ConsoleHotkey_C::GetDefaultObj()
{
	static class UW_ConsoleHotkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleHotkey_C*>(UW_ConsoleHotkey_C::StaticClass()->DefaultObject);

	return Default;
}

}


