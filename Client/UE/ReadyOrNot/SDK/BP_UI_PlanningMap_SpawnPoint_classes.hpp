#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x290 - 0x1F8)
// BlueprintGeneratedClass BP_UI_PlanningMap_SpawnPoint.BP_UI_PlanningMap_SpawnPoint_C
class UBP_UI_PlanningMap_SpawnPoint_C : public USceneComponent
{
public:
	uint8                                        Pad_346[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnPoints                          SpawnPointInfo;                                    // 0x200(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_UI_PlanningMap_SpawnPoint_C* GetDefaultObj();

};

}


