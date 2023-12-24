#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModDetailsOpProgressWidget.ModioModDetailsOpProgressWidget_C
// (None)

class UClass* UModioModDetailsOpProgressWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsOpProgressWidget_C");

	return Clss;
}


// ModioModDetailsOpProgressWidget_C ModioModDetailsOpProgressWidget.Default__ModioModDetailsOpProgressWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModDetailsOpProgressWidget_C* UModioModDetailsOpProgressWidget_C::GetDefaultObj()
{
	static class UModioModDetailsOpProgressWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsOpProgressWidget_C*>(UModioModDetailsOpProgressWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


