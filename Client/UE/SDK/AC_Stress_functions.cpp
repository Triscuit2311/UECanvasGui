#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Stress.AC_Stress_C
// (None)

class UClass* UAC_Stress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Stress_C");

	return Clss;
}


// AC_Stress_C AC_Stress.Default__AC_Stress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Stress_C* UAC_Stress_C::GetDefaultObj()
{
	static class UAC_Stress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Stress_C*>(UAC_Stress_C::StaticClass()->DefaultObject);

	return Default;
}

}


