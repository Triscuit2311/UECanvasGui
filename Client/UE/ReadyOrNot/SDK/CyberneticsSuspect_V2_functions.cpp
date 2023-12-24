#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CyberneticsSuspect_V2.CyberneticsSuspect_V2_C
// (Actor, Pawn)

class UClass* ACyberneticsSuspect_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CyberneticsSuspect_V2_C");

	return Clss;
}


// CyberneticsSuspect_V2_C CyberneticsSuspect_V2.Default__CyberneticsSuspect_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACyberneticsSuspect_V2_C* ACyberneticsSuspect_V2_C::GetDefaultObj()
{
	static class ACyberneticsSuspect_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACyberneticsSuspect_V2_C*>(ACyberneticsSuspect_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


