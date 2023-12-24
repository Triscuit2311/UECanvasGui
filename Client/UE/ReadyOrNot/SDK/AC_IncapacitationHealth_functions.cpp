#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_IncapacitationHealth.AC_IncapacitationHealth_C
// (None)

class UClass* UAC_IncapacitationHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_IncapacitationHealth_C");

	return Clss;
}


// AC_IncapacitationHealth_C AC_IncapacitationHealth.Default__AC_IncapacitationHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_IncapacitationHealth_C* UAC_IncapacitationHealth_C::GetDefaultObj()
{
	static class UAC_IncapacitationHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_IncapacitationHealth_C*>(UAC_IncapacitationHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


