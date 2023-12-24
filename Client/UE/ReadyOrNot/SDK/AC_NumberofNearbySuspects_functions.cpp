#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_NumberofNearbySuspects.AC_NumberofNearbySuspects_C
// (None)

class UClass* UAC_NumberofNearbySuspects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_NumberofNearbySuspects_C");

	return Clss;
}


// AC_NumberofNearbySuspects_C AC_NumberofNearbySuspects.Default__AC_NumberofNearbySuspects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_NumberofNearbySuspects_C* UAC_NumberofNearbySuspects_C::GetDefaultObj()
{
	static class UAC_NumberofNearbySuspects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_NumberofNearbySuspects_C*>(UAC_NumberofNearbySuspects_C::StaticClass()->DefaultObject);

	return Default;
}

}


