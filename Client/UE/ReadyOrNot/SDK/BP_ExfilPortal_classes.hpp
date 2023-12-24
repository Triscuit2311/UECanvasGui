#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x278 - 0x270)
// BlueprintGeneratedClass BP_ExfilPortal.BP_ExfilPortal_C
class ABP_ExfilPortal_C : public AExfilPortal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ExfilPortal_C* GetDefaultObj();

	void OnPlayerInteracted();
	void CancelModal();
	void ConfirmModal();
	void ExecuteUbergraph_BP_ExfilPortal(int32 EntryPoint, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_CreateWidgetForPlayer_ReturnValue, class UW_ExfilOverlay_C* K2Node_DynamicCast_AsW_Exfil_Overlay, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Max_ReturnValue);
};

}


