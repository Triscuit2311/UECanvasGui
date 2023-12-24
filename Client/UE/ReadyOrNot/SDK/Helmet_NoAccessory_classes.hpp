#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1580 - 0x1568)
// BlueprintGeneratedClass Helmet_NoAccessory.Helmet_NoAccessory_C
class AHelmet_NoAccessory_C : public AHeadwear
{
public:
	uint8                                        Pad_4537[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APlayerState*                          PlayerState;                                       // 0x1578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHelmet_NoAccessory_C* GetDefaultObj();

	void ExecuteUbergraph_Helmet_NoAccessory(int32 EntryPoint);
};

}


