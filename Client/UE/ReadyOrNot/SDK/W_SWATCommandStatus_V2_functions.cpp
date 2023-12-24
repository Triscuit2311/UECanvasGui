#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C
// (None)

class UClass* UW_SWATCommandStatus_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SWATCommandStatus_V2_C");

	return Clss;
}


// W_SWATCommandStatus_V2_C W_SWATCommandStatus_V2.Default__W_SWATCommandStatus_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SWATCommandStatus_V2_C* UW_SWATCommandStatus_V2_C::GetDefaultObj()
{
	static class UW_SWATCommandStatus_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SWATCommandStatus_V2_C*>(UW_SWATCommandStatus_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


