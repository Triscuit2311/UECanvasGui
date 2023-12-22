#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_NumActiveAI.AG_NumActiveAI_C
// (None)

class UClass* UAG_NumActiveAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_NumActiveAI_C");

	return Clss;
}


// AG_NumActiveAI_C AG_NumActiveAI.Default__AG_NumActiveAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_NumActiveAI_C* UAG_NumActiveAI_C::GetDefaultObj()
{
	static class UAG_NumActiveAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_NumActiveAI_C*>(UAG_NumActiveAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


