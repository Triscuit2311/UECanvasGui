#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioDownloadQueueOpProgressWidget.ModioDownloadQueueOpProgressWidget_C
// (None)

class UClass* UModioDownloadQueueOpProgressWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueOpProgressWidget_C");

	return Clss;
}


// ModioDownloadQueueOpProgressWidget_C ModioDownloadQueueOpProgressWidget.Default__ModioDownloadQueueOpProgressWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioDownloadQueueOpProgressWidget_C* UModioDownloadQueueOpProgressWidget_C::GetDefaultObj()
{
	static class UModioDownloadQueueOpProgressWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueOpProgressWidget_C*>(UModioDownloadQueueOpProgressWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


