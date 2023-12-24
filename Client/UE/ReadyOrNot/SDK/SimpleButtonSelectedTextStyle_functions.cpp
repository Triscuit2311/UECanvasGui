#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleButtonSelectedTextStyle.SimpleButtonSelectedTextStyle_C
// (None)

class UClass* USimpleButtonSelectedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleButtonSelectedTextStyle_C");

	return Clss;
}


// SimpleButtonSelectedTextStyle_C SimpleButtonSelectedTextStyle.Default__SimpleButtonSelectedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleButtonSelectedTextStyle_C* USimpleButtonSelectedTextStyle_C::GetDefaultObj()
{
	static class USimpleButtonSelectedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleButtonSelectedTextStyle_C*>(USimpleButtonSelectedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


