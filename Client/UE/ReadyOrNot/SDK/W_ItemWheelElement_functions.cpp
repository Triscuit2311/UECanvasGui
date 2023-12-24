#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemWheelElement.W_ItemWheelElement_C
// (None)

class UClass* UW_ItemWheelElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemWheelElement_C");

	return Clss;
}


// W_ItemWheelElement_C W_ItemWheelElement.Default__W_ItemWheelElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemWheelElement_C* UW_ItemWheelElement_C::GetDefaultObj()
{
	static class UW_ItemWheelElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemWheelElement_C*>(UW_ItemWheelElement_C::StaticClass()->DefaultObject);

	return Default;
}

}


