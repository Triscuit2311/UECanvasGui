#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioNotificationControllerWidget.ModioNotificationControllerWidget_C
// (None)

class UClass* UModioNotificationControllerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationControllerWidget_C");

	return Clss;
}


// ModioNotificationControllerWidget_C ModioNotificationControllerWidget.Default__ModioNotificationControllerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioNotificationControllerWidget_C* UModioNotificationControllerWidget_C::GetDefaultObj()
{
	static class UModioNotificationControllerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationControllerWidget_C*>(UModioNotificationControllerWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


