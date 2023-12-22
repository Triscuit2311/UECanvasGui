#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AudioControlButtonDarkThemeStyle.AudioControlButtonDarkThemeStyle_C
// (None)

class UClass* UAudioControlButtonDarkThemeStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioControlButtonDarkThemeStyle_C");

	return Clss;
}


// AudioControlButtonDarkThemeStyle_C AudioControlButtonDarkThemeStyle.Default__AudioControlButtonDarkThemeStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAudioControlButtonDarkThemeStyle_C* UAudioControlButtonDarkThemeStyle_C::GetDefaultObj()
{
	static class UAudioControlButtonDarkThemeStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioControlButtonDarkThemeStyle_C*>(UAudioControlButtonDarkThemeStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


