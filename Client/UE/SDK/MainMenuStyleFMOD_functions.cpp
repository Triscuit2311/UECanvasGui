#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuStyleFMOD.MainMenuStyleFMOD_C
// (None)

class UClass* UMainMenuStyleFMOD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuStyleFMOD_C");

	return Clss;
}


// MainMenuStyleFMOD_C MainMenuStyleFMOD.Default__MainMenuStyleFMOD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuStyleFMOD_C* UMainMenuStyleFMOD_C::GetDefaultObj()
{
	static class UMainMenuStyleFMOD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuStyleFMOD_C*>(UMainMenuStyleFMOD_C::StaticClass()->DefaultObject);

	return Default;
}

}


