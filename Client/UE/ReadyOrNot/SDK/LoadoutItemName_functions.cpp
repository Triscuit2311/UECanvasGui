#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutItemName.LoadoutItemName_C
// (None)

class UClass* ULoadoutItemName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutItemName_C");

	return Clss;
}


// LoadoutItemName_C LoadoutItemName.Default__LoadoutItemName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutItemName_C* ULoadoutItemName_C::GetDefaultObj()
{
	static class ULoadoutItemName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutItemName_C*>(ULoadoutItemName_C::StaticClass()->DefaultObject);

	return Default;
}

}


