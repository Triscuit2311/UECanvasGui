#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass BaseImpactMesh.BaseImpactMesh_C
class ABaseImpactMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ImpactMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseImpactMesh_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BaseImpactMesh(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


