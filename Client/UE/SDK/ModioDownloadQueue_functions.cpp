#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioDownloadQueue.ModioDownloadQueue_C
// (None)

class UClass* UModioDownloadQueue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueue_C");

	return Clss;
}


// ModioDownloadQueue_C ModioDownloadQueue.Default__ModioDownloadQueue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioDownloadQueue_C* UModioDownloadQueue_C::GetDefaultObj()
{
	static class UModioDownloadQueue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueue_C*>(UModioDownloadQueue_C::StaticClass()->DefaultObject);

	return Default;
}

}


