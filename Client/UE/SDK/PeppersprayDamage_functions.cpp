#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PeppersprayDamage.PeppersprayDamage_C
// (None)

class UClass* UPeppersprayDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PeppersprayDamage_C");

	return Clss;
}


// PeppersprayDamage_C PeppersprayDamage.Default__PeppersprayDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPeppersprayDamage_C* UPeppersprayDamage_C::GetDefaultObj()
{
	static class UPeppersprayDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPeppersprayDamage_C*>(UPeppersprayDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


