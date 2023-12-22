#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StunGrenadeDamage_Close.StunGrenadeDamage_Close_C
// (None)

class UClass* UStunGrenadeDamage_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StunGrenadeDamage_Close_C");

	return Clss;
}


// StunGrenadeDamage_Close_C StunGrenadeDamage_Close.Default__StunGrenadeDamage_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStunGrenadeDamage_Close_C* UStunGrenadeDamage_Close_C::GetDefaultObj()
{
	static class UStunGrenadeDamage_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStunGrenadeDamage_Close_C*>(UStunGrenadeDamage_Close_C::StaticClass()->DefaultObject);

	return Default;
}

}


