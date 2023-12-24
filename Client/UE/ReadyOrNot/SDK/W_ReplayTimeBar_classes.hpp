#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass W_ReplayTimeBar.W_ReplayTimeBar_C
class UW_ReplayTimeBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               ReplaySlider;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    Target;                                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Scrubbing;                                         // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnScrubbingBegin;                                  // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnScrubbingEnd;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangeCurrentTime;                               // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ReplayTimeBar_C* GetDefaultObj();

	float Get_ReplaySlider_Value(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue);
	float Get_ProgressBar__Percent_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void OnInitialized();
	void BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void AddEvent(float BarPercentage, const struct FReplayEvent& ReplayEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_ReplayTimeBar(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetWidgetSize_Local_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_ReplayEventMarker_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, float K2Node_ComponentBoundEvent_Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float K2Node_CustomEvent_BarPercentage, const struct FReplayEvent& K2Node_CustomEvent_ReplayEvent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors);
	void OnChangeCurrentTime__DelegateSignature(float NewCurrentTimeInSeconds);
	void OnScrubbingEnd__DelegateSignature(float NewCurrentTimeInSeconds);
	void OnScrubbingBegin__DelegateSignature();
};

}


