#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RadialSectorBase.W_RadialSectorBase_C
// (None)

class UClass* UW_RadialSectorBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RadialSectorBase_C");

	return Clss;
}


// W_RadialSectorBase_C W_RadialSectorBase.Default__W_RadialSectorBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RadialSectorBase_C* UW_RadialSectorBase_C::GetDefaultObj()
{
	static class UW_RadialSectorBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RadialSectorBase_C*>(UW_RadialSectorBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


