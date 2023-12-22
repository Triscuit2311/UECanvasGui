#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutMunitionSlotButtonStyle_V2.LoadoutMunitionSlotButtonStyle_V2_C
// (None)

class UClass* ULoadoutMunitionSlotButtonStyle_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutMunitionSlotButtonStyle_V2_C");

	return Clss;
}


// LoadoutMunitionSlotButtonStyle_V2_C LoadoutMunitionSlotButtonStyle_V2.Default__LoadoutMunitionSlotButtonStyle_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutMunitionSlotButtonStyle_V2_C* ULoadoutMunitionSlotButtonStyle_V2_C::GetDefaultObj()
{
	static class ULoadoutMunitionSlotButtonStyle_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutMunitionSlotButtonStyle_V2_C*>(ULoadoutMunitionSlotButtonStyle_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


