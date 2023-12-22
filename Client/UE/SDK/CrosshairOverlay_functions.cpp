#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CrosshairOverlay.CrosshairOverlay_C
// (None)

class UClass* UCrosshairOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrosshairOverlay_C");

	return Clss;
}


// CrosshairOverlay_C CrosshairOverlay.Default__CrosshairOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshairOverlay_C* UCrosshairOverlay_C::GetDefaultObj()
{
	static class UCrosshairOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshairOverlay_C*>(UCrosshairOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


