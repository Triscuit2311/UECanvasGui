#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuButtonStyle.MainMenuButtonStyle_C
// (None)

class UClass* UMainMenuButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuButtonStyle_C");

	return Clss;
}


// MainMenuButtonStyle_C MainMenuButtonStyle.Default__MainMenuButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuButtonStyle_C* UMainMenuButtonStyle_C::GetDefaultObj()
{
	static class UMainMenuButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuButtonStyle_C*>(UMainMenuButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


