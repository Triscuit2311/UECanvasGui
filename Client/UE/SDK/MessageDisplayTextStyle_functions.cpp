#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MessageDisplayTextStyle.MessageDisplayTextStyle_C
// (None)

class UClass* UMessageDisplayTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MessageDisplayTextStyle_C");

	return Clss;
}


// MessageDisplayTextStyle_C MessageDisplayTextStyle.Default__MessageDisplayTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMessageDisplayTextStyle_C* UMessageDisplayTextStyle_C::GetDefaultObj()
{
	static class UMessageDisplayTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMessageDisplayTextStyle_C*>(UMessageDisplayTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


