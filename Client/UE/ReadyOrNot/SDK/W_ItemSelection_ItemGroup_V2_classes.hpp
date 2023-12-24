#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x73 (0x2D3 - 0x260)
// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C
class UW_ItemSelection_ItemGroup_V2_C : public UUserWidget
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
	class UTextBlock*                            Keybinding_Text;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ScrollHint_Box;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ScrollHint_Text;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected_Image;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EItemCategory                     ItemCategory;                                      // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContainsMultipleCategories;                       // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFocused;                                        // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_ItemSelection_ItemGroup_V2_C* GetDefaultObj();

	void GetIconImageFromClass(class UClass* InItemClass, class UTexture2D** Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetIconImageFromCategory(enum class EItemCategory InItemCategory, class UTexture2D** Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HasAnyItems(bool* Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyInventoryItemsOfType_ReturnValue);
	void ShowKeybindText();
	void HideKeybindText();
	void SetKeybindText(class FName& ActionName, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, const struct FRonKey& CallFunc_ConvertUnrealKeyToRonKey_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ResetFadeOutAnimationState();
	void PlayFadeOutAnim(bool bSelected, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void ShowDivider();
	void HideDivider();
	void Set_Icon_Image(class UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void PlaySelectFailedAnim(bool bPlaySound, bool CallFunc_IsVisible_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HideScrollHint();
	void ShowScrollHint(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void PlayUnfocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayFocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Initialize(struct FItemSelectionGroup& ItemGroupSetting, bool bLastGroup, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnFocus();
	void OnUnfocus();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_W_ItemSelection_ItemGroup_V2(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_HasAnyItems_Return_Value, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_HasAnyItems_Return_Value_1, bool CallFunc_HasAnyItems_Return_Value_2);
};

}


