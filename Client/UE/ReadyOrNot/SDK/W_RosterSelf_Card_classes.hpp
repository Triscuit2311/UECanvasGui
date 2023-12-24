#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x238 (0x568 - 0x330)
// WidgetBlueprintGeneratedClass W_RosterSelf_Card.W_RosterSelf_Card_C
class UW_RosterSelf_Card_C : public URosterSelectionWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               btn_Card;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Details;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DetailsSizeBox;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Deployables;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoverBorder;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoverImage;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_div_2;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LongTactical;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PositionCorner;                                // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Primary;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Sidearm;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Unknown;                                       // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Loadout_C*                   Loadout;                                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Loadout_old;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LongTacticalSizeBox;                               // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        OverviewDetailsBox_1;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OverviewPosition;                                  // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OverviewStatusBox;                                 // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Position;                                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PositionColorBorder;                               // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PositionNumber;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PrimarySizebox;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProfileImage;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Sidearm;                                           // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SidearmSizebox;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SpecQualInfoBox;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Status;                                            // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Txb_SpecQual_Desc;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_DOB;                                           // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_EnlistDate;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_LongTactical;                                  // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_PlayerName;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Primary;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SerialNo;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Sidearm;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SpecQual;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Status;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Card;                                           // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry;                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_1;                 // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_2;                 // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OfficerMarker_C*                    W_OfficerMarker;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_EKG_C*                       W_Roster_EKG;                                      // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_RosterManager_C*  RosterSelection;                                   // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URosterCharacter*                      RosterCharacter;                                   // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              DebugPosition;                                     // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugHover;                                        // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Hidden;                                            // 0x4BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StartHidden;                                       // 0x4BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3902[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BlankPortrait;                                     // 0x4C0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Reveal_Delay;                                      // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3908[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                ReadyOrNotPlayerState;                             // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelfInfo;                                          // 0x558(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InGame;                                            // 0x559(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterProxy*                       Character_Proxy;                                   // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RosterSelf_Card_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void UpdateReadyStatus(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FLinearColor& CallFunc_GetLinearColorScheme_White, const struct FLinearColor& CallFunc_GetLinearColorScheme_Dark, const struct FLinearColor& CallFunc_GetLinearColorScheme_Red, const struct FLinearColor& CallFunc_GetLinearColorScheme_Yellow, const struct FLinearColor& CallFunc_GetLinearColorScheme_Blue, const struct FLinearColor& CallFunc_GetLinearColorScheme_Green, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void UpdateLoadout(const struct FSavedLoadout& NewLoadout, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables);
	void BlankDetails(class FText CallFunc_MakeLiteralText_ReturnValue);
	void SetPosition(enum class ERosterSquadPosition Position, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERosterSquadPosition Temp_byte_Variable_2, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, enum class ERosterSquadPosition Temp_byte_Variable_3, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, enum class ERosterSquadPosition Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, enum class EHorizontalAlignment Temp_byte_Variable_8, enum class EHorizontalAlignment Temp_byte_Variable_9, enum class ERosterSquadPosition Temp_byte_Variable_10, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, float K2Node_Select_Default_1, enum class EHorizontalAlignment K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText K2Node_Select_Default_4, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void SetupAptitude(class UProgressBar* ProgressBar, class UTextBlock* TextBlock, float Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Reveal(float Delay);
	void AnimRevealed();
	void Hide(float Delay, bool Collapse);
	void AnimHidden();
	void QuickHide();
	void SetByPlayerState(class APlayerState* PlayerState);
	void BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void SetByProxy(class UCharacterProxy* CharacterProxy);
	void BP_OnEntryReleased();
	void UpdateHealth();
	void ProxyLoadoutUpdated();
	void ProxyStatusUpdated();
	void BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void UpdateCard();
	void ExecuteUbergraph_W_RosterSelf_Card(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FRosterLoadout& CallFunc_GetLoadout_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class APlayerState* K2Node_CustomEvent_PlayerState, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, float CallFunc_SelectFloat_ReturnValue, class UCharacterProxy* K2Node_CustomEvent_CharacterProxy, class FText CallFunc_GetName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class ESlateVisibility K2Node_Select_Default);
	void OnClicked__DelegateSignature(class UW_RosterSelf_Card_C* Card);
};

}


