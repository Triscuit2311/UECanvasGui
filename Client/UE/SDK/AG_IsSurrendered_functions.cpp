#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsSurrendered.AG_IsSurrendered_C
// (None)

class UClass* UAG_IsSurrendered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsSurrendered_C");

	return Clss;
}


// AG_IsSurrendered_C AG_IsSurrendered.Default__AG_IsSurrendered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsSurrendered_C* UAG_IsSurrendered_C::GetDefaultObj()
{
	static class UAG_IsSurrendered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsSurrendered_C*>(UAG_IsSurrendered_C::StaticClass()->DefaultObject);

	return Default;
}

}


