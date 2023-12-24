#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlashbangDamage_Far.FlashbangDamage_Far_C
// (None)

class UClass* UFlashbangDamage_Far_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlashbangDamage_Far_C");

	return Clss;
}


// FlashbangDamage_Far_C FlashbangDamage_Far.Default__FlashbangDamage_Far_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlashbangDamage_Far_C* UFlashbangDamage_Far_C::GetDefaultObj()
{
	static class UFlashbangDamage_Far_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlashbangDamage_Far_C*>(UFlashbangDamage_Far_C::StaticClass()->DefaultObject);

	return Default;
}

}


