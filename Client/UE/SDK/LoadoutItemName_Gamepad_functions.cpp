#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutItemName_Gamepad.LoadoutItemName_Gamepad_C
// (None)

class UClass* ULoadoutItemName_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutItemName_Gamepad_C");

	return Clss;
}


// LoadoutItemName_Gamepad_C LoadoutItemName_Gamepad.Default__LoadoutItemName_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutItemName_Gamepad_C* ULoadoutItemName_Gamepad_C::GetDefaultObj()
{
	static class ULoadoutItemName_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutItemName_Gamepad_C*>(ULoadoutItemName_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}

}


