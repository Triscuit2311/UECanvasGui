#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultDarkBoldTextStyle.DefaultDarkBoldTextStyle_C
// (None)

class UClass* UDefaultDarkBoldTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultDarkBoldTextStyle_C");

	return Clss;
}


// DefaultDarkBoldTextStyle_C DefaultDarkBoldTextStyle.Default__DefaultDarkBoldTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultDarkBoldTextStyle_C* UDefaultDarkBoldTextStyle_C::GetDefaultObj()
{
	static class UDefaultDarkBoldTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultDarkBoldTextStyle_C*>(UDefaultDarkBoldTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


