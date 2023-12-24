#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armor_Light_V2.Armor_Light_V2_C
// (Actor)

class UClass* AArmor_Light_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armor_Light_V2_C");

	return Clss;
}


// Armor_Light_V2_C Armor_Light_V2.Default__Armor_Light_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmor_Light_V2_C* AArmor_Light_V2_C::GetDefaultObj()
{
	static class AArmor_Light_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmor_Light_V2_C*>(AArmor_Light_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


