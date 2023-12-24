#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StunGrenadeDamage_Medium.StunGrenadeDamage_Medium_C
// (None)

class UClass* UStunGrenadeDamage_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StunGrenadeDamage_Medium_C");

	return Clss;
}


// StunGrenadeDamage_Medium_C StunGrenadeDamage_Medium.Default__StunGrenadeDamage_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStunGrenadeDamage_Medium_C* UStunGrenadeDamage_Medium_C::GetDefaultObj()
{
	static class UStunGrenadeDamage_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStunGrenadeDamage_Medium_C*>(UStunGrenadeDamage_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


