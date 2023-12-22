#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionEndBonus.W_MissionEndBonus_C
// (None)

class UClass* UW_MissionEndBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionEndBonus_C");

	return Clss;
}


// W_MissionEndBonus_C W_MissionEndBonus.Default__W_MissionEndBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionEndBonus_C* UW_MissionEndBonus_C::GetDefaultObj()
{
	static class UW_MissionEndBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionEndBonus_C*>(UW_MissionEndBonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


