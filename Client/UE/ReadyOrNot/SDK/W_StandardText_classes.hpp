#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass W_StandardText.W_StandardText_C
class UW_StandardText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TheText;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        FontSize;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1FB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 Font;                                              // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           Color;                                             // 0x298(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  Typeface;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_StandardText_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_StandardText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
};

}


