#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Farm_Candle_Stationary_Flicker.Farm_Candle_Stationary_Flicker_C
// (Actor)

class UClass* AFarm_Candle_Stationary_Flicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Farm_Candle_Stationary_Flicker_C");

	return Clss;
}


// Farm_Candle_Stationary_Flicker_C Farm_Candle_Stationary_Flicker.Default__Farm_Candle_Stationary_Flicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFarm_Candle_Stationary_Flicker_C* AFarm_Candle_Stationary_Flicker_C::GetDefaultObj()
{
	static class AFarm_Candle_Stationary_Flicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFarm_Candle_Stationary_Flicker_C*>(AFarm_Candle_Stationary_Flicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


