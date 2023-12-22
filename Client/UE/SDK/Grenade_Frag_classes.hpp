#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xE7C - 0xE50)
// BlueprintGeneratedClass Grenade_Frag.Grenade_Frag_C
class AGrenade_Frag_C : public ABaseGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  FlareLight;                                        // 0xE58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TimeoutPeriod;                                     // 0xE60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadingOut_;                                       // 0xE64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4382[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntensityTarget;                                   // 0xE68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4383[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_LenFlare_RoadFlare_C*              Lens_Flare;                                        // 0xE70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessDefault;                                 // 0xE78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGrenade_Frag_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Grenade_Frag(int32 EntryPoint);
};

}


