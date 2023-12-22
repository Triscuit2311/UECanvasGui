#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultDisabledTextStyle.DefaultDisabledTextStyle_C
// (None)

class UClass* UDefaultDisabledTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultDisabledTextStyle_C");

	return Clss;
}


// DefaultDisabledTextStyle_C DefaultDisabledTextStyle.Default__DefaultDisabledTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultDisabledTextStyle_C* UDefaultDisabledTextStyle_C::GetDefaultObj()
{
	static class UDefaultDisabledTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultDisabledTextStyle_C*>(UDefaultDisabledTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


