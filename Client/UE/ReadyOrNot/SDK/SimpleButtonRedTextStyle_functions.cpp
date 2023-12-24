#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleButtonRedTextStyle.SimpleButtonRedTextStyle_C
// (None)

class UClass* USimpleButtonRedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleButtonRedTextStyle_C");

	return Clss;
}


// SimpleButtonRedTextStyle_C SimpleButtonRedTextStyle.Default__SimpleButtonRedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleButtonRedTextStyle_C* USimpleButtonRedTextStyle_C::GetDefaultObj()
{
	static class USimpleButtonRedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleButtonRedTextStyle_C*>(USimpleButtonRedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


