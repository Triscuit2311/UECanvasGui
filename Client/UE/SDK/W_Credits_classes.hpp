#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEE (0x40E - 0x320)
// WidgetBlueprintGeneratedClass W_Credits.W_Credits_C
class UW_Credits_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimFadeBackground;                                // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_Credits;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Credits;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            CreditsDataTable;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBaseCredit*>                   Credits;                                           // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FMargin                               DisplayMargins;                                    // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CreditSpacing;                                     // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CreditScrollSpeed;                                 // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndex;                                          // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScrollboxHeight;                                   // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLastCredit;                                      // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               CreditPadding;                                     // 0x394(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHeader;                                          // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               HeaderPadding;                                     // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UW_SupporterCredit_C*>          SupporterCredits;                                  // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  Text1;                                             // 0x3C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text2;                                             // 0x3E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCreditsCompleted;                                // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        AnimationPlaybackSpeed;                            // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFadeOutOnEnd;                                     // 0x40D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Credits_C* GetDefaultObj();

	void Update_Scroll_and_Animation_Speed(float Multiplier, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBaseCredit* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_SupporterCredit_C* K2Node_DynamicCast_AsW_Supporter_Credit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimating_Animating, class UW_Credit_C* K2Node_DynamicCast_AsW_Credit, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAnimating_Animating_1, class UWidgetAnimation* CallFunc_WhichAnimation_Animation);
	bool BP_OnHandleBackAction();
	void GetSupporterCredits(TArray<class FText>& SupporterCredits, TArray<class UW_SupporterCredit_C*>* SupporterCredit, int32 ArrayIndex, class UW_SupporterCredit_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void RevealSupporterCredits(class UW_SupporterCredit_C* InputPin, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void RevealHeader(class UW_Credit_C* InputPin, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RevealCredits(class UW_Credit_C* InputPin, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CreateEndSpacer(float SpacerHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class USpacer* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void GetScrollboxDimensions(float* Height, float* TopMargin, float* BottomMargin, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
	void BP_OnActivated();
	void End_Credits();
	void BndEvt__W_Credits_W_PageWrapper_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_Credits(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UW_Credit_C* CallFunc_Create_ReturnValue, class UW_Credit_C* CallFunc_Create_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollboxDimensions_Height, float CallFunc_GetScrollboxDimensions_TopMargin, float CallFunc_GetScrollboxDimensions_BottomMargin, class UBaseCredit* CallFunc_Array_Get_Item, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_1, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_GetScrollboxDimensions_Height_1, float CallFunc_GetScrollboxDimensions_TopMargin_1, float CallFunc_GetScrollboxDimensions_BottomMargin_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, class UW_Credit_C* CallFunc_Create_ReturnValue_2, class UW_Credit_C* CallFunc_Create_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const class FString& K2Node_ComponentBoundEvent_ButtonID, float CallFunc_GetScrollOffset_ReturnValue_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_Less_FloatFloat_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FST_Credit& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UW_SupporterCredit_C*>& CallFunc_GetSupporterCredits_SupporterCredit, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_TextIsNotEmpty_NotEmpty_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty_2, bool CallFunc_TextIsNotEmpty_NotEmpty_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_WasInputKeyJustPressed_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UW_Credit_C* CallFunc_Create_ReturnValue_4, bool CallFunc_WasInputKeyJustReleased_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, bool K2Node_Event_IsDesignTime);
	void OnCreditsCompleted__DelegateSignature();
};

}


