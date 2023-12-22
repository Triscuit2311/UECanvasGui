#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LabelRedTextStyle.LabelRedTextStyle_C
// (None)

class UClass* ULabelRedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LabelRedTextStyle_C");

	return Clss;
}


// LabelRedTextStyle_C LabelRedTextStyle.Default__LabelRedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULabelRedTextStyle_C* ULabelRedTextStyle_C::GetDefaultObj()
{
	static class ULabelRedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULabelRedTextStyle_C*>(ULabelRedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


