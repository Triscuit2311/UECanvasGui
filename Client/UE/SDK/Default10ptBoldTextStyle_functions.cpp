#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default10ptBoldTextStyle.Default10ptBoldTextStyle_C
// (None)

class UClass* UDefault10ptBoldTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default10ptBoldTextStyle_C");

	return Clss;
}


// Default10ptBoldTextStyle_C Default10ptBoldTextStyle.Default__Default10ptBoldTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault10ptBoldTextStyle_C* UDefault10ptBoldTextStyle_C::GetDefaultObj()
{
	static class UDefault10ptBoldTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault10ptBoldTextStyle_C*>(UDefault10ptBoldTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


