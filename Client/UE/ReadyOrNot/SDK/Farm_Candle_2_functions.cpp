#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Farm_Candle_2.Farm_Candle_2_C
// (Actor)

class UClass* AFarm_Candle_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Farm_Candle_2_C");

	return Clss;
}


// Farm_Candle_2_C Farm_Candle_2.Default__Farm_Candle_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFarm_Candle_2_C* AFarm_Candle_2_C::GetDefaultObj()
{
	static class AFarm_Candle_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFarm_Candle_2_C*>(AFarm_Candle_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


