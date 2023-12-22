#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default14ptTextStyle.Default14ptTextStyle_C
// (None)

class UClass* UDefault14ptTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default14ptTextStyle_C");

	return Clss;
}


// Default14ptTextStyle_C Default14ptTextStyle.Default__Default14ptTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault14ptTextStyle_C* UDefault14ptTextStyle_C::GetDefaultObj()
{
	static class UDefault14ptTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault14ptTextStyle_C*>(UDefault14ptTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


