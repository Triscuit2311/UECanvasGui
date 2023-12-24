#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutSlotButtonStyle_Gamepad.LoadoutSlotButtonStyle_Gamepad_C
// (None)

class UClass* ULoadoutSlotButtonStyle_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutSlotButtonStyle_Gamepad_C");

	return Clss;
}


// LoadoutSlotButtonStyle_Gamepad_C LoadoutSlotButtonStyle_Gamepad.Default__LoadoutSlotButtonStyle_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutSlotButtonStyle_Gamepad_C* ULoadoutSlotButtonStyle_Gamepad_C::GetDefaultObj()
{
	static class ULoadoutSlotButtonStyle_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutSlotButtonStyle_Gamepad_C*>(ULoadoutSlotButtonStyle_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}

}


