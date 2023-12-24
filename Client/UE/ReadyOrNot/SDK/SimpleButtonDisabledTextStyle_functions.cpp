#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleButtonDisabledTextStyle.SimpleButtonDisabledTextStyle_C
// (None)

class UClass* USimpleButtonDisabledTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleButtonDisabledTextStyle_C");

	return Clss;
}


// SimpleButtonDisabledTextStyle_C SimpleButtonDisabledTextStyle.Default__SimpleButtonDisabledTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleButtonDisabledTextStyle_C* USimpleButtonDisabledTextStyle_C::GetDefaultObj()
{
	static class USimpleButtonDisabledTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleButtonDisabledTextStyle_C*>(USimpleButtonDisabledTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


