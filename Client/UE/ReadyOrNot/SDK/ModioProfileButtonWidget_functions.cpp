#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioProfileButtonWidget.ModioProfileButtonWidget_C
// (None)

class UClass* UModioProfileButtonWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioProfileButtonWidget_C");

	return Clss;
}


// ModioProfileButtonWidget_C ModioProfileButtonWidget.Default__ModioProfileButtonWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioProfileButtonWidget_C* UModioProfileButtonWidget_C::GetDefaultObj()
{
	static class UModioProfileButtonWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioProfileButtonWidget_C*>(UModioProfileButtonWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


