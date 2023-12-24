#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass W_RoundupWidgetEntry.W_RoundupWidgetEntry_C
class UW_RoundupWidgetEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  Entry;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  EntryText;                                         // 0x270(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_RoundupWidgetEntry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Set_Text(class FText Text);
	void ExecuteUbergraph_W_RoundupWidgetEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Text);
};

}


