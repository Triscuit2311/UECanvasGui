#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleButtonNormaPressedTextStyle.SimpleButtonNormaPressedTextStyle_C
// (None)

class UClass* USimpleButtonNormaPressedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleButtonNormaPressedTextStyle_C");

	return Clss;
}


// SimpleButtonNormaPressedTextStyle_C SimpleButtonNormaPressedTextStyle.Default__SimpleButtonNormaPressedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleButtonNormaPressedTextStyle_C* USimpleButtonNormaPressedTextStyle_C::GetDefaultObj()
{
	static class USimpleButtonNormaPressedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleButtonNormaPressedTextStyle_C*>(USimpleButtonNormaPressedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


