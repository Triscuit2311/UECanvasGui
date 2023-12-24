#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x340 - 0x278)
// WidgetBlueprintGeneratedClass W_SkinItem.W_SkinItem_C
class UW_SkinItem_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ButtonPressed;                                // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BottonBorder_Image;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardButton_C*                   Button;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIcon_Image;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftBorder_Image;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RadioIcon_SizeBox;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBorder_Image;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectedRadioIcon_Image;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopBorder_Image;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ItemClassName;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ItemName;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnselectedRadioIcon_Image;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                SkinClass;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_SkinCategory_C*                     Owner;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSelected;                                         // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_SkinItem_C* GetDefaultObj();

	void UnhighlightBorder();
	void HighlightBorder();
	void UpdateSkinName();
	void SimulateClicked();
	void SimulateUnhover();
	void SimulateHover();
	void Deselect();
	void Select();
	enum class ESlateVisibility Get_ItemClassName_Text_Visibility(enum class ERONBuildConfiguration Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
	void OnLoadoutLoaded();
	void OnGunCleaned();
	void ExecuteUbergraph_W_SkinItem(int32 EntryPoint, bool CallFunc_IsDLCInstalledEnum_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool CallFunc_IsFactorySkin_Return_Value, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void OnButtonUnhovered__DelegateSignature(class UW_SkinItem_C* SkinItem);
	void OnButtonHovered__DelegateSignature(class UW_SkinItem_C* SkinItem);
	void OnButtonClicked__DelegateSignature(class UW_SkinItem_C* SkinItem);
};

}


