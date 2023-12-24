#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x1098 - 0x1070)
// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
class UBP_GameInstance_C : public UReadyOrNotGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1070(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                        StreamedLevels;                                    // 0x1078(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ModeURL;                                           // 0x1088(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_GameInstance_C* GetDefaultObj();

	void OnFailure_A29261FE4E99C0ECFF6439AB0854D5B1();
	void OnSuccess_A29261FE4E99C0ECFF6439AB0854D5B1();
	void ReceiveInit();
	void AdjustVolume();
	void AddPauseGameCondition(const class FString& PauseCondition);
	void RemovePauseGameCondition(const class FString& PauseCondition);
	void PauseGameWithConditon(const class FString& NewCondition);
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin);
	void AdjustAccessibilitySettings();
	void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, const class FString& K2Node_Event_PauseCondition_1, const class FString& K2Node_Event_PauseCondition, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, const class FString& K2Node_CustomEvent_NewCondition, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, class ULevelStreaming* CallFunc_StreamInSession_OutStreamedLevel, bool CallFunc_StreamInSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue);
};

}


