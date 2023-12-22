#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_SCARL_Reload_Empty.C_SCARL_Reload_Empty_C
// (None)

class UClass* UC_SCARL_Reload_Empty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_SCARL_Reload_Empty_C");

	return Clss;
}


// C_SCARL_Reload_Empty_C C_SCARL_Reload_Empty.Default__C_SCARL_Reload_Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_SCARL_Reload_Empty_C* UC_SCARL_Reload_Empty_C::GetDefaultObj()
{
	static class UC_SCARL_Reload_Empty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_SCARL_Reload_Empty_C*>(UC_SCARL_Reload_Empty_C::StaticClass()->DefaultObject);

	return Default;
}

}


