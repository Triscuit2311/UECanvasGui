#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_TimeSurrendered.AC_TimeSurrendered_C
class UAC_TimeSurrendered_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_TimeSurrendered_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue);
};

}


