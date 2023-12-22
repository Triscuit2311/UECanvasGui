#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TargetHealth.AC_TargetHealth_C
// (None)

class UClass* UAC_TargetHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TargetHealth_C");

	return Clss;
}


// AC_TargetHealth_C AC_TargetHealth.Default__AC_TargetHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TargetHealth_C* UAC_TargetHealth_C::GetDefaultObj()
{
	static class UAC_TargetHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TargetHealth_C*>(UAC_TargetHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


