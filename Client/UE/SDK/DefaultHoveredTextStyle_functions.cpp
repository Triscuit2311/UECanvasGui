#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultHoveredTextStyle.DefaultHoveredTextStyle_C
// (None)

class UClass* UDefaultHoveredTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultHoveredTextStyle_C");

	return Clss;
}


// DefaultHoveredTextStyle_C DefaultHoveredTextStyle.Default__DefaultHoveredTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultHoveredTextStyle_C* UDefaultHoveredTextStyle_C::GetDefaultObj()
{
	static class UDefaultHoveredTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultHoveredTextStyle_C*>(UDefaultHoveredTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


