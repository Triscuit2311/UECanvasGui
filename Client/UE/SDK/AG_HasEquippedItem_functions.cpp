#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_HasEquippedItem.AG_HasEquippedItem_C
// (None)

class UClass* UAG_HasEquippedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_HasEquippedItem_C");

	return Clss;
}


// AG_HasEquippedItem_C AG_HasEquippedItem.Default__AG_HasEquippedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_HasEquippedItem_C* UAG_HasEquippedItem_C::GetDefaultObj()
{
	static class UAG_HasEquippedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_HasEquippedItem_C*>(UAG_HasEquippedItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


