#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x388 - 0x368)
// WidgetBlueprintGeneratedClass W_Footer.W_Footer_C
class UW_Footer_C : public UCommonFooterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OnShow;                                       // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  FooterText;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RedLine_Image;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Footer_C* GetDefaultObj();

	void RefreshWidget();
	void BP_OnDismissInputAction();
	void BP_DismissInputActionProgress(float HeldTime);
	void Construct();
	void ExecuteUbergraph_W_Footer(int32 EntryPoint, class FText CallFunc_GetFooterText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, float K2Node_Event_HeldTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


