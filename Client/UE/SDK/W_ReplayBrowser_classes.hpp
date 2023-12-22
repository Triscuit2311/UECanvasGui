#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x438 - 0x320)
// WidgetBlueprintGeneratedClass W_ReplayBrowser.W_ReplayBrowser_C
class UW_ReplayBrowser_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Blackout;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_42;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Date;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Duration;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Grade;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Level;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Mission;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Name;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LevelImage;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ReplayList;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Replay_DetailPanel_C*               W_Replay_DetailPanel;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReplayEntry_C*                      SelectedReplay;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    PresetModal;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ReplayEntry_C*                      CurrentActiveEntry;                                // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReplayData                           CurrentReplayData;                                 // 0x3A8(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                CurrentFileName;                                   // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ReplayBrowser_C* GetDefaultObj();

	void OpenReplayFolder(const class FString& CallFunc_GetProjectSavedDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void PlaySelectedReplay(class UReadyOrNotGameInstance* GameInstance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFMODBus*>& CallFunc_GetAllFMODBusObjects_ReturnValue, class UFMODBus* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void AddModalToCanvas(class UW_StandardModal_C* Modal, class UW_StandardModal_C** PresetModal, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void UpdateBackgroundImage(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue);
	void CreateEntryWidget(const class FString& ReplayFileName, const struct FReplayData& ReplayData, int32 Index, class UW_ReplayEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool CallFunc_SaveSettings_ReturnValue, bool CallFunc_JoyIsKey_Ctrl, bool CallFunc_JoyIsKey_Shift, bool CallFunc_JoyIsKey_Alt, bool CallFunc_JoyIsKey_Cmd, bool CallFunc_JoyIsKey_Match, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	bool Get_RenameButton_bIsEnabled_0(bool CallFunc_IsValid_ReturnValue);
	void OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662(class UObject* Loaded);
	void RefreshReplayList();
	void Construct();
	void CreateRenameModal(class FText ReplayName);
	void RenameOkButton(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void EntrySelected(class UW_ReplayEntry_C* ReplayEntry);
	void GetLevelPreviewImage();
	void BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_0_OnRenameFileClicked__DelegateSignature();
	void BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_1_OnDeleteReplayClicked__DelegateSignature();
	void CreateDeleteConfirmModal();
	void DeleteReplay(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void ModalCanceledButton(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void ExecuteUbergraph_W_ReplayBrowser(int32 EntryPoint, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UW_StandardModal_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_StandardModal_C* CallFunc_AddModalToCanvas_PresetModal, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TMap<class FString, struct FReplayData> CallFunc_FindReplays_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const struct FReplayData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText Temp_text_Variable, class FText K2Node_CustomEvent_ReplayName, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UW_ReplayEntry_C* K2Node_CustomEvent_ReplayEntry, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText Temp_text_Variable_6, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess);
};

}


