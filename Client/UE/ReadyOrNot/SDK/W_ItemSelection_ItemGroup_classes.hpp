#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x328 - 0x260)
// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C
class UW_ItemSelection_ItemGroup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeOut_Selected;                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Unfocus;                                      // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Select_Fail;                                  // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Focus;                                        // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Divider_Image;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              GroupOverlay;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Image;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_NotAvailable_Image;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Icon_Text;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       IconStyle_Switcher;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Keybinding_Text;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ScrollHint_Box;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ScrollHint_Text;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected_Image;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABaseItem*                             Item;                                              // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABasePlayer_C*                         PlayerCharacter;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumOfItems;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemClass;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFocused;                                        // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bContainsMultipleCategories;                       // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FAD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFadeOutSelectedFinished;                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFadeOutFinished;                                 // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ItemSelection_ItemGroup_C* GetDefaultObj();

	void SetKeybindText(class FName& ActionName, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue);
	void ResetFadeOutAnimationState();
	void PlayFadeOutAnim(bool bSelected, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void ShowDivider();
	void HideDivider();
	void UpdateIconImage(class UTexture2D* Icon, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void PlaySelectFailedAnim(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HasAnyItems(bool* Return_Value, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanEquip_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void HideHint();
	void ShowHint(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PlayUnfocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayFocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void EquipItem(bool* ItemEquipped, bool CallFunc_PutItemInHands_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, class ADetonator* K2Node_DynamicCast_AsDetonator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PutItemInHands_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue_1, class ADetonator* K2Node_DynamicCast_AsDetonator_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PutItemInHands_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void Initialize(class ABaseItem* InItem, const struct FItemSelectionGroup& ItemGroupSetting, bool bLastGroup);
	void Construct();
	void OnFocus();
	void OnUnfocus();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void CustomEvent_0();
	void CustomEvent_1();
	void ExecuteUbergraph_W_ItemSelection_ItemGroup(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_HasAnyItems_Return_Value, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_HasAnyItems_Return_Value_1, bool CallFunc_HasAnyItems_Return_Value_2);
	void OnFadeOutFinished__DelegateSignature();
	void OnFadeOutSelectedFinished__DelegateSignature();
};

}


