#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_TAC700.Primary_TAC700_C
// (Actor)

class UClass* APrimary_TAC700_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_TAC700_C");

	return Clss;
}


// Primary_TAC700_C Primary_TAC700.Default__Primary_TAC700_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_TAC700_C* APrimary_TAC700_C::GetDefaultObj()
{
	static class APrimary_TAC700_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_TAC700_C*>(APrimary_TAC700_C::StaticClass()->DefaultObject);

	return Default;
}

}


