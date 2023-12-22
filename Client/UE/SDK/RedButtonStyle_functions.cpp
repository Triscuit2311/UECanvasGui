#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RedButtonStyle.RedButtonStyle_C
// (None)

class UClass* URedButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedButtonStyle_C");

	return Clss;
}


// RedButtonStyle_C RedButtonStyle.Default__RedButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URedButtonStyle_C* URedButtonStyle_C::GetDefaultObj()
{
	static class URedButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URedButtonStyle_C*>(URedButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


