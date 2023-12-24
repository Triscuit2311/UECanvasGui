#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LabelTextStyle.LabelTextStyle_C
// (None)

class UClass* ULabelTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LabelTextStyle_C");

	return Clss;
}


// LabelTextStyle_C LabelTextStyle.Default__LabelTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULabelTextStyle_C* ULabelTextStyle_C::GetDefaultObj()
{
	static class ULabelTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULabelTextStyle_C*>(ULabelTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


