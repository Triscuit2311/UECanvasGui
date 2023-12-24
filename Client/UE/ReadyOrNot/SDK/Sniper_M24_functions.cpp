#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sniper_M24.Sniper_M24_C
// (Actor)

class UClass* ASniper_M24_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sniper_M24_C");

	return Clss;
}


// Sniper_M24_C Sniper_M24.Default__Sniper_M24_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASniper_M24_C* ASniper_M24_C::GetDefaultObj()
{
	static class ASniper_M24_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASniper_M24_C*>(ASniper_M24_C::StaticClass()->DefaultObject);

	return Default;
}

}


