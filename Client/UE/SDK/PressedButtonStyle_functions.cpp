#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PressedButtonStyle.PressedButtonStyle_C
// (None)

class UClass* UPressedButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PressedButtonStyle_C");

	return Clss;
}


// PressedButtonStyle_C PressedButtonStyle.Default__PressedButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPressedButtonStyle_C* UPressedButtonStyle_C::GetDefaultObj()
{
	static class UPressedButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPressedButtonStyle_C*>(UPressedButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


