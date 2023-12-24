#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModCollectionTileWidget.ModioModCollectionTileWidget_C
// (None)

class UClass* UModioModCollectionTileWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCollectionTileWidget_C");

	return Clss;
}


// ModioModCollectionTileWidget_C ModioModCollectionTileWidget.Default__ModioModCollectionTileWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModCollectionTileWidget_C* UModioModCollectionTileWidget_C::GetDefaultObj()
{
	static class UModioModCollectionTileWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCollectionTileWidget_C*>(UModioModCollectionTileWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


