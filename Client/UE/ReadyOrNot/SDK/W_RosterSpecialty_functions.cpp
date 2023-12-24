#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RosterSpecialty.W_RosterSpecialty_C
// (None)

class UClass* UW_RosterSpecialty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RosterSpecialty_C");

	return Clss;
}


// W_RosterSpecialty_C W_RosterSpecialty.Default__W_RosterSpecialty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RosterSpecialty_C* UW_RosterSpecialty_C::GetDefaultObj()
{
	static class UW_RosterSpecialty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RosterSpecialty_C*>(UW_RosterSpecialty_C::StaticClass()->DefaultObject);

	return Default;
}

}


