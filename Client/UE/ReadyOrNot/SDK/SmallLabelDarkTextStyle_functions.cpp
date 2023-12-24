#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallLabelDarkTextStyle.SmallLabelDarkTextStyle_C
// (None)

class UClass* USmallLabelDarkTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallLabelDarkTextStyle_C");

	return Clss;
}


// SmallLabelDarkTextStyle_C SmallLabelDarkTextStyle.Default__SmallLabelDarkTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallLabelDarkTextStyle_C* USmallLabelDarkTextStyle_C::GetDefaultObj()
{
	static class USmallLabelDarkTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallLabelDarkTextStyle_C*>(USmallLabelDarkTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


