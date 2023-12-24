#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3F8 - 0x330)
// WidgetBlueprintGeneratedClass W_Therapist.W_Therapist_C
class UW_Therapist_C : public UTherapistWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Doc;                                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Patient;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_288;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PatientPortrait;                               // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Doc;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Patient;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_FirstName;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_LastName;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_NoteFromDoc;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SessionsRemaining;                             // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Trait;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Years;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_NeedsTherapy;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_OfficerList;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Patient;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Right;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageHeader;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Therapist_OfficerEntry_C*           W_Therapist_OfficerEntry;                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Therapist_OfficerEntry_C*           W_Therapist_OfficerEntry_1;                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardModal_C*                    ReplacementModal;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URosterCharacter*                      CurrentPatient;                                    // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URosterCharacter*                      NewPatient;                                        // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Therapist_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled, bool CallFunc_IsValid_ReturnValue);
	void UpdateTherapyScreen(class FText CallFunc_GetTherapistText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<class URosterCharacter*>& CallFunc_GetCharactersInTherapy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void CloseReplacementModal(class UStandardModal* CallingModal, bool CallFunc_IsValid_ReturnValue);
	void PopulateOfficerList(TArray<class URosterCharacter*>& RosterCharacters, class UW_Therapist_OfficerEntry_C* NewEntryWidget, class UW_Therapist_OfficerEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool BP_OnHandleBackAction(bool CallFunc_BackPage_Handled);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void Construct();
	void OfficerEntryClicked(class UW_Therapist_OfficerEntry_C* Entry);
	void ReplacePatient(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void ExecuteUbergraph_W_Therapist(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, class FText Temp_text_Variable, bool K2Node_SwitchString_CmpSuccess, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool CallFunc_BackPage_Handled, class UW_Therapist_OfficerEntry_C* K2Node_CustomEvent_Entry, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


