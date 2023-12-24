#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlashbangDamage_Close.FlashbangDamage_Close_C
// (None)

class UClass* UFlashbangDamage_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlashbangDamage_Close_C");

	return Clss;
}


// FlashbangDamage_Close_C FlashbangDamage_Close.Default__FlashbangDamage_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlashbangDamage_Close_C* UFlashbangDamage_Close_C::GetDefaultObj()
{
	static class UFlashbangDamage_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlashbangDamage_Close_C*>(UFlashbangDamage_Close_C::StaticClass()->DefaultObject);

	return Default;
}

}


