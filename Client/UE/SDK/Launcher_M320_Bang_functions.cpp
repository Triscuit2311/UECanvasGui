#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Launcher_M320_Bang.Launcher_M320_Bang_C
// (Actor)

class UClass* ALauncher_M320_Bang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Launcher_M320_Bang_C");

	return Clss;
}


// Launcher_M320_Bang_C Launcher_M320_Bang.Default__Launcher_M320_Bang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALauncher_M320_Bang_C* ALauncher_M320_Bang_C::GetDefaultObj()
{
	static class ALauncher_M320_Bang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALauncher_M320_Bang_C*>(ALauncher_M320_Bang_C::StaticClass()->DefaultObject);

	return Default;
}

}


