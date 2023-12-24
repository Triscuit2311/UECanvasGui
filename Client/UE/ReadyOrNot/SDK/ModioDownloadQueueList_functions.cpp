#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioDownloadQueueList.ModioDownloadQueueList_C
// (None)

class UClass* UModioDownloadQueueList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueList_C");

	return Clss;
}


// ModioDownloadQueueList_C ModioDownloadQueueList.Default__ModioDownloadQueueList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioDownloadQueueList_C* UModioDownloadQueueList_C::GetDefaultObj()
{
	static class UModioDownloadQueueList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueList_C*>(UModioDownloadQueueList_C::StaticClass()->DefaultObject);

	return Default;
}

}


