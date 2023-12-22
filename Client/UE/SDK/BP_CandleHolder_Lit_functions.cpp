#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CandleHolder_Lit.BP_CandleHolder_Lit_C
// (Actor)

class UClass* ABP_CandleHolder_Lit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CandleHolder_Lit_C");

	return Clss;
}


// BP_CandleHolder_Lit_C BP_CandleHolder_Lit.Default__BP_CandleHolder_Lit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CandleHolder_Lit_C* ABP_CandleHolder_Lit_C::GetDefaultObj()
{
	static class ABP_CandleHolder_Lit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CandleHolder_Lit_C*>(ABP_CandleHolder_Lit_C::StaticClass()->DefaultObject);

	return Default;
}

}


