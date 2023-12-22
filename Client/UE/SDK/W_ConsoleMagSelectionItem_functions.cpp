#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleMagSelectionItem.W_ConsoleMagSelectionItem_C
// (None)

class UClass* UW_ConsoleMagSelectionItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleMagSelectionItem_C");

	return Clss;
}


// W_ConsoleMagSelectionItem_C W_ConsoleMagSelectionItem.Default__W_ConsoleMagSelectionItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleMagSelectionItem_C* UW_ConsoleMagSelectionItem_C::GetDefaultObj()
{
	static class UW_ConsoleMagSelectionItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleMagSelectionItem_C*>(UW_ConsoleMagSelectionItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


