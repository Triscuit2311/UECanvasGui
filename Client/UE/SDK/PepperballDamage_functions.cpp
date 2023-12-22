#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PepperballDamage.PepperballDamage_C
// (None)

class UClass* UPepperballDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PepperballDamage_C");

	return Clss;
}


// PepperballDamage_C PepperballDamage.Default__PepperballDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPepperballDamage_C* UPepperballDamage_C::GetDefaultObj()
{
	static class UPepperballDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPepperballDamage_C*>(UPepperballDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


