#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1B40 - 0x1B20)
// BlueprintGeneratedClass Helmet_NVG_V2.Helmet_NVG_V2_C
class AHelmet_NVG_V2_C : public ANightvisionGoggles
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x1B28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x1B30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          PlayerState;                                       // 0x1B38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHelmet_NVG_V2_C* GetDefaultObj();

	void OnNightvisionDeactivated();
	void ReceiveTick(float DeltaSeconds);
	void OnNightvisionActivated();
	void ExecuteUbergraph_Helmet_NVG_V2(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


