#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultBoldTextStyle.DefaultBoldTextStyle_C
// (None)

class UClass* UDefaultBoldTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultBoldTextStyle_C");

	return Clss;
}


// DefaultBoldTextStyle_C DefaultBoldTextStyle.Default__DefaultBoldTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultBoldTextStyle_C* UDefaultBoldTextStyle_C::GetDefaultObj()
{
	static class UDefaultBoldTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultBoldTextStyle_C*>(UDefaultBoldTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


