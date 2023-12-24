#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x208 - 0x1F8)
// BlueprintGeneratedClass BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C
class UBP_UI_PlanningMap_Marker_C : public USceneComponent
{
public:
	uint8                                        Pad_2228[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_UI_PlanningMap_Marker_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UI_PlanningMap_Marker(int32 EntryPoint);
};

}


