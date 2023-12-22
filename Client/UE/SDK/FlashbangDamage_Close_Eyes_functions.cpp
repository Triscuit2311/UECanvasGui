#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlashbangDamage_Close_Eyes.FlashbangDamage_Close_Eyes_C
// (None)

class UClass* UFlashbangDamage_Close_Eyes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlashbangDamage_Close_Eyes_C");

	return Clss;
}


// FlashbangDamage_Close_Eyes_C FlashbangDamage_Close_Eyes.Default__FlashbangDamage_Close_Eyes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlashbangDamage_Close_Eyes_C* UFlashbangDamage_Close_Eyes_C::GetDefaultObj()
{
	static class UFlashbangDamage_Close_Eyes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlashbangDamage_Close_Eyes_C*>(UFlashbangDamage_Close_Eyes_C::StaticClass()->DefaultObject);

	return Default;
}

}


