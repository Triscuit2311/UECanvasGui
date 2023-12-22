#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x14A8 - 0x14A0)
// BlueprintGeneratedClass Device_870MCS_Breach.Device_870MCS_Breach_C
class ADevice_870MCS_Breach_C : public ABreachingShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADevice_870MCS_Breach_C* GetDefaultObj();

	void DoReloadComplete_1();
	void ExecuteUbergraph_Device_870MCS_Breach(int32 EntryPoint);
};

}


