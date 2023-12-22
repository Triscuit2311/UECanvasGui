#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Launcher_M320.Launcher_M320_C
// (Actor)

class UClass* ALauncher_M320_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Launcher_M320_C");

	return Clss;
}


// Launcher_M320_C Launcher_M320.Default__Launcher_M320_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALauncher_M320_C* ALauncher_M320_C::GetDefaultObj()
{
	static class ALauncher_M320_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALauncher_M320_C*>(ALauncher_M320_C::StaticClass()->DefaultObject);

	return Default;
}

}


