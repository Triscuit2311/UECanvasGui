#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModCollectionTileStatusWidget.ModioModCollectionTileStatusWidget_C
// (None)

class UClass* UModioModCollectionTileStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCollectionTileStatusWidget_C");

	return Clss;
}


// ModioModCollectionTileStatusWidget_C ModioModCollectionTileStatusWidget.Default__ModioModCollectionTileStatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModCollectionTileStatusWidget_C* UModioModCollectionTileStatusWidget_C::GetDefaultObj()
{
	static class UModioModCollectionTileStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCollectionTileStatusWidget_C*>(UModioModCollectionTileStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


