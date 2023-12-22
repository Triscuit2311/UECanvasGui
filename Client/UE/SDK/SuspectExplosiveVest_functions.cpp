#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuspectExplosiveVest.SuspectExplosiveVest_C
// (Actor)

class UClass* ASuspectExplosiveVest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuspectExplosiveVest_C");

	return Clss;
}


// SuspectExplosiveVest_C SuspectExplosiveVest.Default__SuspectExplosiveVest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASuspectExplosiveVest_C* ASuspectExplosiveVest_C::GetDefaultObj()
{
	static class ASuspectExplosiveVest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASuspectExplosiveVest_C*>(ASuspectExplosiveVest_C::StaticClass()->DefaultObject);

	return Default;
}

}


