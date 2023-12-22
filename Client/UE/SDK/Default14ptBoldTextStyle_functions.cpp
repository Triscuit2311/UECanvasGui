#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default14ptBoldTextStyle.Default14ptBoldTextStyle_C
// (None)

class UClass* UDefault14ptBoldTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default14ptBoldTextStyle_C");

	return Clss;
}


// Default14ptBoldTextStyle_C Default14ptBoldTextStyle.Default__Default14ptBoldTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault14ptBoldTextStyle_C* UDefault14ptBoldTextStyle_C::GetDefaultObj()
{
	static class UDefault14ptBoldTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault14ptBoldTextStyle_C*>(UDefault14ptBoldTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


