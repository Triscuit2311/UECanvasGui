#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlankButtonStyle.BlankButtonStyle_C
// (None)

class UClass* UBlankButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlankButtonStyle_C");

	return Clss;
}


// BlankButtonStyle_C BlankButtonStyle.Default__BlankButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlankButtonStyle_C* UBlankButtonStyle_C::GetDefaultObj()
{
	static class UBlankButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlankButtonStyle_C*>(UBlankButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


