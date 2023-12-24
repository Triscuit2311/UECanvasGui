#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultGampadButtonStyle.DefaultGampadButtonStyle_C
// (None)

class UClass* UDefaultGampadButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultGampadButtonStyle_C");

	return Clss;
}


// DefaultGampadButtonStyle_C DefaultGampadButtonStyle.Default__DefaultGampadButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultGampadButtonStyle_C* UDefaultGampadButtonStyle_C::GetDefaultObj()
{
	static class UDefaultGampadButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultGampadButtonStyle_C*>(UDefaultGampadButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


