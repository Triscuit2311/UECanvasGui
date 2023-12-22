#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default10ptTextStyle.Default10ptTextStyle_C
// (None)

class UClass* UDefault10ptTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default10ptTextStyle_C");

	return Clss;
}


// Default10ptTextStyle_C Default10ptTextStyle.Default__Default10ptTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault10ptTextStyle_C* UDefault10ptTextStyle_C::GetDefaultObj()
{
	static class UDefault10ptTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault10ptTextStyle_C*>(UDefault10ptTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


