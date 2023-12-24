#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x14D0 - 0x14A0)
// BlueprintGeneratedClass Device_SuperShorty.Device_SuperShorty_C
class ADevice_SuperShorty_C : public AShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UShellRackShellComponent*              Shell4;                                            // 0x14A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell3;                                            // 0x14B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell2;                                            // 0x14B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell1;                                            // 0x14C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell0;                                            // 0x14C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADevice_SuperShorty_C* GetDefaultObj();

	void DoReloadComplete_1();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Device_SuperShorty(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


