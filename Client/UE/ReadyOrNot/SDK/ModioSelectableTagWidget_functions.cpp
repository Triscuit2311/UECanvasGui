#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioSelectableTagWidget.ModioSelectableTagWidget_C
// (None)

class UClass* UModioSelectableTagWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSelectableTagWidget_C");

	return Clss;
}


// ModioSelectableTagWidget_C ModioSelectableTagWidget.Default__ModioSelectableTagWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioSelectableTagWidget_C* UModioSelectableTagWidget_C::GetDefaultObj()
{
	static class UModioSelectableTagWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSelectableTagWidget_C*>(UModioSelectableTagWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


