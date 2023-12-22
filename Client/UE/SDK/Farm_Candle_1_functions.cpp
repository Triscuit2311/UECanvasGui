#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Farm_Candle_1.Farm_Candle_1_C
// (Actor)

class UClass* AFarm_Candle_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Farm_Candle_1_C");

	return Clss;
}


// Farm_Candle_1_C Farm_Candle_1.Default__Farm_Candle_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFarm_Candle_1_C* AFarm_Candle_1_C::GetDefaultObj()
{
	static class AFarm_Candle_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFarm_Candle_1_C*>(AFarm_Candle_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


