#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Launcher_M320_Gas.Launcher_M320_Gas_C
// (Actor)

class UClass* ALauncher_M320_Gas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Launcher_M320_Gas_C");

	return Clss;
}


// Launcher_M320_Gas_C Launcher_M320_Gas.Default__Launcher_M320_Gas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALauncher_M320_Gas_C* ALauncher_M320_Gas_C::GetDefaultObj()
{
	static class ALauncher_M320_Gas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALauncher_M320_Gas_C*>(ALauncher_M320_Gas_C::StaticClass()->DefaultObject);

	return Default;
}

}


