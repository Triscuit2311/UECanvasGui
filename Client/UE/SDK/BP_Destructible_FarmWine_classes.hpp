#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x278 - 0x258)
// BlueprintGeneratedClass BP_Destructible_FarmWine.BP_Destructible_FarmWine_C
class ABP_Destructible_FarmWine_C : public ADynamicWorldItem
{
public:
	class UFMODAudioComponent*                   FMOD_BulbBreak;                                    // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   List;                                              // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UStaticMeshComponent*                  Random_Mesh;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Destructible_FarmWine_C* GetDefaultObj();

	void UserConstructionScript(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


