#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xCF8 - 0xC38)
// WidgetBlueprintGeneratedClass W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C
class UW_MainMenu_SmallButton_V4_C : public UMainMenu_BaseButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      MenuText;                                          // 0xC40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        FontStyleDefault;                                  // 0xC48(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        FontStyleHovered;                                  // 0xCA0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MainMenu_SmallButton_V4_C* GetDefaultObj();

	void SetState(bool Hovered, bool Selected, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_W_MainMenu_SmallButton_V4(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent);
};

}


