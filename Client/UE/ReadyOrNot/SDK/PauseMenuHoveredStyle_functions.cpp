#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PauseMenuHoveredStyle.PauseMenuHoveredStyle_C
// (None)

class UClass* UPauseMenuHoveredStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PauseMenuHoveredStyle_C");

	return Clss;
}


// PauseMenuHoveredStyle_C PauseMenuHoveredStyle.Default__PauseMenuHoveredStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPauseMenuHoveredStyle_C* UPauseMenuHoveredStyle_C::GetDefaultObj()
{
	static class UPauseMenuHoveredStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPauseMenuHoveredStyle_C*>(UPauseMenuHoveredStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


