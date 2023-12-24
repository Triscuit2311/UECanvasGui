#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1580 - 0x1568)
// BlueprintGeneratedClass Helmet_Glasses.Helmet_Glasses_C
class AHelmet_Glasses_C : public AHeadwear
{
public:
	uint8                                        Pad_1C93[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APlayerState*                          PlayerState;                                       // 0x1578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHelmet_Glasses_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Helmet_Glasses(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue);
};

}


