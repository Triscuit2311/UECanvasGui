#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3F0 - 0x360)
// WidgetBlueprintGeneratedClass W_PlayersList.W_PlayersList_C
class UW_PlayersList_C : public UPlayersList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_168;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           W_Button;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        LastScrolloffset;                                  // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4317[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLobbyPlayer                          HoveredPlayer;                                     // 0x388(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            FocusedPlayerCallback;                             // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PlayersList_C* GetDefaultObj();

	void Create_Player_Item(class APlayerController* OwningPlayer, const struct FLobbyPlayer& Player, class UW_PlayersList_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Toggle_Mute_Player(const struct FLobbyPlayer& LobbyPlayer, bool CallFunc_Not_PreBool_ReturnValue);
	void KickPlayer(const struct FLobbyPlayer& LobbyPlayer, class APlayerState* CallFunc_GetPlayerStateFromUniqueId_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue);
	void GetSelectedPlayer();
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void OnSuccess_Event_0();
	void OnFailure_Event_0();
	void CustomEvent_0();
	void PreConstruct(bool IsDesignTime);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnMuteStateDelegate_Event_0();
	void BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_PlayersList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLobbyPlayer& K2Node_MakeStruct_LobbyPlayer, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, const struct FLobbyPlayer& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void FocusedPlayerCallback__DelegateSignature();
};

}


