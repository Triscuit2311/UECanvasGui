#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xC00 - 0xBC0)
// WidgetBlueprintGeneratedClass commonButton.CommonButton_C
class UCommonButton_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonButton;                                      // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InText;                                            // 0xBD0(0x18)(Edit, BlueprintVisible)
	int32                                        CharacterLimit;                                    // 0xBE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TruncatedCharacters;                               // 0xBF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommonButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_CommonButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue);
};

}


