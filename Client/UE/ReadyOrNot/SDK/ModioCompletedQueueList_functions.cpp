#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioCompletedQueueList.ModioCompletedQueueList_C
// (None)

class UClass* UModioCompletedQueueList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCompletedQueueList_C");

	return Clss;
}


// ModioCompletedQueueList_C ModioCompletedQueueList.Default__ModioCompletedQueueList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioCompletedQueueList_C* UModioCompletedQueueList_C::GetDefaultObj()
{
	static class UModioCompletedQueueList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCompletedQueueList_C*>(UModioCompletedQueueList_C::StaticClass()->DefaultObject);

	return Default;
}

}


