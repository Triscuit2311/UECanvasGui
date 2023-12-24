#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioMenuBarWidget.ModioMenuBarWidget_C
// (None)

class UClass* UModioMenuBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMenuBarWidget_C");

	return Clss;
}


// ModioMenuBarWidget_C ModioMenuBarWidget.Default__ModioMenuBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioMenuBarWidget_C* UModioMenuBarWidget_C::GetDefaultObj()
{
	static class UModioMenuBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMenuBarWidget_C*>(UModioMenuBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


