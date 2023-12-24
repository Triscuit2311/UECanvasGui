#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_SCARL_Reload.C_SCARL_Reload_C
// (None)

class UClass* UC_SCARL_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_SCARL_Reload_C");

	return Clss;
}


// C_SCARL_Reload_C C_SCARL_Reload.Default__C_SCARL_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_SCARL_Reload_C* UC_SCARL_Reload_C::GetDefaultObj()
{
	static class UC_SCARL_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_SCARL_Reload_C*>(UC_SCARL_Reload_C::StaticClass()->DefaultObject);

	return Default;
}

}


