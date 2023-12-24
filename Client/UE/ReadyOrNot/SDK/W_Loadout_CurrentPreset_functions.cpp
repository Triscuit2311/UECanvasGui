#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_CurrentPreset.W_Loadout_CurrentPreset_C
// (None)

class UClass* UW_Loadout_CurrentPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_CurrentPreset_C");

	return Clss;
}


// W_Loadout_CurrentPreset_C W_Loadout_CurrentPreset.Default__W_Loadout_CurrentPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_CurrentPreset_C* UW_Loadout_CurrentPreset_C::GetDefaultObj()
{
	static class UW_Loadout_CurrentPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_CurrentPreset_C*>(UW_Loadout_CurrentPreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_CurrentPreset.W_Loadout_CurrentPreset_C.SetPresetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_CurrentPreset_C::SetPresetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_CurrentPreset_C", "SetPresetName");

	Params::UW_Loadout_CurrentPreset_C_SetPresetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}

}


