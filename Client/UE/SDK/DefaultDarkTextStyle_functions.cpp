#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultDarkTextStyle.DefaultDarkTextStyle_C
// (None)

class UClass* UDefaultDarkTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultDarkTextStyle_C");

	return Clss;
}


// DefaultDarkTextStyle_C DefaultDarkTextStyle.Default__DefaultDarkTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultDarkTextStyle_C* UDefaultDarkTextStyle_C::GetDefaultObj()
{
	static class UDefaultDarkTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultDarkTextStyle_C*>(UDefaultDarkTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


