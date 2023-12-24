#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1448 - 0x1430)
// BlueprintGeneratedClass Secondary_Makarov.Secondary_Makarov_C
class ASecondary_Makarov_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x1438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x1440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASecondary_Makarov_C* GetDefaultObj();

	void DestroyPouches_1();
	void SpawnPouches_1();
	void ExecuteUbergraph_Secondary_Makarov(int32 EntryPoint);
};

}


