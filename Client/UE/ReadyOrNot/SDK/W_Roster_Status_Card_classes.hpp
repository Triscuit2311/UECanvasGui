#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x5C8 - 0x330)
// WidgetBlueprintGeneratedClass W_Roster_Status_Card.W_Roster_Status_Card_C
class UW_Roster_Status_Card_C : public URosterSelectionWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         Bio;                                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       btn_Card;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Details;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DetailsSizeBox;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_EKG_C*                       EKG;                                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Deployables;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Details;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoverBorder;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoverBorder_1;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_div_2;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LongTactical;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PositionCorner;                                // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PositionCorner_1;                              // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Primary;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SpecialtyLock;                                 // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Unknown;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Unknown_1;                                     // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Loadout_C*                   Loadout;                                           // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LoadoutOverlay;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        OverviewDetailsBox_1;                              // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OverviewPosition;                                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OverviewPosition_1;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OverviewStatusBox;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OverviewStatusBox_1;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Portrait_Full;                                     // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Portrait_Small;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Position;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Position_1;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PositionColorBorder;                               // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PositionColorBorder_1;                             // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PositionNumber;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PositionNumber_1;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProfileImage;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProfileImage_1;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_Bio;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Bio;                                          // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Portrait;                                     // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Specialty;                                         // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SpecQual;                                          // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SpecQualInfoBox;                                   // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Txb_SpecQual_Desc;                                 // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_DOB;                                           // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_EnlistDate;                                    // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_FirstName;                                     // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_LastName;                                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_LongTactical;                                  // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Primary;                                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SerialNo;                                      // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Specialty;                                     // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SpecQual;                                      // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Status;                                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Card;                                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry;                   // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_1;                 // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_2;                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Bio_C*                       W_Roster_Bio;                                      // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterSelection_C*                  RosterSelection;                                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URosterCharacter*                      RosterCharacter;                                   // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              DebugPosition;                                     // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugHover;                                        // 0x521(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Hidden;                                            // 0x522(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StartHidden;                                       // 0x523(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_386A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BlankPortrait;                                     // 0x528(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Reveal_Delay;                                      // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadoutHidden;                                     // 0x5B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FullDetails;                                       // 0x5B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_386C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Width;                                             // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseFullPortrait;                                   // 0x5BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Clickable;                                         // 0x5BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_386D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterProxy*                       CharacterProxy;                                    // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Roster_Status_Card_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void UpdateSpecialty(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetTrait_bIsUnlocked, class URosterTrait* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, float Temp_float_Variable_1, float K2Node_Select_Default_1);
	void UpdateStatus(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetStatus_ReturnValue);
	void SetPortrait(TSoftObjectPtr<class UTexture2D> SoftTexture, bool Temp_bool_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void InitLayout(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void HideLoadout(bool Hide, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateLoadout(TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables, bool CallFunc_IsValid_ReturnValue, const struct FRosterLoadout& CallFunc_GetLoadout_ReturnValue);
	void BlankDetails(class FText CallFunc_MakeLiteralText_ReturnValue);
	void SetPosition(enum class ERosterSquadPosition Position, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERosterSquadPosition Temp_byte_Variable_2, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, enum class ERosterSquadPosition Temp_byte_Variable_3, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, enum class ERosterSquadPosition Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, enum class EHorizontalAlignment Temp_byte_Variable_8, enum class EHorizontalAlignment Temp_byte_Variable_9, enum class ERosterSquadPosition Temp_byte_Variable_10, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default_1, enum class EHorizontalAlignment K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText K2Node_Select_Default_4, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
	void SetupAptitude(class UProgressBar* ProgressBar, class UTextBlock* TextBlock, float Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void ChangePage(class FName PageName);
	void SetCharacter(class UCharacterProxy* CharacterProxy);
	void PreConstruct(bool IsDesignTime);
	void Reveal(float Delay);
	void AnimRevealed();
	void Hide(float Delay, bool Collapse);
	void AnimHidden();
	void QuickHide();
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void SetInputMode(bool IsGamepad);
	void UpdateHealth();
	void UpdateCard();
	void ExecuteUbergraph_W_Roster_Status_Card(int32 EntryPoint, class FName K2Node_Event_PageName, class UCharacterProxy* K2Node_CustomEvent_CharacterProxy, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsGamepad, class FText CallFunc_GetName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnClicked__DelegateSignature(class UW_Roster_Status_Card_C* Card);
};

}


