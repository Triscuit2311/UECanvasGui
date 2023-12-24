#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_ConstantOne.AC_ConstantOne_C
class UAC_ConstantOne_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_ConstantOne_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess);
};

}


