#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass W_ReplayMountedSubMesh.W_ReplayMountedSubMesh_C
class UW_ReplayMountedSubMesh_C : public UUserWidget
{
public:
	class UScrollBox*                            ScrollBox_129;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SubMeshName;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FReplaySubMesh                        ReplaySubMesh;                                     // 0x270(0x28)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_ReplayMountedSubMesh_C* GetDefaultObj();

};

}


