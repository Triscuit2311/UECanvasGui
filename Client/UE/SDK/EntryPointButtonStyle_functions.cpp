#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EntryPointButtonStyle.EntryPointButtonStyle_C
// (None)

class UClass* UEntryPointButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntryPointButtonStyle_C");

	return Clss;
}


// EntryPointButtonStyle_C EntryPointButtonStyle.Default__EntryPointButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEntryPointButtonStyle_C* UEntryPointButtonStyle_C::GetDefaultObj()
{
	static class UEntryPointButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntryPointButtonStyle_C*>(UEntryPointButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


