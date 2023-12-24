#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioRefineSearchDrawer.ModioRefineSearchDrawer_C
// (None)

class UClass* UModioRefineSearchDrawer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRefineSearchDrawer_C");

	return Clss;
}


// ModioRefineSearchDrawer_C ModioRefineSearchDrawer.Default__ModioRefineSearchDrawer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioRefineSearchDrawer_C* UModioRefineSearchDrawer_C::GetDefaultObj()
{
	static class UModioRefineSearchDrawer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRefineSearchDrawer_C*>(UModioRefineSearchDrawer_C::StaticClass()->DefaultObject);

	return Default;
}

}


