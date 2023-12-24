#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x29C - 0x260)
// WidgetBlueprintGeneratedClass W_ButtonPrompt.W_ButtonPrompt_C
class UW_ButtonPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ButtonIconImg;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             ButtonPromptText;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            ButtonIcon;                                        // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PromptText;                                        // 0x280(0x18)(Edit, BlueprintVisible)
	float                                        PromptTextSizeRatio;                               // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ButtonPrompt_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_ButtonPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize);
};

}


