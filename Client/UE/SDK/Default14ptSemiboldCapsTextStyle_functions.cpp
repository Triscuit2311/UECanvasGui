#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default14ptSemiboldCapsTextStyle.Default14ptSemiboldCapsTextStyle_C
// (None)

class UClass* UDefault14ptSemiboldCapsTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default14ptSemiboldCapsTextStyle_C");

	return Clss;
}


// Default14ptSemiboldCapsTextStyle_C Default14ptSemiboldCapsTextStyle.Default__Default14ptSemiboldCapsTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault14ptSemiboldCapsTextStyle_C* UDefault14ptSemiboldCapsTextStyle_C::GetDefaultObj()
{
	static class UDefault14ptSemiboldCapsTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault14ptSemiboldCapsTextStyle_C*>(UDefault14ptSemiboldCapsTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


