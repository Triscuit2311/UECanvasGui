#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x388 - 0x260)
// WidgetBlueprintGeneratedClass W_PremissionTablet_Button.W_PremissionTablet_Button_C
class UW_PremissionTablet_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Button;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_1;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           PopoutAnchorLeft;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           PopoutAnchorRight;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Label;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x2A8(0x18)(Edit, BlueprintVisible)
	class UTexture2D*                            Icon;                                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                ID;                                                // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_37B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Col_Active;                                        // 0x2EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_ActiveIcon;                                    // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Hover;                                         // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Inactive;                                      // 0x31C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             HoverIconScale;                                    // 0x32C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               PopoutWidget;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PopoutWidgetClass;                                 // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                TabletWidget;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PopoutLeft;                                        // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PoputAlwaysOpen;                                   // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnActiveStateChange;                               // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PremissionTablet_Button_C* GetDefaultObj();

	void ClickButton(class UW_PremissionTablet_Button_C* Button, class UW_PreMission_Tablet_C* CallFunc_WidgetGetParentOfClass_ReturnValue);
	void GetIsActive(bool* IsActive);
	void SpawnPopOut(bool Open, bool Temp_bool_Variable, class UMenuAnchor* K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue);
	void SetHovered(bool Hovered);
	void SetActive(bool Active, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, class UMenuAnchor* K2Node_Select_Default, class UMenuAnchor* K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void AddPopout();
	void BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void OnInitialized();
	void ExecuteUbergraph_W_PremissionTablet_Button(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_ComponentBoundEvent_bIsOpen_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bIsOpen, class UMenuAnchor* K2Node_Select_Default);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnActiveStateChange__DelegateSignature(bool Active);
	void OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
};

}


