#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutItemNameHover_Gamepad.LoadoutItemNameHover_Gamepad_C
// (None)

class UClass* ULoadoutItemNameHover_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutItemNameHover_Gamepad_C");

	return Clss;
}


// LoadoutItemNameHover_Gamepad_C LoadoutItemNameHover_Gamepad.Default__LoadoutItemNameHover_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutItemNameHover_Gamepad_C* ULoadoutItemNameHover_Gamepad_C::GetDefaultObj()
{
	static class ULoadoutItemNameHover_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutItemNameHover_Gamepad_C*>(ULoadoutItemNameHover_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}

}


