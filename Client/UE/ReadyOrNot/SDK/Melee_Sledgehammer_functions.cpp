#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Melee_Sledgehammer.Melee_Sledgehammer_C
// (Actor)

class UClass* AMelee_Sledgehammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Melee_Sledgehammer_C");

	return Clss;
}


// Melee_Sledgehammer_C Melee_Sledgehammer.Default__Melee_Sledgehammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMelee_Sledgehammer_C* AMelee_Sledgehammer_C::GetDefaultObj()
{
	static class AMelee_Sledgehammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMelee_Sledgehammer_C*>(AMelee_Sledgehammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


