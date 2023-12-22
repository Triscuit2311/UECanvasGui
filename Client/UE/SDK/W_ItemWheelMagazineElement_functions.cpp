#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemWheelMagazineElement.W_ItemWheelMagazineElement_C
// (None)

class UClass* UW_ItemWheelMagazineElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemWheelMagazineElement_C");

	return Clss;
}


// W_ItemWheelMagazineElement_C W_ItemWheelMagazineElement.Default__W_ItemWheelMagazineElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemWheelMagazineElement_C* UW_ItemWheelMagazineElement_C::GetDefaultObj()
{
	static class UW_ItemWheelMagazineElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemWheelMagazineElement_C*>(UW_ItemWheelMagazineElement_C::StaticClass()->DefaultObject);

	return Default;
}

}


