#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlashbangDamage_Medium.FlashbangDamage_Medium_C
// (None)

class UClass* UFlashbangDamage_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlashbangDamage_Medium_C");

	return Clss;
}


// FlashbangDamage_Medium_C FlashbangDamage_Medium.Default__FlashbangDamage_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlashbangDamage_Medium_C* UFlashbangDamage_Medium_C::GetDefaultObj()
{
	static class UFlashbangDamage_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlashbangDamage_Medium_C*>(UFlashbangDamage_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


