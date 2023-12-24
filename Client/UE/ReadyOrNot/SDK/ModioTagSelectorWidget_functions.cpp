#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioTagSelectorWidget.ModioTagSelectorWidget_C
// (None)

class UClass* UModioTagSelectorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagSelectorWidget_C");

	return Clss;
}


// ModioTagSelectorWidget_C ModioTagSelectorWidget.Default__ModioTagSelectorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioTagSelectorWidget_C* UModioTagSelectorWidget_C::GetDefaultObj()
{
	static class UModioTagSelectorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagSelectorWidget_C*>(UModioTagSelectorWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


