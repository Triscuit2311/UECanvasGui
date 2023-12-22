#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioErrorWithRetryWidget.ModioErrorWithRetryWidget_C
// (None)

class UClass* UModioErrorWithRetryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioErrorWithRetryWidget_C");

	return Clss;
}


// ModioErrorWithRetryWidget_C ModioErrorWithRetryWidget.Default__ModioErrorWithRetryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioErrorWithRetryWidget_C* UModioErrorWithRetryWidget_C::GetDefaultObj()
{
	static class UModioErrorWithRetryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioErrorWithRetryWidget_C*>(UModioErrorWithRetryWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


