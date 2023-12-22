#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default14ptDarkTextStyle.Default14ptDarkTextStyle_C
// (None)

class UClass* UDefault14ptDarkTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default14ptDarkTextStyle_C");

	return Clss;
}


// Default14ptDarkTextStyle_C Default14ptDarkTextStyle.Default__Default14ptDarkTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault14ptDarkTextStyle_C* UDefault14ptDarkTextStyle_C::GetDefaultObj()
{
	static class UDefault14ptDarkTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault14ptDarkTextStyle_C*>(UDefault14ptDarkTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


