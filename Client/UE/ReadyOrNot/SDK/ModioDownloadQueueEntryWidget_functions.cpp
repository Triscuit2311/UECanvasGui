#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioDownloadQueueEntryWidget.ModioDownloadQueueEntryWidget_C
// (None)

class UClass* UModioDownloadQueueEntryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueEntryWidget_C");

	return Clss;
}


// ModioDownloadQueueEntryWidget_C ModioDownloadQueueEntryWidget.Default__ModioDownloadQueueEntryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioDownloadQueueEntryWidget_C* UModioDownloadQueueEntryWidget_C::GetDefaultObj()
{
	static class UModioDownloadQueueEntryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueEntryWidget_C*>(UModioDownloadQueueEntryWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


