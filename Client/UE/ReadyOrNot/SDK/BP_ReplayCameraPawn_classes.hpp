#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xDC8 - 0xDC0)
// BlueprintGeneratedClass BP_ReplayCameraPawn.BP_ReplayCameraPawn_C
class ABP_ReplayCameraPawn_C : public AReplayCameraPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ReplayCameraPawn_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ReplayCameraPawn(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


