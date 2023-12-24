#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CyberneticsSwatTrailer.CyberneticsSwatTrailer_C
// (Actor, Pawn)

class UClass* ACyberneticsSwatTrailer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CyberneticsSwatTrailer_C");

	return Clss;
}


// CyberneticsSwatTrailer_C CyberneticsSwatTrailer.Default__CyberneticsSwatTrailer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACyberneticsSwatTrailer_C* ACyberneticsSwatTrailer_C::GetDefaultObj()
{
	static class ACyberneticsSwatTrailer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACyberneticsSwatTrailer_C*>(ACyberneticsSwatTrailer_C::StaticClass()->DefaultObject);

	return Default;
}

}


