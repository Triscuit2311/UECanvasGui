#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioSubscriptionBadgeWidget.ModioSubscriptionBadgeWidget_C
// (None)

class UClass* UModioSubscriptionBadgeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSubscriptionBadgeWidget_C");

	return Clss;
}


// ModioSubscriptionBadgeWidget_C ModioSubscriptionBadgeWidget.Default__ModioSubscriptionBadgeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioSubscriptionBadgeWidget_C* UModioSubscriptionBadgeWidget_C::GetDefaultObj()
{
	static class UModioSubscriptionBadgeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSubscriptionBadgeWidget_C*>(UModioSubscriptionBadgeWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


