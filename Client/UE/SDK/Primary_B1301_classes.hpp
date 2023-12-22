#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x14E8 - 0x14A0)
// BlueprintGeneratedClass Primary_B1301.Primary_B1301_C
class APrimary_B1301_C : public AShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UShellRackShellComponent*              Shell6;                                            // 0x14A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell5;                                            // 0x14B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell4;                                            // 0x14B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell3;                                            // 0x14C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell2;                                            // 0x14C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell1;                                            // 0x14D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell0;                                            // 0x14D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LightToggle1P;                                     // 0x14E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APrimary_B1301_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Primary_B1301(int32 EntryPoint);
};

}


