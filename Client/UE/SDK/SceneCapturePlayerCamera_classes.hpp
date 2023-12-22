#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x240 - 0x238)
// BlueprintGeneratedClass SceneCapturePlayerCamera.SceneCapturePlayerCamera_C
class ASceneCapturePlayerCamera_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASceneCapturePlayerCamera_C* GetDefaultObj();

	void Stop();
	void Start(class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SceneCapturePlayerCamera(int32 EntryPoint);
};

}


