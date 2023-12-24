#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13C (0x43C - 0x300)
// WidgetBlueprintGeneratedClass W_StandardModal.W_StandardModal_C
class UW_StandardModal_C : public UStandardModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimDisplayWarningText;                            // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_StandardButton_C*                   ApplyButton;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Apply;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Cancel;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Ok;                                            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardButton_C*                   CancelButton;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentSizeBox;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DescriptionBox;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header;                                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_64;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Input_TextInput;                                   // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardButton_C*                   OkButton;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_Description;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_DescriptionBox;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_TextBlock;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_TextInputError;                                // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_TextInputLabel;                                // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Title;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TextInput;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_103;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOkClicked;                                       // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnApplyClicked;                                    // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ScrolledToBottom;                                  // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TextEntryModal;                                    // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_416B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TextEntryLabel;                                    // 0x3D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TextEntryHint;                                     // 0x3F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TextEntryText;                                     // 0x408(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsTextConfirm;                                     // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowDescriptionBox;                                // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_416C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextEntryMaxCharacters;                            // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        TextEntryMinCharacters;                            // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_StandardModal_C* GetDefaultObj();

	void Confirm(bool OkClicked, bool ApplyClicked, bool TextInputConfirm, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, bool CallFunc_IsTextUnderMin_ReturnValue, bool CallFunc_IsTextOverMax_ReturnValue, bool CallFunc_IsTextOverMax_ReturnValue_1);
	void WarnTextUnderMin(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool IsTextUnderMin(bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void WarnTextOverMax(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HideWarningText();
	bool IsTextOverMax(bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetDescriptionText(class FText ModalDescription);
	void DisplayWarningText(class FText WarningText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void CancelConfirmTextEntry();
	void ConfirmTextEntry(class FText ConfirmTitleText, class FText ConfirmDescriptionText);
	bool Get_OkButton_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnUserScrolled_Event_0(float CurrentOffset);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_W_StandardModal(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_CustomEvent_CurrentOffset, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsTextOverMax_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnTextCommitted__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry);
};

}


