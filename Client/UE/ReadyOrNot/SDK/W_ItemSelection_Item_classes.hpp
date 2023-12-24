#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x410 - 0x278)
// WidgetBlueprintGeneratedClass W_ItemSelection_Item.W_ItemSelection_Item_C
class UW_ItemSelection_Item_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Focus;                                        // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Select;                                       // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BG_Blur;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BG_Image;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Image;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected_Image;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           DefaultIcon;                                       // 0x2C0(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           BackgroundColor;                                   // 0x348(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           IconColor;                                         // 0x370(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           SelectedColor;                                     // 0x398(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            ED_OnAnimFadeOutFinished;                          // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           UnselectedColor;                                   // 0x3D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsPirated;                                        // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InDesignTime;                                      // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E91[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ED_OnAnimSelectFinished;                           // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ItemSelection_Item_C* GetDefaultObj();

	void StopFadeOutAnim();
	void StopConfirmAnim();
	void ConfirmSelection(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Deselect(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void Select(bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void FadeOut(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ChangeIconsIfBuildIsPirated(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnAnimFadeOut_Finished();
	void Initialize(struct FSlateBrush& InBrush, bool bIsVisible);
	void Reset_Selection_Indicator();
	void Construct();
	void ReMinusInitialize(bool bVisible);
	void CustomEvent_0();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_1();
	void ExecuteUbergraph_W_ItemSelection_Item(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsBuildPirated_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_CustomEvent_InBrush, bool K2Node_CustomEvent_bIsVisible, float K2Node_Select_Default, bool K2Node_CustomEvent_bVisible, bool K2Node_Event_IsDesignTime, bool CallFunc_IsBuildPirated_ReturnValue_1);
	void ED_OnAnimSelectFinished__DelegateSignature();
	void ED_OnAnimFadeOutFinished__DelegateSignature();
};

}


