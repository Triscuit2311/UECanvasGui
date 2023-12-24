#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armor_NoArmor.Armor_NoArmor_C
// (Actor)

class UClass* AArmor_NoArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armor_NoArmor_C");

	return Clss;
}


// Armor_NoArmor_C Armor_NoArmor.Default__Armor_NoArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmor_NoArmor_C* AArmor_NoArmor_C::GetDefaultObj()
{
	static class AArmor_NoArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmor_NoArmor_C*>(AArmor_NoArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


