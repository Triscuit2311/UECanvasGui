#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultPressedTextStyle.DefaultPressedTextStyle_C
// (None)

class UClass* UDefaultPressedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultPressedTextStyle_C");

	return Clss;
}


// DefaultPressedTextStyle_C DefaultPressedTextStyle.Default__DefaultPressedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultPressedTextStyle_C* UDefaultPressedTextStyle_C::GetDefaultObj()
{
	static class UDefaultPressedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultPressedTextStyle_C*>(UDefaultPressedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


