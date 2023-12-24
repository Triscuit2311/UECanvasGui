#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PauseMenuStyleFMOD.PauseMenuStyleFMOD_C
// (None)

class UClass* UPauseMenuStyleFMOD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PauseMenuStyleFMOD_C");

	return Clss;
}


// PauseMenuStyleFMOD_C PauseMenuStyleFMOD.Default__PauseMenuStyleFMOD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPauseMenuStyleFMOD_C* UPauseMenuStyleFMOD_C::GetDefaultObj()
{
	static class UPauseMenuStyleFMOD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPauseMenuStyleFMOD_C*>(UPauseMenuStyleFMOD_C::StaticClass()->DefaultObject);

	return Default;
}

}


