#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioErrorNotificationWidget.ModioErrorNotificationWidget_C
// (None)

class UClass* UModioErrorNotificationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioErrorNotificationWidget_C");

	return Clss;
}


// ModioErrorNotificationWidget_C ModioErrorNotificationWidget.Default__ModioErrorNotificationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioErrorNotificationWidget_C* UModioErrorNotificationWidget_C::GetDefaultObj()
{
	static class UModioErrorNotificationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioErrorNotificationWidget_C*>(UModioErrorNotificationWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


