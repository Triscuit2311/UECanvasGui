#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Scoreboard.W_Scoreboard_C
// (None)

class UClass* UW_Scoreboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Scoreboard_C");

	return Clss;
}


// W_Scoreboard_C W_Scoreboard.Default__W_Scoreboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Scoreboard_C* UW_Scoreboard_C::GetDefaultObj()
{
	static class UW_Scoreboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Scoreboard_C*>(UW_Scoreboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


