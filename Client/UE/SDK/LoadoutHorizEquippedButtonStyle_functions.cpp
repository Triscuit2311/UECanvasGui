#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutHorizEquippedButtonStyle.LoadoutHorizEquippedButtonStyle_C
// (None)

class UClass* ULoadoutHorizEquippedButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutHorizEquippedButtonStyle_C");

	return Clss;
}


// LoadoutHorizEquippedButtonStyle_C LoadoutHorizEquippedButtonStyle.Default__LoadoutHorizEquippedButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutHorizEquippedButtonStyle_C* ULoadoutHorizEquippedButtonStyle_C::GetDefaultObj()
{
	static class ULoadoutHorizEquippedButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutHorizEquippedButtonStyle_C*>(ULoadoutHorizEquippedButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


