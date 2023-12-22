#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E0 (0x640 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C
class UW_Briefing_Intel_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Intel;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_IntelThumbnail;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectionBorder;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           DocumentThumbnail;                                 // 0x280(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_Briefing_Intel_Types            DocumentType;                                      // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3854[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterBio                         Bio;                                               // 0x310(0x140)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            BioIntelClicked;                                   // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_Briefing_Evidence                 Media;                                             // 0x460(0xA0)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsBio;                                            // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsMedia;                                          // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsHovered;                                        // 0x502(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3857[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MediaIntelClicked;                                 // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsActive;                                         // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_385A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColTintActive;                                     // 0x51C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BorderActiveBrush;                                 // 0x530(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BorderNormalBrush;                                 // 0x5B8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Briefing_Intel_Entry_C* GetDefaultObj();

	void SetActive(bool Active, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default);
	void SetHovered(bool IsHovered, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1);
	void BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
	void ExecuteUbergraph_W_Briefing_Intel_Entry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void MediaIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media);
	void BioIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio);
};

}


