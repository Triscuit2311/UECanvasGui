#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Health.AC_Health_C
// (None)

class UClass* UAC_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Health_C");

	return Clss;
}


// AC_Health_C AC_Health.Default__AC_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Health_C* UAC_Health_C::GetDefaultObj()
{
	static class UAC_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Health_C*>(UAC_Health_C::StaticClass()->DefaultObject);

	return Default;
}

}


