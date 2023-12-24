#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1440 - 0x1430)
// BlueprintGeneratedClass Primary_S_AK103.Primary_S_AK103_C
class APrimary_S_AK103_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x1438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APrimary_S_AK103_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Primary_S_AK103(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


