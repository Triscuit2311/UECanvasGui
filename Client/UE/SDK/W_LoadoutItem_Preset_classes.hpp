#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x3D0 - 0x278)
// WidgetBlueprintGeneratedClass W_LoadoutItem_Preset.W_LoadoutItem_Preset_C
class UW_LoadoutItem_Preset_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BG_Image;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardButton_C*                   Button;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_CannotEdit;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         LoadoutItemPresetNameEdit_Text;                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RadioIcon_SizeBox;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardButton_C*                   ResetButton;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectedRadioIcon_Image;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       TextSwitcher;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PresetName;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnselectedRadioIcon_Image;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  OriginalPresetName;                                // 0x2D0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          DefaultColor;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsDefault;                                        // 0x308(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PresetName;                                        // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bSelected;                                         // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHovered;                                          // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAnyKeyDown;                                       // 0x32A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bResetButtonHovered;                               // 0x32B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2093[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_Presets_C*              Owner;                                             // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinPresetNameCharacters;                           // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPresetNameCharacters_WithoutSpaces;             // 0x360(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPresetNameCharacters_WithSpaces;                // 0x364(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        ItemPresetNameAsStringArray;                       // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          TH_FocusOnEditableText;                            // 0x378(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ScopeAttachmentClass;                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MuzzleAttachmentClass;                             // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                UnderbarrelAttachmentClass;                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverbarrelAttachmentClass;                         // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StockAttachmentClass;                              // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GripAttachmentClass;                               // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                IlluminatorAttachmentClass;                        // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AmmunitionAttachmentClass;                         // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SkinClass;                                         // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FactorySkinClass;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadoutItem_Preset_C* GetDefaultObj();

	void ResetPreset(bool bResetName, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName K2Node_Select_Default, const struct FWeaponPreset& K2Node_MakeStruct_WeaponPreset, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void LoadPreset(const struct FWeaponPreset& PresetData, bool Temp_bool_Variable, class UClass* Temp_class_Variable, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_2, class UClass* K2Node_Select_Default, bool CallFunc_IsValidClass_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue_4, bool CallFunc_IsValidClass_ReturnValue_5, bool CallFunc_IsValidClass_ReturnValue_6, bool CallFunc_IsValidClass_ReturnValue_7, bool CallFunc_IsValidClass_ReturnValue_8, class FText CallFunc_Conv_NameToText_ReturnValue, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable_2, class UClass* K2Node_Select_Default_1, class UClass* Temp_class_Variable_2, bool Temp_bool_Variable_3, class UClass* K2Node_Select_Default_2, class UClass* Temp_class_Variable_3, bool Temp_bool_Variable_4, class UClass* K2Node_Select_Default_3, class UClass* Temp_class_Variable_4, bool Temp_bool_Variable_5, class UClass* K2Node_Select_Default_4, class UClass* Temp_class_Variable_5, bool Temp_bool_Variable_6, class UClass* K2Node_Select_Default_5, class UClass* Temp_class_Variable_6, bool Temp_bool_Variable_7, class UClass* K2Node_Select_Default_6, class UClass* Temp_class_Variable_7, bool Temp_bool_Variable_8, class UClass* K2Node_Select_Default_7, class UClass* Temp_class_Variable_8, class UClass* K2Node_Select_Default_8);
	void UpdatePreset(class FText CallFunc_GetText_CurrentText, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, const struct FWeaponPreset& K2Node_MakeStruct_WeaponPreset);
	void UpdatePreset__Custom_(const struct FWeaponPreset& PresetData);
	void CanRename(bool* Return_Value, bool CallFunc_IsRenaming_Return_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void UnhoverResetButton();
	void HoverResetButton(bool CallFunc_CanReset_Return_Value);
	void Escape();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2);
	void StopRenaming();
	void IsRenaming(bool* Return_Value, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CanReset(bool bConsiderPresetName, bool* Return_Value, class FText CallFunc_GetText_CurrentText, bool CallFunc_AnyAttachmentEquipped_Return_Value, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AnyAttachmentEquipped(bool* Return_Value, bool CallFunc_IsFactorySkin_Return_Value, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue_3, bool CallFunc_NotEqual_ClassClass_ReturnValue_4, bool CallFunc_NotEqual_ClassClass_ReturnValue_5, bool CallFunc_NotEqual_ClassClass_ReturnValue_6, bool CallFunc_NotEqual_ClassClass_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7);
	enum class ESlateVisibility Get_ResetButton_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_CanReset_Return_Value, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Rename(bool CallFunc_CanRename_Return_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	enum class ESlateVisibility Get_CannotEdit_Text_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SimulateUnhover();
	void SimulateHover();
	void SimulateClick();
	void Deselect_Preset(bool bSavePreset);
	void Select_Preset(bool bSavePreset);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void OnLoadoutLoaded();
	void BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void FocusOnEditableText();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void ExecuteUbergraph_W_LoadoutItem_Preset(int32 EntryPoint, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Contains_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool K2Node_Event_IsDesignTime, bool CallFunc_ConflictsWithOtherPresets_Return_Value, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility CallFunc_Get_ResetButton_Visibility_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void OnButtonUnhovered__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget);
	void OnButtonHovered__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget);
	void OnButtonClicked__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget);
};

}


