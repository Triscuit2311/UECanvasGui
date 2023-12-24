#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomizationSlotButtonStyle_Gamepad.CustomizationSlotButtonStyle_Gamepad_C
// (None)

class UClass* UCustomizationSlotButtonStyle_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizationSlotButtonStyle_Gamepad_C");

	return Clss;
}


// CustomizationSlotButtonStyle_Gamepad_C CustomizationSlotButtonStyle_Gamepad.Default__CustomizationSlotButtonStyle_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomizationSlotButtonStyle_Gamepad_C* UCustomizationSlotButtonStyle_Gamepad_C::GetDefaultObj()
{
	static class UCustomizationSlotButtonStyle_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizationSlotButtonStyle_Gamepad_C*>(UCustomizationSlotButtonStyle_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}

}


