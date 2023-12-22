#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CyberneticsSwat_V2.CyberneticsSwat_V2_C
// (Actor, Pawn)

class UClass* ACyberneticsSwat_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CyberneticsSwat_V2_C");

	return Clss;
}


// CyberneticsSwat_V2_C CyberneticsSwat_V2.Default__CyberneticsSwat_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACyberneticsSwat_V2_C* ACyberneticsSwat_V2_C::GetDefaultObj()
{
	static class ACyberneticsSwat_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACyberneticsSwat_V2_C*>(ACyberneticsSwat_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


