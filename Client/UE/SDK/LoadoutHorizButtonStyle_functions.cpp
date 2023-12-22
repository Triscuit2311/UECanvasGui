#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutHorizButtonStyle.LoadoutHorizButtonStyle_C
// (None)

class UClass* ULoadoutHorizButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutHorizButtonStyle_C");

	return Clss;
}


// LoadoutHorizButtonStyle_C LoadoutHorizButtonStyle.Default__LoadoutHorizButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutHorizButtonStyle_C* ULoadoutHorizButtonStyle_C::GetDefaultObj()
{
	static class ULoadoutHorizButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutHorizButtonStyle_C*>(ULoadoutHorizButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


