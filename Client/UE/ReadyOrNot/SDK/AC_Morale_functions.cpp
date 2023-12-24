#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Morale.AC_Morale_C
// (None)

class UClass* UAC_Morale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Morale_C");

	return Clss;
}


// AC_Morale_C AC_Morale.Default__AC_Morale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Morale_C* UAC_Morale_C::GetDefaultObj()
{
	static class UAC_Morale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Morale_C*>(UAC_Morale_C::StaticClass()->DefaultObject);

	return Default;
}

}


