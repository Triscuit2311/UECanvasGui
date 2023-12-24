#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallLabelTextStyle.SmallLabelTextStyle_C
// (None)

class UClass* USmallLabelTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallLabelTextStyle_C");

	return Clss;
}


// SmallLabelTextStyle_C SmallLabelTextStyle.Default__SmallLabelTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallLabelTextStyle_C* USmallLabelTextStyle_C::GetDefaultObj()
{
	static class USmallLabelTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallLabelTextStyle_C*>(USmallLabelTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


