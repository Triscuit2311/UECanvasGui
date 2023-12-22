#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomizationSlotButtonStyle.CustomizationSlotButtonStyle_C
// (None)

class UClass* UCustomizationSlotButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizationSlotButtonStyle_C");

	return Clss;
}


// CustomizationSlotButtonStyle_C CustomizationSlotButtonStyle.Default__CustomizationSlotButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomizationSlotButtonStyle_C* UCustomizationSlotButtonStyle_C::GetDefaultObj()
{
	static class UCustomizationSlotButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizationSlotButtonStyle_C*>(UCustomizationSlotButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


