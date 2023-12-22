#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleSelectionItem.W_ConsoleSelectionItem_C
// (None)

class UClass* UW_ConsoleSelectionItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleSelectionItem_C");

	return Clss;
}


// W_ConsoleSelectionItem_C W_ConsoleSelectionItem.Default__W_ConsoleSelectionItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleSelectionItem_C* UW_ConsoleSelectionItem_C::GetDefaultObj()
{
	static class UW_ConsoleSelectionItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleSelectionItem_C*>(UW_ConsoleSelectionItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


