#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_ValidTarget.AG_ValidTarget_C
// (None)

class UClass* UAG_ValidTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_ValidTarget_C");

	return Clss;
}


// AG_ValidTarget_C AG_ValidTarget.Default__AG_ValidTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_ValidTarget_C* UAG_ValidTarget_C::GetDefaultObj()
{
	static class UAG_ValidTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_ValidTarget_C*>(UAG_ValidTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


