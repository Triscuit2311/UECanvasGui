#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB38 - 0xB30)
// BlueprintGeneratedClass RoN_Farm_Core.RoN_Farm_Core_C
class ARoN_Farm_Core_C : public AReadyOrNotLevelScript
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ARoN_Farm_Core_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_RoN_Farm_Core(int32 EntryPoint);
};

}


