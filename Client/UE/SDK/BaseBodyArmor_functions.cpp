#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseBodyArmor.BaseBodyArmor_C
// (Actor)

class UClass* ABaseBodyArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseBodyArmor_C");

	return Clss;
}


// BaseBodyArmor_C BaseBodyArmor.Default__BaseBodyArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseBodyArmor_C* ABaseBodyArmor_C::GetDefaultObj()
{
	static class ABaseBodyArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseBodyArmor_C*>(ABaseBodyArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


