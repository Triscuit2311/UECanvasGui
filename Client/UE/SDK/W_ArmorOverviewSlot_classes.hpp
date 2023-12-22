#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x209 (0x549 - 0x340)
// WidgetBlueprintGeneratedClass W_ArmorOverviewSlot.W_ArmorOverviewSlot_C
class UW_ArmorOverviewSlot_C : public ULoadoutSlot_V2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealSubtext;                                 // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           Button;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquippedGlow;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EquippedTag;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Border;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivCoverageDetails;                            // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivDetails;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivMaterialDetails;                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemIcon;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarFade;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarSolid;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Coverage;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Material;                                      // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Icon;                                         // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Coverage;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Material;                                      // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SlotName;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext;                                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext_Coverage;                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext_Material;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_VestName;                                      // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           EquippedGreen;                                     // 0x418(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           NormalGrey;                                        // 0x440(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           SelectedRed;                                       // 0x468(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           HoveredWhite;                                      // 0x490(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DefaultWhite;                                      // 0x4B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhover;                                         // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PreviewHovered;                                    // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PreviewPressed;                                    // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PreviewEquipped;                                   // 0x502(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        ButtonStyle;                                       // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        GamepadButtonStyle;                                // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        DetailsFontSize;                                   // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadDetailsFontSize;                            // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NameFontSize;                                      // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadNameFontSize;                               // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewGamepad;                                    // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           ParentButton;                                      // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDoubleClick;                                     // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bMinimalLayout;                                    // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_ArmorOverviewSlot_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue);
	void BackPage(bool* Handled);
	void SetVisualState(bool Hovered, bool Pressed, bool Equipped, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FSlateColor& CallFunc_GetEquippedColorByState_ReturnValue, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FSlateColor& K2Node_Select_Default_4);
	void SetArmorCoverage(enum class EArmourCoverage ArmorCoverage, class FText CallFunc_GetArmorCoverageText_CoverageText);
	void UnbindFromButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void BindDoubleClick(class UW_Button_C* ParentButton);
	void BindClick(class UW_Button_C* ParentButton);
	void BindUnhovered(bool CallFunc_GetEquipped_ReturnValue);
	void BindPressedState(bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_IsPressed_ReturnValue);
	void BindHovered(class UW_Button_C* ParentButton, bool CallFunc_GetEquipped_ReturnValue);
	void BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue);
	void BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	struct FSlateColor GetEquippedColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void UpdateDetailFontSize(int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font_1);
	void UpdateNameFontSize(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font);
	void AdjustFontSize(class UTextBlock* TextWidget, int32 FontSize, struct FSlateFontInfo* Font, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2);
	struct FSlateColor GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnEquipped();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Reveal(float Delay);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void RefreshItemInfo();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void SetArmorMaterial(class UArmourMaterial* Item);
	void SetManualDetails(class FText ItemName, class FText SlotName, class FText Subtext, class UTexture2D* ItemImage);
	void UpdateArmor(class ABaseItem* ArmorItem, class UArmourMaterial* Material, enum class EArmourCoverage Coverage);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void ChangePage(class FName PageName);
	void ShowSubtext(class FText& Text, bool Show);
	void UpdateArmorCoverage(enum class EArmourCoverage Coverage);
	void UpdateArmorMaterial(class UArmourMaterial* Material);
	void RefreshInfo();
	void ExecuteUbergraph_W_ArmorOverviewSlot(int32 EntryPoint, bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_2, bool CallFunc_GetEquipped_ReturnValue_3, bool CallFunc_GetEquipped_ReturnValue_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class FName K2Node_Event_OptionNameID, float K2Node_Event_Delay, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_5, class UArmourMaterial* K2Node_Event_Item, class FText K2Node_CustomEvent_ItemName, class FText K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_Subtext, class UTexture2D* K2Node_CustomEvent_ItemImage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class ABaseItem* K2Node_CustomEvent_ArmorItem, class UArmourMaterial* K2Node_CustomEvent_Material_1, enum class EArmourCoverage K2Node_CustomEvent_Coverage_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, bool CallFunc_IsValid_ReturnValue_1, class ABaseBodyArmor_C* K2Node_DynamicCast_AsBase_Body_Armor, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FText CallFunc_Format_ReturnValue, class FName K2Node_Event_PageName, class FText K2Node_Event_Text, bool K2Node_Event_Show, enum class EArmourCoverage K2Node_CustomEvent_Coverage, class FText CallFunc_GetArmorCoverageText_CoverageText, class UArmourMaterial* K2Node_CustomEvent_Material);
	void OnDoubleClick__DelegateSignature(class UW_ArmorOverviewSlot_C* TriggeringSlot);
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature(class UW_ArmorOverviewSlot_C* TriggeringSlot);
	void OnClick__DelegateSignature(class UW_ArmorOverviewSlot_C* TriggeringSlot);
};

}


