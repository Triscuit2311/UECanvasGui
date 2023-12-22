#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Melee_Knife.Melee_Knife_C
// (Actor)

class UClass* AMelee_Knife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Melee_Knife_C");

	return Clss;
}


// Melee_Knife_C Melee_Knife.Default__Melee_Knife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMelee_Knife_C* AMelee_Knife_C::GetDefaultObj()
{
	static class AMelee_Knife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMelee_Knife_C*>(AMelee_Knife_C::StaticClass()->DefaultObject);

	return Default;
}

}


