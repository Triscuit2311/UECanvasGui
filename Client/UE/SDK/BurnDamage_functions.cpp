#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurnDamage.BurnDamage_C
// (None)

class UClass* UBurnDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurnDamage_C");

	return Clss;
}


// BurnDamage_C BurnDamage.Default__BurnDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBurnDamage_C* UBurnDamage_C::GetDefaultObj()
{
	static class UBurnDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBurnDamage_C*>(UBurnDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


