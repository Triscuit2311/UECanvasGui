#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StunGrenadeDamage_Far.StunGrenadeDamage_Far_C
// (None)

class UClass* UStunGrenadeDamage_Far_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StunGrenadeDamage_Far_C");

	return Clss;
}


// StunGrenadeDamage_Far_C StunGrenadeDamage_Far.Default__StunGrenadeDamage_Far_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStunGrenadeDamage_Far_C* UStunGrenadeDamage_Far_C::GetDefaultObj()
{
	static class UStunGrenadeDamage_Far_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStunGrenadeDamage_Far_C*>(UStunGrenadeDamage_Far_C::StaticClass()->DefaultObject);

	return Default;
}

}


