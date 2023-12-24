#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayEventMarkerTag.W_ReplayEventMarkerTag_C
// (None)

class UClass* UW_ReplayEventMarkerTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayEventMarkerTag_C");

	return Clss;
}


// W_ReplayEventMarkerTag_C W_ReplayEventMarkerTag.Default__W_ReplayEventMarkerTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayEventMarkerTag_C* UW_ReplayEventMarkerTag_C::GetDefaultObj()
{
	static class UW_ReplayEventMarkerTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayEventMarkerTag_C*>(UW_ReplayEventMarkerTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


