#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_Exposure.AC_Exposure_C
class UAC_Exposure_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_Exposure_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess);
};

}


