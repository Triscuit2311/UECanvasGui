#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlayerActionText.W_PlayerActionText_C
// (None)

class UClass* UW_PlayerActionText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlayerActionText_C");

	return Clss;
}


// W_PlayerActionText_C W_PlayerActionText.Default__W_PlayerActionText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlayerActionText_C* UW_PlayerActionText_C::GetDefaultObj()
{
	static class UW_PlayerActionText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlayerActionText_C*>(UW_PlayerActionText_C::StaticClass()->DefaultObject);

	return Default;
}

}


