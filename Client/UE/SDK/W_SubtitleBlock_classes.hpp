#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x28C - 0x270)
// WidgetBlueprintGeneratedClass W_SubtitleBlock.W_SubtitleBlock_C
class UW_SubtitleBlock_C : public USubtitleBlock
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               CurrentBorder;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        CurrentText;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        FadeTime;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SubtitleBlock_C* GetDefaultObj();

	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetText(class FText& Text);
	void ExecuteUbergraph_W_SubtitleBlock(int32 EntryPoint, const struct FLinearColor& K2Node_Event_Color, class FText K2Node_Event_Text);
};

}


