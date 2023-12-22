#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EntryPointTextStyle.EntryPointTextStyle_C
// (None)

class UClass* UEntryPointTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntryPointTextStyle_C");

	return Clss;
}


// EntryPointTextStyle_C EntryPointTextStyle.Default__EntryPointTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEntryPointTextStyle_C* UEntryPointTextStyle_C::GetDefaultObj()
{
	static class UEntryPointTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntryPointTextStyle_C*>(UEntryPointTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


