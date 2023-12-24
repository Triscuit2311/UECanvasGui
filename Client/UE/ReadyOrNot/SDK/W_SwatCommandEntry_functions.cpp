#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SwatCommandEntry.W_SwatCommandEntry_C
// (None)

class UClass* UW_SwatCommandEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SwatCommandEntry_C");

	return Clss;
}


// W_SwatCommandEntry_C W_SwatCommandEntry.Default__W_SwatCommandEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SwatCommandEntry_C* UW_SwatCommandEntry_C::GetDefaultObj()
{
	static class UW_SwatCommandEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SwatCommandEntry_C*>(UW_SwatCommandEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


