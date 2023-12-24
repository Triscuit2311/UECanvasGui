#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutSlotButtonStyle.LoadoutSlotButtonStyle_C
// (None)

class UClass* ULoadoutSlotButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutSlotButtonStyle_C");

	return Clss;
}


// LoadoutSlotButtonStyle_C LoadoutSlotButtonStyle.Default__LoadoutSlotButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutSlotButtonStyle_C* ULoadoutSlotButtonStyle_C::GetDefaultObj()
{
	static class ULoadoutSlotButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutSlotButtonStyle_C*>(ULoadoutSlotButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


