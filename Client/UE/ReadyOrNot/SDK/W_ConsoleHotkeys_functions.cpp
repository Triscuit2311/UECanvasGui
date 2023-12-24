#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleHotkeys.W_ConsoleHotkeys_C
// (None)

class UClass* UW_ConsoleHotkeys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleHotkeys_C");

	return Clss;
}


// W_ConsoleHotkeys_C W_ConsoleHotkeys.Default__W_ConsoleHotkeys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleHotkeys_C* UW_ConsoleHotkeys_C::GetDefaultObj()
{
	static class UW_ConsoleHotkeys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleHotkeys_C*>(UW_ConsoleHotkeys_C::StaticClass()->DefaultObject);

	return Default;
}

}


