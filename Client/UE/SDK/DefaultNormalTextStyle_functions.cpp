#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultNormalTextStyle.DefaultNormalTextStyle_C
// (None)

class UClass* UDefaultNormalTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultNormalTextStyle_C");

	return Clss;
}


// DefaultNormalTextStyle_C DefaultNormalTextStyle.Default__DefaultNormalTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultNormalTextStyle_C* UDefaultNormalTextStyle_C::GetDefaultObj()
{
	static class UDefaultNormalTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultNormalTextStyle_C*>(UDefaultNormalTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


