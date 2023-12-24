#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_Shake_Suppressed.C_Shake_Suppressed_C
// (None)

class UClass* UC_Shake_Suppressed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_Shake_Suppressed_C");

	return Clss;
}


// C_Shake_Suppressed_C C_Shake_Suppressed.Default__C_Shake_Suppressed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_Shake_Suppressed_C* UC_Shake_Suppressed_C::GetDefaultObj()
{
	static class UC_Shake_Suppressed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_Shake_Suppressed_C*>(UC_Shake_Suppressed_C::StaticClass()->DefaultObject);

	return Default;
}

}


