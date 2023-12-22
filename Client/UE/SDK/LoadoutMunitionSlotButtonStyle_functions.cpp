#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutMunitionSlotButtonStyle.LoadoutMunitionSlotButtonStyle_C
// (None)

class UClass* ULoadoutMunitionSlotButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutMunitionSlotButtonStyle_C");

	return Clss;
}


// LoadoutMunitionSlotButtonStyle_C LoadoutMunitionSlotButtonStyle.Default__LoadoutMunitionSlotButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutMunitionSlotButtonStyle_C* ULoadoutMunitionSlotButtonStyle_C::GetDefaultObj()
{
	static class ULoadoutMunitionSlotButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutMunitionSlotButtonStyle_C*>(ULoadoutMunitionSlotButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


