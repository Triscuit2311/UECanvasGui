#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RedDefaultButtonStyle.RedDefaultButtonStyle_C
// (None)

class UClass* URedDefaultButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedDefaultButtonStyle_C");

	return Clss;
}


// RedDefaultButtonStyle_C RedDefaultButtonStyle.Default__RedDefaultButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URedDefaultButtonStyle_C* URedDefaultButtonStyle_C::GetDefaultObj()
{
	static class URedDefaultButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URedDefaultButtonStyle_C*>(URedDefaultButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


