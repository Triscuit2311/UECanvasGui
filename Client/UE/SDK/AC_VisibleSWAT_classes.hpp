#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_VisibleSWAT.AC_VisibleSWAT_C
class UAC_VisibleSWAT_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_VisibleSWAT_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetVisibleSWATPercentage_ReturnValue);
};

}


