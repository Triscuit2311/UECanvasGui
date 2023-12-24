#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x410 - 0x3A0)
// WidgetBlueprintGeneratedClass W_Tutorial.W_Tutorial_C
class UW_Tutorial_C : public UTutorialWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_367;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_RedLine;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             MediaScaleBox;                                     // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MediaSizeBox;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_Description;                                  // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox;                                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Title;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TutContent;                                     // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Tutorial;                                       // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Footer_C*                           W_Footer;                                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTutorialWidgetRemoved;                           // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Tutorial_C* GetDefaultObj();

	void HideMainWidget();
	void ShowMainWidget();
	void Hide_Widget_End();
	void RefreshWidget();
	void Construct();
	void BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature();
	void ExecuteUbergraph_W_Tutorial(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnTutorialWidgetRemoved__DelegateSignature();
};

}


