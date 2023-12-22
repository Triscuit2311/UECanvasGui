#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PauseMenuNormalStyle.PauseMenuNormalStyle_C
// (None)

class UClass* UPauseMenuNormalStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PauseMenuNormalStyle_C");

	return Clss;
}


// PauseMenuNormalStyle_C PauseMenuNormalStyle.Default__PauseMenuNormalStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPauseMenuNormalStyle_C* UPauseMenuNormalStyle_C::GetDefaultObj()
{
	static class UPauseMenuNormalStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPauseMenuNormalStyle_C*>(UPauseMenuNormalStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


