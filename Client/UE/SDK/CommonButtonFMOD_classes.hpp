#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xC10 - 0xBD0)
// WidgetBlueprintGeneratedClass CommonButtonFMOD.CommonButtonFMOD_C
class UCommonButtonFMOD_C : public UCommonButtonFMOD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonButton;                                      // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InText;                                            // 0xBE0(0x18)(Edit, BlueprintVisible)
	int32                                        CharacterLimit;                                    // 0xBF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TruncatedCharacters;                               // 0xC00(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommonButtonFMOD_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_CommonButtonFMOD(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue);
};

}


