#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armor_StabVest.Armor_StabVest_C
// (Actor)

class UClass* AArmor_StabVest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armor_StabVest_C");

	return Clss;
}


// Armor_StabVest_C Armor_StabVest.Default__Armor_StabVest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmor_StabVest_C* AArmor_StabVest_C::GetDefaultObj()
{
	static class AArmor_StabVest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmor_StabVest_C*>(AArmor_StabVest_C::StaticClass()->DefaultObject);

	return Default;
}

}


