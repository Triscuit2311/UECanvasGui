#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x2B4 - 0x260)
// WidgetBlueprintGeneratedClass W_AG_AdminGameControls.W_AG_AdminGameControls_C
class UW_AG_AdminGameControls_C : public UAdminGameControls
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_PageWrapper_C*                      PageWrapper;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            PlayerList;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AG_PlayerList_C*                    W_AG_PlayerList;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           OpenedFrom;                                        // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bHasPlayerStateInList;                             // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasWidgetForRemovedPlayerStateInList;             // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4080[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          KickingPlayerState;                                // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  KickReason;                                        // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        IdxMinusOne;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_AG_AdminGameControls_C* GetDefaultObj();

	void HasPlayerInList(class APlayerState* PlayerState, bool* Exists, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_AG_PlayerList_C* K2Node_DynamicCast_AsW_AG_Player_List, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Construct();
	void UpdatePlayerList();
	void BndEvt__W_AG_AdminGameControls_PageWrapper_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void ExecuteUbergraph_W_AG_AdminGameControls(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, class UW_AG_PlayerList_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APlayerState*>& CallFunc_GetKickablePlayers_KickablePlayers, class APlayerState* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPlayerInList_Exists, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


