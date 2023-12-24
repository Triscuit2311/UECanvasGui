#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioAsyncLoadingOverlay.ModioAsyncLoadingOverlay_C
// (None)

class UClass* UModioAsyncLoadingOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioAsyncLoadingOverlay_C");

	return Clss;
}


// ModioAsyncLoadingOverlay_C ModioAsyncLoadingOverlay.Default__ModioAsyncLoadingOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioAsyncLoadingOverlay_C* UModioAsyncLoadingOverlay_C::GetDefaultObj()
{
	static class UModioAsyncLoadingOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioAsyncLoadingOverlay_C*>(UModioAsyncLoadingOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


