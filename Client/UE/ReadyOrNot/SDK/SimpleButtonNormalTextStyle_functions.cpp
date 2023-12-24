#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleButtonNormalTextStyle.SimpleButtonNormalTextStyle_C
// (None)

class UClass* USimpleButtonNormalTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleButtonNormalTextStyle_C");

	return Clss;
}


// SimpleButtonNormalTextStyle_C SimpleButtonNormalTextStyle.Default__SimpleButtonNormalTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleButtonNormalTextStyle_C* USimpleButtonNormalTextStyle_C::GetDefaultObj()
{
	static class USimpleButtonNormalTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleButtonNormalTextStyle_C*>(USimpleButtonNormalTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


