#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomizationGroupButtonStyle.CustomizationGroupButtonStyle_C
// (None)

class UClass* UCustomizationGroupButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizationGroupButtonStyle_C");

	return Clss;
}


// CustomizationGroupButtonStyle_C CustomizationGroupButtonStyle.Default__CustomizationGroupButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomizationGroupButtonStyle_C* UCustomizationGroupButtonStyle_C::GetDefaultObj()
{
	static class UCustomizationGroupButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizationGroupButtonStyle_C*>(UCustomizationGroupButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


