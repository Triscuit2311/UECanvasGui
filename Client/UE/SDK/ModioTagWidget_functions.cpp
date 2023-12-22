#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioTagWidget.ModioTagWidget_C
// (None)

class UClass* UModioTagWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagWidget_C");

	return Clss;
}


// ModioTagWidget_C ModioTagWidget.Default__ModioTagWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioTagWidget_C* UModioTagWidget_C::GetDefaultObj()
{
	static class UModioTagWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagWidget_C*>(UModioTagWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


