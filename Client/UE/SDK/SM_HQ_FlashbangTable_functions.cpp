#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SM_HQ_FlashbangTable.SM_HQ_FlashbangTable_C
// (Actor)

class UClass* ASM_HQ_FlashbangTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SM_HQ_FlashbangTable_C");

	return Clss;
}


// SM_HQ_FlashbangTable_C SM_HQ_FlashbangTable.Default__SM_HQ_FlashbangTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASM_HQ_FlashbangTable_C* ASM_HQ_FlashbangTable_C::GetDefaultObj()
{
	static class ASM_HQ_FlashbangTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASM_HQ_FlashbangTable_C*>(ASM_HQ_FlashbangTable_C::StaticClass()->DefaultObject);

	return Default;
}

}


