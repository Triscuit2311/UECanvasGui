#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NineBang_Damage_Close.NineBang_Damage_Close_C
// (None)

class UClass* UNineBang_Damage_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NineBang_Damage_Close_C");

	return Clss;
}


// NineBang_Damage_Close_C NineBang_Damage_Close.Default__NineBang_Damage_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNineBang_Damage_Close_C* UNineBang_Damage_Close_C::GetDefaultObj()
{
	static class UNineBang_Damage_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNineBang_Damage_Close_C*>(UNineBang_Damage_Close_C::StaticClass()->DefaultObject);

	return Default;
}

}


