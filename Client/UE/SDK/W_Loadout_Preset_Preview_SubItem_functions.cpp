#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Preset_Preview_SubItem.W_Loadout_Preset_Preview_SubItem_C
// (None)

class UClass* UW_Loadout_Preset_Preview_SubItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Preset_Preview_SubItem_C");

	return Clss;
}


// W_Loadout_Preset_Preview_SubItem_C W_Loadout_Preset_Preview_SubItem.Default__W_Loadout_Preset_Preview_SubItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Preset_Preview_SubItem_C* UW_Loadout_Preset_Preview_SubItem_C::GetDefaultObj()
{
	static class UW_Loadout_Preset_Preview_SubItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Preset_Preview_SubItem_C*>(UW_Loadout_Preset_Preview_SubItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


