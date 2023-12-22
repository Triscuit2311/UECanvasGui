#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultButtonStyle.DefaultButtonStyle_C
// (None)

class UClass* UDefaultButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultButtonStyle_C");

	return Clss;
}


// DefaultButtonStyle_C DefaultButtonStyle.Default__DefaultButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultButtonStyle_C* UDefaultButtonStyle_C::GetDefaultObj()
{
	static class UDefaultButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultButtonStyle_C*>(UDefaultButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


