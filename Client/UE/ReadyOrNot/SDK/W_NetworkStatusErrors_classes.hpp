#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass W_NetworkStatusErrors.W_NetworkStatusErrors_C
class UW_NetworkStatusErrors_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_49;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_76;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_1;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ConnectionError;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_NetworkStatusErrors_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void UpdateLagStatus();
	void Construct();
	void ExecuteUbergraph_W_NetworkStatusErrors(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetNetworkConnectionStatus_AvgLag, int32 CallFunc_GetNetworkConnectionStatus_OutLostPackets, int32 CallFunc_GetNetworkConnectionStatus_InLostPackets, int32 CallFunc_GetNetworkConnectionStatus_OutLostPacketPrcnt, int32 CallFunc_GetNetworkConnectionStatus_InLostPacketPrcnt, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNetworkStatus_AvgLag, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


