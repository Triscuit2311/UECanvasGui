#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EntryPointSelectedTextStyle.EntryPointSelectedTextStyle_C
// (None)

class UClass* UEntryPointSelectedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntryPointSelectedTextStyle_C");

	return Clss;
}


// EntryPointSelectedTextStyle_C EntryPointSelectedTextStyle.Default__EntryPointSelectedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEntryPointSelectedTextStyle_C* UEntryPointSelectedTextStyle_C::GetDefaultObj()
{
	static class UEntryPointSelectedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntryPointSelectedTextStyle_C*>(UEntryPointSelectedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


