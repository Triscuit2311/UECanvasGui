#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x14B0 - 0x14A8)
// BlueprintGeneratedClass BP_AutoShotgunForPerfTest.BP_AutoShotgunForPerfTest_C
class ABP_AutoShotgunForPerfTest_C : public APrimary_WCQB_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AutoShotgunForPerfTest_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AutoShotgunForPerfTest(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


