#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_Tension.AC_Tension_C
class UAC_Tension_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_Tension_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess);
};

}


