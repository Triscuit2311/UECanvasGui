#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SwatCommandMain.W_SwatCommandMain_C
// (None)

class UClass* UW_SwatCommandMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SwatCommandMain_C");

	return Clss;
}


// W_SwatCommandMain_C W_SwatCommandMain.Default__W_SwatCommandMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SwatCommandMain_C* UW_SwatCommandMain_C::GetDefaultObj()
{
	static class UW_SwatCommandMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SwatCommandMain_C*>(UW_SwatCommandMain_C::StaticClass()->DefaultObject);

	return Default;
}

}


