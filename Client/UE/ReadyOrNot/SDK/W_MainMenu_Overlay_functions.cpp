#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_Overlay.W_MainMenu_Overlay_C
// (None)

class UClass* UW_MainMenu_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_Overlay_C");

	return Clss;
}


// W_MainMenu_Overlay_C W_MainMenu_Overlay.Default__W_MainMenu_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_Overlay_C* UW_MainMenu_Overlay_C::GetDefaultObj()
{
	static class UW_MainMenu_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_Overlay_C*>(UW_MainMenu_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


