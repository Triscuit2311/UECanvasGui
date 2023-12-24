#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutItemEquippedButtonStyle.LoadoutItemEquippedButtonStyle_C
// (None)

class UClass* ULoadoutItemEquippedButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutItemEquippedButtonStyle_C");

	return Clss;
}


// LoadoutItemEquippedButtonStyle_C LoadoutItemEquippedButtonStyle.Default__LoadoutItemEquippedButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutItemEquippedButtonStyle_C* ULoadoutItemEquippedButtonStyle_C::GetDefaultObj()
{
	static class ULoadoutItemEquippedButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutItemEquippedButtonStyle_C*>(ULoadoutItemEquippedButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


